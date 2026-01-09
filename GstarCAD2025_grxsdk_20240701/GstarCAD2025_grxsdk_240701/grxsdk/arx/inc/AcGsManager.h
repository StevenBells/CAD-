/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/GcGsManager.h"
#include "gs.h" 

#ifndef AcGsManager
#define AcGsManager GcGsManager
#endif

#ifndef createAutoCADModel
#define createAutoCADModel createGscadModel
#endif

#ifndef createAutoCADView
#define createAutoCADView createGscadView
#endif

#ifndef createAutoCADViewport
#define createAutoCADViewport createGscadViewport
#endif

#ifndef destroyAutoCADDevice
#define destroyAutoCADDevice destroyGscadDevice
#endif

#ifndef destroyAutoCADModel
#define destroyAutoCADModel destroyGscadModel
#endif

#ifndef destroyAutoCADView
#define destroyAutoCADView destroyGscadView
#endif

#ifndef appendAcDbEntity
#define appendAcDbEntity appendGcDbEntity
#endif

#ifndef createAutoCADDevice
#define createAutoCADDevice createGscadDevice
#endif

#ifndef createAutoCADOffScreenDevice
#define createAutoCADOffScreenDevice createGscadOffScreenDevice
#endif


#ifndef AcDbViewportTableRecord
#define AcDbViewportTableRecord GcDbViewportTableRecord
#endif

#ifndef AcGiDrawable
#define AcGiDrawable GcGiDrawable
#endif

#ifndef AcGsGraphicsKernel
#define AcGsGraphicsKernel GcGsGraphicsKernel
#endif

#ifndef AcGsKernelDescriptor
#define AcGsKernelDescriptor GcGsKernelDescriptor
#endif

#ifndef AcGsView
#define AcGsView GcGsView
#endif

#ifndef AcGsModel
#define AcGsModel GcGsModel
#endif

#ifndef AcGsDevice
#define AcGsDevice GcGsDevice
#endif

#ifndef AcGsConfig
#define AcGsConfig GcGsConfig
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

