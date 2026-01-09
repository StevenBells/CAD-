/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gced.h"
#include "adesk.h"
#include "acadapidef.h"  
#include "rxevent.h"   
#include "ads.h"
#include "aced-xref.h"
#include "accmd.h"
#include "aced-hatch.h"

#ifndef ACED_SERVICES
#define ACED_SERVICES GCED_SERVICES
#endif

#ifndef ACED_EDITOR_OBJ
#define ACED_EDITOR_OBJ GCED_EDITOR_OBJ
#endif

#ifndef AcadContextMenuMode
#define AcadContextMenuMode GcadContextMenuMode
#endif

#ifndef AcEdCommandStruc
#define AcEdCommandStruc GcEdCommandStruc
#endif

#ifndef AcString
#define AcString GcString
#endif

#ifndef AcRxVariable
#define AcRxVariable GcRxVariable
#endif

#ifndef AcGiImageBGRA32
#define AcGiImageBGRA32 GcGiImageBGRA32
#endif

#ifndef AcEdImpSysVarIterator
#define AcEdImpSysVarIterator GcEdImpSysVarIterator
#endif

#ifndef acedCmdLookup2
#define acedCmdLookup2 gcedCmdLookup2
#endif

#ifndef acedCmdLookup
#define acedCmdLookup gcedCmdLookup
#endif

#ifndef acedCmdUndefine
#define acedCmdUndefine gcedCmdUndefine
#endif

#ifndef acedPopCommandDirectory
#define acedPopCommandDirectory gcedPopCommandDirectory
#endif

#ifndef acedGetCommandForDocument
#define acedGetCommandForDocument gcedGetCommandForDocument
#endif

#ifndef acedSetOLELock
#define acedSetOLELock gcedSetOLELock
#endif

#ifndef acedClearOLELock
#define acedClearOLELock gcedClearOLELock
#endif

#ifndef acedPostCommandPrompt
#define acedPostCommandPrompt gcedPostCommandPrompt
#endif

#ifndef acedSyncFileOpen
#define acedSyncFileOpen gcedSyncFileOpen
#endif

#ifndef acedSetColorDialog
#define acedSetColorDialog gcedSetColorDialog
#endif

#ifndef acedSetColorDialogTrueColor
#define acedSetColorDialogTrueColor gcedSetColorDialogTrueColor
#endif

#ifndef AcEdColorDialogCallbackFunction
#define AcEdColorDialogCallbackFunction GcEdColorDialogCallbackFunction
#endif

#ifndef acedSetColorDialogTrueColorWithCallback
#define acedSetColorDialogTrueColorWithCallback gcedSetColorDialogTrueColorWithCallback
#endif

#ifndef acedSetColorPrompt
#define acedSetColorPrompt gcedSetColorPrompt
#endif

#ifndef acedIsMenuGroupLoaded
#define acedIsMenuGroupLoaded gcedIsMenuGroupLoaded
#endif

#ifndef acedLoadPartialMenu
#define acedLoadPartialMenu gcedLoadPartialMenu
#endif

#ifndef acedUnloadPartialMenu
#define acedUnloadPartialMenu gcedUnloadPartialMenu
#endif

#ifndef acedReloadMenus
#define acedReloadMenus gcedReloadMenus
#endif

#ifndef acedSendModelessOperationStart
#define acedSendModelessOperationStart gcedSendModelessOperationStart
#endif

#ifndef acedSendModelessOperationEnded
#define acedSendModelessOperationEnded gcedSendModelessOperationEnded
#endif

#ifndef acedUpdateDisplay
#define acedUpdateDisplay gcedUpdateDisplay
#endif

#ifndef acedUpdateDisplayPause
#define acedUpdateDisplayPause gcedUpdateDisplayPause
#endif

#ifndef acedIsUpdateDisplayPaused
#define acedIsUpdateDisplayPaused gcedIsUpdateDisplayPaused
#endif

#ifndef acedInitDialog
#define acedInitDialog gcedInitDialog
#endif

#ifndef acedInitCommandVersion
#define acedInitCommandVersion gcedInitCommandVersion
#endif

#ifndef acedGetCommandVersion
#define acedGetCommandVersion gcedGetCommandVersion
#endif

#ifndef acedDisableDefaultARXExceptionHandler
#define acedDisableDefaultARXExceptionHandler gcedDisableDefaultGRXExceptionHandler
#endif

#ifndef acedVportTableRecords2Vports
#define acedVportTableRecords2Vports gcedVportTableRecords2Vports
#endif

#ifndef acedVports2VportTableRecords
#define acedVports2VportTableRecords gcedVports2VportTableRecords
#endif

#ifndef acedVPLayer
#define acedVPLayer gcedVPLayer
#endif

#ifndef acedServices
#define acedServices gcedServices
#endif

#ifndef AcEdServices
#define AcEdServices GcEdServices
#endif

#ifndef AcEditorReactor
#define AcEditorReactor GcEditorReactor
#endif

#ifndef AcEditorReactor2
#define AcEditorReactor2 GcEditorReactor2
#endif

#ifndef AcEditorReactor3
#define AcEditorReactor3 GcEditorReactor3
#endif

#ifndef acedEditor
#define acedEditor gcedEditor
#endif

#ifndef AcEditor
#define AcEditor GcEditor
#endif

#ifndef AcEdUIContext
#define AcEdUIContext GcEdUIContext
#endif

#ifndef acedAddObjectContextMenu
#define acedAddObjectContextMenu gcedAddObjectContextMenu
#endif

#ifndef acedRemoveObjectContextMenu
#define acedRemoveObjectContextMenu gcedRemoveObjectContextMenu
#endif

#ifndef acedAddDefaultContextMenu
#define acedAddDefaultContextMenu gcedAddDefaultContextMenu
#endif

#ifndef acedRemoveDefaultContextMenu
#define acedRemoveDefaultContextMenu gcedRemoveDefaultContextMenu
#endif

#ifndef acedSetCMBaseAlias
#define acedSetCMBaseAlias gcedSetCMBaseAlias
#endif

#ifndef acedGetCMBaseAlias
#define acedGetCMBaseAlias gcedGetCMBaseAlias
#endif

#ifndef acedMspace
#define acedMspace gcedMspace
#endif

#ifndef acedPspace
#define acedPspace gcedPspace
#endif

#ifndef acedSetCurrentVPort
#define acedSetCurrentVPort gcedSetCurrentVPort
#endif

#ifndef acedSetCurrentVPort
#define acedSetCurrentVPort gcedSetCurrentVPort
#endif

#ifndef acedIsDragging
#define acedIsDragging gcedIsDragging
#endif

#ifndef acedSetCurrentView
#define acedSetCurrentView gcedSetCurrentView
#endif

#ifndef acedRestoreCurrentView
#define acedRestoreCurrentView gcedRestoreCurrentView
#endif

#ifndef acedGetCurVportCircleSides
#define acedGetCurVportCircleSides gcedGetCurVportCircleSides
#endif

#ifndef acedSetCurVportCircleSides
#define acedSetCurVportCircleSides gcedSetCurVportCircleSides
#endif

#ifndef acedGetCurVportPixelToDisplay
#define acedGetCurVportPixelToDisplay gcedGetCurVportPixelToDisplay
#endif

#ifndef acedGetCurVportScreenToDisplay
#define acedGetCurVportScreenToDisplay gcedGetCurVportScreenToDisplay
#endif

#ifndef acedSetCurrentUCS
#define acedSetCurrentUCS gcedSetCurrentUCS
#endif

#ifndef acedGetCurrentUCS
#define acedGetCurrentUCS gcedGetCurrentUCS
#endif

#ifndef acedRestorePreviousUCS
#define acedRestorePreviousUCS gcedRestorePreviousUCS
#endif

#ifndef acedEditToleranceInteractive
#define acedEditToleranceInteractive gcedEditToleranceInteractive
#endif

#ifndef acedEditMTextInteractive
#define acedEditMTextInteractive gcedEditMTextInteractive
#endif

#ifndef acedEditDimstyleInteractiveEx
#define acedEditDimstyleInteractiveEx gcedEditDimstyleInteractiveEx
#endif

#ifndef acedGetRGB
#define acedGetRGB gcedGetRGB
#endif

#ifndef acedGetCurrentSelectionSet
#define acedGetCurrentSelectionSet gcedGetCurrentSelectionSet
#endif

#ifndef acedGetFullSubentPathsForCurrentSelection
#define acedGetFullSubentPathsForCurrentSelection gcedGetFullSubentPathsForCurrentSelection
#endif

#ifndef acedGetIDispatch
#define acedGetIDispatch gcedGetIDispatch
#endif

#ifndef AcadGetIDispatch
#define AcadGetIDispatch GcadGetIDispatch
#endif

#ifndef acedActiveViewportId
#define acedActiveViewportId gcedActiveViewportId
#endif

#ifndef acedViewportIdFromNumber
#define acedViewportIdFromNumber gcedViewportIdFromNumber
#endif

#ifndef acedNumberOfViewports
#define acedNumberOfViewports gcedNumberOfViewports
#endif

#ifndef acedGetCurViewportObjectId
#define acedGetCurViewportObjectId gcedGetCurViewportObjectId
#endif

#ifndef acedConvertEntityToHatch
#define acedConvertEntityToHatch gcedConvertEntityToHatch
#endif

#ifndef acedManageHatchEditorReactor
#define acedManageHatchEditorReactor gcedManageHatchEditorReactor
#endif

#ifndef AcEdDrawOrderCmdType
#define AcEdDrawOrderCmdType GcEdDrawOrderCmdType
#endif

#ifndef acedDrawOrderInherit
#define acedDrawOrderInherit gcedDrawOrderInherit
#endif

#ifndef acedCreateViewportByView
#define acedCreateViewportByView gcedCreateViewportByView
#endif

#ifndef acedCreateEnhancedViewportOnDrop
#define acedCreateEnhancedViewportOnDrop gcedCreateEnhancedViewportOnDrop
#endif

#ifndef acedCreateEnhancedViewportOnDropDWG
#define acedCreateEnhancedViewportOnDropDWG gcedCreateEnhancedViewportOnDropDWG
#endif

#ifndef acedGetUnitsValueString
#define acedGetUnitsValueString gcedGetUnitsValueString
#endif

#ifndef acedGetUnitsConversion
#define acedGetUnitsConversion gcedGetUnitsConversion
#endif

#ifndef acdbCanonicalToSystemRange
#define acdbCanonicalToSystemRange gcdbCanonicalToSystemRange
#endif

#ifndef acdbSystemRangeToCanonical
#define acdbSystemRangeToCanonical gcdbSystemRangeToCanonical
#endif

#ifndef acedEnableUsrbrk
#define acedEnableUsrbrk gcedEnableUsrbrk
#endif

#ifndef acedDisableUsrbrk
#define acedDisableUsrbrk gcedDisableUsrbrk
#endif

#ifndef acedIsUsrbrkDisabled
#define acedIsUsrbrkDisabled gcedIsUsrbrkDisabled
#endif

#ifndef acedIsInBackgroundMode
#define acedIsInBackgroundMode gcedIsInBackgroundMode
#endif

#ifndef acedGetBlockEditMode
#define acedGetBlockEditMode gcedGetBlockEditMode
#endif

#ifndef acedOpenDocWindowsMinimized
#define acedOpenDocWindowsMinimized gcedOpenDocWindowsMinimized
#endif

#ifndef acedCompareToCurrentViewport
#define acedCompareToCurrentViewport gcedCompareToCurrentViewport
#endif

#ifndef acedGetAnimationFrameId
#define acedGetAnimationFrameId gcedGetAnimationFrameId
#endif

#ifndef acedShowConstraintBar
#define acedShowConstraintBar gcedShowConstraintBar
#endif

#ifndef acedHideConstraintBar
#define acedHideConstraintBar gcedHideConstraintBar
#endif

#ifndef acedShowConstraintBarForAll
#define acedShowConstraintBarForAll gcedShowConstraintBarForAll
#endif

#ifndef acedTraceBoundary
#define acedTraceBoundary gcedTraceBoundary
#endif

#ifndef acedSetDrawComplexShape
#define acedSetDrawComplexShape gcedSetDrawComplexShape
#endif

#ifndef acedGetDrawComplexShape
#define acedGetDrawComplexShape gcedGetDrawComplexShape
#endif

#ifndef acedSetRecursingLinetypeVectorGeneration
#define acedSetRecursingLinetypeVectorGeneration gcedSetRecursingLinetypeVectorGeneration
#endif

#ifndef acedGetRecursingLinetypeVectorGeneration
#define acedGetRecursingLinetypeVectorGeneration gcedGetRecursingLinetypeVectorGeneration
#endif

#ifndef acedGetComplexLineTypeTransformPtr
#define acedGetComplexLineTypeTransformPtr gcedGetComplexLineTypeTransformPtr
#endif

#ifndef acedAudit
#define acedAudit gcedAudit
#endif

#ifndef acedAddSupplementalCursorImage
#define acedAddSupplementalCursorImage gcedAddSupplementalCursorImage
#endif

#ifndef acedRemoveSupplementalCursorImage
#define acedRemoveSupplementalCursorImage gcedRemoveSupplementalCursorImage
#endif

#ifndef acedHasSupplementalCursorImage
#define acedHasSupplementalCursorImage gcedHasSupplementalCursorImage
#endif

#ifndef acedSetSupplementalCursorOffset
#define acedSetSupplementalCursorOffset gcedSetSupplementalCursorOffset
#endif

#ifndef acedGetSupplementalCursorOffset
#define acedGetSupplementalCursorOffset gcedGetSupplementalCursorOffset
#endif

#ifndef acedGetDpiScalingValue
#define acedGetDpiScalingValue gcedGetDpiScalingValue
#endif

#ifndef acedScaleImageWithGDIPlus
#define acedScaleImageWithGDIPlus gcedScaleImageWithGDIPlus
#endif

#ifndef acedSetFieldUpdateEnabled
#define acedSetFieldUpdateEnabled gcedSetFieldUpdateEnabled
#endif

#ifndef acedIsFieldUpdateEnabled
#define acedIsFieldUpdateEnabled gcedIsFieldUpdateEnabled
#endif

#ifndef acedGetFullSubentPathArray
#define acedGetFullSubentPathArray gcedGetFullSubentPathArray
#endif

#ifndef acedSetIgnoredEntAndDuplicatedBlkCount
#define acedSetIgnoredEntAndDuplicatedBlkCount gcedSetIgnoredEntAndDuplicatedBlkCount
#endif

#ifndef AcEdSysVarIterator
#define AcEdSysVarIterator GcEdSysVarIterator
#endif


#ifndef AcEdSelectionSetService
#define AcEdSelectionSetService GcEdSelectionSetService
#endif

#ifndef AcApDocument
#define AcApDocument GcApDocument
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcDbFcf
#define AcDbFcf GcDbFcf
#endif

#ifndef AcDbMText
#define AcDbMText GcDbMText
#endif

#ifndef AcDbHatch
#define AcDbHatch GcDbHatch
#endif

#ifndef AcDbEntity
#define AcDbEntity GcDbEntity
#endif



