/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbsymtb.h"
#include "dbmain.h"
#include "dbdict.h"
#include "dbdate.h"
#include "dbBackground.h"
#include "gevec2d.h"
#include "acgiviewport.h"
#include "acgivisualstyle.h"
#include "AcDbCore2dDefs.h"
#include "PAL/api/charset.h"
#include "PAL/api/FontPitchAndFamily.h"

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcDb
#define AcDb GcDb
#endif

#ifndef ACHAR
#define ACHAR GCHAR
#endif

#ifndef Adesk
#define Adesk Gsoft
#endif

#ifndef Atil
#define Atil Gtil
#endif

#ifndef Autodesk
#define Autodesk Gssoft
#endif

#ifndef AutoCAD
#define AutoCAD Gscad
#endif

#ifndef AcString
#define AcString GcString
#endif

#ifndef AcCmColor
#define AcCmColor GcCmColor
#endif

#ifndef AcDbEntity
#define AcDbEntity GcDbEntity
#endif

#ifndef AcDbObjectId
#define AcDbObjectId GcDbObjectId
#endif

#ifndef AcDbDwgFiler
#define AcDbDwgFiler GcDbDwgFiler
#endif

#ifndef AcDbDxfFiler
#define AcDbDxfFiler GcDbDxfFiler
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcDbBlockEnd
#define AcDbBlockEnd GcDbBlockEnd
#endif

#ifndef AcDbDatabase
#define AcDbDatabase GcDbDatabase
#endif

#ifndef AcCmEntityColor
#define AcCmEntityColor GcCmEntityColor
#endif

#ifndef AcGiDrawable
#define AcGiDrawable GcGiDrawable
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

#ifndef AcCmTransparency
#define AcCmTransparency GcCmTransparency
#endif

#ifndef AcDbDwgVersion
#define AcDbDwgVersion GcDbDwgVersion
#endif

#ifndef AcDbBlockBegin
#define AcDbBlockBegin GcDbBlockBegin
#endif

#ifndef appendAcDbEntity
#define appendAcDbEntity appendGcDbEntity
#endif

#ifndef AcDbObjectIdArray
#define AcDbObjectIdArray GcDbObjectIdArray
#endif

#ifndef AcDbSortentsTable
#define AcDbSortentsTable GcDbSortentsTable
#endif

#ifndef AcDbSymbolTableRecord
#define AcDbSymbolTableRecord GcDbSymbolTableRecord
#endif

#ifndef AcDbBlockTableRecord
#define AcDbBlockTableRecord GcDbBlockTableRecord
#endif

#ifndef AcDbLayerTableRecord
#define AcDbLayerTableRecord GcDbLayerTableRecord
#endif

#ifndef AcDbTextStyleTableRecord
#define AcDbTextStyleTableRecord GcDbTextStyleTableRecord
#endif

#ifndef AcDbLinetypeTableRecord
#define AcDbLinetypeTableRecord GcDbLinetypeTableRecord
#endif

#ifndef AcDbAbstractViewTableRecord
#define AcDbAbstractViewTableRecord GcDbAbstractViewTableRecord
#endif

#ifndef AcDbBlockTableRecordIterator
#define AcDbBlockTableRecordIterator GcDbBlockTableRecordIterator
#endif

#ifndef AcDbBlockReferenceIdIterator
#define AcDbBlockReferenceIdIterator GcDbBlockReferenceIdIterator
#endif

#ifndef AcGeVector2d
#define AcGeVector2d GcGeVector2d
#endif

#ifndef AcGePoint2d
#define AcGePoint2d GcGePoint2d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGiViewportTraits
#define AcGiViewportTraits GcGiViewportTraits
#endif

#ifndef AcDbViewTableRecord
#define AcDbViewTableRecord GcDbViewTableRecord
#endif

#ifndef AcGiToneOperatorParameters
#define AcGiToneOperatorParameters GcGiToneOperatorParameters
#endif

#ifndef AcDbAnnotationScale
#define AcDbAnnotationScale GcDbAnnotationScale
#endif

#ifndef AcDbUCSTableRecord
#define AcDbUCSTableRecord GcDbUCSTableRecord
#endif

#ifndef AcDbViewportTableRecord
#define AcDbViewportTableRecord GcDbViewportTableRecord
#endif

#ifndef AcGsView
#define AcGsView GcGsView
#endif

#ifndef AcDbRegAppTableRecord
#define AcDbRegAppTableRecord GcDbRegAppTableRecord
#endif

#ifndef AcDbDimStyleTableRecord
#define AcDbDimStyleTableRecord GcDbDimStyleTableRecord
#endif

#ifndef AcDbSymbolTable
#define AcDbSymbolTable GcDbSymbolTable
#endif

#ifndef AcDbSymbolTableIterator
#define AcDbSymbolTableIterator GcDbSymbolTableIterator
#endif

#ifndef AcDbBlockTable
#define AcDbBlockTable GcDbBlockTable
#endif

#ifndef AcDbBlockTableIterator
#define AcDbBlockTableIterator GcDbBlockTableIterator
#endif

#ifndef AcDbLayerTable
#define AcDbLayerTable GcDbLayerTable
#endif

#ifndef AcDbLayerTableIterator
#define AcDbLayerTableIterator GcDbLayerTableIterator
#endif

#ifndef AcDbTextStyleTable
#define AcDbTextStyleTable GcDbTextStyleTable
#endif

#ifndef AcDbTextStyleTableIterator
#define AcDbTextStyleTableIterator GcDbTextStyleTableIterator
#endif

#ifndef AcDbLinetypeTable
#define AcDbLinetypeTable GcDbLinetypeTable
#endif

#ifndef AcDbLinetypeTableIterator
#define AcDbLinetypeTableIterator GcDbLinetypeTableIterator
#endif

#ifndef AcDbAbstractViewTable
#define AcDbAbstractViewTable GcDbAbstractViewTable
#endif

#ifndef AcDbAbstractViewTableIterator
#define AcDbAbstractViewTableIterator GcDbAbstractViewTableIterator
#endif

#ifndef AcDbViewTable
#define AcDbViewTable GcDbViewTable
#endif

#ifndef AcDbViewTableIterator
#define AcDbViewTableIterator GcDbViewTableIterator
#endif

#ifndef AcDbUCSTable
#define AcDbUCSTable GcDbUCSTable
#endif

#ifndef AcDbUCSTableIterator
#define AcDbUCSTableIterator GcDbUCSTableIterator
#endif

#ifndef AcDbViewportTable
#define AcDbViewportTable GcDbViewportTable
#endif

#ifndef AcDbViewportTableIterator
#define AcDbViewportTableIterator GcDbViewportTableIterator
#endif

#ifndef AcDbRegAppTable
#define AcDbRegAppTable GcDbRegAppTable
#endif

#ifndef AcDbRegAppTableIterator
#define AcDbRegAppTableIterator GcDbRegAppTableIterator
#endif

#ifndef AcDbDimStyleTable
#define AcDbDimStyleTable GcDbDimStyleTable
#endif

#ifndef AcDbDimStyleTableIterator
#define AcDbDimStyleTableIterator GcDbDimStyleTableIterator
#endif

#ifndef AcDbBlockReference
#define AcDbBlockReference GcDbBlockReference
#endif

#ifndef ACDB_DECLARE_MEMBERS
#define ACDB_DECLARE_MEMBERS GCDB_DECLARE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif
