/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbtrans.h"
#include "dbmain.h"
#include "dbapserv.h"

#ifndef Acad
#define Acad Gcad
#endif

#ifndef AcDb
#define AcDb GcDb
#endif

#ifndef AcArray
#define AcArray GcArray
#endif

#ifndef AcDbObject
#define AcDbObject GcDbObject
#endif

#ifndef AcDbObjectId
#define AcDbObjectId GcDbObjectId
#endif

#ifndef AcRxObject
#define AcRxObject GcRxObject
#endif

#ifndef AcTransaction
#define AcTransaction GcTransaction
#endif

#ifndef AcDbTransactionManager
#define AcDbTransactionManager GcDbTransactionManager
#endif

#ifndef AcTransactionReactor
#define AcTransactionReactor GcTransactionReactor
#endif

#ifndef acdbTransactionManager
#define acdbTransactionManager gcdbTransactionManager
#endif

#ifndef acdbTransactionManagerPtr
#define acdbTransactionManagerPtr gcdbTransactionManagerPtr
#endif

#ifndef ACRX_DECLARE_MEMBERS
#define ACRX_DECLARE_MEMBERS GCRX_DECLARE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif
