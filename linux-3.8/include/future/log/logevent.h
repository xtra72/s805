#ifndef __FERRET_LOG_EVENT_H__
#define __FERRET_LOG_EVENT_H__

// SYSTEM -> SYSTEM
#define LOG_SYSTEM_STATUS						0x11010001
#define LOG_SYSTEM_THRESHOLD					0x11010002
#define LOG_SYSTEM_IFACE_STATUS					0x11010003
#define LOG_SYSTEM_DISK_REPAIR					0x11010004
#define LOG_SYSTEM_LICENSE_STATUS				0x11010005
#define LOG_SYSTEM_TIMESYNC						0x11010006
#define LOG_SYSTEM_CROND						0x11010007
// SYSTEM -> ADMIN
#define LOG_SYSTEM_USER_LOGIN					0x11020001
#define LOG_SYSTEM_SEND_MAIL					0x11020002
#define LOG_SYSTEM_CLI_COMMAND					0x11020003
#define LOG_SYSTEM_ADM_PASSWD					0x11020004
#define LOG_SYSTEM_ADM_PASS_EXPIRE				0x11020005
// SYSTEM -> SENDPOLICY
#define LOG_SYSTEM_POLICY_LOAD					0x11030001
#define LOG_SYSTEM_POLICY_SYNC					0x11030002
#define LOG_SYSTEM_POLICY_EXPIRED				0x11030003
// SYSTEM -> DAEMON STATUS
#define LOG_SYSTEM_DAEMON_STATUS				0x11040001
// SYSTEM -> BACKUP/RESTORE
#define LOG_SYSTEM_POLICY_BACKUP				0x11050001
#define LOG_SYSTEM_CHK_INTEGRITY				0x11050002
// SYSTEM -> UPGRADE
#define LOG_SYSTEM_PKG_UPGRADE					0x11060001
#define LOG_SYSTEM_PATTERN_UPGRADE				0x11060002
// SYSTEM -> LOG
#define LOG_SYSTEM_LOG_FTP_SEND					0x11070001
#define LOG_SYSTEM_LOG_OVERWRITE				0x11070002
#define LOG_SYSTEM_LOG_ATOZ_CREATE				0x11070003
#define LOG_SYSTEM_LOG_COMPRESS					0x11070004
// SYSTEM -> (Radius,LDAP...) SERVER
#define LOG_SYSTEM_RADIUS_CERT					0x11080001
#define LOG_SYSTEM_RADIUS_CHECK					0x11080002
// SYSTEM -> SETTING
#define LOG_SYSTEM_OBJ_CHANGED					0x11090001
#define LOG_NETWORK_OBJ_CHANGED					0x11090002
#define LOG_FW_OBJ_CHANGED						0x11090003
#define LOG_VPN_OBJ_CHANGED						0x11090004
#define LOG_SSL_OBJ_CHANGED						0x11090005
#define LOG_IPS_OBJ_CHANGED						0x11090006
#define LOG_DDOS_OBJ_CHANGED					0x11090007
#define LOG_AV_OBJ_CHANGED						0x11090008
#define LOG_AS_OBJ_CHANGED						0x11090009
#define LOG_LOG_OBJ_CHANGED						0x1109000a
// SYSTEM -> CERTIFICATION
#define LOG_CERT_CHECK_FAIL						0x11100001
// SYSTEM -> HA
#define LOG_SYSTEM_FAILOVER_MSG					0x11120001
#define LOG_SYSTEM_HA_SECONDARY_IP_STATUS		0x11120002
#define LOG_SYSTEM_HA_STAUTUS					0x11120003
// SYSTEM -> LLCF(Link pack, Bond pack)
#define LOG_SYSTEM_LINKPACK_STATUS				0x11130001
#define LOG_SYSTEM_BONDPACK_STATUS				0x11130002

// NETWORK -> INTERFACE
#define LOG_NETWORK_IP_CHANGE					0x12010001
// NETWORK -> MULTIPATH
#define LOG_NETWORK_LINE_QUALITY_MANAGE			0x12020001
#define LOG_NETWORK_LINE_QUALITY_FAULTY			0x12020002
// NETWORK -> L2TP
#define LOG_NETWORK_L2TP_CONNECT				0x12030001
#define LOG_NETWORK_L2TP_AUTH					0x12030002
// NETWWORK -> CHECKER
#define LOG_NETWORK_CHECKER						0x12040001
// NETWORK -> VRRP
#define LOG_NETWORK_VRRP_STATUS					0x12050001
// NETWORK -> IPM
#define LOG_NETWORK_IPM_DETECT					0x12060001
#define LOG_NETWORK_IPM_DENY					0x12060002

#ifdef CONFIG_MZEN //mZEN
#define LOG_IPS_IP_SPOOFING_DROP				0x12070001
#else
#define LOG_IPS_IP_SPOOFING_DROP				0x16030101
#endif

//NETWORK -> STORM CONTROL
#define LOG_STORMCONTROL_DROP_UNICAST			0x12080001
#define LOG_STORMCONTROL_DROP_MULTICAST			0x12080002
#define LOG_STORMCONTROL_DROP_BROADCAST			0x12080003

// FW -> FW POLICY
#define LOG_FW_FILTER_SESSION_CREATE			0x13010001
#define LOG_FW_FILTER_SESSION_CLOSE				0x13010002
#define LOG_FW_FILTER_PACKET_DROP				0x13010003
#define LOG_FW_FILTER_BLOCK_SESSION_CREATE		0x13010004
#define LOG_FW_FILTER_BLOCK_SESSION_CLOSE		0x13010005
#define LOG_FW_FILTER_ABNORMAL_PACKET			0x13010006
// FW -> WEB FILTERING
#define LOG_FW_WEB_FILTER_DETECT				0x13020001
#define LOG_FW_WEB_FIRTER_BLOCK					0x13020002
#define LOG_FW_WEB_FIRTER_APPROVE				0x13020003
#define LOG_FW_WEB_FIRTER_UNCLASSIFIED_URL		0x13020004
// FW -> APPLICATION
#define LOG_FW_APP_DETECT						0x13030001
#define LOG_FW_APP_BLOCK						0x13030002
// FW -> WHITE/BLACK LIST
#define LOG_FW_WHITE_ACCEPT						0x13040001
#define LOG_FW_BLACK_DROP						0x13040002
// FW -> NAT-PT
#define LOG_FW_NAT_PT_SESSION_CREATE			0x13050001
#define LOG_FW_NAT_PT_SESSION_CLOSE				0x13050002
// FW -> USER
#define LOG_FW_USER_LOGIN_SUCCESS				0x13060001
#define LOG_FW_USER_LOGIN_FAIL					0x13060002
#define LOG_FW_USER_LOGOUT_SUCCESS				0x13060003
#define LOG_FW_USER_LOGOUT_FAIL					0x13060004
//FW -> MAC FLOOD GUARD
#define LOG_MACFLOODGUARD_DROP 					0x13070001
// FW -> ETC
#define LOG_FW_LLTD								0x13450001
#define LOG_FW_DR_BROADCAST						0X13450002
#define LOG_FW_MARTIAN_FILTER					0X13450003

// VPN -> IKE
#define LOG_VPN_IKE_PROGRESS					0x14010001
#define LOG_VPN_IKE_SUCCESS						0x14010002
#define LOG_VPN_IKE_FAIL					    0x14010003
#define LOG_VPN_IKE_DEBUG						0x14010004
// VPN -> IPSEC
#define LOG_VPN_IPSEC_TUNNEL_STATISTICS			0x14020001
#define LOG_VPN_IPSEC_EN_SUCCESS				0x14020002
#define LOG_VPN_IPSEC_EN_FAIL					0x14020003
#define LOG_VPN_IPSEC_DE_SUCCESS			    0x14020004
#define LOG_VPN_IPSEC_DE_FAIL					0x14020005

// SSL -> SSL
#define LOG_SSL_USER_AUTH						0x15010001
#define LOG_SSL_ACCESS							0x15020001
#define LOG_SSL_FLOW							0x15030001
#define LOG_SSL_INTEGRITY_FAIL					0x15040001


// IPS -> DETECT
#define LOG_IPS_DETECT							0x16010001
#define LOG_IPS_BLOCK							0x16010101
// IPS -> PORTSCAN
#define LOG_IPS_PORTSCAN_DETECT					0x16020001
#define LOG_IPS_PORTSCAN_BLOCK					0x16020101

// IPS -> PREPROCESSOR
#define LOG_IPS_PREPROCESSOR_DETECT				0x16040001
// IPS -> BLOCK_END (IPS COMMON)
#define LOG_IPS_BLOCK_END						0x16010201


// DDOS -> DOS
#define LOG_DDOS_DETECT_DOS						0x17010001
#define LOG_DDOS_BLOCK_DOS						0x17010101
// DDOS -> DDOS
#define LOG_DDOS_DETECT_DDOS					0x17020001
#define LOG_DDOS_BLOCK_DDOS						0x17020101
// DDOS -> HTTP
#define LOG_DDOS_DETECT_HTTP					0x17030001
#define LOG_DDOS_BLOCK_HTTP						0x17030101
// DDOS -> DNS
#define LOG_DDOS_DETECT_DNS						0x17040001
#define LOG_DDOS_BLOCK_DNS						0x17040101
// DDOS -> SQL
#define LOG_DDOS_DETECT_SQL						0x17050001
#define LOG_DDOS_BLOCK_SQL						0x17050101
// DDOS -> BLOCK_END (DDOS COMMON)
#define LOG_DDOS_BLOCK_END						0x17010201


// ANTI VIRUS
#define LOG_AV_DETECT							0x19010001
#define LOG_AV_DROP								0x19010101


// ANTI SPAM
#define LOG_AS_DETECT							0x1a020001
#define LOG_AS_BLOCK							0x1a020101


#endif /* __FERRET_LOG_EVENT_H__ */
