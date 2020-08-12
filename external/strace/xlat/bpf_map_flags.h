/* Generated by ./xlat/gen.sh from ./xlat/bpf_map_flags.in; do not edit. */
#if !(defined(BPF_F_NO_PREALLOC) || (defined(HAVE_DECL_BPF_F_NO_PREALLOC) && HAVE_DECL_BPF_F_NO_PREALLOC))
# define BPF_F_NO_PREALLOC 1
#endif
#if !(defined(BPF_F_NO_COMMON_LRU) || (defined(HAVE_DECL_BPF_F_NO_COMMON_LRU) && HAVE_DECL_BPF_F_NO_COMMON_LRU))
# define BPF_F_NO_COMMON_LRU 2
#endif
#if !(defined(BPF_F_NUMA_NODE) || (defined(HAVE_DECL_BPF_F_NUMA_NODE) && HAVE_DECL_BPF_F_NUMA_NODE))
# define BPF_F_NUMA_NODE 4
#endif

#ifdef IN_MPERS

# error static const struct xlat bpf_map_flags in mpers mode

#else

static
const struct xlat bpf_map_flags[] = {
 XLAT(BPF_F_NO_PREALLOC),
 XLAT(BPF_F_NO_COMMON_LRU),
 XLAT(BPF_F_NUMA_NODE),
 XLAT_END
};

#endif /* !IN_MPERS */
