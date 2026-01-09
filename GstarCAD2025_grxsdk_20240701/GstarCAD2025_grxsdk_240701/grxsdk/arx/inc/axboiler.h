/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gxboiler.h"
#include "adesk.h"  
#include "axobjref.h"

#ifndef IAcadBaseObject
#define IAcadBaseObject IGcadBaseObject
#endif

#ifndef IAcadBaseObject2
#define IAcadBaseObject2 IGcadBaseObject2
#endif

#ifndef IAcadAcCmColor
#define IAcadAcCmColor IGcadGcCmColor
#endif

#ifndef IAcadBaseDatabase
#define IAcadBaseDatabase IGcadBaseDatabase
#endif

#ifndef IAcadAcCmColorAccess
#define IAcadAcCmColorAccess IGcadGcCmColorAccess
#endif

#ifndef IAcadBaseSubEntity
#define IAcadBaseSubEntity IGcadBaseSubEntity
#endif

#ifndef LPACADGCCMCOLORACCESS
#define LPACADGCCMCOLORACCESS LPGCADGCCMCOLORACCESS
#endif

#ifndef LPACADSUBENTITY
#define LPACADSUBENTITY LPGCADSUBENTITY
#endif

#ifndef LPACADBASEDATABASE
#define LPACADBASEDATABASE LPGCADBASEDATABASE
#endif

#ifndef AcAxErase
#define AcAxErase GcAxErase
#endif

#ifndef AcAxSetXData
#define AcAxSetXData GcAxSetXData
#endif

#ifndef AcAxGetXData
#define AcAxGetXData GcAxGetXData
#endif

#ifndef AcAxGetObjectName
#define AcAxGetObjectName GcAxGetObjectName
#endif

#ifndef AcAxGetHandle
#define AcAxGetHandle GcAxGetHandle
#endif

#ifndef AcAxGetColor
#define AcAxGetColor GcAxGetColor
#endif

#ifndef AcAxPutColor
#define AcAxPutColor GcAxPutColor
#endif

#ifndef AcAxGetTrueColor
#define AcAxGetTrueColor GcAxGetTrueColor
#endif

#ifndef AcAxPutTrueColor
#define AcAxPutTrueColor GcAxPutTrueColor
#endif

#ifndef AcAxGetLayer
#define AcAxGetLayer GcAxGetLayer
#endif

#ifndef AcAxPutLayer
#define AcAxPutLayer GcAxPutLayer
#endif

#ifndef AcAxGetLinetype
#define AcAxGetLinetype GcAxGetLinetype
#endif

#ifndef AcAxPutLinetype
#define AcAxPutLinetype GcAxPutLinetype
#endif

#ifndef AcAxGetTransparency
#define AcAxGetTransparency GcAxGetTransparency
#endif

#ifndef AcAxPutTransparency
#define AcAxPutTransparency GcAxPutTransparency
#endif

#ifndef AcAxGetShadowDisplay
#define AcAxGetShadowDisplay GcAxGetShadowDisplay
#endif

#ifndef AcAxPutShadowDisplay
#define AcAxPutShadowDisplay GcAxPutShadowDisplay
#endif

#ifndef AcAxEnableShadowDisplay
#define AcAxEnableShadowDisplay GcAxEnableShadowDisplay
#endif

#ifndef AcAxGetMaterial
#define AcAxGetMaterial GcAxGetMaterial
#endif

#ifndef AcAxPutMaterial
#define AcAxPutMaterial GcAxPutMaterial
#endif

#ifndef AcAxGetLinetypeScale
#define AcAxGetLinetypeScale GcAxGetLinetypeScale
#endif

#ifndef AcAxPutLinetypeScale
#define AcAxPutLinetypeScale GcAxPutLinetypeScale
#endif

#ifndef AcAxGetVisible
#define AcAxGetVisible GcAxGetVisible
#endif

#ifndef AcAxPutVisible
#define AcAxPutVisible GcAxPutVisible
#endif

#ifndef AcAxArrayPolar
#define AcAxArrayPolar GcAxArrayPolar
#endif

#ifndef AcAxArrayRectangular
#define AcAxArrayRectangular GcAxArrayRectangular
#endif

#ifndef AcAxHighlight
#define AcAxHighlight GcAxHighlight
#endif

#ifndef AcAxCopy
#define AcAxCopy GcAxCopy
#endif

#ifndef AcAxMove
#define AcAxMove GcAxMove
#endif

#ifndef AcAxRotate
#define AcAxRotate GcAxRotate
#endif

#ifndef AcAxRotate3D
#define AcAxRotate3D GcAxRotate3D
#endif

#ifndef AcAxMirror
#define AcAxMirror GcAxMirror
#endif

#ifndef AcAxMirror3D
#define AcAxMirror3D GcAxMirror3D
#endif

#ifndef AcAxScaleEntity
#define AcAxScaleEntity GcAxScaleEntity
#endif

#ifndef AcAxTransformBy
#define AcAxTransformBy GcAxTransformBy
#endif

#ifndef AcAxUpdate
#define AcAxUpdate GcAxUpdate
#endif

#ifndef AcAxGetBoundingBox
#define AcAxGetBoundingBox GcAxGetBoundingBox
#endif

#ifndef AcAxIntersectWith
#define AcAxIntersectWith GcAxIntersectWith
#endif

#ifndef AcAxGetPlotStyleName
#define AcAxGetPlotStyleName GcAxGetPlotStyleName
#endif

#ifndef AcAxPutPlotStyleName
#define AcAxPutPlotStyleName GcAxPutPlotStyleName
#endif

#ifndef AcAxGetLineWeight
#define AcAxGetLineWeight GcAxGetLineWeight
#endif

#ifndef AcAxPutLineWeight
#define AcAxPutLineWeight GcAxPutLineWeight
#endif

#ifndef AcAxGetHyperlinks
#define AcAxGetHyperlinks GcAxGetHyperlinks
#endif

#ifndef AcAxHasExtensionDictionary
#define AcAxHasExtensionDictionary GcAxHasExtensionDictionary
#endif

#ifndef AcAxGetExtensionDictionary
#define AcAxGetExtensionDictionary GcAxGetExtensionDictionary
#endif

#ifndef AcAxGetDatabase
#define AcAxGetDatabase GcAxGetDatabase
#endif

#ifndef AcAxGetOwnerId
#define AcAxGetOwnerId GcAxGetOwnerId
#endif

#ifndef AcAxGetObjectId32
#define AcAxGetObjectId32 GcAxGetObjectId32
#endif

#ifndef AcAxGetObjectId64
#define AcAxGetObjectId64 GcAxGetObjectId64
#endif

#ifndef AaiseAcAXException
#define AaiseAcAXException RaiseGcAXException
#endif

#ifndef AaiseArxException
#define AaiseArxException RaiseGrxException
#endif

#ifndef AcAxGetIUnknownOfObject
#define AcAxGetIUnknownOfObject GcAxGetIUnknownOfObject
#endif

#ifndef AcAxGetIUnknownOfObject
#define AcAxGetIUnknownOfObject GcAxGetIUnknownOfObject
#endif

#ifndef AcAxErase
#define AcAxErase GcAxErase
#endif

#ifndef AcAxSetXData
#define AcAxSetXData GcAxSetXData
#endif

#ifndef AcAxGetXData
#define AcAxGetXData GcAxGetXData
#endif

#ifndef AcAxGetObjectName
#define AcAxGetObjectName GcAxGetObjectName
#endif

#ifndef AcAxGetHandle
#define AcAxGetHandle GcAxGetHandle
#endif

#ifndef AcAxGetColor
#define AcAxGetColor GcAxGetColor
#endif

#ifndef AcAxPutColor
#define AcAxPutColor GcAxPutColor
#endif

#ifndef AcAxGetTrueColor
#define AcAxGetTrueColor GcAxGetTrueColor
#endif

#ifndef AcAxPutTrueColor
#define AcAxPutTrueColor GcAxPutTrueColor
#endif

#ifndef AcAxGetLayer
#define AcAxGetLayer GcAxGetLayer
#endif

#ifndef AcAxPutLayer
#define AcAxPutLayer GcAxPutLayer
#endif

#ifndef AcAxGetLinetype
#define AcAxGetLinetype GcAxGetLinetype
#endif

#ifndef AcAxPutLinetype
#define AcAxPutLinetype GcAxPutLinetype
#endif

#ifndef AcAxGetTransparency
#define AcAxGetTransparency GcAxGetTransparency
#endif

#ifndef AcAxPutTransparency
#define AcAxPutTransparency GcAxPutTransparency
#endif

#ifndef AcAxGetMaterial
#define AcAxGetMaterial GcAxGetMaterial
#endif

#ifndef AcAxPutMaterial
#define AcAxPutMaterial GcAxPutMaterial
#endif

#ifndef AcAxGetLinetypeScale
#define AcAxGetLinetypeScale GcAxGetLinetypeScale
#endif

#ifndef AcAxPutLinetypeScale
#define AcAxPutLinetypeScale GcAxPutLinetypeScale
#endif

#ifndef AcAxGetShadowDisplay
#define AcAxGetShadowDisplay GcAxGetShadowDisplay
#endif

#ifndef AcAxPutShadowDisplay
#define AcAxPutShadowDisplay GcAxPutShadowDisplay
#endif

#ifndef AcAxEnableShadowDisplay
#define AcAxEnableShadowDisplay GcAxEnableShadowDisplay
#endif

#ifndef AcAxGetVisible
#define AcAxGetVisible GcAxGetVisible
#endif

#ifndef AcAxPutVisible
#define AcAxPutVisible GcAxPutVisible
#endif

#ifndef AcAxArrayPolar
#define AcAxArrayPolar GcAxArrayPolar
#endif

#ifndef AcAxArrayRectangular
#define AcAxArrayRectangular GcAxArrayRectangular
#endif

#ifndef AcAxHighlight
#define AcAxHighlight GcAxHighlight
#endif

#ifndef AcAxCopy
#define AcAxCopy GcAxCopy
#endif

#ifndef AcAxMove
#define AcAxMove GcAxMove
#endif

#ifndef AcAxRotate
#define AcAxRotate GcAxRotate
#endif

#ifndef AcAxRotate3D
#define AcAxRotate3D GcAxRotate3D
#endif

#ifndef AcAxMirror
#define AcAxMirror GcAxMirror
#endif

#ifndef AcAxMirror3D
#define AcAxMirror3D GcAxMirror3D
#endif

#ifndef AcAxScaleEntity
#define AcAxScaleEntity GcAxScaleEntity
#endif

#ifndef AcAxTransformBy
#define AcAxTransformBy GcAxTransformBy
#endif

#ifndef AcAxUpdate
#define AcAxUpdate GcAxUpdate
#endif

#ifndef AcAxGetBoundingBox
#define AcAxGetBoundingBox GcAxGetBoundingBox
#endif

#ifndef AcAxIntersectWith
#define AcAxIntersectWith GcAxIntersectWith
#endif

#ifndef AcAxGetPlotStyleName
#define AcAxGetPlotStyleName GcAxGetPlotStyleName
#endif

#ifndef AcAxPutPlotStyleName
#define AcAxPutPlotStyleName GcAxPutPlotStyleName
#endif

#ifndef AcAxGetLineWeight
#define AcAxGetLineWeight GcAxGetLineWeight
#endif

#ifndef AcAxPutLineWeight
#define AcAxPutLineWeight GcAxPutLineWeight
#endif

#ifndef AcAxGetHyperlinks
#define AcAxGetHyperlinks GcAxGetHyperlinks
#endif

#ifndef AcAxHasExtensionDictionary
#define AcAxHasExtensionDictionary GcAxHasExtensionDictionary
#endif

#ifndef AcAxGetExtensionDictionary
#define AcAxGetExtensionDictionary GcAxGetExtensionDictionary
#endif

#ifndef AcAxGetOwnerId
#define AcAxGetOwnerId GcAxGetOwnerId
#endif

#ifndef AcAxGet_UIsolineDensity
#define AcAxGet_UIsolineDensity GcAxGet_UIsolineDensity
#endif

#ifndef AcAxPut_UIsolineDensity
#define AcAxPut_UIsolineDensity GcAxPut_UIsolineDensity
#endif

#ifndef AcAxGet_VIsolineDensity
#define AcAxGet_VIsolineDensity GcAxGet_VIsolineDensity
#endif

#ifndef AcAxPut_VIsolineDensity
#define AcAxPut_VIsolineDensity GcAxPut_VIsolineDensity
#endif

#ifndef AcAxGet_WireframeType
#define AcAxGet_WireframeType GcAxGet_WireframeType
#endif

#ifndef AcAxPut_WireframeType
#define AcAxPut_WireframeType GcAxPut_WireframeType
#endif

#ifndef AcAxGetMaintainAssociativity
#define AcAxGetMaintainAssociativity GcAxGetMaintainAssociativity
#endif

#ifndef AcAxPutMaintainAssociativity
#define AcAxPutMaintainAssociativity GcAxPutMaintainAssociativity
#endif

#ifndef AcAxGetShowAssociativity
#define AcAxGetShowAssociativity GcAxGetShowAssociativity
#endif

#ifndef AcAxPutShowAssociativity
#define AcAxPutShowAssociativity GcAxPutShowAssociativity
#endif

#ifndef AcAxGetEdgeExtensionDistances
#define AcAxGetEdgeExtensionDistances GcAxGetEdgeExtensionDistances
#endif

#ifndef AcAxPutEdgeExtensionDistances
#define AcAxPutEdgeExtensionDistances GcAxPutEdgeExtensionDistances
#endif

#ifndef AcAxGetSurfTrimAssociativity
#define AcAxGetSurfTrimAssociativity GcAxGetSurfTrimAssociativity
#endif

#ifndef AcAxPutSurfTrimAssociativity
#define AcAxPutSurfTrimAssociativity GcAxPutSurfTrimAssociativity
#endif

