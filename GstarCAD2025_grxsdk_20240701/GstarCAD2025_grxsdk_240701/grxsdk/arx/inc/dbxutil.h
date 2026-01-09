/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbxutil.h"
#include "adesk.h"
#include "acadstrc.h"
#include "adsdef.h"
#include "dbidar.h"
#include "dbid.h"
#include "acutmem.h"
#include "acgi.h"

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcDb
#define AcDb GcDb
#endif

#ifndef ACHAR
#define ACHAR GCHAR
#endif

#ifndef AcCmColor
#define AcCmColor GcCmColor
#endif

#ifndef ads_point
#define ads_point gds_point
#endif

#ifndef acdbWcs2Ucs
#define acdbWcs2Ucs gcdbWcs2Ucs
#endif

#ifndef acdbWcs2Ecs
#define acdbWcs2Ecs gcdbWcs2Ecs
#endif

#ifndef acdbUcs2Wcs
#define acdbUcs2Wcs gcdbUcs2Wcs
#endif

#ifndef acdbUcs2Ecs
#define acdbUcs2Ecs gcdbUcs2Ecs
#endif

#ifndef acdbEcs2Wcs
#define acdbEcs2Wcs gcdbEcs2Wcs
#endif

#ifndef acdbEcs2Ucs
#define acdbEcs2Ucs gcdbEcs2Ucs
#endif

#ifndef ADESK_STDCALL
#define ADESK_STDCALL GSOFT_STDCALL
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcDbObjectId
#define AcDbObjectId GcDbObjectId
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

#ifndef AcGeMatrix3d
#define AcGeMatrix3d GcGeMatrix3d
#endif

#ifndef acdbUcsMatrix
#define acdbUcsMatrix gcdbUcsMatrix
#endif

#ifndef acdbGetExtnames
#define acdbGetExtnames gcdbGetExtnames
#endif

#ifndef acdbSetExtnames
#define acdbSetExtnames gcdbSetExtnames
#endif

#ifndef acdbGetProxyInfo
#define acdbGetProxyInfo gcdbGetProxyInfo
#endif

#ifndef acdbGetCurVportId
#define acdbGetCurVportId gcdbGetCurVportId
#endif

#ifndef acdbGetReservedString
#define acdbGetReservedString gcdbGetReservedString
#endif

#ifndef acdbXlateReservedString
#define acdbXlateReservedString gcdbXlateReservedString
#endif

#ifndef acdbIsReservedString
#define acdbIsReservedString gcdbIsReservedString
#endif

#ifndef acdbValidateDbConsistency
#define acdbValidateDbConsistency gcdbValidateDbConsistency
#endif

#ifndef acdbGetMappedFontName
#define acdbGetMappedFontName gcdbGetMappedFontName
#endif

#ifndef acdbGetUnitsConversion
#define acdbGetUnitsConversion gcdbGetUnitsConversion
#endif

#ifndef acdbDwkFileExists
#define acdbDwkFileExists gcdbDwkFileExists
#endif

#ifndef acdbQueueForRegen
#define acdbQueueForRegen gcdbQueueForRegen
#endif

#ifndef AcDbCustomDynStyleReactor
#define AcDbCustomDynStyleReactor GcDbCustomDynStyleReactor
#endif

#ifndef AcDbCustomDynStyleNotifier
#define AcDbCustomDynStyleNotifier GcDbCustomDynStyleNotifier
#endif

#ifndef acdbGetDynDimStyleId
#define acdbGetDynDimStyleId gcdbGetDynDimStyleId
#endif

#ifndef acdbCreateViewByViewport
#define acdbCreateViewByViewport gcdbCreateViewByViewport
#endif

#ifndef acdbGetCurVportTableRecordId
#define acdbGetCurVportTableRecordId gcdbGetCurVportTableRecordId
#endif

#ifndef acdbQueueAnnotationEntitiesForRegen
#define acdbQueueAnnotationEntitiesForRegen gcdbQueueAnnotationEntitiesForRegen
#endif

#ifndef AcDbOle2Frame
#define AcDbOle2Frame GcDbOle2Frame
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef acdbOleHitTest
#define acdbOleHitTest gcdbOleHitTest
#endif

#ifndef acdbOleGetRotationMatrix
#define acdbOleGetRotationMatrix gcdbOleGetRotationMatrix
#endif

#ifndef acdbOleGetOriginalWidthHeight
#define acdbOleGetOriginalWidthHeight gcdbOleGetOriginalWidthHeight
#endif

#ifndef acdbOleSetOriginalWidthHeight
#define acdbOleSetOriginalWidthHeight gcdbOleSetOriginalWidthHeight
#endif

#ifndef acdbOleGetSelectedFontName
#define acdbOleGetSelectedFontName gcdbOleGetSelectedFontName
#endif

#ifndef acdbOleSetSelectedFontName
#define acdbOleSetSelectedFontName gcdbOleSetSelectedFontName
#endif

#ifndef acdbOleGetSelectedFontPointSize
#define acdbOleGetSelectedFontPointSize gcdbOleGetSelectedFontPointSize
#endif

#ifndef acdbOleSetSelectedFontPointSize
#define acdbOleSetSelectedFontPointSize gcdbOleSetSelectedFontPointSize
#endif

#ifndef acdbOleGetSelectedTextSizeInAcadUnits
#define acdbOleGetSelectedTextSizeInAcadUnits gcdbOleGetSelectedTextSizeInGcadUnits
#endif

#ifndef acdbOleSetSelectedTextSizeInAcadUnits
#define acdbOleSetSelectedTextSizeInAcadUnits gcdbOleSetSelectedTextSizeInGcadUnits
#endif

#ifndef acdbOleGetOriginalSelectedFontName
#define acdbOleGetOriginalSelectedFontName gcdbOleGetOriginalSelectedFontName
#endif

#ifndef acdbOleSetOriginalSelectedFontName
#define acdbOleSetOriginalSelectedFontName gcdbOleSetOriginalSelectedFontName
#endif

#ifndef acdbOleGetOriginalSelectedFontPointSize
#define acdbOleGetOriginalSelectedFontPointSize gcdbOleGetOriginalSelectedFontPointSize
#endif

#ifndef acdbOleSetOriginalSelectedFontPointSize
#define acdbOleSetOriginalSelectedFontPointSize gcdbOleSetOriginalSelectedFontPointSize
#endif

#ifndef acdbOleGetOriginalSelectedTextSizeInAcadUnits
#define acdbOleGetOriginalSelectedTextSizeInAcadUnits gcdbOleGetOriginalSelectedTextSizeInGcadUnits
#endif

#ifndef acdbOleSetOriginalSelectedTextSizeInAcadUnits
#define acdbOleSetOriginalSelectedTextSizeInAcadUnits gcdbOleSetOriginalSelectedTextSizeInGcadUnits
#endif

#ifndef acdbGetDimTextBackground
#define acdbGetDimTextBackground gcdbGetDimTextBackground
#endif

#ifndef acdbSetDimTextBackground
#define acdbSetDimTextBackground gcdbSetDimTextBackground
#endif

#ifndef acdbGetDimExtensionLength
#define acdbGetDimExtensionLength gcdbGetDimExtensionLength
#endif

#ifndef acdbSetDimExtensionLength
#define acdbSetDimExtensionLength gcdbSetDimExtensionLength
#endif

#ifndef acdbGetFixedLengthExtLineEnabled
#define acdbGetFixedLengthExtLineEnabled gcdbGetFixedLengthExtLineEnabled
#endif

#ifndef acdbSetFixedLengthExtLineEnabled
#define acdbSetFixedLengthExtLineEnabled gcdbSetFixedLengthExtLineEnabled
#endif

#ifndef acdbSetFixedLengthExtLineEnabled
#define acdbSetFixedLengthExtLineEnabled gcdbSetFixedLengthExtLineEnabled
#endif

#ifndef acdbGetArcLengthSymbolPlacement
#define acdbGetArcLengthSymbolPlacement gcdbGetArcLengthSymbolPlacement
#endif

#ifndef acdbSetArcLengthSymbolPlacement
#define acdbSetArcLengthSymbolPlacement gcdbSetArcLengthSymbolPlacement
#endif

#ifndef acdbGetDimLineLinetype
#define acdbGetDimLineLinetype gcdbGetDimLineLinetype
#endif

#ifndef acdbSetDimLineLinetype
#define acdbSetDimLineLinetype gcdbSetDimLineLinetype
#endif

#ifndef acdbSetDimExt1Linetype
#define acdbSetDimExt1Linetype gcdbSetDimExt1Linetype
#endif

#ifndef acdbGetDimExt1Linetype
#define acdbGetDimExt1Linetype gcdbGetDimExt1Linetype
#endif

#ifndef acdbSetDimExt2Linetype
#define acdbSetDimExt2Linetype gcdbSetDimExt2Linetype
#endif

#ifndef acdbGetDimExt2Linetype
#define acdbGetDimExt2Linetype gcdbGetDimExt2Linetype
#endif

#ifndef acdbGetLargeRadDimJogAngle
#define acdbGetLargeRadDimJogAngle gcdbGetLargeRadDimJogAngle
#endif

#ifndef acdbSetLargeRadDimJogAngle
#define acdbSetLargeRadDimJogAngle gcdbSetLargeRadDimJogAngle
#endif

#ifndef acdbGetDimFlipArrow
#define acdbGetDimFlipArrow gcdbGetDimFlipArrow
#endif

#ifndef acdbSetDimFlipArrow
#define acdbSetDimFlipArrow gcdbSetDimFlipArrow
#endif

#ifndef acdbGetDimFlipArrowWhich
#define acdbGetDimFlipArrowWhich gcdbGetDimFlipArrowWhich
#endif

#ifndef acdbSetDimFlipArrowWhich
#define acdbSetDimFlipArrowWhich gcdbSetDimFlipArrowWhich
#endif

#ifndef acdbGetExemptCheckFlag
#define acdbGetExemptCheckFlag gcdbGetExemptCheckFlag
#endif

#ifndef acdbSetExemptCheckFlag
#define acdbSetExemptCheckFlag gcdbSetExemptCheckFlag
#endif

#ifndef acdbGetDimJogSymbolSize
#define acdbGetDimJogSymbolSize gcdbGetDimJogSymbolSize
#endif

#ifndef acdbSetDimJogSymbolSize
#define acdbSetDimJogSymbolSize gcdbSetDimJogSymbolSize
#endif

#ifndef acdbGetDimJogSymbolPosition
#define acdbGetDimJogSymbolPosition gcdbGetDimJogSymbolPosition
#endif

#ifndef acdbSetDimJogSymbolPosition
#define acdbSetDimJogSymbolPosition gcdbSetDimJogSymbolPosition
#endif

#ifndef acdbGetRadialExtensionAngles
#define acdbGetRadialExtensionAngles gcdbGetRadialExtensionAngles
#endif

#ifndef acdbSetRadialExtensionAngles
#define acdbSetRadialExtensionAngles gcdbSetRadialExtensionAngles
#endif

#ifndef acdbGetDimAngExtOn
#define acdbGetDimAngExtOn gcdbGetDimAngExtOn
#endif

#ifndef acdbSetDimAngExtOn
#define acdbSetDimAngExtOn gcdbSetDimAngExtOn
#endif

#ifndef acdbGetDimTolAlign
#define acdbGetDimTolAlign gcdbGetDimTolAlign
#endif

#ifndef acdbSetDimTolAlign
#define acdbSetDimTolAlign gcdbSetDimTolAlign
#endif

#ifndef acdbGetDimBreakSize
#define acdbGetDimBreakSize gcdbGetDimBreakSize
#endif

#ifndef acdbSetDimBreakSize
#define acdbSetDimBreakSize gcdbSetDimBreakSize
#endif

#ifndef acdbGetViewportVisualStyle
#define acdbGetViewportVisualStyle gcdbGetViewportVisualStyle
#endif

#ifndef acdbSetViewportVisualStyle
#define acdbSetViewportVisualStyle gcdbSetViewportVisualStyle
#endif

#ifndef AcDbDisableAnnoAutoScale
#define AcDbDisableAnnoAutoScale GcDbDisableAnnoAutoScale
#endif

#ifndef acdbForceTextAdjust
#define acdbForceTextAdjust gcdbForceTextAdjust
#endif

#ifndef acdbGetCurUserViewportId
#define acdbGetCurUserViewportId gcdbGetCurUserViewportId
#endif

#ifndef acdbGetVisualStyleIdByIndex
#define acdbGetVisualStyleIdByIndex gcdbGetVisualStyleIdByIndex
#endif

#ifndef acdbGetVisualStyleIndexById
#define acdbGetVisualStyleIndexById gcdbGetVisualStyleIndexById
#endif

#ifndef acdbGetVisualStyleIndexByName
#define acdbGetVisualStyleIndexByName gcdbGetVisualStyleIndexByName
#endif

#ifndef acdbIsInLongTransaction
#define acdbIsInLongTransaction gcdbIsInLongTransaction
#endif

#ifndef acdbPSLayoutAnnoAllVisible
#define acdbPSLayoutAnnoAllVisible gcdbPSLayoutAnnoAllVisible
#endif

#ifndef acdbAssignGelibCurveToAcDbCurve
#define acdbAssignGelibCurveToAcDbCurve gcdbAssignGelibCurveToGcDbCurve
#endif

#ifndef acdbConvertAcDbCurveToGelibCurve
#define acdbConvertAcDbCurveToGelibCurve gcdbConvertGcDbCurveToGelibCurve
#endif

#ifndef acdbConvertGelibCurveToAcDbCurve
#define acdbConvertGelibCurveToAcDbCurve gcdbConvertGelibCurveToGcDbCurve
#endif

#ifndef acdbAddConstrainedGeometryDraggingInfo
#define acdbAddConstrainedGeometryDraggingInfo gcdbAddConstrainedGeometryDraggingInfo
#endif

#ifndef AcDbViewport
#define AcDbViewport GcDbViewport
#endif

#ifndef AcDbTextStyleTableRecord
#define AcDbTextStyleTableRecord GcDbTextStyleTableRecord
#endif

#ifndef AcDbLinetypeTableRecord
#define AcDbLinetypeTableRecord GcDbLinetypeTableRecord
#endif
