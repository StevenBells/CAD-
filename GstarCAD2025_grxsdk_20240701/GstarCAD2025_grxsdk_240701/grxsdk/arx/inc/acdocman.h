/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcdocman.h"
#include "adesk.h"
#include "accoredefs.h"
#include "acdb.h"
#include "acadstrc.h"    
#include "AcApDocLockmode.h"


#ifndef AcTransactionManager
#define AcTransactionManager GcTransactionManager
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcEdInputPointManager
#define AcEdInputPointManager GcEdInputPointManager
#endif

#ifndef AcApStatusBar
#define AcApStatusBar GcApStatusBar
#endif

#ifndef AcApPlotReactor
#define AcApPlotReactor GcApPlotReactor
#endif

#ifndef AcRxIterator
#define AcRxIterator GcRxIterator
#endif


#ifndef AcApDocument
#define AcApDocument GcApDocument
#endif

#ifndef acedUpgradeDocOpen
#define acedUpgradeDocOpen gcedUpgradeDocOpen
#endif

#ifndef acedDowngradeDocOpen
#define acedDowngradeDocOpen gcedDowngradeDocOpen
#endif

#ifndef AcApDocManagerReactor
#define AcApDocManagerReactor GcApDocManagerReactor
#endif

#ifndef AcApDocumentIterator
#define AcApDocumentIterator GcApDocumentIterator
#endif

#ifndef AcApDocManager
#define AcApDocManager GcApDocManager
#endif

#ifndef acDocManagerPtr
#define acDocManagerPtr gcDocManagerPtr
#endif

#ifndef AcLispAppInfo
#define AcLispAppInfo GcLispAppInfo
#endif

#ifndef AcApView
#define AcApView GcApView
#endif

#ifndef newAcApDocumentIterator
#define newAcApDocumentIterator newGcApDocumentIterator
#endif

#ifndef pushAcadResourceHandle
#define pushAcadResourceHandle pushGcadResourceHandle
#endif

#ifndef IAcApDocumentHost
#define IAcApDocumentHost IGcApDocumentHost
#endif

#ifndef IAcApDocManagerHost
#define IAcApDocManagerHost IGcApDocManagerHost
#endif

#ifndef AcApCommandLineEditor
#define AcApCommandLineEditor GcApCommandLineEditor
#endif

#ifndef acDocManager
#define acDocManager gcDocManager
#endif
