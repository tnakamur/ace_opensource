/* Generated by ./xlat/gen.sh from ./xlat/socktypes.in; do not edit. */

#ifndef IN_MPERS

const struct xlat socktypes[] = {
#if defined(SOCK_STREAM) || (defined(HAVE_DECL_SOCK_STREAM) && HAVE_DECL_SOCK_STREAM)
  XLAT(SOCK_STREAM),
#endif
#if defined(SOCK_DGRAM) || (defined(HAVE_DECL_SOCK_DGRAM) && HAVE_DECL_SOCK_DGRAM)
  XLAT(SOCK_DGRAM),
#endif
#if defined(SOCK_RAW) || (defined(HAVE_DECL_SOCK_RAW) && HAVE_DECL_SOCK_RAW)
  XLAT(SOCK_RAW),
#endif
#if defined(SOCK_RDM) || (defined(HAVE_DECL_SOCK_RDM) && HAVE_DECL_SOCK_RDM)
  XLAT(SOCK_RDM),
#endif
#if defined(SOCK_SEQPACKET) || (defined(HAVE_DECL_SOCK_SEQPACKET) && HAVE_DECL_SOCK_SEQPACKET)
  XLAT(SOCK_SEQPACKET),
#endif
#if defined(SOCK_DCCP) || (defined(HAVE_DECL_SOCK_DCCP) && HAVE_DECL_SOCK_DCCP)
  XLAT(SOCK_DCCP),
#endif
#if defined(SOCK_PACKET) || (defined(HAVE_DECL_SOCK_PACKET) && HAVE_DECL_SOCK_PACKET)
  XLAT(SOCK_PACKET),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
