/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbcfilrs.h"
#include "dbfiler.h"

#ifndef AcDbDeepCloneFiler
#define AcDbDeepCloneFiler GcDbDeepCloneFiler
#endif

#ifndef AcDbWblockCloneFiler
#define AcDbWblockCloneFiler GcDbWblockCloneFiler
#endif

#ifndef AcDbSystemInternals
#define AcDbSystemInternals GcDbSystemInternals
#endif

#ifndef readAcDbHandle
#define readAcDbHandle readGcDbHandle
#endif

#ifndef writeAcDbHandle
#define writeAcDbHandle writeGcDbHandle
#endif

#ifndef AcDbImpDeepCloneFiler
#define AcDbImpDeepCloneFiler GcDbImpDeepCloneFiler
#endif
