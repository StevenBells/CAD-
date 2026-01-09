/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gept3dar.h"

#include "adesk.h"
#include "assert.h"
#include "gepnt3d.h"

#include "acarray.h"
#ifndef AcGePoint3dArray
#define AcGePoint3dArray GcGePoint3dArray
#endif


#if GE_LOCATED_NEW
#ifndef AcGeGetMetaTypeIndex
#define AcGeGetMetaTypeIndex GcGeGetMetaTypeIndex
#endif

#endif