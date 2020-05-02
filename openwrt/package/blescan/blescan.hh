#ifndef BLESCAN_HH
#define BLESCAN_HH
int print_advertising_devices(int dev_handle);
void eir_parse_name(uint8_t *eir, size_t eir_len,
    char* buf, size_t buf_len);
#endif
