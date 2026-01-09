/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../../../inc/PAL/api/heap.h"
#include "../../adesk.h"
#include "def.h"

#ifndef AcHeapHandle
#define AcHeapHandle GcHeapHandle
#endif

#ifndef acHeapCreate
#define acHeapCreate gcHeapCreate
#endif
 
#ifndef acHeapDestroy
#define acHeapDestroy gcHeapDestroy
#endif

#ifndef acHeapAlloc
#define acHeapAlloc gcHeapAlloc
#endif

#ifndef acTryHeapAlloc
#define acTryHeapAlloc gcTryHeapAlloc
#endif

#ifndef acHeapFree
#define acHeapFree gcHeapFree
#endif

#ifndef acHeapReAlloc
#define acHeapReAlloc gcHeapReAlloc
#endif

#ifndef acHeapSize
#define acHeapSize gcHeapSize
#endif

#ifndef acHeapValidate
#define acHeapValidate gcHeapValidate
#endif

#ifndef acAllocAligned
#define acAllocAligned gcAllocAligned
#endif

#ifndef acFreeAligned
#define acFreeAligned gcFreeAligned
#endif

#ifndef acMsizeAligned
#define acMsizeAligned gcMsizeAligned
#endif
