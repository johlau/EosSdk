// Copyright (c) 2014 Arista Networks, Inc.  All rights reserved.
// Arista Networks, Inc. Confidential and Proprietary.

#ifndef INLINE_NEXTHOP_GROUP_H
#define INLINE_NEXTHOP_GROUP_H

namespace eos {

inline nexthop_group_t::nexthop_group_t(std::string const & name,
                                        nexthop_group_encap_t type) :
      name_(name), encap_type_(type) {
}

inline std::string const & 
nexthop_group_t::name() const {
   return name_;
}

inline nexthop_group_encap_t
nexthop_group_t::type() const {
   return encap_type_;
}

inline void
nexthop_group_t::ttl_is(uint8_t ttl) {
   ttl_ = ttl;
}

inline uint8_t
nexthop_group_t::ttl() const {
   return ttl_;
}

inline void
nexthop_group_t::source_ip_is(ip_addr_t const & srcIp) {
   source_ip_ = srcIp;
}

inline ip_addr_t const & 
nexthop_group_t::source_ip() const {
   return source_ip_;
}

inline std::forward_list<ip_addr_t> const &
nexthop_group_t::destination_address() const {
   return destination_ip_;
}

inline void
nexthop_group_t::size_is(uint8_t size) const {
   size_ = size;
}

inline uint8_t
nexthop_group_t::size() const {
   return size_;
}

inline void
nexthop_group_t::persistent_is(bool persistent) {
   persistent_ = persistent;
}

inline bool
nexthop_group_t::persistent() const {
   return persistent_;
}





}

#endif // INLINE_NEXTHOP_GROUP_H