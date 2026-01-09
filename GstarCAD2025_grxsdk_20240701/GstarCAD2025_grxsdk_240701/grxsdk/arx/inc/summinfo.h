/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/summinfo.h"
#include "rxobject.h"
#include "AcString.h"

#ifndef AcDbDatabaseSummaryInfo
#define AcDbDatabaseSummaryInfo GcDbDatabaseSummaryInfo
#endif

#ifndef AcDbSummaryInfoReactor
#define AcDbSummaryInfoReactor GcDbSummaryInfoReactor
#endif

#ifndef AcDbSummaryInfoManager
#define AcDbSummaryInfoManager GcDbSummaryInfoManager
#endif


#ifndef ACDB_SUMMINFO_INVALID_CHARACTERS
#define ACDB_SUMMINFO_INVALID_CHARACTERS GCDB_SUMMINFO_INVALID_CHARACTERS
#endif

#ifndef acdbGetSummaryInfo
#define acdbGetSummaryInfo gcdbGetSummaryInfo
#endif

#ifndef acdbPutSummaryInfo
#define acdbPutSummaryInfo gcdbPutSummaryInfo
#endif

#ifndef acdbSummaryInfoManager
#define acdbSummaryInfoManager gcdbSummaryInfoManager
#endif

#ifndef acdbValidateCustomSummaryInfoKey
#define acdbValidateCustomSummaryInfoKey gcdbValidateCustomSummaryInfoKey
#endif
