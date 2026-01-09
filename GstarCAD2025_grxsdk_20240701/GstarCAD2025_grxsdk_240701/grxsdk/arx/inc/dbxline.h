/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbxline.h"
#include "dbmain.h"
#include "dbcurve.h"

#ifndef Acad
#define Acad Gcad
#endif

#ifndef Adesk
#define Adesk Gsoft
#endif

#ifndef AcRxObject
#define AcRxObject GcRxObject
#endif

#ifndef AcDbXline
#define AcDbXline GcDbXline
#endif

#ifndef AcDbSpline
#define AcDbSpline GcDbSpline
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcDbVoidPtrArray
#define AcDbVoidPtrArray GcDbVoidPtrArray
#endif

#ifndef ACDB_DECLARE_MEMBERS
#define ACDB_DECLARE_MEMBERS GCDB_DECLARE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif
