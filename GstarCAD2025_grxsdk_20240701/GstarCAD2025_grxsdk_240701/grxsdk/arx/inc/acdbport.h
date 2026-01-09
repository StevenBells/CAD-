/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/gcdbport.h"
#ifndef ACDB_API
#define ACDB_API GCDB_API
#endif


#ifdef  ACDB_API
#include "adesk.h"
#endif

#ifndef ACDB_PORT
#define ACDB_PORT GCDB_PORT
#endif

#ifndef ACDB_PORT_GLOBAL
#define ACDB_PORT_GLOBAL GCDB_PORT_GLOBAL
#endif

#ifndef ACDB_PORT_STATIC
#define ACDB_PORT_STATIC GCDB_PORT_STATIC
#endif
