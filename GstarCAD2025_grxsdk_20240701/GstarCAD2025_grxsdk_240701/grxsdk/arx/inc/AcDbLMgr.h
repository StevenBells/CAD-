/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/GcDbLMgr.h"
#include "adesk.h"
#include "dbid.h"
#include "dblayout.h"
#include "dblaymgrrctr.h"

#ifndef AcDbObjectId
#define AcDbObjectId GcDbObjectId
#endif

#ifndef AcDbLayoutManager
#define AcDbLayoutManager GcDbLayoutManager
#endif

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef acdbClearSetupForLayouts
#define acdbClearSetupForLayouts gcdbClearSetupForLayouts
#endif

#ifndef acdbDoSetupForLayouts
#define acdbDoSetupForLayouts gcdbDoSetupForLayouts
#endif
