/* Generated by ./xlat/gen.sh from ./xlat/sockipv6options.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sockipv6options in mpers mode

#else

static
const struct xlat sockipv6options[] = {
#if defined(IPV6_ADDRFORM) || (defined(HAVE_DECL_IPV6_ADDRFORM) && HAVE_DECL_IPV6_ADDRFORM)
  XLAT(IPV6_ADDRFORM),
#endif
#if defined(IPV6_2292PKTINFO) || (defined(HAVE_DECL_IPV6_2292PKTINFO) && HAVE_DECL_IPV6_2292PKTINFO)
  XLAT(IPV6_2292PKTINFO),
#endif
#if defined(IPV6_2292HOPOPTS) || (defined(HAVE_DECL_IPV6_2292HOPOPTS) && HAVE_DECL_IPV6_2292HOPOPTS)
  XLAT(IPV6_2292HOPOPTS),
#endif
#if defined(IPV6_2292DSTOPTS) || (defined(HAVE_DECL_IPV6_2292DSTOPTS) && HAVE_DECL_IPV6_2292DSTOPTS)
  XLAT(IPV6_2292DSTOPTS),
#endif
#if defined(IPV6_2292RTHDR) || (defined(HAVE_DECL_IPV6_2292RTHDR) && HAVE_DECL_IPV6_2292RTHDR)
  XLAT(IPV6_2292RTHDR),
#endif
#if defined(IPV6_2292PKTOPTIONS) || (defined(HAVE_DECL_IPV6_2292PKTOPTIONS) && HAVE_DECL_IPV6_2292PKTOPTIONS)
  XLAT(IPV6_2292PKTOPTIONS),
#endif
#if defined(IPV6_CHECKSUM) || (defined(HAVE_DECL_IPV6_CHECKSUM) && HAVE_DECL_IPV6_CHECKSUM)
  XLAT(IPV6_CHECKSUM),
#endif
#if defined(IPV6_2292HOPLIMIT) || (defined(HAVE_DECL_IPV6_2292HOPLIMIT) && HAVE_DECL_IPV6_2292HOPLIMIT)
  XLAT(IPV6_2292HOPLIMIT),
#endif
#if defined(IPV6_NEXTHOP) || (defined(HAVE_DECL_IPV6_NEXTHOP) && HAVE_DECL_IPV6_NEXTHOP)
  XLAT(IPV6_NEXTHOP),
#endif
#if defined(IPV6_AUTHHDR) || (defined(HAVE_DECL_IPV6_AUTHHDR) && HAVE_DECL_IPV6_AUTHHDR)
  XLAT(IPV6_AUTHHDR),
#endif
#if defined(IPV6_FLOWINFO) || (defined(HAVE_DECL_IPV6_FLOWINFO) && HAVE_DECL_IPV6_FLOWINFO)
  XLAT(IPV6_FLOWINFO),
#endif
#if defined(IPV6_UNICAST_HOPS) || (defined(HAVE_DECL_IPV6_UNICAST_HOPS) && HAVE_DECL_IPV6_UNICAST_HOPS)
  XLAT(IPV6_UNICAST_HOPS),
#endif
#if defined(IPV6_MULTICAST_IF) || (defined(HAVE_DECL_IPV6_MULTICAST_IF) && HAVE_DECL_IPV6_MULTICAST_IF)
  XLAT(IPV6_MULTICAST_IF),
#endif
#if defined(IPV6_MULTICAST_HOPS) || (defined(HAVE_DECL_IPV6_MULTICAST_HOPS) && HAVE_DECL_IPV6_MULTICAST_HOPS)
  XLAT(IPV6_MULTICAST_HOPS),
#endif
#if defined(IPV6_MULTICAST_LOOP) || (defined(HAVE_DECL_IPV6_MULTICAST_LOOP) && HAVE_DECL_IPV6_MULTICAST_LOOP)
  XLAT(IPV6_MULTICAST_LOOP),
#endif
#if defined(IPV6_ADD_MEMBERSHIP) || (defined(HAVE_DECL_IPV6_ADD_MEMBERSHIP) && HAVE_DECL_IPV6_ADD_MEMBERSHIP)
  XLAT(IPV6_ADD_MEMBERSHIP),
#endif
#if defined(IPV6_DROP_MEMBERSHIP) || (defined(HAVE_DECL_IPV6_DROP_MEMBERSHIP) && HAVE_DECL_IPV6_DROP_MEMBERSHIP)
  XLAT(IPV6_DROP_MEMBERSHIP),
#endif
#if defined(IPV6_ROUTER_ALERT) || (defined(HAVE_DECL_IPV6_ROUTER_ALERT) && HAVE_DECL_IPV6_ROUTER_ALERT)
  XLAT(IPV6_ROUTER_ALERT),
#endif
#if defined(IPV6_MTU_DISCOVER) || (defined(HAVE_DECL_IPV6_MTU_DISCOVER) && HAVE_DECL_IPV6_MTU_DISCOVER)
  XLAT(IPV6_MTU_DISCOVER),
#endif
#if defined(IPV6_MTU) || (defined(HAVE_DECL_IPV6_MTU) && HAVE_DECL_IPV6_MTU)
  XLAT(IPV6_MTU),
#endif
#if defined(IPV6_RECVERR) || (defined(HAVE_DECL_IPV6_RECVERR) && HAVE_DECL_IPV6_RECVERR)
  XLAT(IPV6_RECVERR),
#endif
#if defined(IPV6_V6ONLY) || (defined(HAVE_DECL_IPV6_V6ONLY) && HAVE_DECL_IPV6_V6ONLY)
  XLAT(IPV6_V6ONLY),
#endif
#if defined(IPV6_JOIN_ANYCAST) || (defined(HAVE_DECL_IPV6_JOIN_ANYCAST) && HAVE_DECL_IPV6_JOIN_ANYCAST)
  XLAT(IPV6_JOIN_ANYCAST),
#endif
#if defined(IPV6_LEAVE_ANYCAST) || (defined(HAVE_DECL_IPV6_LEAVE_ANYCAST) && HAVE_DECL_IPV6_LEAVE_ANYCAST)
  XLAT(IPV6_LEAVE_ANYCAST),
#endif
#if defined(IPV6_FLOWLABEL_MGR) || (defined(HAVE_DECL_IPV6_FLOWLABEL_MGR) && HAVE_DECL_IPV6_FLOWLABEL_MGR)
  XLAT(IPV6_FLOWLABEL_MGR),
#endif
#if defined(IPV6_FLOWINFO_SEND) || (defined(HAVE_DECL_IPV6_FLOWINFO_SEND) && HAVE_DECL_IPV6_FLOWINFO_SEND)
  XLAT(IPV6_FLOWINFO_SEND),
#endif
#if defined(IPV6_IPSEC_POLICY) || (defined(HAVE_DECL_IPV6_IPSEC_POLICY) && HAVE_DECL_IPV6_IPSEC_POLICY)
  XLAT(IPV6_IPSEC_POLICY),
#endif
#if defined(IPV6_XFRM_POLICY) || (defined(HAVE_DECL_IPV6_XFRM_POLICY) && HAVE_DECL_IPV6_XFRM_POLICY)
  XLAT(IPV6_XFRM_POLICY),
#endif
#if defined(IPV6_HDRINCL) || (defined(HAVE_DECL_IPV6_HDRINCL) && HAVE_DECL_IPV6_HDRINCL)
  XLAT(IPV6_HDRINCL),
#endif
#if defined(MCAST_JOIN_GROUP) || (defined(HAVE_DECL_MCAST_JOIN_GROUP) && HAVE_DECL_MCAST_JOIN_GROUP)
  XLAT(MCAST_JOIN_GROUP),
#endif
#if defined(MCAST_BLOCK_SOURCE) || (defined(HAVE_DECL_MCAST_BLOCK_SOURCE) && HAVE_DECL_MCAST_BLOCK_SOURCE)
  XLAT(MCAST_BLOCK_SOURCE),
#endif
#if defined(MCAST_UNBLOCK_SOURCE) || (defined(HAVE_DECL_MCAST_UNBLOCK_SOURCE) && HAVE_DECL_MCAST_UNBLOCK_SOURCE)
  XLAT(MCAST_UNBLOCK_SOURCE),
#endif
#if defined(MCAST_LEAVE_GROUP) || (defined(HAVE_DECL_MCAST_LEAVE_GROUP) && HAVE_DECL_MCAST_LEAVE_GROUP)
  XLAT(MCAST_LEAVE_GROUP),
#endif
#if defined(MCAST_JOIN_SOURCE_GROUP) || (defined(HAVE_DECL_MCAST_JOIN_SOURCE_GROUP) && HAVE_DECL_MCAST_JOIN_SOURCE_GROUP)
  XLAT(MCAST_JOIN_SOURCE_GROUP),
#endif
#if defined(MCAST_LEAVE_SOURCE_GROUP) || (defined(HAVE_DECL_MCAST_LEAVE_SOURCE_GROUP) && HAVE_DECL_MCAST_LEAVE_SOURCE_GROUP)
  XLAT(MCAST_LEAVE_SOURCE_GROUP),
#endif
#if defined(MCAST_MSFILTER) || (defined(HAVE_DECL_MCAST_MSFILTER) && HAVE_DECL_MCAST_MSFILTER)
  XLAT(MCAST_MSFILTER),
#endif
#if defined(IPV6_RECVPKTINFO) || (defined(HAVE_DECL_IPV6_RECVPKTINFO) && HAVE_DECL_IPV6_RECVPKTINFO)
  XLAT(IPV6_RECVPKTINFO),
#endif
#if defined(IPV6_PKTINFO) || (defined(HAVE_DECL_IPV6_PKTINFO) && HAVE_DECL_IPV6_PKTINFO)
  XLAT(IPV6_PKTINFO),
#endif
#if defined(IPV6_RECVHOPLIMIT) || (defined(HAVE_DECL_IPV6_RECVHOPLIMIT) && HAVE_DECL_IPV6_RECVHOPLIMIT)
  XLAT(IPV6_RECVHOPLIMIT),
#endif
#if defined(IPV6_HOPLIMIT) || (defined(HAVE_DECL_IPV6_HOPLIMIT) && HAVE_DECL_IPV6_HOPLIMIT)
  XLAT(IPV6_HOPLIMIT),
#endif
#if defined(IPV6_RECVHOPOPTS) || (defined(HAVE_DECL_IPV6_RECVHOPOPTS) && HAVE_DECL_IPV6_RECVHOPOPTS)
  XLAT(IPV6_RECVHOPOPTS),
#endif
#if defined(IPV6_HOPOPTS) || (defined(HAVE_DECL_IPV6_HOPOPTS) && HAVE_DECL_IPV6_HOPOPTS)
  XLAT(IPV6_HOPOPTS),
#endif
#if defined(IPV6_RTHDRDSTOPTS) || (defined(HAVE_DECL_IPV6_RTHDRDSTOPTS) && HAVE_DECL_IPV6_RTHDRDSTOPTS)
  XLAT(IPV6_RTHDRDSTOPTS),
#endif
#if defined(IPV6_RECVRTHDR) || (defined(HAVE_DECL_IPV6_RECVRTHDR) && HAVE_DECL_IPV6_RECVRTHDR)
  XLAT(IPV6_RECVRTHDR),
#endif
#if defined(IPV6_RTHDR) || (defined(HAVE_DECL_IPV6_RTHDR) && HAVE_DECL_IPV6_RTHDR)
  XLAT(IPV6_RTHDR),
#endif
#if defined(IPV6_RECVDSTOPTS) || (defined(HAVE_DECL_IPV6_RECVDSTOPTS) && HAVE_DECL_IPV6_RECVDSTOPTS)
  XLAT(IPV6_RECVDSTOPTS),
#endif
#if defined(IPV6_DSTOPTS) || (defined(HAVE_DECL_IPV6_DSTOPTS) && HAVE_DECL_IPV6_DSTOPTS)
  XLAT(IPV6_DSTOPTS),
#endif
#if defined(IPV6_RECVPATHMTU) || (defined(HAVE_DECL_IPV6_RECVPATHMTU) && HAVE_DECL_IPV6_RECVPATHMTU)
  XLAT(IPV6_RECVPATHMTU),
#endif
#if defined(IPV6_PATHMTU) || (defined(HAVE_DECL_IPV6_PATHMTU) && HAVE_DECL_IPV6_PATHMTU)
  XLAT(IPV6_PATHMTU),
#endif
#if defined(IPV6_DONTFRAG) || (defined(HAVE_DECL_IPV6_DONTFRAG) && HAVE_DECL_IPV6_DONTFRAG)
  XLAT(IPV6_DONTFRAG),
#endif
#if defined(IPV6_USE_MIN_MTU) || (defined(HAVE_DECL_IPV6_USE_MIN_MTU) && HAVE_DECL_IPV6_USE_MIN_MTU)
  XLAT(IPV6_USE_MIN_MTU),
#endif
#if defined(IPV6_RECVTCLASS) || (defined(HAVE_DECL_IPV6_RECVTCLASS) && HAVE_DECL_IPV6_RECVTCLASS)
  XLAT(IPV6_RECVTCLASS),
#endif
#if defined(IPV6_TCLASS) || (defined(HAVE_DECL_IPV6_TCLASS) && HAVE_DECL_IPV6_TCLASS)
  XLAT(IPV6_TCLASS),
#endif
#if defined(IPV6_AUTOFLOWLABEL) || (defined(HAVE_DECL_IPV6_AUTOFLOWLABEL) && HAVE_DECL_IPV6_AUTOFLOWLABEL)
  XLAT(IPV6_AUTOFLOWLABEL),
#endif
#if defined(IPV6_ADDR_PREFERENCES) || (defined(HAVE_DECL_IPV6_ADDR_PREFERENCES) && HAVE_DECL_IPV6_ADDR_PREFERENCES)
  XLAT(IPV6_ADDR_PREFERENCES),
#endif
#if defined(IPV6_MINHOPCOUNT) || (defined(HAVE_DECL_IPV6_MINHOPCOUNT) && HAVE_DECL_IPV6_MINHOPCOUNT)
  XLAT(IPV6_MINHOPCOUNT),
#endif
#if defined(IPV6_ORIGDSTADDR) || (defined(HAVE_DECL_IPV6_ORIGDSTADDR) && HAVE_DECL_IPV6_ORIGDSTADDR)
  XLAT(IPV6_ORIGDSTADDR),
#endif
#if defined(IPV6_RECVORIGDSTADDR) || (defined(HAVE_DECL_IPV6_RECVORIGDSTADDR) && HAVE_DECL_IPV6_RECVORIGDSTADDR)
  XLAT(IPV6_RECVORIGDSTADDR),
#endif
#if defined(IPV6_TRANSPARENT) || (defined(HAVE_DECL_IPV6_TRANSPARENT) && HAVE_DECL_IPV6_TRANSPARENT)
  XLAT(IPV6_TRANSPARENT),
#endif
#if defined(IPV6_UNICAST_IF) || (defined(HAVE_DECL_IPV6_UNICAST_IF) && HAVE_DECL_IPV6_UNICAST_IF)
  XLAT(IPV6_UNICAST_IF),
#endif
#if defined(IPV6_RECVFRAGSIZE) || (defined(HAVE_DECL_IPV6_RECVFRAGSIZE) && HAVE_DECL_IPV6_RECVFRAGSIZE)
  XLAT(IPV6_RECVFRAGSIZE),
#endif
#if defined(IPV6_FREEBIND) || (defined(HAVE_DECL_IPV6_FREEBIND) && HAVE_DECL_IPV6_FREEBIND)
  XLAT(IPV6_FREEBIND),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
