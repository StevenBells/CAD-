/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbtable.h"
#include "dbmain.h"
#include "dbents.h"
#include "AcField.h"
#include "DbLinkedTableData.h"
#include "DbFormattedTableData.h"

#ifndef AcDb
#define AcDb GcDb
#endif

#ifndef Acad
#define Acad Gcad
#endif

#ifndef Adesk
#define Adesk Gsoft
#endif

#ifndef ACHAR
#define ACHAR GCHAR
#endif

#ifndef AcValue
#define AcValue GcValue
#endif

#ifndef AcCmColor
#define AcCmColor GcCmColor
#endif

#ifndef AcString
#define AcString GcString
#endif

#ifndef AcRxObject
#define AcRxObject GcRxObject
#endif

#ifndef AcDbTable
#define AcDbTable GcDbTable
#endif

#ifndef AcDbObjectId
#define AcDbObjectId GcDbObjectId
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcDbLinkedTableData
#define AcDbLinkedTableData GcDbLinkedTableData
#endif

#ifndef AcCellRange
#define AcCellRange GcCellRange
#endif

#ifndef AcDbDataLink
#define AcDbDataLink GcDbDataLink
#endif

#ifndef AcDbIntArray
#define AcDbIntArray GcDbIntArray
#endif

#ifndef AcDbObjectIdArray
#define AcDbObjectIdArray GcDbObjectIdArray
#endif

#ifndef AcGePoint3d
#define AcGePoint3d GcGePoint3d
#endif

#ifndef AcGeVector3d
#define AcGeVector3d GcGeVector3d
#endif

#ifndef AcGePoint3dArray
#define AcGePoint3dArray GcGePoint3dArray
#endif

#ifndef AcDbFullSubentPathArray
#define AcDbFullSubentPathArray GcDbFullSubentPathArray
#endif

#ifndef AcDbDwgFiler
#define AcDbDwgFiler GcDbDwgFiler
#endif

#ifndef AcDbDxfFiler
#define AcDbDxfFiler GcDbDxfFiler
#endif

#ifndef AcDbAuditInfo
#define AcDbAuditInfo GcDbAuditInfo
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

#ifndef AcDbTableTemplate
#define AcDbTableTemplate GcDbTableTemplate
#endif

#ifndef AcDbTableIterator
#define AcDbTableIterator GcDbTableIterator
#endif

#ifndef AcGridProperty
#define AcGridProperty GcGridProperty
#endif

#ifndef ADESK_DEPRECATED
#define ADESK_DEPRECATED GSOFT_DEPRECATED
#endif

#ifndef ACDB_DECLARE_MEMBERS
#define ACDB_DECLARE_MEMBERS GCDB_DECLARE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif
