
#ifndef _OMNI_IP6TABLES_NAT_H
#define _OMNI_IP6TABLES_NAT_H

#include <linux/skbuff.h>
#include <future/omni/omni_track_compat.h>

#if IS_ENABLED(CONFIG_OMNI)
unsigned int omni6_nat_fn(struct sk_buff *, struct net_device *, struct net_device *);
unsigned int omni6_nat_in(struct sk_buff *, struct net_device *, struct net_device *);
unsigned int omni6_nat_out(struct sk_buff *, struct net_device *, struct net_device *);
unsigned int omni6_nat_local_fn(struct sk_buff *, struct net_device *, struct net_device *);
#ifdef CONFIG_OMNI_NAT64
unsigned int omni6_nat64_out(struct sk_buff *, struct net_device *, struct net_device *);
#endif
#else
static inline unsigned int
omni6_nat_fn(struct sk_buff *, struct net_device *, struct net_device *)
{
	return OMNI_ACCEPT;
}

static inline unsigned int
omni6_nat_in(struct sk_buff *, struct net_device *, struct net_device *)
{
	return OMNI_ACCEPT;
}

static inline unsigned int
omni6_nat_out(struct sk_buff *, struct net_device *, struct net_device *)
{
	return OMNI_ACCEPT;
}

static inline unsigned int
omni6_nat_local_fn(struct sk_buff *, struct net_device *, struct net_device *)
{
	return OMNI_ACCEPT;
}
#endif/*CONFIG_OMNI*/

#endif /*_OMNI_IP6TABLES_NAT_H*/
