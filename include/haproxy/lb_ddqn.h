/*
 * include/haproxy/lb_ddqn.h
 * Double DQN load balancing algorithm.
 *
 * Copyright 2025 Benites Milagros, Cisneros Ian, Kobylnik Fernando, Leone Nicolás
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, version 3.0.
 * or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _HAPROXY_LB_DDQN_H
#define _HAPROXY_LB_DDQN_H

struct server *ddqn_get_next_server(struct proxy *p, struct server *srvtoavoid);

#endif /* _HAPROXY_LB_DDQN_H */

/*
 * Local variables:
 *  c-indent-level: 8
 *  c-basic-offset: 8
 * End:
 */