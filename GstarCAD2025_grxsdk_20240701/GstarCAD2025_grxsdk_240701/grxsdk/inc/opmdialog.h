/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef _OPMDIALOG_H
#define _OPMDIALOG_H

DEFINE_GUID(IID_IOPMPropertyDialog, 0x98f2de4f, 0x848f, 0x4cf7, 0xa4, 0x0c, 0x9b, 0xfa, 0xce, 0x32, 0xc6, 0xde);

interface DECLSPEC_UUID("98F2DE4F-848F-4CF7-A40C-9BFACE32C6DE") IOPMPropertyDialog : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(DoModal)(THIS_  BSTR* propValueString, GcDbObjectIdArray* ObjectIdArray) PURE;
};

typedef IOPMPropertyDialog FAR* LPPROPERTYDIALOG;

DEFINE_GUID(IID_IOPMPropertyDialog2, 0x0345d2e5, 0x0473, 0x4fb3, 0x80, 0xaa, 0x60, 0x63, 0xf7, 0x05, 0x3c, 0x82);

interface DECLSPEC_UUID("0345D2E5-0473-4FB3-80AA-6063F7053C82")  IOPMPropertyDialog2 : public IUnknown
{
  BEGIN_INTERFACE
  STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
  STDMETHOD_(ULONG, AddRef)(THIS) PURE;
  STDMETHOD_(ULONG, Release)(THIS) PURE;

  STDMETHOD(DoModal)(THIS_  BSTR* propValueString, VARIANT ObjectUnknownArray) PURE;
};

typedef IOPMPropertyDialog2 FAR* LPPROPERTYDIALOG2;

#endif
