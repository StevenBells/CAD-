/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "acbasedefs.h"
#include "acadapidef.h"
#include "../../inc/gdslib.h"
#include "ads.h"
#include "adscodes.h"

#ifndef acrxUnlockApplication
#define acrxUnlockApplication gcrxUnlockApplication
#endif

#ifndef acrxApplicationIsLocked
#define acrxApplicationIsLocked gcrxApplicationIsLocked
#endif

#ifndef acrxLockApplication
#define acrxLockApplication gcrxLockApplication
#endif


#ifndef IAcadObjectEventsPtr
#define IAcadObjectEventsPtr IGcadObjectEventsPtr
#endif

#ifndef IAcadAcCmColorPtr
#define IAcadAcCmColorPtr IGcadGcCmColorPtr
#endif

#ifndef IAcadHyperlinkPtr
#define IAcadHyperlinkPtr IGcadHyperlinkPtr
#endif

#ifndef IAcadHyperlinksPtr
#define IAcadHyperlinksPtr IGcadHyperlinksPtr
#endif

#ifndef IAcadSectionTypeSettingsPtr
#define IAcadSectionTypeSettingsPtr IGcadSectionTypeSettingsPtr
#endif

#ifndef IAcadDatabasePreferencesPtr
#define IAcadDatabasePreferencesPtr IGcadDatabasePreferencesPtr
#endif

#ifndef IAcadFileDependencyPtr
#define IAcadFileDependencyPtr IGcadFileDependencyPtr
#endif

#ifndef IAcadFileDependenciesPtr
#define IAcadFileDependenciesPtr IGcadFileDependenciesPtr
#endif

#ifndef IAcadSummaryInfoPtr
#define IAcadSummaryInfoPtr IGcadSummaryInfoPtr
#endif

#ifndef IAcaddApplicationEventsPtr
#define IAcaddApplicationEventsPtr _DGcadApplicationEventsPtr
#endif

#ifndef IAcadUtilityPtr
#define IAcadUtilityPtr IGcadUtilityPtr
#endif

#ifndef IAcaddDocumentEventsPtr
#define IAcaddDocumentEventsPtr _DGcadDocumentEventsPtr
#endif

#ifndef IAcadDynamicBlockReferencePropertyPtr
#define IAcadDynamicBlockReferencePropertyPtr IGcadDynamicBlockReferencePropertyPtr
#endif

#ifndef IAcadUseTypePtr
#define IAcadUseTypePtr IGcadUseTypePtr
#endif

#ifndef IAcadSecurityParamsPtr
#define IAcadSecurityParamsPtr IGcadSecurityParamsPtr
#endif

#ifndef IAcaddScriptJetEventsPtr
#define IAcaddScriptJetEventsPtr _IGcadScriptJetEventsPtr
#endif

#ifndef IAcadScriptJetPtr
#define IAcadScriptJetPtr IGcadScriptJetPtr
#endif

#ifndef IAcadObjectPtr
#define IAcadObjectPtr IGcadObjectPtr
#endif

#ifndef IAcadEntityPtr
#define IAcadEntityPtr IGcadEntityPtr
#endif

#ifndef IAcad3DFacePtr
#define IAcad3DFacePtr IGcad3DFacePtr
#endif

#ifndef IAcadPolygonMeshPtr
#define IAcadPolygonMeshPtr IGcadPolygonMeshPtr
#endif

#ifndef IAcad3DPolylinePtr
#define IAcad3DPolylinePtr IGcad3DPolylinePtr
#endif

#ifndef IAcadArcPtr
#define IAcadArcPtr IGcadArcPtr
#endif

#ifndef IAcadAttributePtr
#define IAcadAttributePtr IGcadAttributePtr
#endif

#ifndef IAcadRegionPtr
#define IAcadRegionPtr IGcadRegionPtr
#endif

#ifndef IAcad3DSolidPtr
#define IAcad3DSolidPtr IGcad3DSolidPtr
#endif

#ifndef IAcadCirclePtr
#define IAcadCirclePtr IGcadCirclePtr
#endif

#ifndef IAcadDimensionPtr
#define IAcadDimensionPtr IGcadDimensionPtr
#endif

#ifndef IAcadDimAlignedPtr
#define IAcadDimAlignedPtr IGcadDimAlignedPtr
#endif

#ifndef IAcadDimAngularPtr
#define IAcadDimAngularPtr IGcadDimAngularPtr
#endif

#ifndef IAcadDimDiametricPtr
#define IAcadDimDiametricPtr IGcadDimDiametricPtr
#endif

#ifndef IAcadDimRotatedPtr
#define IAcadDimRotatedPtr IGcadDimRotatedPtr
#endif

#ifndef IAcadDimOrdinatePtr
#define IAcadDimOrdinatePtr IGcadDimOrdinatePtr
#endif

#ifndef IAcadDimRadialPtr
#define IAcadDimRadialPtr IGcadDimRadialPtr
#endif

#ifndef IAcadEllipsePtr
#define IAcadEllipsePtr IGcadEllipsePtr
#endif

#ifndef IAcadLeaderPtr
#define IAcadLeaderPtr IGcadLeaderPtr
#endif

#ifndef IAcadMTextPtr
#define IAcadMTextPtr IGcadMTextPtr
#endif

#ifndef IAcadPointPtr
#define IAcadPointPtr IGcadPointPtr
#endif

#ifndef IAcadLWPolylinePtr
#define IAcadLWPolylinePtr IGcadLWPolylinePtr
#endif

#ifndef IAcadPolylinePtr
#define IAcadPolylinePtr IGcadPolylinePtr
#endif

#ifndef IAcadRayPtr
#define IAcadRayPtr IGcadRayPtr
#endif

#ifndef IAcadShapePtr
#define IAcadShapePtr IGcadShapePtr
#endif

#ifndef IAcadSolidPtr
#define IAcadSolidPtr IGcadSolidPtr
#endif

#ifndef IAcadSplinePtr
#define IAcadSplinePtr IGcadSplinePtr
#endif

#ifndef IAcadTextPtr
#define IAcadTextPtr IGcadTextPtr
#endif

#ifndef IAcadTolerancePtr
#define IAcadTolerancePtr IGcadTolerancePtr
#endif

#ifndef IAcadTracePtr
#define IAcadTracePtr IGcadTracePtr
#endif

#ifndef IAcadXlinePtr
#define IAcadXlinePtr IGcadXlinePtr
#endif

#ifndef IAcadBlockReferencePtr
#define IAcadBlockReferencePtr IGcadBlockReferencePtr
#endif

#ifndef IAcadHatchPtr
#define IAcadHatchPtr IGcadHatchPtr
#endif

#ifndef IAcadRasterImagePtr
#define IAcadRasterImagePtr IGcadRasterImagePtr
#endif

#ifndef IAcadLinePtr
#define IAcadLinePtr IGcadLinePtr
#endif

#ifndef IAcadPlotConfigurationPtr
#define IAcadPlotConfigurationPtr IGcadPlotConfigurationPtr
#endif

#ifndef IAcadMInsertBlockPtr
#define IAcadMInsertBlockPtr IGcadMInsertBlockPtr
#endif

#ifndef IAcadPolyfaceMeshPtr
#define IAcadPolyfaceMeshPtr IGcadPolyfaceMeshPtr
#endif

#ifndef IAcadMLinePtr
#define IAcadMLinePtr IGcadMLinePtr
#endif

#ifndef IAcadDim3PointAngularPtr
#define IAcadDim3PointAngularPtr IGcadDim3PointAngularPtr
#endif

#ifndef IAcadExternalReferencePtr
#define IAcadExternalReferencePtr IGcadExternalReferencePtr
#endif

#ifndef IAcadTablePtr
#define IAcadTablePtr IGcadTablePtr
#endif

#ifndef IAcadDimArcLengthPtr
#define IAcadDimArcLengthPtr IGcadDimArcLengthPtr
#endif

#ifndef IAcadDimRadialLargePtr
#define IAcadDimRadialLargePtr IGcadDimRadialLargePtr
#endif

#ifndef IAcadSectionSettingsPtr
#define IAcadSectionSettingsPtr IGcadSectionSettingsPtr
#endif

#ifndef IAcadSectionPtr
#define IAcadSectionPtr IGcadSectionPtr
#endif

#ifndef IAcadViewPtr
#define IAcadViewPtr IGcadViewPtr
#endif

#ifndef IAcadPViewportPtr
#define IAcadPViewportPtr IGcadPViewportPtr
#endif

#ifndef IAcadGroupPtr
#define IAcadGroupPtr IGcadGroupPtr
#endif

#ifndef IAcadGroupsPtr
#define IAcadGroupsPtr IGcadGroupsPtr
#endif

#ifndef IAcadDimStylePtr
#define IAcadDimStylePtr IGcadDimStylePtr
#endif

#ifndef IAcadDimStylesPtr
#define IAcadDimStylesPtr IGcadDimStylesPtr
#endif

#ifndef IAcadLayerPtr
#define IAcadLayerPtr IGcadLayerPtr
#endif

#ifndef IAcadLayersPtr
#define IAcadLayersPtr IGcadLayersPtr
#endif

#ifndef IAcadLineTypePtr
#define IAcadLineTypePtr IGcadLineTypePtr
#endif

#ifndef IAcadLineTypesPtr
#define IAcadLineTypesPtr IGcadLineTypesPtr
#endif

#ifndef IAcadXRecordPtr
#define IAcadXRecordPtr IGcadXRecordPtr
#endif

#ifndef IAcadDictionaryPtr
#define IAcadDictionaryPtr IGcadDictionaryPtr
#endif

#ifndef IAcadDictionariesPtr
#define IAcadDictionariesPtr IGcadDictionariesPtr
#endif

#ifndef IAcadRegisteredApplicationPtr
#define IAcadRegisteredApplicationPtr IGcadRegisteredApplicationPtr
#endif

#ifndef IAcadRegisteredApplicationsPtr
#define IAcadRegisteredApplicationsPtr IGcadRegisteredApplicationsPtr
#endif

#ifndef IAcadTextStylePtr
#define IAcadTextStylePtr IGcadTextStylePtr
#endif

#ifndef IAcadTextStylesPtr
#define IAcadTextStylesPtr IGcadTextStylesPtr
#endif

#ifndef IAcadUCSPtr
#define IAcadUCSPtr IGcadUCSPtr
#endif

#ifndef IAcadUCSsPtr
#define IAcadUCSsPtr IGcadUCSsPtr
#endif

#ifndef IAcadViewsPtr
#define IAcadViewsPtr IGcadViewsPtr
#endif

#ifndef IAcadViewportPtr
#define IAcadViewportPtr IGcadViewportPtr
#endif

#ifndef IAcadViewportsPtr
#define IAcadViewportsPtr IGcadViewportsPtr
#endif

#ifndef IAcadPlotConfigurationsPtr
#define IAcadPlotConfigurationsPtr IGcadPlotConfigurationsPtr
#endif

#ifndef IAcadSectionManagerPtr
#define IAcadSectionManagerPtr IGcadSectionManagerPtr
#endif

#ifndef IAcadMaterialPtr
#define IAcadMaterialPtr IGcadMaterialPtr
#endif

#ifndef IAcadMaterialsPtr
#define IAcadMaterialsPtr IGcadMaterialsPtr
#endif

#ifndef IAcadAttributeReferencePtr
#define IAcadAttributeReferencePtr IGcadAttributeReferencePtr
#endif

#ifndef IAcadDatabasePtr
#define IAcadDatabasePtr IGcadDatabasePtr
#endif

#ifndef IAcadBlockPtr
#define IAcadBlockPtr IGcadBlockPtr
#endif

#ifndef IAcadModelSpacePtr
#define IAcadModelSpacePtr IGcadModelSpacePtr
#endif

#ifndef IAcadLayoutPtr
#define IAcadLayoutPtr IGcadLayoutPtr
#endif

#ifndef IAcadPaperSpacePtr
#define IAcadPaperSpacePtr IGcadPaperSpacePtr
#endif

#ifndef IAcadBlocksPtr
#define IAcadBlocksPtr IGcadBlocksPtr
#endif

#ifndef IAcadLayoutsPtr
#define IAcadLayoutsPtr IGcadLayoutsPtr
#endif

#ifndef IAcadApplicationPtr
#define IAcadApplicationPtr IGcadApplicationPtr
#endif

#ifndef IAcadPlotPtr
#define IAcadPlotPtr IGcadPlotPtr
#endif

#ifndef IAcadSelectionSetPtr
#define IAcadSelectionSetPtr IGcadSelectionSetPtr
#endif

#ifndef IAcadSelectionSetsPtr
#define IAcadSelectionSetsPtr IGcadSelectionSetsPtr
#endif

#ifndef IAcadDocumentPtr
#define IAcadDocumentPtr IGcadDocumentPtr
#endif

#ifndef IAcadPreferencesFilesPtr
#define IAcadPreferencesFilesPtr IGcadPreferencesFilesPtr
#endif

#ifndef IAcadPreferencesDisplayPtr
#define IAcadPreferencesDisplayPtr IGcadPreferencesDisplayPtr
#endif

#ifndef IAcadPreferencesOpenSavePtr
#define IAcadPreferencesOpenSavePtr IGcadPreferencesOpenSavePtr
#endif

#ifndef IAcadPreferencesOutputPtr
#define IAcadPreferencesOutputPtr IGcadPreferencesOutputPtr
#endif

#ifndef IAcadPreferencesSystemPtr
#define IAcadPreferencesSystemPtr IGcadPreferencesSystemPtr
#endif

#ifndef IAcadPreferencesUserPtr
#define IAcadPreferencesUserPtr IGcadPreferencesUserPtr
#endif

#ifndef IAcadPreferencesDraftingPtr
#define IAcadPreferencesDraftingPtr IGcadPreferencesDraftingPtr
#endif

#ifndef IAcadPreferencesSelectionPtr
#define IAcadPreferencesSelectionPtr IGcadPreferencesSelectionPtr
#endif

#ifndef IAcadPreferencesProfilesPtr
#define IAcadPreferencesProfilesPtr IGcadPreferencesProfilesPtr
#endif

#ifndef IAcadPreferencesPtr
#define IAcadPreferencesPtr IGcadPreferencesPtr
#endif

#ifndef IAcadDocumentsPtr
#define IAcadDocumentsPtr IGcadDocumentsPtr
#endif

#ifndef IAcadStatePtr
#define IAcadStatePtr IGcadStatePtr
#endif

#ifndef IAcadMenuGroupsPtr
#define IAcadMenuGroupsPtr IGcadMenuGroupsPtr
#endif

#ifndef IAcadMenuGroupPtr
#define IAcadMenuGroupPtr IGcadMenuGroupPtr
#endif

#ifndef IAcadPopupMenusPtr
#define IAcadPopupMenusPtr IGcadPopupMenusPtr
#endif

#ifndef IAcadPopupMenuPtr
#define IAcadPopupMenuPtr IGcadPopupMenuPtr
#endif

#ifndef IAcadPopupMenuItemPtr
#define IAcadPopupMenuItemPtr IGcadPopupMenuItemPtr
#endif

#ifndef IAcadMenuBarPtr
#define IAcadMenuBarPtr IGcadMenuBarPtr
#endif

#ifndef IAcadToolbarsPtr
#define IAcadToolbarsPtr IGcadToolbarsPtr
#endif

#ifndef IAcadToolbarPtr
#define IAcadToolbarPtr IGcadToolbarPtr
#endif

#ifndef IAcadToolbarItemPtr
#define IAcadToolbarItemPtr IGcadToolbarItemPtr
#endif

#ifndef IAcadShadowDisplayPtr
#define IAcadShadowDisplayPtr IGcadShadowDisplayPtr
#endif

#ifndef IAcPiPropertyDisplayImplPtr
#define IAcPiPropertyDisplayImplPtr IGcPiPropertyDisplayImplPtr
#endif

#ifndef IAcPiCategorizePropertiesImplPtr
#define IAcPiCategorizePropertiesImplPtr IGcPiCategorizePropertiesImplPtr
#endif


#ifndef IAcPiPropertyInspectorPtr
#define IAcPiPropertyInspectorPtr IGcPiPropertyInspectorPtr
#endif

#ifndef IAcPiCategorizePropertiesPtr
#define IAcPiCategorizePropertiesPtr IGcPiCategorizePropertiesPtr
#endif

#ifndef IAcPiPropertyDisplayPtr
#define IAcPiPropertyDisplayPtr IGcPiPropertyDisplayPtr
#endif


#ifndef IAcadBaseObjectPtr
#define IAcadBaseObjectPtr IGcadBaseObjectPtr
#endif

#ifndef IAcadBaseObject2Ptr
#define IAcadBaseObject2Ptr IGcadBaseObject2Ptr
#endif

#ifndef IAcadBaseDatabasePtr
#define IAcadBaseDatabasePtr IGcadBaseDatabasePtr
#endif

#ifndef IAcadAcCmColorAccessPtr
#define IAcadAcCmColorAccessPtr IGcadGcCmColorAccessPtr
#endif

#ifndef IAcadBaseSubEntityPtr
#define IAcadBaseSubEntityPtr IGcadBaseSubEntityPtr
#endif


#ifndef IAcadBaseObjectImplPtr
#define IAcadBaseObjectImplPtr IGcadBaseObjectImplPtr
#endif

#ifndef IAcadBaseObject2ImplPtr
#define IAcadBaseObject2ImplPtr IGcadBaseObject2ImplPtr
#endif

#ifndef IAcadEntityDispatchImplPtr
#define IAcadEntityDispatchImplPtr IGcadEntityDispatchImplPtr
#endif

#ifndef IAcadObjectDispatchImplPtr
#define IAcadObjectDispatchImplPtr IGcadObjectDispatchImplPtr
#endif

#ifndef IAcadBaseSubEntityImplPtr
#define IAcadBaseSubEntityImplPtr IGcadBaseSubEntityImplPtr
#endif

#ifndef IAcadShadowDisplayImplPtr
#define IAcadShadowDisplayImplPtr IGcadShadowDisplayImplPtr
#endif

#ifndef IAcadSurfaceDispatchImplPtr
#define IAcadSurfaceDispatchImplPtr IGcadSurfaceDispatchImplPtr
#endif

#ifndef IAcadBaseDatabaseImplPtr
#define IAcadBaseDatabaseImplPtr IGcadBaseDatabaseImplPtr
#endif

#ifndef IAcPiPropCommandButtonsImplPtr
#define IAcPiPropCommandButtonsImplPtr IGcPiPropCommandButtonsImplPtr
#endif

#ifndef IAcPiCommandButtonPtr
#define IAcPiCommandButtonPtr IGcPiCommandButtonPtr
#endif


#ifndef AcShadowDisplayType
#define AcShadowDisplayType GcShadowDisplayType
#endif

#ifndef AcColorMethod
#define AcColorMethod GcColorMethod
#endif

#ifndef AcColor
#define AcColor GcColor
#endif

#ifndef AcBoolean
#define AcBoolean GcBoolean
#endif

#ifndef AcOnOff
#define AcOnOff GcOnOff
#endif

#ifndef AcEntityName
#define AcEntityName GcEntityName
#endif

#ifndef AcActiveSpace
#define AcActiveSpace GcActiveSpace
#endif

#ifndef AcKeyboardAccelerator
#define AcKeyboardAccelerator GcKeyboardAccelerator
#endif


#ifndef AcPlotOrientation
#define AcPlotOrientation GcPlotOrientation
#endif


#ifndef AcAttachmentPoint
#define AcAttachmentPoint GcAttachmentPoint
#endif


#ifndef AcDrawingDirection
#define AcDrawingDirection GcDrawingDirection
#endif

#ifndef AcLeaderType
#define AcLeaderType GcLeaderType
#endif

#ifndef AcAttributeMode
#define AcAttributeMode GcAttributeMode
#endif

#ifndef AcHorizontalAlignment
#define AcHorizontalAlignment GcHorizontalAlignment
#endif

#ifndef AcVerticalAlignment
#define AcVerticalAlignment GcVerticalAlignment
#endif

#ifndef AcTextGenerationFlag
#define AcTextGenerationFlag GcTextGenerationFlag
#endif

#ifndef AcSelect
#define AcSelect GcSelect
#endif

#ifndef AcPatternType
#define AcPatternType GcPatternType
#endif

#ifndef AcLoopType
#define AcLoopType GcLoopType
#endif

#ifndef AcHatchStyle
#define AcHatchStyle GcHatchStyle
#endif

#ifndef AcPolylineType
#define AcPolylineType GcPolylineType
#endif

#ifndef Ac3DPolylineType
#define Ac3DPolylineType Gc3DPolylineType
#endif

#ifndef AcViewportSplitType
#define AcViewportSplitType GcViewportSplitType
#endif

#ifndef AcRegenType
#define AcRegenType GcRegenType
#endif

#ifndef AcBooleanType
#define AcBooleanType GcBooleanType
#endif

#ifndef AcExtendOption
#define AcExtendOption GcExtendOption
#endif

#ifndef AcAngleUnits
#define AcAngleUnits GcAngleUnits
#endif

#ifndef AcUnits
#define AcUnits GcUnits
#endif

#ifndef AcCoordinateSystem
#define AcCoordinateSystem GcCoordinateSystem
#endif

#ifndef AcMeasurementUnits
#define AcMeasurementUnits GcMeasurementUnits
#endif

#ifndef AcXRefDemandLoad
#define AcXRefDemandLoad GcXRefDemandLoad
#endif

#ifndef AcPreviewMode
#define AcPreviewMode GcPreviewMode
#endif

#ifndef AcPolymeshType
#define AcPolymeshType GcPolymeshType
#endif

#ifndef AcZoomScaleType
#define AcZoomScaleType GcZoomScaleType
#endif

#ifndef AcDragDisplayMode
#define AcDragDisplayMode GcDragDisplayMode
#endif

#ifndef AcARXDemandLoad
#define AcARXDemandLoad GcGRXDemandLoad
#endif

#ifndef AcTextFontStyle
#define AcTextFontStyle GcTextFontStyle
#endif

#ifndef AcProxyImage
#define AcProxyImage GcProxyImage
#endif

#ifndef AcKeyboardPriority
#define AcKeyboardPriority GcKeyboardPriority
#endif

#ifndef AcMenuGroupType
#define AcMenuGroupType GcMenuGroupType
#endif

#ifndef AcMenuFileType
#define AcMenuFileType GcMenuFileType
#endif

#ifndef AcMenuItemType
#define AcMenuItemType GcMenuItemType
#endif

#ifndef AcToolbarItemType
#define AcToolbarItemType GcToolbarItemType
#endif

#ifndef AcToolbarDockStatus
#define AcToolbarDockStatus GcToolbarDockStatus
#endif

#ifndef AcLineWeight
#define AcLineWeight GcLineWeight
#endif

#ifndef AcWindowState
#define AcWindowState GcWindowState
#endif

#ifndef AcPlotPaperUnits
#define AcPlotPaperUnits GcPlotPaperUnits
#endif

#ifndef AcPlotRotation
#define AcPlotRotation GcPlotRotation
#endif

#ifndef AcPlotType
#define AcPlotType GcPlotType
#endif

#ifndef AcPlotScale
#define AcPlotScale GcPlotScale
#endif

#ifndef AcAlignment
#define AcAlignment GcAlignment
#endif

#ifndef AcLineSpacingStyle
#define AcLineSpacingStyle GcLineSpacingStyle
#endif

#ifndef AcDimPrecision
#define AcDimPrecision GcDimPrecision
#endif

#ifndef AcDimUnits
#define AcDimUnits GcDimUnits
#endif

#ifndef AcDimLUnits
#define AcDimLUnits GcDimLUnits
#endif

#ifndef AcDimArrowheadType
#define AcDimArrowheadType GcDimArrowheadType
#endif

#ifndef AcDimCenterType
#define AcDimCenterType GcDimCenterType
#endif

#ifndef AcDimFit
#define AcDimFit GcDimFit
#endif

#ifndef AcDimFractionType
#define AcDimFractionType GcDimFractionType
#endif

#ifndef AcDimArcLengthSymbol
#define AcDimArcLengthSymbol GcDimArcLengthSymbol
#endif

#ifndef AcDimHorizontalJustification
#define AcDimHorizontalJustification GcDimHorizontalJustification
#endif

#ifndef AcDimVerticalJustification
#define AcDimVerticalJustification GcDimVerticalJustification
#endif

#ifndef AcDimTextMovement
#define AcDimTextMovement GcDimTextMovement
#endif

#ifndef AcDimToleranceMethod
#define AcDimToleranceMethod GcDimToleranceMethod
#endif

#ifndef AcDimToleranceJustify
#define AcDimToleranceJustify GcDimToleranceJustify
#endif

#ifndef AcViewportScale
#define AcViewportScale GcViewportScale
#endif

#ifndef AcISOPenWidth
#define AcISOPenWidth GcISOPenWidth
#endif

#ifndef AcSaveAsType
#define AcSaveAsType GcSaveAsType
#endif

#ifndef AcPrinterSpoolAlert
#define AcPrinterSpoolAlert GcPrinterSpoolAlert
#endif

#ifndef AcPlotPolicyForNewDwgs
#define AcPlotPolicyForNewDwgs GcPlotPolicyForNewDwgs
#endif

#ifndef AcPlotPolicyForLegacyDwgs
#define AcPlotPolicyForLegacyDwgs GcPlotPolicyForLegacyDwgs
#endif

#ifndef AcOleQuality
#define AcOleQuality GcOleQuality
#endif

#ifndef AcLoadPalette
#define AcLoadPalette GcLoadPalette
#endif

#ifndef AcInsertUnits
#define AcInsertUnits GcInsertUnits
#endif

#ifndef AcAlignmentPointAcquisition
#define AcAlignmentPointAcquisition GcAlignmentPointAcquisition
#endif

#ifndef AcInsertUnitsAction
#define AcInsertUnitsAction GcInsertUnitsAction
#endif

#ifndef AcPlotPolicy
#define AcPlotPolicy GcPlotPolicy
#endif

#ifndef AcDrawingAreaShortCutMenu
#define AcDrawingAreaShortCutMenu GcDrawingAreaShortCutMenu
#endif

#ifndef AcDrawingAreaSCMDefault
#define AcDrawingAreaSCMDefault GcDrawingAreaSCMDefault
#endif

#ifndef AcDrawingAreaSCMEdit
#define AcDrawingAreaSCMEdit GcDrawingAreaSCMEdit
#endif

#ifndef AcDrawingAreaSCMCommand
#define AcDrawingAreaSCMCommand GcDrawingAreaSCMCommand
#endif

#ifndef AcLayerStateMask
#define AcLayerStateMask GcLayerStateMask
#endif

#ifndef AcShadePlot
#define AcShadePlot GcShadePlot
#endif

#ifndef AcHatchObjectType
#define AcHatchObjectType GcHatchObjectType
#endif

#ifndef AcGradientPatternType
#define AcGradientPatternType GcGradientPatternType
#endif

#ifndef AcTableDirection
#define AcTableDirection GcTableDirection
#endif

#ifndef AcCellAlignment
#define AcCellAlignment GcCellAlignment
#endif

#ifndef AcRowType
#define AcRowType GcRowType
#endif

#ifndef AcValueDataType
#define AcValueDataType GcValueDataType
#endif

#ifndef AcValueUnitType
#define AcValueUnitType GcValueUnitType
#endif

#ifndef AcParseOption
#define AcParseOption GcParseOption
#endif

#ifndef AcFormatOption
#define AcFormatOption GcFormatOption
#endif

#ifndef AcGridLineType
#define AcGridLineType GcGridLineType
#endif

#ifndef AcCellType
#define AcCellType GcCellType
#endif

#ifndef AcCellEdgeMask
#define AcCellEdgeMask GcCellEdgeMask
#endif

#ifndef AcRotationAngle
#define AcRotationAngle GcRotationAngle
#endif

#ifndef AcMergeCellStyleOption
#define AcMergeCellStyleOption GcMergeCellStyleOption
#endif

#ifndef AcSelectType
#define AcSelectType GcSelectType
#endif

#ifndef AcOleType
#define AcOleType GcOleType
#endif

#ifndef AcOlePlotQuality
#define AcOlePlotQuality GcOlePlotQuality
#endif

#ifndef AcTableStyleOverrides
#define AcTableStyleOverrides GcTableStyleOverrides
#endif

#ifndef AcMLineJustification
#define AcMLineJustification GcMLineJustification
#endif

#ifndef AcBlockScaling
#define AcBlockScaling GcBlockScaling
#endif

#ifndef AcDynamicBlockReferencePropertyUnitsType
#define AcDynamicBlockReferencePropertyUnitsType GcDynamicBlockReferencePropertyUnitsType
#endif

#ifndef AcSectionState
#define AcSectionState GcSectionState
#endif

#ifndef AcSectionState2
#define AcSectionState2 GcSectionState2
#endif

#ifndef AcSectionSubItem
#define AcSectionSubItem GcSectionSubItem
#endif

#ifndef AcSectionType
#define AcSectionType GcSectionType
#endif

#ifndef AcSectionGeneration
#define AcSectionGeneration GcSectionGeneration
#endif

#ifndef AcHelixConstrainType
#define AcHelixConstrainType GcHelixConstrainType
#endif

#ifndef AcShadowDisplayType
#define AcShadowDisplayType GcShadowDisplayType
#endif

#ifndef AcLoftedSurfaceNormalType
#define AcLoftedSurfaceNormalType GcLoftedSurfaceNormalType
#endif

#ifndef AcHelixTwistType
#define AcHelixTwistType GcHelixTwistType
#endif

#ifndef AcUnderlayLayerOverrideType
#define AcUnderlayLayerOverrideType GcUnderlayLayerOverrideType
#endif

#ifndef AcTableFlowDirection
#define AcTableFlowDirection GcTableFlowDirection
#endif

#ifndef AcCellMargin
#define AcCellMargin GcCellMargin
#endif

#ifndef AcCellContentLayout
#define AcCellContentLayout GcCellContentLayout
#endif

#ifndef AcCellProperty
#define AcCellProperty GcCellProperty
#endif

#ifndef AcGridLineStyle
#define AcGridLineStyle GcGridLineStyle
#endif

#ifndef AcDataLinkUpdateDirection
#define AcDataLinkUpdateDirection GcDataLinkUpdateDirection
#endif

#ifndef AcDataLinkUpdateOption
#define AcDataLinkUpdateOption GcDataLinkUpdateOption
#endif

#ifndef AcCellContentType
#define AcCellContentType GcCellContentType
#endif

#ifndef AcCellState
#define AcCellState GcCellState
#endif

#ifndef AcCellOption
#define AcCellOption GcCellOption
#endif

#ifndef AcTextAttachmentType
#define AcTextAttachmentType GcTextAttachmentType
#endif

#ifndef AcMLeaderType
#define AcMLeaderType GcMLeaderType
#endif

#ifndef AcMLeaderContentType
#define AcMLeaderContentType GcMLeaderContentType
#endif

#ifndef AcTextAlignmentType
#define AcTextAlignmentType GcTextAlignmentType
#endif

#ifndef AcTextAngleType
#define AcTextAngleType GcTextAngleType
#endif

#ifndef AcBlockConnectionType
#define AcBlockConnectionType GcBlockConnectionType
#endif

#ifndef AcPredefBlockType
#define AcPredefBlockType GcPredefBlockType
#endif

#ifndef AcDrawLeaderOrderType
#define AcDrawLeaderOrderType GcDrawLeaderOrderType
#endif

#ifndef AcDrawMLeaderOrderType
#define AcDrawMLeaderOrderType GcDrawMLeaderOrderType
#endif

#ifndef AcSegmentAngleType
#define AcSegmentAngleType GcSegmentAngleType
#endif

#ifndef AcTextAttachmentDirection
#define AcTextAttachmentDirection GcTextAttachmentDirection
#endif

#ifndef AcVerticalTextAttachmentType
#define AcVerticalTextAttachmentType GcVerticalTextAttachmentType
#endif

#ifndef AcMeshCreaseType
#define AcMeshCreaseType GcMeshCreaseType
#endif

#ifndef AcWireframeType
#define AcWireframeType GcWireframeType
#endif

#ifndef AcSplineKnotParameterizationType
#define AcSplineKnotParameterizationType GcSplineKnotParameterizationType
#endif

#ifndef AcSplineFrameType
#define AcSplineFrameType GcSplineFrameType
#endif

#ifndef AcSplineMethodType
#define AcSplineMethodType GcSplineMethodType
#endif

#ifndef AcPointCloudColorType
#define AcPointCloudColorType GcPointCloudColorType
#endif

#ifndef AcPointCloudStylizationType
#define AcPointCloudStylizationType GcPointCloudStylizationType
#endif

#ifndef AcPointCloudIntensityStyle
#define AcPointCloudIntensityStyle GcPointCloudIntensityStyle
#endif

#ifndef AcPointCloudExStylizationType
#define AcPointCloudExStylizationType GcPointCloudExStylizationType
#endif


#ifndef ACAD_ANGLE
#define ACAD_ANGLE GCAD_ANGLE
#endif

#ifndef ACAD_DISTANCE
#define ACAD_DISTANCE GCAD_DISTANCE
#endif

#ifndef ACAD_COLOR
#define ACAD_COLOR GCAD_COLOR
#endif

#ifndef ACAD_LAYER
#define ACAD_LAYER GCAD_LAYER
#endif

#ifndef ACAD_LWEIGHT
#define ACAD_LWEIGHT GCAD_LWEIGHT
#endif

#ifndef ACAD_LTYPE
#define ACAD_LTYPE GCAD_LTYPE
#endif

#ifndef ACAD_NULL
#define ACAD_NULL GCAD_NULL
#endif

#ifndef ACAD_POINT
#define ACAD_POINT GCAD_POINT
#endif

#ifndef ACAD_NOUNITS
#define ACAD_NOUNITS GCAD_NOUNITS
#endif
