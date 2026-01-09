/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gevc3dar.h"

#include "adesk.h"
#include "assert.h"
#include "gevec3d.h"

#include "acarray.h"
#ifndef AcGeVector3dArray
#define AcGeVector3dArray GcGeVector3dArray
#endif

#if GE_LOCATED_NEW
#ifndef AcGeGetMetaTypeIndex
#define AcGeGetMetaTypeIndex GcGeGetMetaTypeIndex
#endif

#endif