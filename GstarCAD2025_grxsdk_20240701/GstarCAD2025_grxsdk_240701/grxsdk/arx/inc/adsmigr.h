/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gdsmigr.h"

#ifndef ads_malloc
#define ads_malloc gds_malloc
#endif

#ifndef ads_free
#define ads_free gds_free
#endif

#ifndef ads__msize
#define ads__msize gds__msize
#endif

#ifndef ads_realloc
#define ads_realloc gds_realloc
#endif

#ifndef ads_calloc
#define ads_calloc gds_calloc
#endif

#ifndef ads_strdup
#define ads_strdup gds_strdup
#endif

#ifndef ads_getappname
#define ads_getappname gds_getappname
#endif

#ifndef ads_update
#define ads_update gds_update
#endif

#ifndef ads_command
#define ads_command gds_command
#endif

#ifndef ads_cmd
#define ads_cmd gds_cmd
#endif

#ifndef ads_regfunc
#define ads_regfunc gds_regfunc
#endif

#ifndef ads_usrbrk
#define ads_usrbrk gds_usrbrk
#endif

#ifndef ads_defun
#define ads_defun gds_defun
#endif

#ifndef ads_setfunhelp
#define ads_setfunhelp gds_setfunhelp
#endif

#ifndef ads_undef
#define ads_undef gds_undef
#endif

#ifndef ads_getfuncode
#define ads_getfuncode gds_getfuncode
#endif

#ifndef ads_getargs
#define ads_getargs gds_getargs
#endif

#ifndef ads_retlist
#define ads_retlist gds_retlist
#endif

#ifndef ads_retval
#define ads_retval gds_retval
#endif

#ifndef ads_retpoint
#define ads_retpoint gds_retpoint
#endif

#ifndef ads_retstr
#define ads_retstr gds_retstr
#endif

#ifndef ads_retname
#define ads_retname gds_retname
#endif

#ifndef ads_retint
#define ads_retint gds_retint
#endif

#ifndef ads_retreal
#define ads_retreal gds_retreal
#endif

#ifndef ads_rett
#define ads_rett gds_rett
#endif

#ifndef ads_retnil
#define ads_retnil gds_retnil
#endif

#ifndef ads_retvoid
#define ads_retvoid gds_retvoid
#endif

#ifndef ads_entsel
#define ads_entsel gds_entsel
#endif

#ifndef ads_nentsel
#define ads_nentsel gds_nentsel
#endif

#ifndef ads_nentselp
#define ads_nentselp gds_nentselp
#endif

#ifndef ads_ssget
#define ads_ssget gds_ssget
#endif

#ifndef ads_ssgetfirst
#define ads_ssgetfirst gds_ssgetfirst
#endif

#ifndef ads_sssetfirst
#define ads_sssetfirst gds_sssetfirst
#endif

#ifndef ads_ssfree
#define ads_ssfree gds_ssfree
#endif

#ifndef ads_sslength
#define ads_sslength gds_sslength
#endif

#ifndef ads_ssadd
#define ads_ssadd gds_ssadd
#endif

#ifndef ads_ssdel
#define ads_ssdel gds_ssdel
#endif

#ifndef ads_ssmemb
#define ads_ssmemb gds_ssmemb
#endif

#ifndef ads_ssname
#define ads_ssname gds_ssname
#endif

#ifndef ads_ssnamex
#define ads_ssnamex gds_ssnamex
#endif

#ifndef ads_ssGetKwordCallbackPtr
#define ads_ssGetKwordCallbackPtr gds_ssGetKwordCallbackPtr
#endif

#ifndef ads_ssSetKwordCallbackPtr
#define ads_ssSetKwordCallbackPtr gds_ssSetKwordCallbackPtr
#endif

#ifndef ads_ssGetOtherCallbackPtr
#define ads_ssGetOtherCallbackPtr gds_ssGetOtherCallbackPtr
#endif

#ifndef ads_ssSetOtherCallbackPtr
#define ads_ssSetOtherCallbackPtr gds_ssSetOtherCallbackPtr
#endif

#ifndef ads_setvar
#define ads_setvar gds_setvar
#endif

#ifndef ads_initget
#define ads_initget gds_initget
#endif

#ifndef ads_getsym
#define ads_getsym gds_getsym
#endif

#ifndef ads_putsym
#define ads_putsym gds_putsym
#endif

#ifndef ads_help
#define ads_help gds_help
#endif

#ifndef ads_fnsplit
#define ads_fnsplit gds_fnsplit
#endif

#ifndef ads_trans
#define ads_trans gds_trans
#endif

#ifndef ads_grxloaded
#define ads_grxloaded gds_grxloaded
#endif

#ifndef ads_grxload
#define ads_grxload gds_grxload
#endif

#ifndef ads_grxunload
#define ads_grxunload gds_grxunload
#endif

#ifndef ads_invoke
#define ads_invoke gds_invoke
#endif

#ifndef ads_getvar
#define ads_getvar gds_getvar
#endif

#ifndef ads_findfile
#define ads_findfile gds_findfile
#endif

#ifndef ads_findtrustedfile
#define ads_findtrustedfile gds_findtrustedfile
#endif

#ifndef ads_agetenv
#define ads_agetenv gds_agetenv
#endif

#ifndef ads_asetenv
#define ads_asetenv gds_asetenv
#endif

#ifndef ads_getenv
#define ads_getenv gds_getenv
#endif

#ifndef ads_setenv
#define ads_setenv gds_setenv
#endif

#ifndef ads_agetcfg
#define ads_agetcfg gds_agetcfg
#endif

#ifndef ads_asetcfg
#define ads_asetcfg gds_asetcfg
#endif

#ifndef ads_getcfg
#define ads_getcfg gds_getcfg
#endif

#ifndef ads_setcfg
#define ads_setcfg gds_setcfg
#endif

#ifndef ads_getstring
#define ads_getstring gds_getstring
#endif

#ifndef ads_menucmd
#define ads_menucmd gds_menucmd
#endif

#ifndef ads_prompt
#define ads_prompt gds_prompt
#endif

#ifndef ads_alert
#define ads_alert gds_alert
#endif

#ifndef ads_getangle
#define ads_getangle gds_getangle
#endif

#ifndef ads_getcorner
#define ads_getcorner gds_getcorner
#endif

#ifndef ads_getdist
#define ads_getdist gds_getdist
#endif

#ifndef ads_getorient
#define ads_getorient gds_getorient
#endif

#ifndef ads_getpoint
#define ads_getpoint gds_getpoint
#endif

#ifndef ads_getint
#define ads_getint gds_getint
#endif

#ifndef ads_getkword
#define ads_getkword gds_getkword
#endif

#ifndef ads_getreal
#define ads_getreal gds_getreal
#endif

#ifndef ads_getinput
#define ads_getinput gds_getinput
#endif

#ifndef ads_vports
#define ads_vports gds_vports
#endif

#ifndef ads_textscr
#define ads_textscr gds_textscr
#endif

#ifndef ads_graphscr
#define ads_graphscr gds_graphscr
#endif

#ifndef ads_textpage
#define ads_textpage gds_textpage
#endif

#ifndef ads_redraw
#define ads_redraw gds_redraw
#endif

#ifndef ads_osnap
#define ads_osnap gds_osnap
#endif

#ifndef ads_grread
#define ads_grread gds_grread
#endif

#ifndef ads_grtext
#define ads_grtext gds_grtext
#endif

#ifndef ads_grdraw
#define ads_grdraw gds_grdraw
#endif

#ifndef ads_grvecs
#define ads_grvecs gds_grvecs
#endif

#ifndef ads_xformss
#define ads_xformss gds_xformss
#endif

#ifndef ads_draggen
#define ads_draggen gds_draggen
#endif

#ifndef ads_setview
#define ads_setview gds_setview
#endif

#ifndef ads_getfiled
#define ads_getfiled gds_getfiled
#endif

#ifndef ads_textbox
#define ads_textbox gds_textbox
#endif

#ifndef ads_tablet
#define ads_tablet gds_tablet
#endif

#ifndef ads_getcname
#define ads_getcname gds_getcname
#endif
        
#ifndef ads_xdroom
#define ads_xdroom gds_xdroom
#endif

#ifndef ads_xdsize
#define ads_xdsize gds_xdsize
#endif

#ifndef ads_name_set
#define ads_name_set gds_name_set
#endif

#ifndef ads_point_set
#define ads_point_set gds_point_set
#endif


#ifndef ads_name_clear
#define ads_name_clear gds_name_clear
#endif

#ifndef ads_name_nil
#define ads_name_nil gds_name_nil
#endif

#ifndef ads_name_equal
#define ads_name_equal gds_name_equal
#endif



#ifndef ads_entdel
#define ads_entdel gds_entdel
#endif

#ifndef ads_entgetx
#define ads_entgetx gds_entgetx
#endif

#ifndef ads_entget
#define ads_entget gds_entget
#endif

#ifndef ads_entlast
#define ads_entlast gds_entlast
#endif

#ifndef ads_entnext
#define ads_entnext gds_entnext
#endif

#ifndef ads_entupd
#define ads_entupd gds_entupd
#endif

#ifndef ads_entmod
#define ads_entmod gds_entmod
#endif

#ifndef ads_entmake
#define ads_entmake gds_entmake
#endif

#ifndef ads_entmakex
#define ads_entmakex gds_entmakex
#endif

#ifndef ads_tblnext
#define ads_tblnext gds_tblnext
#endif

#ifndef ads_tblsearch
#define ads_tblsearch gds_tblsearch
#endif

#ifndef ads_namedobjdict
#define ads_namedobjdict gds_namedobjdict
#endif

#ifndef ads_dictsearch
#define ads_dictsearch gds_dictsearch
#endif

#ifndef ads_dictnext
#define ads_dictnext gds_dictnext
#endif

#ifndef ads_dictrename
#define ads_dictrename gds_dictrename
#endif

#ifndef ads_dictremove
#define ads_dictremove gds_dictremove
#endif

#ifndef ads_dictadd
#define ads_dictadd gds_dictadd
#endif

#ifndef ads_tblobjname
#define ads_tblobjname gds_tblobjname
#endif

#ifndef ads_handent
#define ads_handent gds_handent
#endif

#ifndef ads_inters
#define ads_inters gds_inters
#endif

#ifndef ads_snvalid
#define ads_snvalid gds_snvalid
#endif

#ifndef ads_xstrsave
#define ads_xstrsave gds_xstrsave
#endif

#ifndef ads_xstrcase
#define ads_xstrcase gds_xstrcase
#endif

#ifndef ads_regapp
#define ads_regapp gds_regapp
#endif

#ifndef ads_fail
#define ads_fail gds_fail
#endif

#ifndef ads_angtos
#define ads_angtos gds_angtos
#endif

#ifndef ads_rangtos
#define ads_rangtos gds_rangtos
#endif

#ifndef ads_rtos
#define ads_rtos gds_rtos
#endif

#ifndef ads_angtof
#define ads_angtof gds_angtof
#endif

#ifndef ads_rangtof
#define ads_rangtof gds_rangtof
#endif

#ifndef ads_distof
#define ads_distof gds_distof
#endif

#ifndef ads_regappx
#define ads_regappx gds_regappx
#endif
   


#ifndef ads_printf
#define ads_printf gds_printf
#endif

#ifndef ads_cvunit
#define ads_cvunit gds_cvunit
#endif

#ifndef ads_wcmatch
#define ads_wcmatch gds_wcmatch
#endif

#ifndef ads_angle
#define ads_angle gds_angle
#endif

#ifndef ads_distance
#define ads_distance gds_distance
#endif

#ifndef ads_polar
#define ads_polar gds_polar
#endif

#ifndef ads_isalpha
#define ads_isalpha gds_isalpha
#endif

#ifndef ads_isupper
#define ads_isupper gds_isupper
#endif

#ifndef ads_islower
#define ads_islower gds_islower
#endif

#ifndef ads_isdigit
#define ads_isdigit gds_isdigit
#endif

#ifndef ads_isxdigit
#define ads_isxdigit gds_isxdigit
#endif

#ifndef ads_isspace
#define ads_isspace gds_isspace
#endif

#ifndef ads_ispunct
#define ads_ispunct gds_ispunct
#endif

#ifndef ads_isalnum
#define ads_isalnum gds_isalnum
#endif

#ifndef ads_isprint
#define ads_isprint gds_isprint
#endif

#ifndef ads_isgraph
#define ads_isgraph gds_isgraph
#endif

#ifndef ads_iscntrl
#define ads_iscntrl gds_iscntrl
#endif

#ifndef ads_toupper
#define ads_toupper gds_toupper
#endif

#ifndef ads_tolower
#define ads_tolower gds_tolower
#endif

#ifndef ads_newrb
#define ads_newrb gds_newrb
#endif

#ifndef ads_relrb
#define ads_relrb gds_relrb
#endif

#ifndef ads_buildlist
#define ads_buildlist gds_buildlist
#endif

#ifndef ads_arxloaded
#define ads_arxloaded gds_grxloaded
#endif

#ifndef ads_arxload
#define ads_arxload gds_grxload
#endif

#ifndef ads_arxunload
#define ads_arxunload gds_grxunload
#endif

#ifndef acdbNameEqual
#define acdbNameEqual gds_name_equal
#endif
