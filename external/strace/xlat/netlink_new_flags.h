/* Generated by ./xlat/gen.sh from ./xlat/netlink_new_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat netlink_new_flags in mpers mode

#else

static
const struct xlat netlink_new_flags[] = {
#if defined(NLM_F_REPLACE) || (defined(HAVE_DECL_NLM_F_REPLACE) && HAVE_DECL_NLM_F_REPLACE)
  XLAT(NLM_F_REPLACE),
#endif
#if defined(NLM_F_EXCL) || (defined(HAVE_DECL_NLM_F_EXCL) && HAVE_DECL_NLM_F_EXCL)
  XLAT(NLM_F_EXCL),
#endif
#if defined(NLM_F_CREATE) || (defined(HAVE_DECL_NLM_F_CREATE) && HAVE_DECL_NLM_F_CREATE)
  XLAT(NLM_F_CREATE),
#endif
#if defined(NLM_F_APPEND) || (defined(HAVE_DECL_NLM_F_APPEND) && HAVE_DECL_NLM_F_APPEND)
  XLAT(NLM_F_APPEND),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
