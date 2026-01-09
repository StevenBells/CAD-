/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbspline.h"
#include "gegbl.h"
#include "dbmain.h"
#include "dbcurve.h"
#include "gekvec.h"

#ifndef ACDB_DECLARE_MEMBERS
#define ACDB_DECLARE_MEMBERS GCDB_DECLARE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif

#ifndef AcGe
#define AcGe GcGe
#endif

#ifndef Acad
#define Acad Gcad
#endif

#ifndef Adesk
#define Adesk Gsoft
#endif

#ifndef AcDbCurve
#define AcDbCurve GcDbCurve
#endif

#ifndef AcDbSpline
#define AcDbSpline GcDbSpline
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGePoint3dArray
#define AcGePoint3dArray GcGePoint3dArray
#endif

#ifndef AcGeDoubleArray
#define AcGeDoubleArray GcGeDoubleArray
#endif

#ifndef AcGeKnotVector
#define AcGeKnotVector GcGeKnotVector
#endif

#ifndef AcDbVoidPtrArray
#define AcDbVoidPtrArray GcDbVoidPtrArray
#endif

#ifndef AcDb2dPolyline
#define AcDb2dPolyline GcDb2dPolyline
#endif
