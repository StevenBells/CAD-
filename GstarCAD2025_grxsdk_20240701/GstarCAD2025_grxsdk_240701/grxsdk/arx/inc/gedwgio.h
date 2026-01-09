/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gedwgio.h"
#include "gefileio.h"
#include "gelibver.h"

#ifndef AcGeDwgIO
#define AcGeDwgIO GcGeDwgIO
#endif

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcDbDwgFiler
#define AcDbDwgFiler GcDbDwgFiler
#endif

#ifndef AcGePoint2d
#define AcGePoint2d GcGePoint2d
#endif

#ifndef AcGeVector2d
#define AcGeVector2d GcGeVector2d
#endif

#ifndef AcGeMatrix2d
#define AcGeMatrix2d GcGeMatrix2d
#endif

#ifndef AcGeScale2d
#define AcGeScale2d GcGeScale2d
#endif

#ifndef AcGePoint2dArray
#define AcGePoint2dArray GcGePoint2dArray
#endif

#ifndef AcGeVector2dArray
#define AcGeVector2dArray GcGeVector2dArray
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGeMatrix3d
#define AcGeMatrix3d GcGeMatrix3d
#endif

#ifndef AcGeScale3d
#define AcGeScale3d GcGeScale3d
#endif

#ifndef AcGePoint3dArray
#define AcGePoint3dArray GcGePoint3dArray
#endif

#ifndef AcGeVector3dArray
#define AcGeVector3dArray GcGeVector3dArray
#endif

#ifndef AcGeTol
#define AcGeTol GcGeTol
#endif

#ifndef AcGeInterval
#define AcGeInterval GcGeInterval
#endif

#ifndef AcGeKnotVector
#define AcGeKnotVector GcGeKnotVector
#endif

#ifndef AcGeDoubleArray
#define AcGeDoubleArray GcGeDoubleArray
#endif

#ifndef AcGeIntArray
#define AcGeIntArray GcGeIntArray
#endif

#ifndef AcGeCurveBoundary
#define AcGeCurveBoundary GcGeCurveBoundary
#endif

#ifndef AcGePosition2d
#define AcGePosition2d GcGePosition2d
#endif

#ifndef AcGePointOnCurve2d
#define AcGePointOnCurve2d GcGePointOnCurve2d
#endif

#ifndef AcGeLine2d
#define AcGeLine2d GcGeLine2d
#endif

#ifndef AcGeLineSeg2d
#define AcGeLineSeg2d GcGeLineSeg2d
#endif

#ifndef AcGeRay2d
#define AcGeRay2d GcGeRay2d
#endif

#ifndef AcGeCircArc2d
#define AcGeCircArc2d GcGeCircArc2d
#endif

#ifndef AcGeEllipArc2d
#define AcGeEllipArc2d GcGeEllipArc2d
#endif

#ifndef AcGeExternalCurve2d
#define AcGeExternalCurve2d GcGeExternalCurve2d
#endif

#ifndef AcGeCubicSplineCurve2d
#define AcGeCubicSplineCurve2d GcGeCubicSplineCurve2d
#endif

#ifndef AcGeNurbCurve2d
#define AcGeNurbCurve2d GcGeNurbCurve2d
#endif

#ifndef AcGeCompositeCurve2d
#define AcGeCompositeCurve2d GcGeCompositeCurve2d
#endif

#ifndef AcGeOffsetCurve2d
#define AcGeOffsetCurve2d GcGeOffsetCurve2d
#endif

#ifndef AcGePolyline2d
#define AcGePolyline2d GcGePolyline2d
#endif

#ifndef AcGePosition3d
#define AcGePosition3d GcGePosition3d
#endif

#ifndef AcGePointOnCurve3d
#define AcGePointOnCurve3d GcGePointOnCurve3d
#endif

#ifndef AcGePointOnSurface
#define AcGePointOnSurface GcGePointOnSurface
#endif

#ifndef AcGeLine3d
#define AcGeLine3d GcGeLine3d
#endif

#ifndef AcGeRay3d
#define AcGeRay3d GcGeRay3d
#endif

#ifndef AcGeLineSeg3d
#define AcGeLineSeg3d GcGeLineSeg3d
#endif

#ifndef AcGePlane
#define AcGePlane GcGePlane
#endif

#ifndef AcGeBoundedPlane
#define AcGeBoundedPlane GcGeBoundedPlane
#endif

#ifndef AcGeCircArc3d
#define AcGeCircArc3d GcGeCircArc3d
#endif

#ifndef AcGeEllipArc3d
#define AcGeEllipArc3d GcGeEllipArc3d
#endif

#ifndef AcGeCubicSplineCurve3d
#define AcGeCubicSplineCurve3d GcGeCubicSplineCurve3d
#endif

#ifndef AcGeNurbCurve3d
#define AcGeNurbCurve3d GcGeNurbCurve3d
#endif

#ifndef AcGeOffsetCurve3d
#define AcGeOffsetCurve3d GcGeOffsetCurve3d
#endif

#ifndef AcGePolyline3d
#define AcGePolyline3d GcGePolyline3d
#endif

#ifndef AcGeAugPolyline3d
#define AcGeAugPolyline3d GcGeAugPolyline3d
#endif

#ifndef AcGeExternalCurve3d
#define AcGeExternalCurve3d GcGeExternalCurve3d
#endif

#ifndef AcGeCone
#define AcGeCone GcGeCone
#endif

#ifndef AcGeCylinder
#define AcGeCylinder GcGeCylinder
#endif

#ifndef AcGeTorus
#define AcGeTorus GcGeTorus
#endif

#ifndef AcGeExternalSurface
#define AcGeExternalSurface GcGeExternalSurface
#endif

#ifndef AcGeOffsetSurface
#define AcGeOffsetSurface GcGeOffsetSurface
#endif

#ifndef AcGeNurbSurface
#define AcGeNurbSurface GcGeNurbSurface
#endif

#ifndef AcGeExternalBoundedSurface
#define AcGeExternalBoundedSurface GcGeExternalBoundedSurface
#endif

#ifndef AcGeSphere
#define AcGeSphere GcGeSphere
#endif

#ifndef AcGeBoundBlock2d
#define AcGeBoundBlock2d GcGeBoundBlock2d
#endif

#ifndef AcGeBoundBlock3d
#define AcGeBoundBlock3d GcGeBoundBlock3d
#endif

#ifndef AcGeCurveCurveInt2d
#define AcGeCurveCurveInt2d GcGeCurveCurveInt2d
#endif

#ifndef AcGeEllipCone
#define AcGeEllipCone GcGeEllipCone
#endif


