/* Generated by ./xlat/gen.sh from ./xlat/modem_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat modem_flags in mpers mode

#else

static
const struct xlat modem_flags[] = {
#if defined(TIOCM_LE) || (defined(HAVE_DECL_TIOCM_LE) && HAVE_DECL_TIOCM_LE)
  XLAT(TIOCM_LE),
#endif
#if defined(TIOCM_DTR) || (defined(HAVE_DECL_TIOCM_DTR) && HAVE_DECL_TIOCM_DTR)
  XLAT(TIOCM_DTR),
#endif
#if defined(TIOCM_RTS) || (defined(HAVE_DECL_TIOCM_RTS) && HAVE_DECL_TIOCM_RTS)
  XLAT(TIOCM_RTS),
#endif
#if defined(TIOCM_ST) || (defined(HAVE_DECL_TIOCM_ST) && HAVE_DECL_TIOCM_ST)
  XLAT(TIOCM_ST),
#endif
#if defined(TIOCM_SR) || (defined(HAVE_DECL_TIOCM_SR) && HAVE_DECL_TIOCM_SR)
  XLAT(TIOCM_SR),
#endif
#if defined(TIOCM_CTS) || (defined(HAVE_DECL_TIOCM_CTS) && HAVE_DECL_TIOCM_CTS)
  XLAT(TIOCM_CTS),
#endif
#if defined(TIOCM_CAR) || (defined(HAVE_DECL_TIOCM_CAR) && HAVE_DECL_TIOCM_CAR)
  XLAT(TIOCM_CAR),
#endif
#if defined(TIOCM_CD) || (defined(HAVE_DECL_TIOCM_CD) && HAVE_DECL_TIOCM_CD)
  XLAT(TIOCM_CD),
#endif
#if defined(TIOCM_RNG) || (defined(HAVE_DECL_TIOCM_RNG) && HAVE_DECL_TIOCM_RNG)
  XLAT(TIOCM_RNG),
#endif
#if defined(TIOCM_RI) || (defined(HAVE_DECL_TIOCM_RI) && HAVE_DECL_TIOCM_RI)
  XLAT(TIOCM_RI),
#endif
#if defined(TIOCM_DSR) || (defined(HAVE_DECL_TIOCM_DSR) && HAVE_DECL_TIOCM_DSR)
  XLAT(TIOCM_DSR),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
