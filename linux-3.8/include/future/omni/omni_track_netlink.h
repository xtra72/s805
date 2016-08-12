#ifndef _OMNI_TRACK_NETLINK_H
#define _OMNI_TRACK_NETLINK_H
#include <linux/netfilter/nfnetlink.h>

enum otnl_msg_types {
	IPOTNL_MSG_TRACK_NEW,
	IPOTNL_MSG_TRACK_GET,
	IPOTNL_MSG_TRACK_DELETE,
	IPOTNL_MSG_TRACK_GET_STATS_CPU,

	IPOTNL_MSG_MAX
};

enum otnl_exp_msg_types {
	IPOTNL_MSG_EXP_NEW,
	IPOTNL_MSG_EXP_GET,
	IPOTNL_MSG_EXP_DELETE,
	IPOTNL_MSG_EXP_GET_STATS_CPU,

	IPOTNL_MSG_EXP_MAX
};

enum otattr_type {
	OTA_UNSPEC,
	OTA_TUPLE_ORIG,
	OTA_TUPLE_REPLY,
	OTA_STATUS,
	OTA_PROTOINFO,
	OTA_HELP,
	OTA_NAT_SRC,
	OTA_NAT_DST,
	OTA_TIMEOUT,
	OTA_COUNTERS_ORIG,
	OTA_COUNTERS_REPLY,
	OTA_ID,
	OTA_TUPLE_MASTER,
	OTA_NAT_SEQ_ADJ_ORIG,
	OTA_NAT_SEQ_ADJ_REPLY,
	OTA_RULE_NO,
	OTA_UNIQUE_ID,
	OTA_IS_IPSEC,
	OTA_BLOCK,
	OTA_APP_SID,
	OTA_CREATE_TIME,
	OTA_NAT_RULE_NO,
	OTA_NAT_UNIQUE_ID,
	OTA_USER_OBJ,
	OTA_DOMAIN,
	OTA_COUNTRY_SRC,
	OTA_COUNTRY_DST,
	OTA_FORWARD,
	__OTA_MAX
};
#define OTA_MAX (__OTA_MAX - 1)

enum otattr_tuple {
	OTA_TUPLE_UNSPEC,
	OTA_TUPLE_IP,
	OTA_TUPLE_PROTO,
	__OTA_TUPLE_MAX
};
#define OTA_TUPLE_MAX (__OTA_TUPLE_MAX - 1)

enum otattr_ip {
	OTA_IP_UNSPEC,
	OTA_IP_V4_SRC,
	OTA_IP_V4_DST,
	OTA_IP_V6_SRC,
	OTA_IP_V6_DST,
	__OTA_IP_MAX
};
#define OTA_IP_MAX (__OTA_IP_MAX - 1)

enum otattr_l4proto {
	OTA_PROTO_UNSPEC,
	OTA_PROTO_NUM,
	OTA_PROTO_SRC_PORT,
	OTA_PROTO_DST_PORT,
	OTA_PROTO_ICMP_ID,
	OTA_PROTO_ICMP_TYPE,
	OTA_PROTO_ICMP_CODE,
	OTA_PROTO_ICMPV6_ID,
	OTA_PROTO_ICMPV6_TYPE,
	OTA_PROTO_ICMPV6_CODE,
	__OTA_PROTO_MAX
};
#define OTA_PROTO_MAX (__OTA_PROTO_MAX - 1)

enum otattr_protoinfo {
	OTA_PROTOINFO_UNSPEC,
	OTA_PROTOINFO_TCP,
	__OTA_PROTOINFO_MAX
};
#define OTA_PROTOINFO_MAX (__OTA_PROTOINFO_MAX - 1)

enum otattr_protoinfo_tcp {
	OTA_PROTOINFO_TCP_UNSPEC,
	OTA_PROTOINFO_TCP_STATE,
	OTA_PROTOINFO_TCP_WSCALE_ORIGINAL,
	OTA_PROTOINFO_TCP_WSCALE_REPLY,
	OTA_PROTOINFO_TCP_FLAGS_ORIGINAL,
	OTA_PROTOINFO_TCP_FLAGS_REPLY,
	__OTA_PROTOINFO_TCP_MAX
};
#define OTA_PROTOINFO_TCP_MAX (__OTA_PROTOINFO_TCP_MAX - 1)

enum otattr_counters {
	OTA_COUNTERS_UNSPEC,
	OTA_COUNTERS_PACKETS,       /* 64bit counters */
	OTA_COUNTERS_BYTES,     	/* 64bit counters */
	__OTA_COUNTERS_MAX
};
#define OTA_COUNTERS_MAX (__OTA_COUNTERS_MAX - 1)

enum otattr_nat {
	OTA_NAT_UNSPEC,
	OTA_NAT_V4_MINIP,
#define OTA_NAT_MINIP OTA_NAT_V4_MINIP
	OTA_NAT_V4_MAXIP,
#define OTA_NAT_MAXIP OTA_NAT_V4_MAXIP
	OTA_NAT_PROTO,
	OTA_NAT_V6_MINIP,
	OTA_NAT_V6_MAXIP,
	__OTA_NAT_MAX
};
#define OTA_NAT_MAX (__OTA_NAT_MAX - 1)

enum otattr_protonat {
	OTA_PROTONAT_UNSPEC,
	OTA_PROTONAT_PORT_MIN,
	OTA_PROTONAT_PORT_MAX,
	__OTA_PROTONAT_MAX
};
#define OTA_PROTONAT_MAX (__OTA_PROTONAT_MAX - 1)

enum otattr_natseq {
	OTA_NAT_SEQ_UNSPEC,
	OTA_NAT_SEQ_CORRECTION_POS,
	OTA_NAT_SEQ_OFFSET_BEFORE,
	OTA_NAT_SEQ_OFFSET_AFTER,
	__OTA_NAT_SEQ_MAX
};
#define OTA_NAT_SEQ_MAX (__OTA_NAT_SEQ_MAX - 1)

enum otattr_expect {
	OTA_EXPECT_UNSPEC,
	OTA_EXPECT_MASTER,
	OTA_EXPECT_TUPLE,
	OTA_EXPECT_MASK,
	OTA_EXPECT_TIMEOUT,
	OTA_EXPECT_ID,
	OTA_EXPECT_HELP_NAME,
	OTA_EXPECT_ZONE,
	OTA_EXPECT_FLAGS,
	OTA_EXPECT_CLASS,
	OTA_EXPECT_NAT,
	OTA_EXPECT_FN,
	__OTA_EXPECT_MAX
};
#define OTA_EXPECT_MAX (__OTA_EXPECT_MAX - 1)

enum otattr_expect_nat {
	OTA_EXPECT_NAT_UNSPEC,
	OTA_EXPECT_NAT_DIR,
	OTA_EXPECT_NAT_TUPLE,
	__OTA_EXPECT_NAT_MAX
};
#define OTA_EXPECT_NAT_MAX (__OTA_EXPECT_NAT_MAX - 1)

enum otattr_help {
	OTA_HELP_UNSPEC,
	OTA_HELP_NAME,
	OTA_HELP_INFO,
	__OTA_HELP_MAX
};
#define OTA_HELP_MAX (__OTA_HELP_MAX - 1)

enum otattr_stats_cpu {
	OTA_STATS_UNSPEC,
	OTA_STATS_SEARCHED,
	OTA_STATS_FOUND,
	OTA_STATS_NEW,
	OTA_STATS_INVALID,
	OTA_STATS_IGNORE,
	OTA_STATS_DELETE,
	OTA_STATS_DELETE_LIST,
	OTA_STATS_INSERT,
	OTA_STATS_INSERT_FAILED,
	OTA_STATS_DROP,
	OTA_STATS_EARLY_DROP,
	OTA_STATS_ERROR,
	OTA_STATS_SEARCH_RESTART,
	__OTA_STATS_MAX,
};
#define OTA_STATS_MAX (__OTA_STATS_MAX - 1)

enum otattr_expect_stats {
	OTA_STATS_EXP_UNSPEC,
	OTA_STATS_EXP_NEW,
	OTA_STATS_EXP_CREATE,
	OTA_STATS_EXP_DELETE,
	__OTA_STATS_EXP_MAX,
};
#define OTA_STATS_EXP_MAX (__OTA_STATS_EXP_MAX - 1)

#endif