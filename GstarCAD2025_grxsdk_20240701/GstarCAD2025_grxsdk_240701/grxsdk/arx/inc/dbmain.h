/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once

#include "adesk.h"
#include "acadapidef.h"
#include "gepnt2d.h"
#include "gepnt3d.h"
#include "AcHeapOpers.h"
#include "rxobject.h"
#include "rxdlinkr.h"
#include "rxiter.h"
#include "rxditer.h"
#include "rxsrvice.h"
#include "dbboiler.h"   
#include "dbptrar.h"
#include "dbcolor.h"
#include "dbidar.h"
#include "drawable.h"
#include "dbsecurity.h"
#include "AcString.h"

#include "acdb.h"
#include "dbhandle.h"
#include "dbfiler.h"
#include "ads_db.h"
#include "gept3dar.h"
#include "dbintar.h"
#include "dbsubeid.h"
#include "dbaudita.h"
#include "acgidefs.h"
#include "acarray.h"

#include "../../inc/dbmain.h"

#ifndef AcCmEntityColor
#define AcCmEntityColor GcCmEntityColor
#endif

#ifndef AcCmColor
#define AcCmColor GcCmColor
#endif

#ifndef AcDbBlockBegin
#define AcDbBlockBegin GcDbBlockBegin
#endif

#ifndef AcDbBlockEnd
#define AcDbBlockEnd GcDbBlockEnd
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcDbDatabaseIterator
#define AcDbDatabaseIterator GcDbDatabaseIterator
#endif

#ifndef AcDbDatabaseReactor
#define AcDbDatabaseReactor GcDbDatabaseReactor
#endif

#ifndef AcDbEntity
#define AcDbEntity GcDbEntity
#endif

#ifndef AcDbEntityReactor
#define AcDbEntityReactor GcDbEntityReactor
#endif

#ifndef AcDbImpDatabase
#define AcDbImpDatabase GcDbImpDatabase
#endif

#ifndef AcDbImpObject
#define AcDbImpObject GcDbImpObject
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

#ifndef AcDbObjectReactor
#define AcDbObjectReactor GcDbObjectReactor
#endif

#ifndef AcDbSpaceIterator
#define AcDbSpaceIterator GcDbSpaceIterator
#endif

#ifndef AcDbSystemInternals
#define AcDbSystemInternals GcDbSystemInternals
#endif

#ifndef AcDbXObject
#define AcDbXObject GcDbXObject
#endif

#ifndef AcDbBlockReference
#define AcDbBlockReference GcDbBlockReference
#endif

#ifndef AcDbSymbolTable
#define AcDbSymbolTable GcDbSymbolTable
#endif

#ifndef AcDbBlockTable
#define AcDbBlockTable GcDbBlockTable
#endif

#ifndef AcDbBlockTableRecord
#define AcDbBlockTableRecord GcDbBlockTableRecord
#endif

#ifndef AcDbLayerTable
#define AcDbLayerTable GcDbLayerTable
#endif

#ifndef AcDbTextStyleTable
#define AcDbTextStyleTable GcDbTextStyleTable
#endif

#ifndef AcDbLinetypeTable
#define AcDbLinetypeTable GcDbLinetypeTable
#endif

#ifndef AcDbAbstractViewTable
#define AcDbAbstractViewTable GcDbAbstractViewTable
#endif

#ifndef AcDbViewTable
#define AcDbViewTable GcDbViewTable
#endif

#ifndef AcDbUCSTable
#define AcDbUCSTable GcDbUCSTable
#endif

#ifndef AcDbViewportTable
#define AcDbViewportTable GcDbViewportTable
#endif

#ifndef AcDbRegAppTable
#define AcDbRegAppTable GcDbRegAppTable
#endif

#ifndef AcDbDimStyleTable
#define AcDbDimStyleTable GcDbDimStyleTable
#endif

#ifndef AcDbDimStyleTableRecord
#define AcDbDimStyleTableRecord GcDbDimStyleTableRecord
#endif

#ifndef AcDbIdMapping
#define AcDbIdMapping GcDbIdMapping
#endif

#ifndef AcDbDictionary
#define AcDbDictionary GcDbDictionary
#endif

#ifndef AcDbDictionaryWithDefault
#define AcDbDictionaryWithDefault GcDbDictionaryWithDefault
#endif

#ifndef AcDbMline
#define AcDbMline GcDbMline
#endif

#ifndef AcDbMlineStyle
#define AcDbMlineStyle GcDbMlineStyle
#endif

#ifndef AcDbCurve
#define AcDbCurve GcDbCurve
#endif

#ifndef AcDbEllipse
#define AcDbEllipse GcDbEllipse
#endif

#ifndef AcDbSpline
#define AcDbSpline GcDbSpline
#endif

#ifndef AcDbRegion
#define AcDbRegion GcDbRegion
#endif

#ifndef AcDb3dSolid
#define AcDb3dSolid GcDb3dSolid
#endif

#ifndef AcDbBody
#define AcDbBody GcDbBody
#endif

#ifndef AcDbDate
#define AcDbDate GcDbDate
#endif

#ifndef AcDbExtents
#define AcDbExtents GcDbExtents
#endif

#ifndef AcDbAuditInfo
#define AcDbAuditInfo GcDbAuditInfo
#endif

#ifndef AcDbUndoController
#define AcDbUndoController GcDbUndoController
#endif

#ifndef AcDbTransactionManager
#define AcDbTransactionManager GcDbTransactionManager
#endif

#ifndef AcDbSpatialFilter
#define AcDbSpatialFilter GcDbSpatialFilter
#endif

#ifndef AcDbLayerFilter
#define AcDbLayerFilter GcDbLayerFilter
#endif

#ifndef AcGeMatrix2d
#define AcGeMatrix2d GcGeMatrix2d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGsNode
#define AcGsNode GcGsNode
#endif

#ifndef AcGsModel
#define AcGsModel GcGsModel
#endif

#ifndef AcGiContext
#define AcGiContext GcGiContext
#endif

#ifndef AcDbObjectIdGraph
#define AcDbObjectIdGraph GcDbObjectIdGraph
#endif

#ifndef AcDbLayerStateManager
#define AcDbLayerStateManager GcDbLayerStateManager
#endif

#ifndef AcDwgFileHandle
#define AcDwgFileHandle GcDwgFileHandle
#endif

#ifndef AcDbTableStyle
#define AcDbTableStyle GcDbTableStyle
#endif

#ifndef AcFdFieldValue
#define AcFdFieldValue GcFdFieldValue
#endif

#ifndef AcDbField
#define AcDbField GcDbField
#endif

#ifndef AcDbSectionManager
#define AcDbSectionManager GcDbSectionManager
#endif

#ifndef AcDbDataLinkManager
#define AcDbDataLinkManager GcDbDataLinkManager
#endif

#ifndef AcGiMapper
#define AcGiMapper GcGiMapper
#endif

#ifndef AcDbAnnotationScale
#define AcDbAnnotationScale GcDbAnnotationScale
#endif

#ifndef IAcReadStream
#define IAcReadStream IGcReadStream
#endif

#ifndef IAcWriteStream
#define IAcWriteStream IGcWriteStream
#endif

#ifndef acutNewString
#define acutNewString gcutNewString
#endif

#ifndef Atil
#define Atil Gtil
#endif

#ifndef AcDbGripDataPtrArray
#define AcDbGripDataPtrArray GcDbGripDataPtrArray
#endif

#ifndef AcDbFullSubentPathArray
#define AcDbFullSubentPathArray GcDbFullSubentPathArray
#endif

#ifndef acdbGroupCodeToType
#define acdbGroupCodeToType gcdbGroupCodeToType
#endif

#ifndef acdbPersistentReactorObjectId
#define acdbPersistentReactorObjectId gcdbPersistentReactorObjectId
#endif

#ifndef acdbIsPersistentReactor
#define acdbIsPersistentReactor gcdbIsPersistentReactor
#endif

#ifndef acdbDisplayPreviewFromDwg
#define acdbDisplayPreviewFromDwg gcdbDisplayPreviewFromDwg
#endif

#ifndef acdbIsCustomObject
#define acdbIsCustomObject gcdbIsCustomObject
#endif

#ifndef acdbOpenObject
#define acdbOpenObject gcdbOpenObject
#endif

#ifndef acdbOpenAcDbObject
#define acdbOpenAcDbObject gcdbOpenGcDbObject
#endif

#ifndef acdbOpenAcDbEntity
#define acdbOpenAcDbEntity gcdbOpenGcDbEntity
#endif

#ifndef acdbResurrectMeNow
#define acdbResurrectMeNow gcdbResurrectMeNow
#endif

#ifndef acdbGetAdsName
#define acdbGetAdsName gcdbGetGdsName
#endif

#ifndef acdbGetObjectId
#define acdbGetObjectId gcdbGetObjectId
#endif

#ifndef acdbValKey
#define acdbValKey gcdbValKey
#endif

#ifndef acdbSetReferenced
#define acdbSetReferenced gcdbSetReferenced
#endif

#ifndef acdbActiveDatabaseArray
#define acdbActiveDatabaseArray gcdbActiveDatabaseArray
#endif

#ifndef acdbLoadMlineStyleFile
#define acdbLoadMlineStyleFile gcdbLoadMlineStyleFile
#endif

#ifndef acdbLoadLineTypeFile
#define acdbLoadLineTypeFile gcdbLoadLineTypeFile
#endif

#ifndef acdbAlloc
#define acdbAlloc gcdbAlloc
#endif

#ifndef acdbRealloc
#define acdbRealloc gcdbRealloc
#endif

#ifndef acdbFree
#define acdbFree gcdbFree
#endif

#ifndef acdbInitialize
#define acdbInitialize gcdbInitialize
#endif

#ifndef acdbTerminate
#define acdbTerminate gcdbTerminate
#endif

#ifndef acdbValidateSetup
#define acdbValidateSetup gcdbValidateSetup
#endif

#ifndef acdbCleanUp
#define acdbCleanUp gcdbCleanUp
#endif

#ifndef acdbOriginalXrefFullPathFor
#define acdbOriginalXrefFullPathFor gcdbOriginalXrefFullPathFor
#endif

#ifndef acdbSetDefaultAcGiContext
#define acdbSetDefaultAcGiContext gcdbSetDefaultGcGiContext
#endif

#ifndef acdbGetThumbnailBitmapFromDxfFile
#define acdbGetThumbnailBitmapFromDxfFile gcdbGetThumbnailBitmapFromDxfFile
#endif


#ifndef acutGetAcStringConvertToAChar
#define acutGetAcStringConvertToAChar gcutGetGcStringConvertToGChar
#endif

#ifndef acutAcStringToAChar
#define acutAcStringToAChar gcutGcStringToGChar
#endif


#ifndef acdbSaveAs2004
#define acdbSaveAs2004 gcdbSaveAs2004
#endif

#ifndef acdbSaveAs2000
#define acdbSaveAs2000 gcdbSaveAs2000
#endif

#ifndef acdbSaveAsR14
#define acdbSaveAsR14 gcdbSaveAsR14
#endif

#ifndef acdbDxfOutAs2004
#define acdbDxfOutAs2004 gcdbDxfOutAs2004
#endif

#ifndef acdbDxfOutAs2000
#define acdbDxfOutAs2000 gcdbDxfOutAs2000
#endif

#ifndef acdbDxfOutAsR12
#define acdbDxfOutAsR12 gcdbDxfOutAsR12
#endif


#ifndef AcDbObjectIterator
#define AcDbObjectIterator GcDbObjectIterator
#endif

#ifndef AcCmComplexColor
#define AcCmComplexColor GcCmComplexColor
#endif

#ifndef AcCmHSB
#define AcCmHSB GcCmHSB
#endif


#ifndef accmGetColorFromACIName
#define accmGetColorFromACIName gccmGetColorFromACIName
#endif

#ifndef accmGetColorFromRGBName
#define accmGetColorFromRGBName gccmGetColorFromRGBName
#endif

#ifndef accmGetFromHSBName
#define accmGetFromHSBName gccmGetFromHSBName
#endif

#ifndef accmGetColorFromColorBookName
#define accmGetColorFromColorBookName gccmGetColorFromColorBookName
#endif

#ifndef accmGetLocalizedColorNames
#define accmGetLocalizedColorNames gccmGetLocalizedColorNames
#endif


#ifndef AcDbColor
#define AcDbColor GcDbColor
#endif

#ifndef AcDbExtents2d
#define AcDbExtents2d GcDbExtents2d
#endif


#ifndef AC_SRCH_BLOCK
#define AC_SRCH_BLOCK GC_SRCH_BLOCK
#endif
     
#ifndef AC_SRCH_DIM_TEXT
#define AC_SRCH_DIM_TEXT GC_SRCH_DIM_TEXT
#endif
  
#ifndef AC_SRCH_TEXT
#define AC_SRCH_TEXT GC_SRCH_TEXT
#endif
      
#ifndef AC_SRCH_LINK_DESC
#define AC_SRCH_LINK_DESC GC_SRCH_LINK_DESC
#endif
 
#ifndef AC_SRCH_LINK_URL
#define AC_SRCH_LINK_URL GC_SRCH_LINK_URL
#endif
  
#ifndef AC_SRCH_MATCH_CASE
#define AC_SRCH_MATCH_CASE GC_SRCH_MATCH_CASE
#endif

#ifndef AC_SRCH_WHOLE_WORD
#define AC_SRCH_WHOLE_WORD GC_SRCH_WHOLE_WORD
#endif

#ifndef AC_SRCH_DEFAULT
#define AC_SRCH_DEFAULT GC_SRCH_DEFAULT
#endif
  

#ifndef acdbTextFind
#define acdbTextFind gcdbTextFind
#endif

#ifndef AcDbObjectContextManager
#define AcDbObjectContextManager GcDbObjectContextManager
#endif

#ifndef addAcDbObject
#define addAcDbObject addGcDbObject
#endif

#ifndef acdbFreeResBufContents
#define acdbFreeResBufContents gcdbFreeResBufContents
#endif

#ifndef getAcDbHandle
#define getAcDbHandle getGcDbHandle
#endif

#ifndef getAcDbObjectId
#define getAcDbObjectId getGcDbObjectId
#endif

#ifndef dwgFileWasSavedByAutodeskSoftware
#define dwgFileWasSavedByAutodeskSoftware dwgFileWasSavedByGssoftSoftware
#endif

#ifndef setAcDbObjectIdsInFlux
#define setAcDbObjectIdsInFlux setGcDbObjectIdsInFlux
#endif

#ifndef isAcDbObjectIdsInFlux
#define isAcDbObjectIdsInFlux isGcDbObjectIdsInFlux
#endif

#ifndef AcLocale
#define AcLocale GcLocale
#endif

#ifndef AcDbViewTableRecord
#define AcDbViewTableRecord GcDbViewTableRecord
#endif
