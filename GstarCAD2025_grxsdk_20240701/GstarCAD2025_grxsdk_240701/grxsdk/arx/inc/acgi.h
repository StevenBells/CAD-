/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcgi.h"
#include "adesk.h"
#include "acgidefs.h"   

#include "rxobject.h"
#include "AdAChar.h"
#include "dbpl.h"
#include "gemat3d.h"
#include "gemat2d.h"
#include "gepnt2d.h"
#include "dbcolor.h"
#include "acdb.h"
#include "AcGiStyleAttributes.h"
#include "assert.h"
#include "acgiparameter.h"
#include "PAL/api/charset.h"
#include "PAL/api/FontPitchAndFamily.h"

#ifndef ACGI_SERVICES
#define ACGI_SERVICES GCGI_SERVICES
#endif

#ifndef AcGiSentScanLines
#define AcGiSentScanLines GcGiSentScanLines
#endif

#ifndef AcGiRequestScanLines
#define AcGiRequestScanLines GcGiRequestScanLines
#endif

#ifndef AcGiClipBoundary
#define AcGiClipBoundary GcGiClipBoundary
#endif

#ifndef AcGiColorIntensity
#define AcGiColorIntensity GcGiColorIntensity
#endif

#ifndef AcGiColorRGB
#define AcGiColorRGB GcGiColorRGB
#endif

#ifndef AcGiColorRGBA
#define AcGiColorRGBA GcGiColorRGBA
#endif

#ifndef AcGiPixelBGRA32
#define AcGiPixelBGRA32 GcGiPixelBGRA32
#endif

#ifndef AcGiImageBGRA32
#define AcGiImageBGRA32 GcGiImageBGRA32
#endif

#ifndef AcGiSubEntityTraits
#define AcGiSubEntityTraits GcGiSubEntityTraits
#endif

#ifndef AcGiDrawableTraits
#define AcGiDrawableTraits GcGiDrawableTraits
#endif

#ifndef AcGiSubEntityTraitsImp
#define AcGiSubEntityTraitsImp GcGiSubEntityTraitsImp
#endif

#ifndef AcGiWorldGeometry
#define AcGiWorldGeometry GcGiWorldGeometry
#endif

#ifndef AcGiViewport
#define AcGiViewport GcGiViewport
#endif

#ifndef AcGiViewportGeometry
#define AcGiViewportGeometry GcGiViewportGeometry
#endif

#ifndef AcGiImpEdgeData
#define AcGiImpEdgeData GcGiImpEdgeData
#endif

#ifndef AcGiImpFaceData
#define AcGiImpFaceData GcGiImpFaceData
#endif

#ifndef AcGiImpVertexData
#define AcGiImpVertexData GcGiImpVertexData
#endif

#ifndef AcGiImpTextStyle
#define AcGiImpTextStyle GcGiImpTextStyle
#endif

#ifndef AcGiImpPolyline
#define AcGiImpPolyline GcGiImpPolyline
#endif

#ifndef AcGiTextStyle
#define AcGiTextStyle GcGiTextStyle
#endif

#ifndef AcGiEdgeData
#define AcGiEdgeData GcGiEdgeData
#endif

#ifndef AcGiFaceData
#define AcGiFaceData GcGiFaceData
#endif

#ifndef AcGiVertexData
#define AcGiVertexData GcGiVertexData
#endif

#ifndef AcGiImpVariant
#define AcGiImpVariant GcGiImpVariant
#endif

#ifndef AcGiVariant
#define AcGiVariant GcGiVariant
#endif

#ifndef AcGiContextImp
#define AcGiContextImp GcGiContextImp
#endif

#ifndef AcGiContext
#define AcGiContext GcGiContext
#endif

#ifndef AcGiCommonDraw
#define AcGiCommonDraw GcGiCommonDraw
#endif

#ifndef AcGiGeometry
#define AcGiGeometry GcGiGeometry
#endif

#ifndef AcCmEntityColor
#define AcCmEntityColor GcCmEntityColor
#endif

#ifndef AcGiMapper
#define AcGiMapper GcGiMapper
#endif

#ifndef AcGiViewportTraits
#define AcGiViewportTraits GcGiViewportTraits
#endif

#ifndef AcGiVisualStyleTraits
#define AcGiVisualStyleTraits GcGiVisualStyleTraits
#endif

#ifndef AcGiContextualColors
#define AcGiContextualColors GcGiContextualColors
#endif

#ifndef AcGiGdiDrawObject
#define AcGiGdiDrawObject GcGiGdiDrawObject
#endif

#ifndef AcGiImpHatchPatternDefinition
#define AcGiImpHatchPatternDefinition GcGiImpHatchPatternDefinition
#endif

#ifndef AcGiImpHatchPattern
#define AcGiImpHatchPattern GcGiImpHatchPattern
#endif

#ifndef AcGiFill
#define AcGiFill GcGiFill
#endif

#ifndef AcGiImpFill
#define AcGiImpFill GcGiImpFill
#endif

#ifndef AcGiImpGradientFill
#define AcGiImpGradientFill GcGiImpGradientFill
#endif

#ifndef AcUniqueString
#define AcUniqueString GcUniqueString
#endif

#ifndef AcFontHandle
#define AcFontHandle GcFontHandle
#endif

#ifndef AcGiWorldSegmentCallback
#define AcGiWorldSegmentCallback GcGiWorldSegmentCallback
#endif

#ifndef acgiIsValidClipBoundary
#define acgiIsValidClipBoundary gcgiIsValidClipBoundary
#endif

#ifndef acgiGetRegenBlockRefStack
#define acgiGetRegenBlockRefStack gcgiGetRegenBlockRefStack
#endif

#ifndef AcGiVariant
#define AcGiVariant GcGiVariant
#endif

#ifndef AcGiKernelDescriptor
#define AcGiKernelDescriptor GcGiKernelDescriptor
#endif

#ifndef AcGiGraphicsKernel
#define AcGiGraphicsKernel GcGiGraphicsKernel
#endif

#ifndef AcGiContext
#define AcGiContext GcGiContext
#endif

#ifndef AcGiCommonDraw
#define AcGiCommonDraw GcGiCommonDraw
#endif

#ifndef AcGiWorldDraw
#define AcGiWorldDraw GcGiWorldDraw
#endif

#ifndef AcGiViewportDraw
#define AcGiViewportDraw GcGiViewportDraw
#endif

#ifndef AcGiViewport
#define AcGiViewport GcGiViewport
#endif

#ifndef AcGiContextualColors
#define AcGiContextualColors GcGiContextualColors
#endif

#ifndef AcGiContextualColors2
#define AcGiContextualColors2 GcGiContextualColors2
#endif

#ifndef AcGiSelectionMarkerACADReserveStart
#define AcGiSelectionMarkerACADReserveStart GcGiSelectionMarkerGCADReserveStart
#endif

#ifndef AcGiSelectionMarkerACADReserveEnd
#define AcGiSelectionMarkerACADReserveEnd GcGiSelectionMarkerGCADReserveEnd
#endif

#ifndef AcGiSelectionMarkerACADSelectionPreviewOff
#define AcGiSelectionMarkerACADSelectionPreviewOff GcGiSelectionMarkerGCADSelectionPreviewOff
#endif

#ifndef AcGiSelectionMarkerACADSelectionPreviewOn
#define AcGiSelectionMarkerACADSelectionPreviewOn GcGiSelectionMarkerGCADSelectionPreviewOn
#endif

#ifndef AcGiSubEntityTraits
#define AcGiSubEntityTraits GcGiSubEntityTraits
#endif

#ifndef AcGiDrawableTraits
#define AcGiDrawableTraits GcGiDrawableTraits
#endif

#ifndef AcGiNonEntityTraits
#define AcGiNonEntityTraits GcGiNonEntityTraits
#endif

#ifndef AcGiGdiDrawObject
#define AcGiGdiDrawObject GcGiGdiDrawObject
#endif

#ifndef AcGiPolyline
#define AcGiPolyline GcGiPolyline
#endif

#ifndef AcGiPositionTransformBehavior
#define AcGiPositionTransformBehavior GcGiPositionTransformBehavior
#endif

#ifndef AcGiScaleTransformBehavior
#define AcGiScaleTransformBehavior GcGiScaleTransformBehavior
#endif

#ifndef kAcGiWorldPosition
#define kAcGiWorldPosition kGcGiWorldPosition
#endif

#ifndef kAcGiViewportPosition
#define kAcGiViewportPosition kGcGiViewportPosition
#endif

#ifndef kAcGiScreenPosition
#define kAcGiScreenPosition kGcGiScreenPosition
#endif

#ifndef kAcGiScreenLocalOriginPosition
#define kAcGiScreenLocalOriginPosition kGcGiScreenLocalOriginPosition
#endif

#ifndef kAcGiWorldWithScreenOffsetPosition
#define kAcGiWorldWithScreenOffsetPosition kGcGiWorldWithScreenOffsetPosition
#endif

#ifndef kAcGiWorldScale
#define kAcGiWorldScale kGcGiWorldScale
#endif

#ifndef kAcGiViewportScale
#define kAcGiViewportScale kGcGiViewportScale
#endif

#ifndef kAcGiScreenScale
#define kAcGiScreenScale kGcGiScreenScale
#endif

#ifndef kAcGiViewportLocalOriginScale
#define kAcGiViewportLocalOriginScale kGcGiViewportLocalOriginScale
#endif

#ifndef kAcGiScreenLocalOriginScale
#define kAcGiScreenLocalOriginScale kGcGiScreenLocalOriginScale
#endif

#ifndef kAcGiWorldOrientation
#define kAcGiWorldOrientation kGcGiWorldOrientation
#endif

#ifndef kAcGiScreenOrientation
#define kAcGiScreenOrientation kGcGiScreenOrientation
#endif

#ifndef kAcGiZAxisOrientation
#define kAcGiZAxisOrientation kGcGiZAxisOrientation
#endif

#ifndef AcGiGeometry
#define AcGiGeometry GcGiGeometry
#endif

#ifndef AcGiWorldGeometry
#define AcGiWorldGeometry GcGiWorldGeometry
#endif

#ifndef AcGiViewportGeometry
#define AcGiViewportGeometry GcGiViewportGeometry
#endif

#ifndef AcGiEdgeData
#define AcGiEdgeData GcGiEdgeData
#endif
 
#ifndef AcGiFaceData
#define AcGiFaceData GcGiFaceData
#endif

#ifndef AcGiVertexData
#define AcGiVertexData GcGiVertexData
#endif

#ifndef AcGiTextStyle
#define AcGiTextStyle GcGiTextStyle
#endif

#ifndef AcGiFill
#define AcGiFill GcGiFill
#endif

#ifndef AcGiHatchPatternDefinition
#define AcGiHatchPatternDefinition GcGiHatchPatternDefinition
#endif

#ifndef AcGiHatchPattern
#define AcGiHatchPattern GcGiHatchPattern
#endif

#ifndef AcGiGradientFill
#define AcGiGradientFill GcGiGradientFill
#endif

#ifndef kAcGiMinColorIntensity
#define kAcGiMinColorIntensity kGcGiMinColorIntensity
#endif

#ifndef kAcGiColorIntensity1
#define kAcGiColorIntensity1 kGcGiColorIntensity1
#endif

#ifndef kAcGiColorIntensity2
#define kAcGiColorIntensity2 kGcGiColorIntensity2
#endif

#ifndef kAcGiColorIntensity3
#define kAcGiColorIntensity3 kGcGiColorIntensity3
#endif

#ifndef kAcGiColorIntensity4
#define kAcGiColorIntensity4 kGcGiColorIntensity4
#endif

#ifndef kAcGiColorIntensity5
#define kAcGiColorIntensity5 kGcGiColorIntensity5
#endif

#ifndef kAcGiColorIntensity6
#define kAcGiColorIntensity6 kGcGiColorIntensity6
#endif

#ifndef kAcGiMaxColorIntensity
#define kAcGiMaxColorIntensity kGcGiMaxColorIntensity
#endif

#ifndef AcGiOrientationTransformBehavior
#define AcGiOrientationTransformBehavior GcGiOrientationTransformBehavior
#endif

#ifndef kDrawUseAcGiEntityForDgnLineType
#define kDrawUseAcGiEntityForDgnLineType kDrawUseGcGiEntityForDgnLineType
#endif
