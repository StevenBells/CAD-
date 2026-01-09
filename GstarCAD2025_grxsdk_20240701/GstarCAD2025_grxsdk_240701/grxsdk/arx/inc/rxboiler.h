/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/rxboiler.h"
#include "AdAChar.h"
#include "rxnames.h"
#include "acbasedefs.h"

#ifndef AcDbEntity
#define AcDbEntity GcDbEntity
#endif

#ifndef AcRxObject
#define AcRxObject GcRxObject
#endif

#ifndef AcRxClass
#define AcRxClass GcRxClass
#endif

#ifndef acrxFindAcRxClass
#define acrxFindAcRxClass gcrxFindGcRxClass
#endif

#ifndef acrxQueueClassForInitialization
#define acrxQueueClassForInitialization gcrxQueueClassForInitialization
#endif

#ifndef acrxInstantiateClass
#define acrxInstantiateClass gcrxInstantiateClass
#endif

#ifndef acrx_abort
#define acrx_abort gcrx_abort
#endif

#ifndef ACRX_STATIC_CHECK
#define ACRX_STATIC_CHECK GCRX_STATIC_CHECK
#endif

#ifndef ACRX_AUTO_INIT_QUEUE_EXPR
#define ACRX_AUTO_INIT_QUEUE_EXPR GCRX_AUTO_INIT_QUEUE_EXPR
#endif

#ifndef ACRX_AUTO_INIT
#define ACRX_AUTO_INIT GCRX_AUTO_INIT
#endif

#ifndef ACRX_AUTO_INIT_DEFAULT
#define ACRX_AUTO_INIT_DEFAULT GCRX_AUTO_INIT_DEFAULT
#endif

#ifndef ACRX_DEFINE_GPDESC
#define ACRX_DEFINE_GPDESC GCRX_DEFINE_GPDESC
#endif

#ifndef ACRX_DECLARE_MEMBERS_EXPIMP
#define ACRX_DECLARE_MEMBERS_EXPIMP GCRX_DECLARE_MEMBERS_EXPIMP
#endif

#ifndef ACRX_EMPTY
#define ACRX_EMPTY GCRX_EMPTY
#endif

#ifndef ACRX_DECLARE_MEMBERS
#define ACRX_DECLARE_MEMBERS GCRX_DECLARE_MEMBERS
#endif

#ifndef ACRX_DEFINE_MEMBERS_WORKER
#define ACRX_DEFINE_MEMBERS_WORKER GCRX_DEFINE_MEMBERS_WORKER
#endif

#ifndef ACRX_DEFINE_MEMBERS
#define ACRX_DEFINE_MEMBERS GCRX_DEFINE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS_WORKER
#define ACRX_NO_CONS_DEFINE_MEMBERS_WORKER GCRX_NO_CONS_DEFINE_MEMBERS_WORKER
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS
#define ACRX_NO_CONS_DEFINE_MEMBERS GCRX_NO_CONS_DEFINE_MEMBERS
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS_AUTO
#define ACRX_NO_CONS_DEFINE_MEMBERS_AUTO GCRX_NO_CONS_DEFINE_MEMBERS_AUTO
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_WORKER
#define ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_WORKER GCRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_WORKER
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES
#define ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES GCRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES
#endif

#ifndef ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_AUTO
#define ACRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_AUTO GCRX_NO_CONS_DEFINE_MEMBERS_WITH_PROPERTIES_AUTO
#endif

#ifndef ACRX_CONS_DEFINE_MEMBERS_WORKER
#define ACRX_CONS_DEFINE_MEMBERS_WORKER GCRX_CONS_DEFINE_MEMBERS_WORKER
#endif

#ifndef ACRX_CONS_DEFINE_MEMBERS
#define ACRX_CONS_DEFINE_MEMBERS GCRX_CONS_DEFINE_MEMBERS
#endif

#ifndef ACRX_CONS_DEFINE_MEMBERS_AUTO
#define ACRX_CONS_DEFINE_MEMBERS_AUTO GCRX_CONS_DEFINE_MEMBERS_AUTO
#endif

#ifndef ACRX_DXF_DEFINE_MEMBERS
#define ACRX_DXF_DEFINE_MEMBERS GCRX_DXF_DEFINE_MEMBERS
#endif

#ifndef ACRX_DXF_DEFINE_MEMBERS_WITH_PROPERTIES
#define ACRX_DXF_DEFINE_MEMBERS_WITH_PROPERTIES GCRX_DXF_DEFINE_MEMBERS_WITH_PROPERTIES
#endif

#ifndef newAcRxClass
#define newAcRxClass newGcRxClass
#endif
