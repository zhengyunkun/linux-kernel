/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __NET_BAREUDP_H
#define __NET_BAREUDP_H

#include <linux/types.h>
#include <linux/skbuff.h>

struct bareudp_conf {
	__be16 ethertype;
	__be16 port;
	u16 sport_min;
	bool multi_proto_mode;
};

struct net_device *bareudp_dev_create(struct net *net, const char *name,
				      u8 name_assign_type,
				      struct bareudp_conf *info);

#endif
