/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#pragma once
#include "../../inc/rxclass.h"
#include "acbasedefs.h"
#include "rxobject.h"
#include "AdAChar.h"
#include "acbasedefs.h" 

#ifndef AcRxMemberCollectionConstructorPtr
#define AcRxMemberCollectionConstructorPtr GcRxMemberCollectionConstructorPtr
#endif

#ifndef AcRxClass
#define AcRxClass GcRxClass
#endif

#ifndef newAcRxClass
#define newAcRxClass newGcRxClass
#endif

#ifndef acrxBuildClassHierarchy
#define acrxBuildClassHierarchy gcrxBuildClassHierarchy
#endif

#ifndef deleteAcRxClass
#define deleteAcRxClass deleteGcRxClass
#endif

#ifndef acrxQueueClassForInitialization
#define acrxQueueClassForInitialization gcrxQueueClassForInitialization
#endif


#ifndef ACHAR
#define ACHAR GCHAR
#endif

#ifndef AcRxSet
#define AcRxSet GcRxSet
#endif

#ifndef AcRxMemberCollection
#define AcRxMemberCollection GcRxMemberCollection
#endif

#ifndef AcRxAttributeCollection
#define AcRxAttributeCollection GcRxAttributeCollection
#endif

#ifndef ACBASE_PORT
#define ACBASE_PORT GCBASE_PORT
#endif


#ifndef AcRxImpClass
#define AcRxImpClass GcRxImpClass
#endif

#ifndef AcRxMemberCollectionBuilder
#define AcRxMemberCollectionBuilder GcRxMemberCollectionBuilder
#endif
