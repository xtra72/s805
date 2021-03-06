#ifndef _NET_ESP_H
#define _NET_ESP_H

#include <linux/skbuff.h>

#ifdef CONFIG_CRYPTO_RAKA
#include <crypto/nsr.h>
#endif

struct crypto_aead;

struct esp_data {
	/* 0..255 */
	int padlen;

	/* Confidentiality & Integrity */
	struct crypto_aead *aead;

#ifdef CONFIG_CRYPTO_RAKA
	struct crypto_nsr_ctx *nsr;
#endif
};

extern void *pskb_put(struct sk_buff *skb, struct sk_buff *tail, int len);

struct ip_esp_hdr;

static inline struct ip_esp_hdr *ip_esp_hdr(const struct sk_buff *skb)
{
	return (struct ip_esp_hdr *)skb_transport_header(skb);
}

#endif
