CF_HDR

#include "proto/meraki/meraki_gw.h"
#include "proto/meraki/meraki.h"

CF_DEFINES

#define MERAKI_CFG ((struct meraki_config *) this_proto)

CF_DECLS

CF_KEYWORDS(MERAKI, GATEWAYS)

CF_GRAMMAR

CF_ADDTO(proto, meraki_proto '}')

meraki_proto_start: proto_start MERAKI {
     this_proto = proto_config_new(&proto_meraki, $1);
     init_list(&MERAKI_CFG->gateway_list);
  }
 ;

meraki_proto:
   meraki_proto_start proto_name '{'
 | meraki_proto meraki_proto_item ';'
 ;

meraki_proto_item:
   proto_item
 | GATEWAYS '{' meraki_gateway_list '}'
 ;

meraki_gateway_list:
 /* empty */
 | meraki_gateway_list meraki_gateway_item
 ;

meraki_gateway_item: meraki_gateway_base ';' ;

meraki_gateway_base: expr ipa
 {
   struct meraki_gw *gateway =
       cfg_allocz(sizeof(struct meraki_gw));
   add_tail(&MERAKI_CFG->gateway_list, NODE gateway);
   gateway->gw_num = $1;
   gateway->gw = $2;
 }
;

CF_CODE

CF_END
