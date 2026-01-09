/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEDLL_H
#define GC_GEDLL_H

#include "gsoft.h"
#if defined(_MSC_VER)
#pragma warning(disable:4251)
#pragma warning(disable:4273)
#pragma warning(disable:4275)
#endif

#ifdef  GCGE_INTERNAL
#define GE_DLLEXPIMPORT GSOFT_EXPORT
#define GE_DLLDATAEXIMP GSOFT_EXPORT
#else
#define GE_DLLEXPIMPORT
#define GE_DLLDATAEXIMP GSOFT_DATA_IMPORT
#endif

#ifdef  GCGX_INTERNAL
#define GX_DLLEXPIMPORT GSOFT_EXPORT
#else
#define GX_DLLEXPIMPORT
#endif

#ifdef  GCGE_INTERNAL_EX
#define GE_DLLEXPIMPORT_EX GSOFT_EXPORT
#else
#define GE_DLLEXPIMPORT_EX
#endif

#endif 