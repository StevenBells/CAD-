/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbacis.h"
#include "acdb.h"
#include "acadstrc.h"
#include "acarray.h"
#include "acdbport.h"

#ifndef acdbModelerStart
#define acdbModelerStart gcdbModelerStart
#endif

#ifndef acdbModelerEnd
#define acdbModelerEnd gcdbModelerEnd
#endif

#ifndef acdbIsModelerStarted
#define acdbIsModelerStarted gcdbIsModelerStarted
#endif

#ifndef acdbGetModelerDwgVer
#define acdbGetModelerDwgVer gcdbGetModelerDwgVer
#endif

#ifndef acdbModelerSaveEntityToDwgFiler
#define acdbModelerSaveEntityToDwgFiler gcdbModelerSaveEntityToDwgFiler
#endif

#ifndef acdbModelerSaveEntitiesToDwgFiler
#define acdbModelerSaveEntitiesToDwgFiler gcdbModelerSaveEntitiesToDwgFiler
#endif

#ifndef acdbModelerSaveEntityToDxfFiler
#define acdbModelerSaveEntityToDxfFiler gcdbModelerSaveEntityToDxfFiler
#endif

#ifndef acdbModelerSaveEntitiesToDxfFiler
#define acdbModelerSaveEntitiesToDxfFiler gcdbModelerSaveEntitiesToDxfFiler
#endif

#ifndef acdbModelerRestoreEntityFromDwgFiler
#define acdbModelerRestoreEntityFromDwgFiler gcdbModelerRestoreEntityFromDwgFiler
#endif

#ifndef acdbModelerRestoreEntitiesFromDwgFiler
#define acdbModelerRestoreEntitiesFromDwgFiler gcdbModelerRestoreEntitiesFromDwgFiler
#endif

#ifndef acdbModelerRestoreEntityFromDxfFiler
#define acdbModelerRestoreEntityFromDxfFiler gcdbModelerRestoreEntityFromDxfFiler
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcDbDwgFiler
#define AcDbDwgFiler GcDbDwgFiler
#endif

#ifndef AcDbDxfFiler
#define AcDbDxfFiler GcDbDxfFiler
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

