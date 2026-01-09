/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/migrtion.h"
#include "adsmigr.h"
#include "acutmigr.h"

#ifndef acdbSetCurrentVPort
#define acdbSetCurrentVPort gcdbSetCurrentVPort
#endif

#ifndef acdbGetCurrentSelectionSet
#define acdbGetCurrentSelectionSet gcdbGetCurrentSelectionSet
#endif

#ifndef acdbGetRGB
#define acdbGetRGB gcdbGetRGB
#endif

#ifndef acdbGetCurViewportObjectId
#define acdbGetCurViewportObjectId gcdbGetCurViewportObjectId
#endif

#ifndef AcDbXrefGraph
#define AcDbXrefGraph GcDbXrefGraph
#endif

#ifndef getCurDwgXrefGraph
#define getCurDwgXrefGraph gcedGetCurDwgXrefGraph
#endif

#ifndef acdbCurDwg
#define acdbCurDwg gcdbCurDwg
#endif
