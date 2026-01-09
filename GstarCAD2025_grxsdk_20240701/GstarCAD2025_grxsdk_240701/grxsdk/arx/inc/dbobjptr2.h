/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbobjptr2.h"
#include "dbobjptr.h"

#ifndef accessAcDbObjectForRead
#define accessAcDbObjectForRead accessGcDbObjectForRead
#endif

#ifndef ReadableAcDbObject
#define ReadableAcDbObject ReadableGcDbObject
#endif

#ifndef accessAcDbObjectForWrite
#define accessAcDbObjectForWrite accessGcDbObjectForWrite
#endif

#ifndef revertAcDbObjectFromWrite
#define revertAcDbObjectFromWrite revertGcDbObjectFromWrite
#endif

#ifndef WritableAcDbObject
#define WritableAcDbObject WritableGcDbObject
#endif

#ifndef AcDbSmartObjectPointer
#define AcDbSmartObjectPointer GcDbSmartObjectPointer
#endif

