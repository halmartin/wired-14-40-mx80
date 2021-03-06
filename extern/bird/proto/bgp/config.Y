/*
 *	BIRD -- Border Gateway Protocol Configuration
 *
 *	(c) 2000 Martin Mares <mj@ucw.cz>
 *
 *	Can be freely distributed and used under the terms of the GNU GPL.
 */

CF_HDR

#include "proto/bgp/bgp.h"
#include "proto/bgp/bgp_meraki.h"

CF_DEFINES

#define BGP_CFG ((struct bgp_config *) this_proto)

CF_DECLS

CF_KEYWORDS(BGP, LOCAL, NEIGHBOR, AS, HOLD, TIME, CONNECT, RETRY,
	KEEPALIVE, MULTIHOP, STARTUP, VIA, NEXT, HOP, SELF, DEFAULT,
	PATH, METRIC, ERROR, START, DELAY, FORGET, WAIT, ENABLE,
	DISABLE, AFTER, BGP_PATH, BGP_LOCAL_PREF, BGP_MED, BGP_ORIGIN,
	BGP_NEXT_HOP, BGP_ATOMIC_AGGR, BGP_AGGREGATOR, BGP_COMMUNITY,
	BGP_EXT_COMMUNITY, SOURCE, ADDRESS, PASSWORD, RR, RS, CLIENT,
	CLUSTER, ID, AS4, ADVERTISE, IPV4, CAPABILITIES, LIMIT, PASSIVE,
	PREFER, OLDER, MISSING, LLADDR, DROP, IGNORE, ROUTE, REFRESH,
	INTERPRET, COMMUNITIES, BGP_ORIGINATOR_ID, BGP_CLUSTER_LIST, IGP,
	TABLE, GATEWAY, DIRECT, RECURSIVE, MED, TTL, SECURITY, DETERMINISTIC,
	SECONDARY, ALLOW, BFD, ADD, PATHS, RX, TX, GRACEFUL, RESTART, AWARE,
	CHECK, LINK, PORT, EXTENDED, MESSAGES, SETKEY, BGP_LARGE_COMMUNITY)

CF_GRAMMAR

CF_ADDTO(proto, bgp_proto '}' { bgp_check_config(BGP_CFG); } )

bgp_proto_start: proto_start BGP {
     this_proto = proto_config_new(&proto_bgp, $1);
     BGP_CFG->remote_port = BGP_PORT;
     BGP_CFG->multihop = -1;	/* undefined */
     BGP_CFG->hold_time = 240;
     BGP_CFG->initial_hold_time = 240;
     BGP_CFG->compare_path_lengths = 1;
     BGP_CFG->igp_metric = 1;
     BGP_CFG->connect_delay_time = 5;
     BGP_CFG->connect_retry_time = 120;
     BGP_CFG->error_amnesia_time = 300;
     BGP_CFG->error_delay_time_min = 60;
     BGP_CFG->error_delay_time_max = 300;
     BGP_CFG->enable_refresh = 1;
     BGP_CFG->enable_as4 = 1;
     BGP_CFG->capabilities = 2;
     BGP_CFG->advertise_ipv4 = 1;
     BGP_CFG->interpret_communities = 1;
     BGP_CFG->default_local_pref = 100;
     BGP_CFG->gr_mode = BGP_GR_AWARE;
     BGP_CFG->gr_time = 120;
     BGP_CFG->setkey = 1;
 }
 ;

bgp_nbr_opts:
   /* empty */
 | bgp_nbr_opts PORT expr { BGP_CFG->remote_port = $3; if (($3<1) || ($3>65535)) cf_error("Invalid port number");  }
 | bgp_nbr_opts AS expr { BGP_CFG->remote_as = $3; }
 ;

bgp_proto:
   bgp_proto_start proto_name '{'
 | bgp_proto proto_item ';'
 | bgp_proto LOCAL AS expr ';' { BGP_CFG->local_as = $4; }
 | bgp_proto LOCAL ipa AS expr ';' { BGP_CFG->source_addr = $3; BGP_CFG->local_as = $5; }
 | bgp_proto NEIGHBOR bgp_nbr_opts ';'
 | bgp_proto NEIGHBOR ipa ipa_scope bgp_nbr_opts ';' {
     if (ipa_nonzero(BGP_CFG->remote_ip))
       cf_error("Only one neighbor per BGP instance is allowed");
     BGP_CFG->remote_ip = $3;
     if ($4) BGP_CFG->iface = $4;
   }
 | bgp_proto INTERFACE TEXT ';' { BGP_CFG->iface = if_get_by_name($3); }
 | bgp_proto RR CLUSTER ID idval ';' { BGP_CFG->rr_cluster_id = $5; }
 | bgp_proto RR CLIENT ';' { BGP_CFG->rr_client = 1; }
 | bgp_proto RS CLIENT ';' { BGP_CFG->rs_client = 1; }
 | bgp_proto HOLD TIME expr ';' { BGP_CFG->hold_time = $4; }
 | bgp_proto STARTUP HOLD TIME expr ';' { BGP_CFG->initial_hold_time = $5; }
 | bgp_proto DIRECT ';' { BGP_CFG->multihop = 0; }
 | bgp_proto MULTIHOP ';' { BGP_CFG->multihop = 64; }
 | bgp_proto MULTIHOP expr ';' { BGP_CFG->multihop = $3; if (($3<1) || ($3>255)) cf_error("Multihop must be in range 1-255"); }
 | bgp_proto NEXT HOP SELF ';' { BGP_CFG->next_hop_self = 1; BGP_CFG->next_hop_keep = 0; }
 | bgp_proto NEXT HOP KEEP ';' { BGP_CFG->next_hop_keep = 1; BGP_CFG->next_hop_self = 0; }
 | bgp_proto MISSING LLADDR SELF ';' { BGP_CFG->missing_lladdr = MLL_SELF; }
 | bgp_proto MISSING LLADDR DROP ';' { BGP_CFG->missing_lladdr = MLL_DROP; }
 | bgp_proto MISSING LLADDR IGNORE ';' { BGP_CFG->missing_lladdr = MLL_IGNORE; }
 | bgp_proto GATEWAY DIRECT ';' { BGP_CFG->gw_mode = GW_DIRECT; }
 | bgp_proto GATEWAY RECURSIVE ';' { BGP_CFG->gw_mode = GW_RECURSIVE; }
 | bgp_proto PATH METRIC bool ';' { BGP_CFG->compare_path_lengths = $4; }
 | bgp_proto MED METRIC bool ';' { BGP_CFG->med_metric = $4; }
 | bgp_proto IGP METRIC bool ';' { BGP_CFG->igp_metric = $4; }
 | bgp_proto PREFER OLDER bool ';' { BGP_CFG->prefer_older = $4; }
 | bgp_proto DETERMINISTIC MED bool ';' { BGP_CFG->deterministic_med = $4; }
 | bgp_proto DEFAULT BGP_MED expr ';' { BGP_CFG->default_med = $4; }
 | bgp_proto DEFAULT BGP_LOCAL_PREF expr ';' { BGP_CFG->default_local_pref = $4; }
 | bgp_proto SOURCE ADDRESS ipa ';' { BGP_CFG->source_addr = $4; }
 | bgp_proto START DELAY TIME expr ';' { BGP_CFG->connect_delay_time = $5; log(L_WARN "%s: Start delay time option is deprecated, use connect delay time", this_proto->name); }
 | bgp_proto CONNECT DELAY TIME expr ';' { BGP_CFG->connect_delay_time = $5; }
 | bgp_proto CONNECT RETRY TIME expr ';' { BGP_CFG->connect_retry_time = $5; }
 | bgp_proto KEEPALIVE TIME expr ';' { BGP_CFG->keepalive_time = $4; }
 | bgp_proto ERROR FORGET TIME expr ';' { BGP_CFG->error_amnesia_time = $5; }
 | bgp_proto ERROR WAIT TIME expr ',' expr ';' { BGP_CFG->error_delay_time_min = $5; BGP_CFG->error_delay_time_max = $7; }
 | bgp_proto DISABLE AFTER ERROR bool ';' { BGP_CFG->disable_after_error = $5; }
 | bgp_proto ENABLE ROUTE REFRESH bool ';' { BGP_CFG->enable_refresh = $5; }
 | bgp_proto ENABLE AS4 bool ';' { BGP_CFG->enable_as4 = $4; }
 | bgp_proto ENABLE EXTENDED MESSAGES bool ';' { BGP_CFG->enable_extended_messages = $5; }
 | bgp_proto CAPABILITIES bool ';' { BGP_CFG->capabilities = $3; }
 | bgp_proto ADVERTISE IPV4 bool ';' { BGP_CFG->advertise_ipv4 = $4; }
 | bgp_proto PASSWORD text ';' { BGP_CFG->password = $3; }
 | bgp_proto SETKEY bool ';' { BGP_CFG->setkey = $3; }
 | bgp_proto ROUTE LIMIT expr ';' {
     this_proto->in_limit = cfg_allocz(sizeof(struct proto_limit));
     this_proto->in_limit->limit = $4;
     this_proto->in_limit->action = PLA_RESTART;
     log(L_WARN "%s: Route limit option is deprecated, use import limit", this_proto->name);
   }
 | bgp_proto PASSIVE bool ';' { BGP_CFG->passive = $3; }
 | bgp_proto INTERPRET COMMUNITIES bool ';' { BGP_CFG->interpret_communities = $4; }
 | bgp_proto SECONDARY bool ';' { BGP_CFG->secondary = $3; }
 | bgp_proto ADD PATHS RX ';' { BGP_CFG->add_path = ADD_PATH_RX; }
 | bgp_proto ADD PATHS TX ';' { BGP_CFG->add_path = ADD_PATH_TX; }
 | bgp_proto ADD PATHS bool ';' { BGP_CFG->add_path = $4 ? ADD_PATH_FULL : 0; }
 | bgp_proto ALLOW LOCAL AS ';' { BGP_CFG->allow_local_as = -1; }
 | bgp_proto ALLOW LOCAL AS expr ';' { BGP_CFG->allow_local_as = $5; }
 | bgp_proto GRACEFUL RESTART bool ';' { BGP_CFG->gr_mode = $4; }
 | bgp_proto GRACEFUL RESTART AWARE ';' { BGP_CFG->gr_mode = BGP_GR_AWARE; }
 | bgp_proto GRACEFUL RESTART TIME expr ';' { BGP_CFG->gr_time = $5; }
 | bgp_proto IGP TABLE rtable ';' { BGP_CFG->igp_table = $4; }
 | bgp_proto TTL SECURITY bool ';' { BGP_CFG->ttl_security = $4; }
 | bgp_proto CHECK LINK bool ';' { BGP_CFG->check_link = $4; }
 | bgp_proto BFD bool ';' { BGP_CFG->bfd = $3; cf_check_bfd($3); }
 ;

CF_ADDTO(dynamic_attr, BGP_ORIGIN
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT, T_ENUM_BGP_ORIGIN, EA_CODE(EAP_BGP, BA_ORIGIN)); })
CF_ADDTO(dynamic_attr, BGP_PATH
	{ $$ = f_new_dynamic_attr(EAF_TYPE_AS_PATH, T_PATH, EA_CODE(EAP_BGP, BA_AS_PATH)); })
CF_ADDTO(dynamic_attr, BGP_NEXT_HOP
	{ $$ = f_new_dynamic_attr(EAF_TYPE_IP_ADDRESS, T_IP, EA_CODE(EAP_BGP, BA_NEXT_HOP)); })
CF_ADDTO(dynamic_attr, BGP_MED
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT, T_INT, EA_CODE(EAP_BGP, BA_MULTI_EXIT_DISC)); })
CF_ADDTO(dynamic_attr, BGP_LOCAL_PREF
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT, T_INT, EA_CODE(EAP_BGP, BA_LOCAL_PREF)); })
CF_ADDTO(dynamic_attr, BGP_ATOMIC_AGGR
	{ $$ = f_new_dynamic_attr(EAF_TYPE_OPAQUE, T_ENUM_EMPTY, EA_CODE(EAP_BGP, BA_ATOMIC_AGGR)); })
CF_ADDTO(dynamic_attr, BGP_AGGREGATOR
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT, T_INT, EA_CODE(EAP_BGP, BA_AGGREGATOR)); })
CF_ADDTO(dynamic_attr, BGP_COMMUNITY
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT_SET, T_CLIST, EA_CODE(EAP_BGP, BA_COMMUNITY)); })
CF_ADDTO(dynamic_attr, BGP_ORIGINATOR_ID
	{ $$ = f_new_dynamic_attr(EAF_TYPE_ROUTER_ID, T_QUAD, EA_CODE(EAP_BGP, BA_ORIGINATOR_ID)); })
CF_ADDTO(dynamic_attr, BGP_CLUSTER_LIST
	{ $$ = f_new_dynamic_attr(EAF_TYPE_INT_SET, T_CLIST, EA_CODE(EAP_BGP, BA_CLUSTER_LIST)); })
CF_ADDTO(dynamic_attr, BGP_EXT_COMMUNITY
	{ $$ = f_new_dynamic_attr(EAF_TYPE_EC_SET, T_ECLIST, EA_CODE(EAP_BGP, BA_EXT_COMMUNITY)); })
CF_ADDTO(dynamic_attr, BGP_LARGE_COMMUNITY
	{ $$ = f_new_dynamic_attr(EAF_TYPE_LC_SET, T_LCLIST, EA_CODE(EAP_BGP, BA_LARGE_COMMUNITY)); })



CF_ENUM(T_ENUM_BGP_ORIGIN, ORIGIN_, IGP, EGP, INCOMPLETE)

/* Meraki additions */
CF_CLI_HELP(EXPORT BGP, ..., [[Export information about BGP protocol]]);
CF_CLI(EXPORT BGP PEERS,,, [[Export information about BGP peers in JSON]])
{ bgp_meraki_sh_peers_json(); };

CF_CODE

CF_END
