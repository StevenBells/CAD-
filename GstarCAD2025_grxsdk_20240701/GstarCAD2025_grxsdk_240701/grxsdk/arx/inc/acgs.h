/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcgs.h"
#include "adesk.h"
#include "acdb.h"
#include "stdlib.h"
#include "AdAChar.h"
#include "acgitransient.h"
#include "accoredefs.h"
#include "acgidefs.h"


#ifndef acgsGetDisplayInfo
#define acgsGetDisplayInfo gcgsGetDisplayInfo
#endif

#ifndef acgsGetViewportInfo
#define acgsGetViewportInfo gcgsGetViewportInfo
#endif

#ifndef AcGsScreenShot
#define AcGsScreenShot GcGsScreenShot
#endif

#ifndef acgsGetScreenShot
#define acgsGetScreenShot gcgsGetScreenShot
#endif

#ifndef acgsSetViewportRenderFlag
#define acgsSetViewportRenderFlag gcgsSetViewportRenderFlag
#endif

#ifndef acgsDisplayImage
#define acgsDisplayImage gcgsDisplayImage
#endif

#ifndef acgsRemoveAnonymousGraphics
#define acgsRemoveAnonymousGraphics gcgsRemoveAnonymousGraphics
#endif

#ifndef acgsCustomUpdateMethod
#define acgsCustomUpdateMethod gcgsCustomUpdateMethod
#endif

#ifndef acgsSetCustomUpdateMethod
#define acgsSetCustomUpdateMethod gcgsSetCustomUpdateMethod
#endif

#ifndef acgsRedrawShortTermGraphics
#define acgsRedrawShortTermGraphics gcgsRedrawShortTermGraphics
#endif

#ifndef AcGs
#define AcGs GcGs
#endif

#ifndef acgsSetHighlightColor
#define acgsSetHighlightColor gcgsSetHighlightColor
#endif

#ifndef acgsGetHighlightColor
#define acgsGetHighlightColor gcgsGetHighlightColor
#endif

#ifndef acgsSetHighlightLinePattern
#define acgsSetHighlightLinePattern gcgsSetHighlightLinePattern
#endif

#ifndef acgsGetHighlightLinePattern
#define acgsGetHighlightLinePattern gcgsGetHighlightLinePattern
#endif

#ifndef acgsSetHighlightLineWeight
#define acgsSetHighlightLineWeight gcgsSetHighlightLineWeight
#endif

#ifndef acgsGetHighlightLineWeight
#define acgsGetHighlightLineWeight gcgsGetHighlightLineWeight
#endif

#ifndef acgsSetHighlightStyle
#define acgsSetHighlightStyle gcgsSetHighlightStyle
#endif

#ifndef acgsGetHighlightStyle
#define acgsGetHighlightStyle gcgsGetHighlightStyle
#endif

#ifndef acgsSetViewParameters
#define acgsSetViewParameters gcgsSetViewParameters
#endif

#ifndef acgsGetViewParameters
#define acgsGetViewParameters gcgsGetViewParameters
#endif

#ifndef acgsSetLensLength
#define acgsSetLensLength gcgsSetLensLength
#endif

#ifndef acgsGetLensLength
#define acgsGetLensLength gcgsGetLensLength
#endif

#ifndef acgsWriteViewToUndoController
#define acgsWriteViewToUndoController gcgsWriteViewToUndoController
#endif

#ifndef acgsSetView2D
#define acgsSetView2D gcgsSetView2D
#endif

#ifndef acgsGetCurrentGcGsView
#define acgsGetCurrentGcGsView gcgsGetCurrentGcGsView
#endif

#ifndef acgsGetCurrent3dGcGsView
#define acgsGetCurrent3dGcGsView gcgsGetCurrent3dGcGsView
#endif

#ifndef acgsObtainGcGsView
#define acgsObtainGcGsView gcgsObtainGcGsView
#endif

#ifndef acgsGetGsModel
#define acgsGetGsModel gcgsGetGsModel
#endif

#ifndef acgsGetGsManager
#define acgsGetGsManager gcgsGetGsManager
#endif

#ifndef acgsGetCurrentGsManager
#define acgsGetCurrentGsManager gcgsGetCurrentGsManager
#endif

#ifndef acgsGetOrthoViewParameters
#define acgsGetOrthoViewParameters gcgsGetOrthoViewParameters
#endif

#ifndef AcGs2DViewLimitManager
#define AcGs2DViewLimitManager GcGs2DViewLimitManager
#endif

#ifndef acgsCreate2DViewLimitManager
#define acgsCreate2DViewLimitManager gcgsCreate2DViewLimitManager
#endif

#ifndef acgsDestroy2DViewLimitManager
#define acgsDestroy2DViewLimitManager gcgsDestroy2DViewLimitManager
#endif

#ifndef acgsDrawableModified
#define acgsDrawableModified gcgsDrawableModified
#endif

#ifndef acgsDrawableErased
#define acgsDrawableErased gcgsDrawableErased
#endif

#ifndef acgsDrawableCached
#define acgsDrawableCached gcgsDrawableCached
#endif

#ifndef acgsGetGsHighlightModel
#define acgsGetGsHighlightModel gcgsGetGsHighlightModel
#endif

#ifndef acgsSetGsModel
#define acgsSetGsModel gcgsSetGsModel
#endif

#ifndef acgsSetGsHighlightModel
#define acgsSetGsHighlightModel gcgsSetGsHighlightModel
#endif

#ifndef acgsGetCurrent3dAcGsView
#define acgsGetCurrent3dAcGsView gcgsGetCurrent3dGcGsView
#endif

#ifndef acgsGetCurrentAcGsView
#define acgsGetCurrentAcGsView gcgsGetCurrentGcGsView
#endif

#ifndef acgsObtainAcGsView
#define acgsObtainAcGsView gcgsObtainGcGsView
#endif


#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcGiDrawable
#define AcGiDrawable GcGiDrawable
#endif

#ifndef AcGsModel
#define AcGsModel GcGsModel
#endif

#ifndef AcGsManager
#define AcGsManager GcGsManager
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif



#ifndef acgsSetLineWeightDisplay
#define acgsSetLineWeightDisplay gcgsSetLineWeightDisplay
#endif
