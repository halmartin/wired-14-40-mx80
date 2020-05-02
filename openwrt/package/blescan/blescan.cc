#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <signal.h>
#include <errno.h>
#include <getopt.h>

#include <bluez-lite/bluetooth.h>
#include <bluez-lite/hci.h>
#include <bluez-lite/hci_lib.h>

#include "blescan.hh"

#define EIR_NAME_SHORT      0x08 /* shortened local name */
#define EIR_NAME_COMPLETE   0x09 /* complete local name */

static volatile int signal_received = 0;

void sigint_handler(int sig) {
	signal_received = sig;
}

void eir_parse_name(uint8_t *eir, size_t eir_len,
    char* buf, size_t buf_len) {
	size_t offset;

	offset = 0;
	while (offset < eir_len) {
		uint8_t field_len = eir[0];
		size_t name_len;

		/* check for the end of EIR */
		if (field_len == 0) {
			break;
		}

		if(offset + field_len > eir_len) {
			goto failed;
		}

		switch(eir[1]) {
			case EIR_NAME_SHORT:
				//printf("EIR_NAME_SHORT\n");
				name_len = field_len -1;
				if (name_len > buf_len) {
					goto failed;
				}
				memcpy(buf, &eir[2], name_len);
				return;
			case EIR_NAME_COMPLETE:
				//printf("EIR_NAME_LONG\n");
				name_len = field_len - 1;
				if (name_len > buf_len) {
					goto failed;
				}
				memcpy(buf, &eir[2], name_len);
				return;
			}
		offset += field_len + 1;
		eir += field_len + 1;
	}
	failed:
		snprintf(buf, buf_len, "(unknown)");
	}

	int print_advertising_devices(int dev_handle) {
		unsigned char buf[HCI_MAX_EVENT_SIZE], *ptr;
		struct hci_filter nf, of;
		struct sigaction sa;
		socklen_t olen;
		int len;

		olen = sizeof(of);

		if (getsockopt(dev_handle, SOL_HCI, HCI_FILTER, &of, &olen) < 0) {
			printf("Could not get socket options\n");
			return -1;
		}

		hci_filter_clear(&nf);
		hci_filter_set_ptype(HCI_EVENT_PKT, &nf);
		hci_filter_set_event(EVT_LE_META_EVENT, &nf);

		if (setsockopt(dev_handle, SOL_HCI, HCI_FILTER, &nf, sizeof(nf)) < 0) {
			printf("Could not set socket options\n");
			return -1;
		}

		memset(&sa, 0, sizeof(sa));
		sa.sa_flags = SA_NOCLDSTOP;
		sa.sa_handler = sigint_handler;
		sigaction(SIGINT, &sa, NULL);

		while (1) {
			evt_le_meta_event *meta;
			le_advertising_info *info;
			char addr[18];

			while ((len = read(dev_handle, buf, sizeof(buf))) < 0) {
				if (signal_received == SIGINT) {
					len = 0;
					goto done;
				}

				if (errno == EAGAIN || errno == EINTR)
					continue;
				goto done;
			}

			ptr = buf + (1 + HCI_EVENT_HDR_SIZE);
			len -= (1 + HCI_EVENT_HDR_SIZE);

			meta = (evt_le_meta_event*) ptr;

			if (meta->subevent != 0x02) {
				goto done;
			}

			info = (le_advertising_info *) (meta->data + 1);
			// check report filter???
			char name[30];
			char rssi_val;
			int skip = 0; // Should you skip this address print
			memset(name, 0, sizeof(name));
			char* ptr = (char*)info;
			int shift = info->length+LE_ADVERTISING_INFO_SIZE;
			#define STATIC_ADDRESS		( 3 << 6 )
			uint8_t addr_type = info->bdaddr_type;
			uint8_t* addrptr = (uint8_t*)(&info->bdaddr);
			if(addr_type == LE_RANDOM_ADDRESS) {
				if ((addrptr[5] & STATIC_ADDRESS) != STATIC_ADDRESS) {
					skip = 1;
				}
			}

			ptr = ptr+shift;
			rssi_val = *(char*)ptr;
			ba2str(&info->bdaddr, addr);
			eir_parse_name(info->data, info->length, name, sizeof(name) - 1);
			if (!skip) {
				printf("%s \"%s\" %d\n", addr, name, rssi_val);
				fflush(stdout);
			}
		}
		done:
		  setsockopt(dev_handle, SOL_HCI, HCI_FILTER, &of, sizeof(of));

		if (len < 0) {
			return -1;
		}

		return 0;
	}

	void usage(char* str) {
		fprintf(stderr,
		"Usage: %s "
		"[-i || --scan_interval] "
		"[-w || --scan_window] "
		"\n", str);
	    exit(EXIT_SUCCESS);
	}

	int main(int argc, char**argv) {
		int dev_id, dev_handle, rc;
		int c;
		uint16_t scan_interval = 0x0010;
		uint16_t scan_window = 0x0010;
		while(1) {
			static struct option long_options[] = {
                {"scan_interval", optional_argument, 0, 'i'},
                {"scan_window", optional_argument, 0, 'w'},
                {0, 0, 0, 0}
			};
			int option_index = 0;
			c = getopt_long(argc, argv, "i:w:", long_options, &option_index);
			if (-1 == c) {
				break; //detect end of the options
			}

			switch(c) {
				case 'i':
					scan_interval = strtol(optarg, NULL, 0);
					break;
				case 'w':
					scan_window = strtol(optarg, NULL, 0);
					break;
				default:
					usage(argv[0]);
			}
		}

		dev_id = hci_get_route(NULL);
		if((dev_handle = hci_open_dev(dev_id)) < 0) {
			printf("Failed to open hci device handle %d with the following rc=%d\n", dev_id, dev_handle);
			exit(-1);
		}

		/* dev_id, uint8_t type, uint16_t interval, uint16t window, uint8_t own_type, uint8_t filter, int to */

		if((rc = hci_le_set_scan_parameters(dev_handle, 0x01, htobs(scan_interval), htobs(scan_window), 0x01, 0x00, 1000)) < 0) {
			printf("Failed to set scan parameters! rc=%d\n", rc);
			exit(-1);
		}

		  /* dev_id, enabled, filter_dup, timeout (ms) */
		  if((rc = hci_le_set_scan_enable(dev_handle, 1, 0, 1000)) < 0) {
			printf("Failed to enable hci le scan!\n");
			exit(-1);
		  }

		  if((rc = print_advertising_devices(dev_handle)) < 0) {
			printf("Could not receive advertising events\n");
			exit(-1);
		  }

		  /* Disable scanning */
		  if((rc = hci_le_set_scan_enable(dev_handle, 0, 0, 1000)) < 0) {
			printf("Failed to disable the le scan\n");
		  }

		  if((rc = hci_close_dev(dev_handle)) < 0) {
			printf("Failed to close the dev handle %d\n", dev_handle);
		  }
		  return 0;
	}
