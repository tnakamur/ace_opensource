/* Generated by ./xlat/gen.sh from ./xlat/clockflags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat clockflags in mpers mode

#else

static
const struct xlat clockflags[] = {
#if defined(TIMER_ABSTIME) || (defined(HAVE_DECL_TIMER_ABSTIME) && HAVE_DECL_TIMER_ABSTIME)
  XLAT(TIMER_ABSTIME),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
