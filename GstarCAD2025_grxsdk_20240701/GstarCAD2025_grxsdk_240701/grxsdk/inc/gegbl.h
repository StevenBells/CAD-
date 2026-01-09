/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEGBL_H
#define GC_GEGBL_H

#include <stdlib.h>
#include "gedll.h"
#include "gsoft.h"
#include "getol.h"

#include "gegblge.h"
#pragma pack (push, 8)

class GcGeVector3d;

struct
GcGeContext
{
  GE_DLLDATAEXIMP static GcGeTol     gTol;

  GE_DLLDATAEXIMP static void(*gErrorFunc)();

#ifndef GELIB2D
  GE_DLLDATAEXIMP static void(*gOrthoVector)(const GcGeVector3d&, GcGeVector3d&);
#endif

#ifndef unix
  GE_DLLDATAEXIMP static void* (*gAllocMem)(size_t);
  GE_DLLDATAEXIMP static void(*gFreeMem)(void*);
#endif
#ifdef GE_LOCATED_NEW
  GE_DLLDATAEXIMP static void* (*gAllocMemNear) (size_t, GcGe::metaTypeIndex, const void*);
  GE_DLLDATAEXIMP static void* (*gAllocMemNearVector) (size_t, GcGe::metaTypeIndex, unsigned int, const void*);
  GE_DLLDATAEXIMP static void(*gSetExternalStore) (const void*);
#endif
#ifndef NDEBUG
  GE_DLLDATAEXIMP static void(*gAssertFunc)(const GCHAR *condition, const GCHAR *filename,
                                            int lineNumber, const GCHAR *status);
#endif
};


#pragma pack (pop)
#endif 