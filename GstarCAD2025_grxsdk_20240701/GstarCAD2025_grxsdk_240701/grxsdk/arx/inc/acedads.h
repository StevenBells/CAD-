/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "acadapidef.h"
#include "../../inc/gcedgds.h"
#ifdef __cplusplus
#include "adesk.h"
#endif

#include "adsdef.h"
#include "accoredefs.h"
#include "acbasedefs.h"
#include "acmem.h"
#include "AdAChar.h"

#ifndef acedGetAppName
#define acedGetAppName gcedGetAppName
#endif

#ifndef acedUpdate
#define acedUpdate gcedUpdate
#endif

#ifndef adsw_acadMainWnd
#define adsw_acadMainWnd gdsw_gcadMainWnd
#endif

#ifndef adsw_acadDocWnd
#define adsw_acadDocWnd gdsw_gcadDocWnd
#endif

#ifndef acedCommand
#define acedCommand MustSwitchTo_gcedCommandC_or_gcedCommandS - - !
#endif

#ifndef acedCmd
#define acedCmd MustSwitchTo_gcedCmdC_or_gcedCmdS - - !
#endif

#ifndef acedRegFunc
#define acedRegFunc gcedRegFunc
#endif

#ifndef acedUsrBrk
#define acedUsrBrk gcedUsrBrk
#endif

#ifndef acedDefun
#define acedDefun gcedDefun
#endif

#ifndef acedDefunEx
#define acedDefunEx gcedDefunEx
#endif

#ifndef acedSetFunHelp
#define acedSetFunHelp gcedSetFunHelp
#endif

#ifndef acedUndef
#define acedUndef gcedUndef
#endif

#ifndef acedGetFunCode
#define acedGetFunCode gcedGetFunCode
#endif

#ifndef acedGetArgs
#define acedGetArgs gcedGetArgs
#endif

#ifndef acedRetList
#define acedRetList gcedRetList
#endif

#ifndef acedRetVal
#define acedRetVal gcedRetVal
#endif

#ifndef acedRetPoint
#define acedRetPoint gcedRetPoint
#endif

#ifndef acedRetStr
#define acedRetStr gcedRetStr
#endif

#ifndef acedRetName
#define acedRetName gcedRetName
#endif

#ifndef acedRetInt
#define acedRetInt gcedRetInt
#endif

#ifndef acedRetReal
#define acedRetReal gcedRetReal
#endif
 
#ifndef acedRetT
#define acedRetT gcedRetT
#endif

#ifndef acedRetNil
#define acedRetNil gcedRetNil
#endif

#ifndef acedRetVoid
#define acedRetVoid gcedRetVoid
#endif

#ifndef acedEntSel
#define acedEntSel gcedEntSel
#endif

#ifndef acedNEntSelP
#define acedNEntSelP gcedNEntSelP
#endif

#ifndef acedNEntSel
#define acedNEntSel gcedNEntSel
#endif

#ifndef acedSSGet
#define acedSSGet gcedSSGet
#endif

#ifndef acedSSGetFirst
#define acedSSGetFirst gcedSSGetFirst
#endif

#ifndef acedSSSetFirst
#define acedSSSetFirst gcedSSSetFirst
#endif

#ifndef acedSSFree
#define acedSSFree gcedSSFree
#endif

#ifndef acedSSLength
#define acedSSLength gcedSSLength
#endif

#ifndef acedSSAdd
#define acedSSAdd gcedSSAdd
#endif

#ifndef acedSSDel
#define acedSSDel gcedSSDel
#endif

#ifndef acedSSMemb
#define acedSSMemb gcedSSMemb
#endif

#ifndef acedSSName
#define acedSSName gcedSSName
#endif

#ifndef acedSSNameX
#define acedSSNameX gcedSSNameX
#endif

#ifndef acedSSNameXEx
#define acedSSNameXEx gcedSSNameXEx
#endif

#ifndef acedSSGetKwordCallbackPtr
#define acedSSGetKwordCallbackPtr gcedSSGetKwordCallbackPtr
#endif

#ifndef acedSSSetKwordCallbackPtr
#define acedSSSetKwordCallbackPtr gcedSSSetKwordCallbackPtr
#endif

#ifndef acedSSGetOtherCallbackPtr
#define acedSSGetOtherCallbackPtr gcedSSGetOtherCallbackPtr
#endif

#ifndef acedSSSetOtherCallbackPtr
#define acedSSSetOtherCallbackPtr gcedSSSetOtherCallbackPtr
#endif

#ifndef acedTrans
#define acedTrans gcedTrans
#endif

#ifndef acedSetVar
#define acedSetVar gcedSetVar
#endif

#ifndef acedInitGet
#define acedInitGet gcedInitGet
#endif

#ifndef acedGetSym
#define acedGetSym gcedGetSym
#endif

#ifndef acedPutSym
#define acedPutSym gcedPutSym
#endif

#ifndef acedHelp
#define acedHelp gcedHelp
#endif

#ifndef acedHelpForExternal
#define acedHelpForExternal gcedHelpForExternal
#endif

#ifndef acedFNSplit
#define acedFNSplit gcedFNSplit
#endif

#ifndef acedArxLoaded
#define acedArxLoaded gcedGrxLoaded
#endif

#ifndef acedArxLoad
#define acedArxLoad gcedGrxLoad
#endif

#ifndef acedArxUnload
#define acedArxUnload gcedGrxUnload
#endif

#ifndef acedInvoke
#define acedInvoke gcedInvoke
#endif

#ifndef acedGetVar
#define acedGetVar gcedGetVar
#endif

#ifndef acedFindFile
#define acedFindFile gcedFindFile
#endif

#ifndef acedFindTrustedFile
#define acedFindTrustedFile gcedFindTrustedFile
#endif

#ifndef acedGetEnv
#define acedGetEnv gcedGetEnv
#endif

#ifndef acedGetCfg
#define acedGetCfg gcedGetCfg
#endif

#ifndef acedSetCfg
#define acedSetCfg gcedSetCfg
#endif

#ifndef acedGetString
#define acedGetString gcedGetString
#endif

#ifndef acedMenuCmd
#define acedMenuCmd gcedMenuCmd
#endif

#ifndef acedPrompt
#define acedPrompt gcedPrompt
#endif

#ifndef acedAlert
#define acedAlert gcedAlert
#endif

#ifndef acedGetAngle
#define acedGetAngle gcedGetAngle
#endif

#ifndef acedGetCorner
#define acedGetCorner gcedGetCorner
#endif

#ifndef acedGetDist
#define acedGetDist gcedGetDist
#endif

#ifndef acedGetPoint
#define acedGetPoint gcedGetPoint
#endif

#ifndef acedGetOrient
#define acedGetOrient gcedGetOrient
#endif

#ifndef acedGetInt
#define acedGetInt gcedGetInt
#endif

#ifndef acedGetKword
#define acedGetKword gcedGetKword
#endif

#ifndef acedGetReal
#define acedGetReal gcedGetReal
#endif

#ifndef acedGetInput
#define acedGetInput gcedGetInput
#endif

#ifndef acedVports
#define acedVports gcedVports
#endif

#ifndef acedTextScr
#define acedTextScr gcedTextScr
#endif

#ifndef acedGraphScr
#define acedGraphScr gcedGraphScr
#endif

#ifndef acedTextPage
#define acedTextPage gcedTextPage
#endif

#ifndef acedRedraw
#define acedRedraw gcedRedraw
#endif

#ifndef acedOsnap
#define acedOsnap gcedOsnap
#endif

#ifndef acedGrRead
#define acedGrRead gcedGrRead
#endif

#ifndef acedGrText
#define acedGrText gcedGrText
#endif

#ifndef acedGrDraw
#define acedGrDraw gcedGrDraw
#endif

#ifndef acedGrVecs
#define acedGrVecs gcedGrVecs
#endif

#ifndef acedXformSS
#define acedXformSS gcedXformSS
#endif

#ifndef acedDragGen
#define acedDragGen gcedDragGen
#endif

#ifndef acedSetView
#define acedSetView gcedSetView
#endif

#ifndef acedGetFileD
#define acedGetFileD gcedGetFileD
#endif

#ifndef acedGetFileNavDialog
#define acedGetFileNavDialog gcedGetFileNavDialog
#endif

#ifndef acedTextBox
#define acedTextBox gcedTextBox
#endif

#ifndef acedTablet
#define acedTablet gcedTablet
#endif

#ifndef acedGetCName
#define acedGetCName gcedGetCName
#endif

#ifndef acedEatCommandThroat
#define acedEatCommandThroat gcedEatCommandThroat
#endif

#ifndef acdbEntDel
#define acdbEntDel gcdbEntDel
#endif

#ifndef acdbEntGetX
#define acdbEntGetX gcdbEntGetX
#endif

#ifndef acdbEntGet
#define acdbEntGet gcdbEntGet
#endif

#ifndef acdbEntLast
#define acdbEntLast gcdbEntLast
#endif

#ifndef acdbEntNext
#define acdbEntNext gcdbEntNext
#endif

#ifndef acdbEntUpd
#define acdbEntUpd gcdbEntUpd
#endif

#ifndef acdbEntMod
#define acdbEntMod gcdbEntMod
#endif

#ifndef acdbEntMake
#define acdbEntMake gcdbEntMake
#endif

#ifndef acdbEntMakeX
#define acdbEntMakeX gcdbEntMakeX
#endif

#ifndef acdbRegApp
#define acdbRegApp gcdbRegApp
#endif

#ifndef acdbTblNext
#define acdbTblNext gcdbTblNext
#endif

#ifndef acdbTblSearch
#define acdbTblSearch gcdbTblSearch
#endif

#ifndef acdbNamedObjDict
#define acdbNamedObjDict gcdbNamedObjDict
#endif

#ifndef acdbDictSearch
#define acdbDictSearch gcdbDictSearch
#endif

#ifndef acdbDictNext
#define acdbDictNext gcdbDictNext
#endif

#ifndef acdbDictRename
#define acdbDictRename gcdbDictRename
#endif

#ifndef acdbDictRemove
#define acdbDictRemove gcdbDictRemove
#endif

#ifndef acdbDictAdd
#define acdbDictAdd gcdbDictAdd
#endif

#ifndef acdbTblObjName
#define acdbTblObjName gcdbTblObjName
#endif

#ifndef acdbAngToS
#define acdbAngToS gcdbAngToS
#endif

#ifndef acdbRawAngToS
#define acdbRawAngToS gcdbRawAngToS
#endif

#ifndef acdbRToS
#define acdbRToS gcdbRToS
#endif

#ifndef acdbAngToF
#define acdbAngToF gcdbAngToF
#endif

#ifndef acdbRawAngToF
#define acdbRawAngToF gcdbRawAngToF
#endif

#ifndef acdbDisToF
#define acdbDisToF gcdbDisToF
#endif

#ifndef acdbInters
#define acdbInters gcdbInters
#endif

#ifndef acdbSNValid
#define acdbSNValid gcdbSNValid
#endif

#ifndef ads_queueexpr
#define ads_queueexpr gds_queueexpr
#endif

#ifndef acedGetString
#define acedGetString gcedGetString
#endif

#ifndef acedGetKword
#define acedGetKword gcedGetKword
#endif

#ifndef acedGetInput
#define acedGetInput gcedGetInput
#endif

#ifndef acutNewString
#define acutNewString gcutNewString
#endif

#ifndef acedGetFullInput
#define acedGetFullInput gcedGetFullInput
#endif

#ifndef acedGetFullKword
#define acedGetFullKword gcedGetFullKword
#endif

#ifndef acedGetFullString
#define acedGetFullString gcedGetFullString
#endif

#ifndef AcEdCommandRejector
#define AcEdCommandRejector GcEdCommandRejector
#endif

#ifndef acedRegisterCommandRejector
#define acedRegisterCommandRejector gcedRegisterCommandRejector
#endif

#ifndef acedUnRegisterCommandRejector
#define acedUnRegisterCommandRejector gcedUnRegisterCommandRejector
#endif

#ifndef acedSetEnv
#define acedSetEnv gcedSetEnv
#endif

#ifndef adsw_hwndAcad
#define adsw_hwndAcad gdsw_hwndGcad
#endif

#ifndef AcSelectionPreview
#define AcSelectionPreview GcSelectionPreview
#endif

#ifndef AdInt32
#define AdInt32 GdInt32
#endif


#ifndef ads_regen
#define ads_regen gds_regen
#endif

#ifndef acedNEntSelPEx
#define acedNEntSelPEx gcedNEntSelPEx
#endif

#ifndef acedEvaluateLisp
#define acedEvaluateLisp gcedEvaluateLisp
#endif

#ifndef acedHatchPalletteDialog
#define acedHatchPalletteDialog gcedHatchPalletteDialog
#endif

#ifndef acedPostCommand
#define acedPostCommand gcedPostCommand
#endif

#ifndef acedLinetypeDialog
#define acedLinetypeDialog gcedLinetypeDialog
#endif

#ifndef acedLineWeightDialog
#define acedLineWeightDialog gcedLineWeightDialog
#endif

#ifndef acedIsNamedDrawing
#define acedIsNamedDrawing gcedIsNamedDrawing
#endif
