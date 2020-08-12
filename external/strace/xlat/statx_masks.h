/* Generated by ./xlat/gen.sh from ./xlat/statx_masks.in; do not edit. */
#if !(defined(STATX_ALL) || (defined(HAVE_DECL_STATX_ALL) && HAVE_DECL_STATX_ALL))
# define STATX_ALL 0x00000fffU
#endif
#if !(defined(STATX_BASIC_STATS) || (defined(HAVE_DECL_STATX_BASIC_STATS) && HAVE_DECL_STATX_BASIC_STATS))
# define STATX_BASIC_STATS 0x000007ffU
#endif
#if !(defined(STATX_TYPE) || (defined(HAVE_DECL_STATX_TYPE) && HAVE_DECL_STATX_TYPE))
# define STATX_TYPE 0x00000001U
#endif
#if !(defined(STATX_MODE) || (defined(HAVE_DECL_STATX_MODE) && HAVE_DECL_STATX_MODE))
# define STATX_MODE 0x00000002U
#endif
#if !(defined(STATX_NLINK) || (defined(HAVE_DECL_STATX_NLINK) && HAVE_DECL_STATX_NLINK))
# define STATX_NLINK 0x00000004U
#endif
#if !(defined(STATX_UID) || (defined(HAVE_DECL_STATX_UID) && HAVE_DECL_STATX_UID))
# define STATX_UID 0x00000008U
#endif
#if !(defined(STATX_GID) || (defined(HAVE_DECL_STATX_GID) && HAVE_DECL_STATX_GID))
# define STATX_GID 0x00000010U
#endif
#if !(defined(STATX_ATIME) || (defined(HAVE_DECL_STATX_ATIME) && HAVE_DECL_STATX_ATIME))
# define STATX_ATIME 0x00000020U
#endif
#if !(defined(STATX_MTIME) || (defined(HAVE_DECL_STATX_MTIME) && HAVE_DECL_STATX_MTIME))
# define STATX_MTIME 0x00000040U
#endif
#if !(defined(STATX_CTIME) || (defined(HAVE_DECL_STATX_CTIME) && HAVE_DECL_STATX_CTIME))
# define STATX_CTIME 0x00000080U
#endif
#if !(defined(STATX_INO) || (defined(HAVE_DECL_STATX_INO) && HAVE_DECL_STATX_INO))
# define STATX_INO 0x00000100U
#endif
#if !(defined(STATX_SIZE) || (defined(HAVE_DECL_STATX_SIZE) && HAVE_DECL_STATX_SIZE))
# define STATX_SIZE 0x00000200U
#endif
#if !(defined(STATX_BLOCKS) || (defined(HAVE_DECL_STATX_BLOCKS) && HAVE_DECL_STATX_BLOCKS))
# define STATX_BLOCKS 0x00000400U
#endif
#if !(defined(STATX_BTIME) || (defined(HAVE_DECL_STATX_BTIME) && HAVE_DECL_STATX_BTIME))
# define STATX_BTIME 0x00000800U
#endif

#ifdef IN_MPERS

# error static const struct xlat statx_masks in mpers mode

#else

static
const struct xlat statx_masks[] = {
 XLAT(STATX_ALL),
 XLAT(STATX_BASIC_STATS),

 XLAT(STATX_TYPE),
 XLAT(STATX_MODE),
 XLAT(STATX_NLINK),
 XLAT(STATX_UID),
 XLAT(STATX_GID),
 XLAT(STATX_ATIME),
 XLAT(STATX_MTIME),
 XLAT(STATX_CTIME),
 XLAT(STATX_INO),
 XLAT(STATX_SIZE),
 XLAT(STATX_BLOCKS),
 XLAT(STATX_BTIME),
 XLAT_END
};

#endif /* !IN_MPERS */