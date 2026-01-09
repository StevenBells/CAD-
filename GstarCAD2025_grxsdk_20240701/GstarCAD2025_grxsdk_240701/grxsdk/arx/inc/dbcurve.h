/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbcurve.h"
#include "dbmain.h"
#include "gept3dar.h"
#include "gedblar.h"
#include "geplane.h"
#include "dbptrar.h"

#ifndef AcDbCurve
#define AcDbCurve GcDbCurve
#endif

#ifndef createFromAcGeCurve
#define createFromAcGeCurve createFromGcGeCurve
#endif

#ifndef setFromAcGeCurve
#define setFromAcGeCurve setFromGcGeCurve
#endif

#ifndef getAcGeCurve
#define getAcGeCurve getGcGeCurve
#endif

#ifndef AcDbSpline
#define AcDbSpline GcDbSpline
#endif
