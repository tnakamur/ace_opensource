/* Generated by ./xlat/gen.sh from ./xlat/pr_dumpable.in; do not edit. */
#if !(defined(SUID_DUMP_DISABLE) || (defined(HAVE_DECL_SUID_DUMP_DISABLE) && HAVE_DECL_SUID_DUMP_DISABLE))
# define SUID_DUMP_DISABLE 0
#endif
#if !(defined(SUID_DUMP_USER) || (defined(HAVE_DECL_SUID_DUMP_USER) && HAVE_DECL_SUID_DUMP_USER))
# define SUID_DUMP_USER 1
#endif
#if !(defined(SUID_DUMP_ROOT) || (defined(HAVE_DECL_SUID_DUMP_ROOT) && HAVE_DECL_SUID_DUMP_ROOT))
# define SUID_DUMP_ROOT 2
#endif

#ifdef IN_MPERS

# error static const struct xlat pr_dumpable in mpers mode

#else

static
const struct xlat pr_dumpable[] = {

 XLAT(SUID_DUMP_DISABLE),
 XLAT(SUID_DUMP_USER),
 XLAT(SUID_DUMP_ROOT),
 XLAT_END
};

#endif /* !IN_MPERS */
