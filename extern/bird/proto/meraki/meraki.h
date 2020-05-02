#ifndef _BIRD_MERAKI_H_
#define _BIRD_MERAKI_H_

#include "proto/meraki/meraki_gw.h"

struct meraki_config {
  struct proto_config c;
  /* List of gateways associated with the MX */
  list gateway_list;
};

struct meraki_proto {
  struct proto p;
  /* Event to handle generation of Meraki route config file on route change */
  struct event *cf_write_ev;
};

extern struct protocol proto_meraki;

static inline int proto_is_meraki(struct proto *p)
{ return p->proto == &proto_meraki; }

#endif
