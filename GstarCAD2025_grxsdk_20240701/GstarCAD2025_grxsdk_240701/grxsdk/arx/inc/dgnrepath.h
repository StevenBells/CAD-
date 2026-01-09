/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dgnrepath.h"
#include "AcString.h"
#include "acadstrc.h"

#ifndef ACHAR
#define ACHAR GCHAR
#endif

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcString
#define AcString GcString
#endif

#ifndef AcStringArray
#define AcStringArray GcStringArray
#endif

#ifndef AcDgnRefFileId
#define AcDgnRefFileId GcDgnRefFileId
#endif

#ifndef AcDbDgnRefFileData
#define AcDbDgnRefFileData GcDbDgnRefFileData
#endif

#ifndef AcDbDgnRefFileRepath
#define AcDbDgnRefFileRepath GcDbDgnRefFileRepath
#endif

#ifndef AcDbRefFileDataPtrArray
#define AcDbRefFileDataPtrArray GcDbRefFileDataPtrArray
#endif

#ifndef AcDbDgnRefFileIdArray
#define AcDbDgnRefFileIdArray GcDbDgnRefFileIdArray
#endif

#ifndef acdbGetDgnFileReferences
#define acdbGetDgnFileReferences gcdbGetDgnFileReferences
#endif
