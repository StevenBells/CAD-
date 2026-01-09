/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcheapmanager.h"
#include "PAL/api/heap.h"
#include "acbasedefs.h"

#ifndef acStackHeapAlloc
#define acStackHeapAlloc gcStackHeapAlloc
#endif

#ifndef acStackHeapRealloc
#define acStackHeapRealloc gcStackHeapRealloc
#endif

#ifndef acStackHeapFree
#define acStackHeapFree gcStackHeapFree
#endif

#ifndef AcStackAllocator
#define AcStackAllocator GcStackAllocator
#endif
