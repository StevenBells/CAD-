/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/dbxEntryPoint.h"
#include "rxdefs.h"
#include "rxdlinkr.h"

#ifndef AcRx
#define AcRx GcRx
#endif

#ifndef AcRxDbxApp
#define AcRxDbxApp GcRxDbxApp
#endif

#ifndef AcRxClass
#define AcRxClass GcRxClass
#endif

#ifndef acrxGetApp
#define acrxGetApp gcrxGetApp
#endif

#ifndef acrxEntryPoint
#define acrxEntryPoint gcrxEntryPoint
#endif

#ifndef IMPLEMENT_ARX_ENTRYPOINT_STD
#define IMPLEMENT_ARX_ENTRYPOINT_STD IMPLEMENT_GRX_ENTRYPOINT_STD
#endif

#ifndef IMPLEMENT_ARX_ENTRYPOINT_CLR
#define IMPLEMENT_ARX_ENTRYPOINT_CLR IMPLEMENT_GRX_ENTRYPOINT_CLR
#endif

#ifndef IMPLEMENT_ARX_ENTRYPOINT
#define IMPLEMENT_ARX_ENTRYPOINT IMPLEMENT_GRX_ENTRYPOINT
#endif

#ifndef ACDB_REGISTER_OBJECT_ENTRY_AUTO
#define ACDB_REGISTER_OBJECT_ENTRY_AUTO GCDB_REGISTER_OBJECT_ENTRY_AUTO
#endif

#ifndef ACDB_REGISTER_OBJECT_ENTRY_PRAGMA
#define ACDB_REGISTER_OBJECT_ENTRY_PRAGMA GCDB_REGISTER_OBJECT_ENTRY_PRAGMA
#endif
