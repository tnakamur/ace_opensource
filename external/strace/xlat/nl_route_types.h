/* Generated by ./xlat/gen.sh from ./xlat/nl_route_types.in; do not edit. */
#if !(defined(RTM_NEWLINK) || (defined(HAVE_DECL_RTM_NEWLINK) && HAVE_DECL_RTM_NEWLINK))
# define RTM_NEWLINK 16
#endif
#if !(defined(RTM_DELLINK) || (defined(HAVE_DECL_RTM_DELLINK) && HAVE_DECL_RTM_DELLINK))
# define RTM_DELLINK 17
#endif
#if !(defined(RTM_GETLINK) || (defined(HAVE_DECL_RTM_GETLINK) && HAVE_DECL_RTM_GETLINK))
# define RTM_GETLINK 18
#endif
#if !(defined(RTM_SETLINK) || (defined(HAVE_DECL_RTM_SETLINK) && HAVE_DECL_RTM_SETLINK))
# define RTM_SETLINK 19
#endif
#if !(defined(RTM_NEWADDR) || (defined(HAVE_DECL_RTM_NEWADDR) && HAVE_DECL_RTM_NEWADDR))
# define RTM_NEWADDR 20
#endif
#if !(defined(RTM_DELADDR) || (defined(HAVE_DECL_RTM_DELADDR) && HAVE_DECL_RTM_DELADDR))
# define RTM_DELADDR 21
#endif
#if !(defined(RTM_GETADDR) || (defined(HAVE_DECL_RTM_GETADDR) && HAVE_DECL_RTM_GETADDR))
# define RTM_GETADDR 22
#endif
#if !(defined(RTM_NEWROUTE) || (defined(HAVE_DECL_RTM_NEWROUTE) && HAVE_DECL_RTM_NEWROUTE))
# define RTM_NEWROUTE 24
#endif
#if !(defined(RTM_DELROUTE) || (defined(HAVE_DECL_RTM_DELROUTE) && HAVE_DECL_RTM_DELROUTE))
# define RTM_DELROUTE 25
#endif
#if !(defined(RTM_GETROUTE) || (defined(HAVE_DECL_RTM_GETROUTE) && HAVE_DECL_RTM_GETROUTE))
# define RTM_GETROUTE 26
#endif
#if !(defined(RTM_NEWNEIGH) || (defined(HAVE_DECL_RTM_NEWNEIGH) && HAVE_DECL_RTM_NEWNEIGH))
# define RTM_NEWNEIGH 28
#endif
#if !(defined(RTM_DELNEIGH) || (defined(HAVE_DECL_RTM_DELNEIGH) && HAVE_DECL_RTM_DELNEIGH))
# define RTM_DELNEIGH 29
#endif
#if !(defined(RTM_GETNEIGH) || (defined(HAVE_DECL_RTM_GETNEIGH) && HAVE_DECL_RTM_GETNEIGH))
# define RTM_GETNEIGH 30
#endif
#if !(defined(RTM_NEWRULE) || (defined(HAVE_DECL_RTM_NEWRULE) && HAVE_DECL_RTM_NEWRULE))
# define RTM_NEWRULE 32
#endif
#if !(defined(RTM_DELRULE) || (defined(HAVE_DECL_RTM_DELRULE) && HAVE_DECL_RTM_DELRULE))
# define RTM_DELRULE 33
#endif
#if !(defined(RTM_GETRULE) || (defined(HAVE_DECL_RTM_GETRULE) && HAVE_DECL_RTM_GETRULE))
# define RTM_GETRULE 34
#endif
#if !(defined(RTM_NEWQDISC) || (defined(HAVE_DECL_RTM_NEWQDISC) && HAVE_DECL_RTM_NEWQDISC))
# define RTM_NEWQDISC 36
#endif
#if !(defined(RTM_DELQDISC) || (defined(HAVE_DECL_RTM_DELQDISC) && HAVE_DECL_RTM_DELQDISC))
# define RTM_DELQDISC 37
#endif
#if !(defined(RTM_GETQDISC) || (defined(HAVE_DECL_RTM_GETQDISC) && HAVE_DECL_RTM_GETQDISC))
# define RTM_GETQDISC 38
#endif
#if !(defined(RTM_NEWTCLASS) || (defined(HAVE_DECL_RTM_NEWTCLASS) && HAVE_DECL_RTM_NEWTCLASS))
# define RTM_NEWTCLASS 40
#endif
#if !(defined(RTM_DELTCLASS) || (defined(HAVE_DECL_RTM_DELTCLASS) && HAVE_DECL_RTM_DELTCLASS))
# define RTM_DELTCLASS 41
#endif
#if !(defined(RTM_GETTCLASS) || (defined(HAVE_DECL_RTM_GETTCLASS) && HAVE_DECL_RTM_GETTCLASS))
# define RTM_GETTCLASS 42
#endif
#if !(defined(RTM_NEWTFILTER) || (defined(HAVE_DECL_RTM_NEWTFILTER) && HAVE_DECL_RTM_NEWTFILTER))
# define RTM_NEWTFILTER 44
#endif
#if !(defined(RTM_DELTFILTER) || (defined(HAVE_DECL_RTM_DELTFILTER) && HAVE_DECL_RTM_DELTFILTER))
# define RTM_DELTFILTER 45
#endif
#if !(defined(RTM_GETTFILTER) || (defined(HAVE_DECL_RTM_GETTFILTER) && HAVE_DECL_RTM_GETTFILTER))
# define RTM_GETTFILTER 46
#endif
#if !(defined(RTM_NEWACTION) || (defined(HAVE_DECL_RTM_NEWACTION) && HAVE_DECL_RTM_NEWACTION))
# define RTM_NEWACTION 48
#endif
#if !(defined(RTM_DELACTION) || (defined(HAVE_DECL_RTM_DELACTION) && HAVE_DECL_RTM_DELACTION))
# define RTM_DELACTION 49
#endif
#if !(defined(RTM_GETACTION) || (defined(HAVE_DECL_RTM_GETACTION) && HAVE_DECL_RTM_GETACTION))
# define RTM_GETACTION 50
#endif
#if !(defined(RTM_NEWPREFIX) || (defined(HAVE_DECL_RTM_NEWPREFIX) && HAVE_DECL_RTM_NEWPREFIX))
# define RTM_NEWPREFIX 52
#endif
#if !(defined(RTM_GETPREFIX) || (defined(HAVE_DECL_RTM_GETPREFIX) && HAVE_DECL_RTM_GETPREFIX))
# define RTM_GETPREFIX 54
#endif
#if !(defined(RTM_GETMULTICAST) || (defined(HAVE_DECL_RTM_GETMULTICAST) && HAVE_DECL_RTM_GETMULTICAST))
# define RTM_GETMULTICAST 58
#endif
#if !(defined(RTM_GETANYCAST) || (defined(HAVE_DECL_RTM_GETANYCAST) && HAVE_DECL_RTM_GETANYCAST))
# define RTM_GETANYCAST 62
#endif
#if !(defined(RTM_NEWNEIGHTBL) || (defined(HAVE_DECL_RTM_NEWNEIGHTBL) && HAVE_DECL_RTM_NEWNEIGHTBL))
# define RTM_NEWNEIGHTBL 64
#endif
#if !(defined(RTM_GETNEIGHTBL) || (defined(HAVE_DECL_RTM_GETNEIGHTBL) && HAVE_DECL_RTM_GETNEIGHTBL))
# define RTM_GETNEIGHTBL 66
#endif
#if !(defined(RTM_SETNEIGHTBL) || (defined(HAVE_DECL_RTM_SETNEIGHTBL) && HAVE_DECL_RTM_SETNEIGHTBL))
# define RTM_SETNEIGHTBL 67
#endif
#if !(defined(RTM_NEWNDUSEROPT) || (defined(HAVE_DECL_RTM_NEWNDUSEROPT) && HAVE_DECL_RTM_NEWNDUSEROPT))
# define RTM_NEWNDUSEROPT 68
#endif
#if !(defined(RTM_NEWADDRLABEL) || (defined(HAVE_DECL_RTM_NEWADDRLABEL) && HAVE_DECL_RTM_NEWADDRLABEL))
# define RTM_NEWADDRLABEL 72
#endif
#if !(defined(RTM_DELADDRLABEL) || (defined(HAVE_DECL_RTM_DELADDRLABEL) && HAVE_DECL_RTM_DELADDRLABEL))
# define RTM_DELADDRLABEL 73
#endif
#if !(defined(RTM_GETADDRLABEL) || (defined(HAVE_DECL_RTM_GETADDRLABEL) && HAVE_DECL_RTM_GETADDRLABEL))
# define RTM_GETADDRLABEL 74
#endif
#if !(defined(RTM_GETDCB) || (defined(HAVE_DECL_RTM_GETDCB) && HAVE_DECL_RTM_GETDCB))
# define RTM_GETDCB 78
#endif
#if !(defined(RTM_SETDCB) || (defined(HAVE_DECL_RTM_SETDCB) && HAVE_DECL_RTM_SETDCB))
# define RTM_SETDCB 79
#endif
#if !(defined(RTM_NEWNETCONF) || (defined(HAVE_DECL_RTM_NEWNETCONF) && HAVE_DECL_RTM_NEWNETCONF))
# define RTM_NEWNETCONF 80
#endif
#if !(defined(RTM_DELNETCONF) || (defined(HAVE_DECL_RTM_DELNETCONF) && HAVE_DECL_RTM_DELNETCONF))
# define RTM_DELNETCONF 81
#endif
#if !(defined(RTM_GETNETCONF) || (defined(HAVE_DECL_RTM_GETNETCONF) && HAVE_DECL_RTM_GETNETCONF))
# define RTM_GETNETCONF 82
#endif
#if !(defined(RTM_NEWMDB) || (defined(HAVE_DECL_RTM_NEWMDB) && HAVE_DECL_RTM_NEWMDB))
# define RTM_NEWMDB 84
#endif
#if !(defined(RTM_DELMDB) || (defined(HAVE_DECL_RTM_DELMDB) && HAVE_DECL_RTM_DELMDB))
# define RTM_DELMDB 85
#endif
#if !(defined(RTM_GETMDB) || (defined(HAVE_DECL_RTM_GETMDB) && HAVE_DECL_RTM_GETMDB))
# define RTM_GETMDB 86
#endif
#if !(defined(RTM_NEWNSID) || (defined(HAVE_DECL_RTM_NEWNSID) && HAVE_DECL_RTM_NEWNSID))
# define RTM_NEWNSID 88
#endif
#if !(defined(RTM_DELNSID) || (defined(HAVE_DECL_RTM_DELNSID) && HAVE_DECL_RTM_DELNSID))
# define RTM_DELNSID 89
#endif
#if !(defined(RTM_GETNSID) || (defined(HAVE_DECL_RTM_GETNSID) && HAVE_DECL_RTM_GETNSID))
# define RTM_GETNSID 90
#endif
#if !(defined(RTM_NEWSTATS) || (defined(HAVE_DECL_RTM_NEWSTATS) && HAVE_DECL_RTM_NEWSTATS))
# define RTM_NEWSTATS 92
#endif
#if !(defined(RTM_GETSTATS) || (defined(HAVE_DECL_RTM_GETSTATS) && HAVE_DECL_RTM_GETSTATS))
# define RTM_GETSTATS 94
#endif

#ifndef IN_MPERS

const struct xlat nl_route_types[] = {
 XLAT(RTM_NEWLINK),
 XLAT(RTM_DELLINK),
 XLAT(RTM_GETLINK),
 XLAT(RTM_SETLINK),

 XLAT(RTM_NEWADDR),
 XLAT(RTM_DELADDR),
 XLAT(RTM_GETADDR),

 XLAT(RTM_NEWROUTE),
 XLAT(RTM_DELROUTE),
 XLAT(RTM_GETROUTE),

 XLAT(RTM_NEWNEIGH),
 XLAT(RTM_DELNEIGH),
 XLAT(RTM_GETNEIGH),

 XLAT(RTM_NEWRULE),
 XLAT(RTM_DELRULE),
 XLAT(RTM_GETRULE),

 XLAT(RTM_NEWQDISC),
 XLAT(RTM_DELQDISC),
 XLAT(RTM_GETQDISC),

 XLAT(RTM_NEWTCLASS),
 XLAT(RTM_DELTCLASS),
 XLAT(RTM_GETTCLASS),

 XLAT(RTM_NEWTFILTER),
 XLAT(RTM_DELTFILTER),
 XLAT(RTM_GETTFILTER),

 XLAT(RTM_NEWACTION),
 XLAT(RTM_DELACTION),
 XLAT(RTM_GETACTION),

 XLAT(RTM_NEWPREFIX),
 XLAT(RTM_GETPREFIX),

 XLAT(RTM_GETMULTICAST),

 XLAT(RTM_GETANYCAST),

 XLAT(RTM_NEWNEIGHTBL),
 XLAT(RTM_GETNEIGHTBL),
 XLAT(RTM_SETNEIGHTBL),

 XLAT(RTM_NEWNDUSEROPT),

 XLAT(RTM_NEWADDRLABEL),
 XLAT(RTM_DELADDRLABEL),
 XLAT(RTM_GETADDRLABEL),

 XLAT(RTM_GETDCB),
 XLAT(RTM_SETDCB),

 XLAT(RTM_NEWNETCONF),
 XLAT(RTM_DELNETCONF),
 XLAT(RTM_GETNETCONF),

 XLAT(RTM_NEWMDB),
 XLAT(RTM_DELMDB),
 XLAT(RTM_GETMDB),

 XLAT(RTM_NEWNSID),
 XLAT(RTM_DELNSID),
 XLAT(RTM_GETNSID),

 XLAT(RTM_NEWSTATS),
 XLAT(RTM_GETSTATS),
 XLAT_END
};

#endif /* !IN_MPERS */
