/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef _DYNPROPS_H
#define _DYNPROPS_H
#include "gsoft.h"
#include "GdGChar.h"
#include "gcdbport.h"
#include "dynprops-GcFilterablePropertyContext.h"

#ifdef GCAX_EXPORTS
#define DLLAPI __declspec(dllexport)
#else
#define DLLAPI __declspec(dllimport)
#endif

#ifdef _GSOFT_WINDOWS_
#define S_NOTIFYCMD MAKE_HRESULT(0,0,0x02)

interface IPropertyManager;
interface IDynamicProperty;
interface IPropertyManager2;
interface IDynamicProperty2;
interface IPropertySource;
class OPMPerInstancePropertySources : public GcRxObject
{
public:
  GCRX_DECLARE_MEMBERS_EXPIMP(OPMPerInstancePropertySources, DLLAPI);
  ~OPMPerInstancePropertySources() {}

  virtual bool SetPropertySourceAt(const BSTR* pName, IPropertySource* pSource) = 0;
  virtual IPropertySource* GetPropertySourceAt(const BSTR* pName) = 0;
  virtual bool RemovePropertySourceAt(const BSTR* pName) = 0;
  virtual bool GetPropertySourceNames(VARIANT* pNames) = 0;
};

class OPMPerInstancePropertyExtension : public GcRxObject
{
public:
  GCRX_DECLARE_MEMBERS_EXPIMP(OPMPerInstancePropertyExtension, DLLAPI);
  ~OPMPerInstancePropertyExtension() {};
  virtual bool AddObjectPropertySourceName(const BSTR* pName) = 0;
  virtual bool RemoveObjectPropertySourceName(const BSTR* pName) = 0;
  virtual bool GetObjectPropertySourceNames(VARIANT* pNames) = 0;
};

class OPMPerInstancePropertyExtensionFactory : public GcRxObject
{
public:
  GCRX_DECLARE_MEMBERS_EXPIMP(OPMPerInstancePropertyExtensionFactory, DLLAPI);
  ~OPMPerInstancePropertyExtensionFactory() {};
  virtual OPMPerInstancePropertyExtension* CreateOPMPerInstancePropertyExtension(GcRxClass* pClass) = 0;
};

#define GET_OPM_PERINSTANCE_CREATE_PROTOCOL() \
OPMPerInstancePropertyExtensionFactory::cast(GcDbDatabase::desc()->queryX(OPMPerInstancePropertyExtensionFactory::desc()))

#define GET_OPM_PERINSTANCE_PROPERTY_SOURCES() \
OPMPerInstancePropertySources::cast(GcDbDatabase::desc()->queryX(OPMPerInstancePropertySources::desc()))

#define GET_OPM_PERINSTANCE_EXTENSION_PROTOCOL(pGcRxClass) \
GET_OPM_PERINSTANCE_CREATE_PROTOCOL()->CreateOPMPerInstancePropertyExtension(pGcRxClass)

class OPMPropertyExtension : public GcRxObject
{
public:
  GCRX_DECLARE_MEMBERS_EXPIMP(OPMPropertyExtension, DLLAPI);
  ~OPMPropertyExtension() {}
  virtual IPropertyManager* GetPropertyManager() = 0;
  virtual void SetPropertyManager(IPropertyManager* pPropManager) = 0;
};

class OPMPropertyExtensionFactory : public GcRxObject
{
public:
  GCRX_DECLARE_MEMBERS_EXPIMP(OPMPropertyExtensionFactory, DLLAPI);
  ~OPMPropertyExtensionFactory() {}

  virtual OPMPropertyExtension* CreateOPMObjectProtocol(GcRxClass* pClass,
                                                        LONG lReserved = 0) = 0;
  virtual OPMPropertyExtension* CreateOPMCommandProtocol(const GCHAR * pGlobalCommand,
                                                         LONG lReserved = 0) = 0;

  virtual BOOL GetOPMManager(const GCHAR * pGlobalCommand, IPropertyManager** pManager) = 0;
  virtual BOOL GetPropertyCount(GcRxClass* pClass, LONG* pPropCount) = 0;
  virtual LONG GetPropertyClassArray(GcRxClass* pClass,
                                     IDynamicProperty**  pPropertyArray) = 0;
  virtual BOOL GetPropertyCountEx(GcRxClass* pClass, LONG* pPropCount) = 0;
  virtual LONG GetPropertyClassArray(GcRxClass* pClass,
                                     IUnknown**  pPropertyArray) = 0;
};

#define GET_OPMEXTENSION_CREATE_PROTOCOL() \
OPMPropertyExtensionFactory::cast(GcDbDatabase::desc()->queryX(OPMPropertyExtensionFactory::desc()))

#define GET_OPMPROPERTY_MANAGER(pGcRxClass) \
GET_OPMEXTENSION_CREATE_PROTOCOL()->CreateOPMObjectProtocol(pGcRxClass)->GetPropertyManager() 

#define GET_OPM_COMMAND_PROPERTY_MANAGER(pCommandName) \
GET_OPMEXTENSION_CREATE_PROTOCOL()->CreateOPMCommandProtocol(pCommandName)->GetPropertyManager() 

typedef BOOL(*OPMDIALOGPROC)(void);

const int MAX_OPMSTRLEN = 256;

DEFINE_GUID(IID_IDynamicPropertyNotify, 0x10405817, 0xb139, 0x4823, 0x92, 0xa3, 0xcb, 0xcd, 0x58, 0x9b, 0x95, 0x55);

interface DECLSPEC_UUID("10405817-B139-4823-92A3-CBCD589B9555")
  IDynamicPropertyNotify : public IUnknown
{
  BEGIN_INTERFACE
  
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(OnChanged)(THIS_ IDynamicProperty* pDynamicProperty) PURE;
  STDMETHOD(GetCurrentSelectionSet)(THIS_ VARIANT* pSelection) PURE;
};

typedef IDynamicPropertyNotify FAR* LPDYNAMICPROPERTYNOTIFY;

DEFINE_GUID(IID_IDynamicPropertyNotify2, 0x543b208b, 0x5794, 0x49a0, 0xb9, 0x54, 0x1c, 0x61, 0x1a, 0xe5, 0xee, 0x1b);

interface DECLSPEC_UUID("543B208B-5794-49A0-B954-1C611AE5EE1B")
  IDynamicPropertyNotify2 : public IUnknown
{
  BEGIN_INTERFACE

  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(OnChanged)(THIS_ IUnknown* pDynamicProperty) PURE;
  STDMETHOD(GetCurrentSelectionSet)(THIS_ VARIANT* pSelection) PURE;
};

typedef IDynamicPropertyNotify2 FAR* LPDYNAMICPROPERTYNOTIFY2;

DEFINE_GUID(IID_IDynamicProperty, 0x0d719069, 0xd834, 0x4e87, 0xa3, 0x3a, 0x94, 0xf0, 0x43, 0x9f, 0x34, 0x14);

interface DECLSPEC_UUID("0D719069-D834-4E87-A33A-94F0439F3414")
  IDynamicProperty : public IUnknown
{
  BEGIN_INTERFACE

  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetGUID)(THIS_ GUID* propGUID) PURE;
  STDMETHOD(GetDisplayName)(THIS_ BSTR* bstrName) PURE;
  STDMETHOD(IsPropertyEnabled)(THIS_ LONG_PTR objectID,
                               BOOL* pbEnabled) PURE;
  STDMETHOD(IsPropertyReadOnly)(THIS_ BOOL* pbReadonly) PURE;
  STDMETHOD(GetDescription)(THIS_ BSTR* bstrName) PURE;

  STDMETHOD(GetCurrentValueName)(THIS_ BSTR* pbstrName) PURE;
  STDMETHOD(GetCurrentValueType)(THIS_ VARTYPE* pVarType) PURE;
  STDMETHOD(GetCurrentValueData)(THIS_ LONG_PTR objectID,
                                 VARIANT* pvarData) PURE;
  STDMETHOD(SetCurrentValueData)(THIS_ LONG_PTR objectID,
                                 const VARIANT varData) PURE;

  STDMETHOD(Connect)(THIS_ IDynamicPropertyNotify* pSink) PURE;
  STDMETHOD(Disconnect)(THIS_) PURE;
};

typedef IDynamicProperty FAR* LPDYNAMICPROPERTY;

DEFINE_GUID(IID_IDynamicProperty2, 0xeecc66e7, 0xafa2, 0x4296, 0xa6, 0x2c, 0xc0, 0x8f, 0xca, 0xf7, 0x18, 0xa9);

interface DECLSPEC_UUID("EECC66E7-AFA2-4296-A62C-C08FCAF718A9")
  IDynamicProperty2 : public IUnknown
{
  BEGIN_INTERFACE

  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetGUID)(THIS_ GUID* propGUID) PURE;
  STDMETHOD(GetDisplayName)(THIS_ BSTR* bstrName) PURE;
  STDMETHOD(IsPropertyEnabled)(THIS_ IUnknown *pUnk,
                               BOOL* pbEnabled) PURE;
  STDMETHOD(IsPropertyReadOnly)(THIS_ BOOL* pbReadonly) PURE;
  STDMETHOD(GetDescription)(THIS_ BSTR* bstrName) PURE;

  STDMETHOD(GetCurrentValueName)(THIS_ BSTR* pbstrName) PURE;
  STDMETHOD(GetCurrentValueType)(THIS_ VARTYPE* pVarType) PURE;
  STDMETHOD(GetCurrentValueData)(THIS_ IUnknown *pUnk,
                                 VARIANT* pvarData) PURE;
  STDMETHOD(SetCurrentValueData)(THIS_ IUnknown *pUnk,
                                 const VARIANT varData) PURE;

  STDMETHOD(Connect)(THIS_ IDynamicPropertyNotify2* pSink) PURE;
  STDMETHOD(Disconnect)(THIS_) PURE;
};

typedef IDynamicProperty2 FAR* LPDYNAMICPROPERTY2;

const int DISPID_DYNAMIC = -23;

DEFINE_GUID(IID_IDynamicEnumProperty, 0xd9760fcd, 0x9d66, 0x4bfe, 0xab, 0x0e, 0x9a, 0x65, 0x50, 0x95, 0x1e, 0x18);

interface DECLSPEC_UUID("D9760FCD-9D66-4BFE-AB0E-9A6550951E18")
  IDynamicEnumProperty : public IUnknown
{
  BEGIN_INTERFACE

  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetNumPropertyValues)(THIS_ LONG* numValues) PURE;
  STDMETHOD(GetPropValueName)(THIS_ LONG index,
                              BSTR* valueName) PURE;
  STDMETHOD(GetPropValueData)(THIS_ LONG index,
                              VARIANT* valueName) PURE;
};

typedef IDynamicEnumProperty FAR* LPDYNAMICENUMPROPERTY;

DEFINE_GUID(IID_IDynamicDialogProperty, 0x353f45c6, 0xf17e, 0x4f98, 0x9b, 0x5a, 0x4b, 0x25, 0xe2, 0xc6, 0xce, 0x49);

interface DECLSPEC_UUID("353F45C6-F17E-4F98-9B5A-4B25E2C6CE49")
  IDynamicDialogProperty : public IUnknown
{
  BEGIN_INTERFACE

  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetCustomDialogProc)(THIS_ OPMDIALOGPROC* pDialogProc) PURE;
  STDMETHOD(GetMacroName)(THIS_ BSTR* bstrName) PURE;
};

typedef IDynamicDialogProperty FAR* LPDYNAMICDIALOGPROPERTY;

DEFINE_GUID(IID_IPropertyManager, 0x7fdd1fa7, 0x4001, 0x4a27, 0x8b, 0x28, 0x07, 0x3e, 0xd8, 0x4f, 0xd0, 0xfd);

interface DECLSPEC_UUID("7FDD1FA7-4001-4A27-8B28-073ED84FD0FD")
  IPropertyManager : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(AddProperty)(THIS_ IDynamicProperty FAR* pProperty) PURE;
  STDMETHOD(RemoveProperty)(THIS_ IDynamicProperty FAR* pProperty) PURE;
  STDMETHOD(GetDynamicProperty)(THIS_ LONG index,
                                IDynamicProperty ** pProperty) PURE;
  STDMETHOD(GetDynamicPropertyByName)(THIS_ BSTR propName,
                                      IDynamicProperty ** pProperty) PURE;
  STDMETHOD(GetDynamicPropertyCount)(THIS_ LONG* count) PURE;
  STDMETHOD(GetDynamicClassInfo)(THIS_ IUnknown* pObj,
                                 ITypeInfo** pptiDynamic,
                                 DWORD* dwCookie) PURE;
};

typedef IPropertyManager FAR* LPPROPERTYMANAGER;

DEFINE_GUID(IID_IPropertyManager2, 0x8e32effa, 0x569b, 0x42bb, 0xb6, 0x21, 0xd1, 0xda, 0x91, 0x74, 0x08, 0x26);

interface DECLSPEC_UUID("8E32EFFA-569B-42BB-B621-D1DA91740826")
  IPropertyManager2 : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(AddProperty)(THIS_ IUnknown FAR* pDynPropObj) PURE;
  STDMETHOD(RemoveProperty)(THIS_ IUnknown FAR* pDynPropObj) PURE;
  STDMETHOD(GetDynamicProperty)(THIS_ LONG index,
                                IUnknown ** pDynPropObj) PURE;
  STDMETHOD(GetDynamicPropertyByName)(THIS_ BSTR propName,
                                      IUnknown ** pDynPropObj) PURE;
  STDMETHOD(GetDynamicPropertyCountEx)(THIS_ LONG* count) PURE;
  STDMETHOD(GetDynamicClassInfo)(THIS_ IUnknown* pObj,
                                 ITypeInfo** pptiDynamic,
                                 DWORD* dwCookie) PURE;
};

typedef IPropertyManager2 FAR* LPPROPERTYMANAGER2;

DEFINE_GUID(IID_IPropertySource, 0x6b17a109, 0x451f, 0x460f, 0xb9, 0xde, 0x98, 0x6c, 0x53, 0x87, 0x49, 0xc7);

interface DECLSPEC_UUID("6B17A109-451F-460F-B9DE-986C538749C7")
  IPropertySource : public IUnknown
{
  BEGIN_INTERFACE

    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(get_Name)(THIS_ BSTR* pName) PURE;
  STDMETHOD(GetProperties)(THIS_ IUnknown* pObject, VARIANT *pPropertyArray) PURE;
};

typedef IPropertySource FAR* LPPROPERTYSOURCE;

DEFINE_GUID(IID_IFilterableProperty, 0x7f943ef6, 0xe596, 0x436d, 0xbb, 0x16, 0x65, 0x79, 0x06, 0x57, 0xc1, 0x72);

interface DECLSPEC_UUID("7F943EF6-E596-436D-BB16-65790657C172")
  IFilterableProperty : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(ShowFilterableProperty)(THIS_ DISPID dispID,
                                    GcFilterablePropertyContext context,
                                    BOOL* pbShow) PURE;
};

typedef IFilterableProperty FAR* LPFILTERABLEPROPERTY;

DEFINE_GUID(IID_IFilterablePropertySource, 0x13fc8d4d, 0xe549, 0x41e1, 0xad, 0xb0, 0x06, 0xff, 0x61, 0x75, 0xbc, 0xa4);

interface DECLSPEC_UUID("13FC8D4D-E549-41E1-ADB0-06FF6175BCA4")
  IFilterablePropertySource : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetFilterableProperties)(THIS_ VARIANT *pPropertyArray) PURE;
};

typedef IFilterablePropertySource FAR* LPFILTERABLEPROPERTYSOURCE;

DEFINE_GUID(IID_IFilterableMultiplePropertySource, 0xa27aee79, 0x80d7, 0x4b71, 0xbb, 0x4a, 0xc6, 0xc0, 0x23, 0xce, 0xa1, 0xa7);

interface DECLSPEC_UUID("A27AEE79-80D7-4B71-BB4A-C6C023CEA1A7")
  IFilterableMultiplePropertySource : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetMultipleProperties)(THIS_ VARIANT *pPropertyArray) PURE;
};

typedef IFilterableMultiplePropertySource FAR* LPFILTERABLEMULTIPLEPROPERTYSOURCE;

DEFINE_GUID(IID_IFilterableSubtypePropertySource, 0xda1e83eb, 0x6255, 0x46a9, 0xbb, 0xb4, 0xfb, 0xdc, 0x2a, 0x79, 0xcf, 0x16);

interface DECLSPEC_UUID("DA1E83EB-6255-46A9-BBB4-FBDC2A79CF16")
  IFilterableSubtypePropertySource : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(GetSubtypes)(THIS_ VARIANT *pSubtypeGUIDsArray) PURE;

  STDMETHOD(GetSubtypeName)(THIS_ BSTR bstrSubtypeGUID,
                            BSTR* bstrSubtypeName) PURE;

  STDMETHOD(GetSubtypeProperties)(THIS_ BSTR bstrSubtypeGUID,
                                  VARIANT *pPropertyArray) PURE;

  STDMETHOD(GetObjectSubtype)(THIS_ IUnknown* pObject,
                              BSTR* bstrSubtypeGUID) PURE;
};

typedef IFilterableSubtypePropertySource FAR* LPFILTERABLESUBTYPEPROPERTYSOURCE;
#endif
#endif 