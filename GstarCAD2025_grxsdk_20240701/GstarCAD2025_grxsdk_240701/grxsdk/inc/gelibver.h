/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GELIBVERSION_H
#define GC_GELIBVERSION_H

#include "gsoft.h"
#include "gedll.h"
#pragma pack (push, 8)

#define IMAGE_MAJOR_VER          2
#define IMAGE_MINOR_VER          0
#define IMAGE_CORRECTIVE_VER     0
#define IMAGE_INTERNAL_VER       0

class 
GcGeLibVersion
{
public:
  GE_DLLEXPIMPORT GcGeLibVersion();
  GE_DLLEXPIMPORT GcGeLibVersion(const GcGeLibVersion&);
  GE_DLLEXPIMPORT GcGeLibVersion(Gsoft::UInt8 major, Gsoft::UInt8 minor,
                                 Gsoft::UInt8 corrective,
                                 Gsoft::UInt8 internal_version);

  GE_DLLEXPIMPORT Gsoft::UInt8     majorVersion() const;
  GE_DLLEXPIMPORT Gsoft::UInt8     minorVersion() const;
  GE_DLLEXPIMPORT Gsoft::UInt8     correctiveVersion() const;
  GE_DLLEXPIMPORT Gsoft::UInt8     schemaVersion() const;

  GE_DLLEXPIMPORT GcGeLibVersion&     setMajorVersion(Gsoft::UInt8 val);
  GE_DLLEXPIMPORT GcGeLibVersion&     setMinorVersion(Gsoft::UInt8 val);
  GE_DLLEXPIMPORT GcGeLibVersion&     setCorrectiveVersion(Gsoft::UInt8 val);
  GE_DLLEXPIMPORT GcGeLibVersion&     setSchemaVersion(Gsoft::UInt8 val);

  GE_DLLEXPIMPORT Gsoft::Boolean operator ==      (const GcGeLibVersion&) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator !=      (const GcGeLibVersion&) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator <       (const GcGeLibVersion&) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator <=      (const GcGeLibVersion&) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator >       (const GcGeLibVersion&) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator >=      (const GcGeLibVersion&) const;

  GE_DLLDATAEXIMP static const GcGeLibVersion kRelease0_95;
  GE_DLLDATAEXIMP static const GcGeLibVersion kReleaseSed;
  GE_DLLDATAEXIMP static const GcGeLibVersion kReleaseTah;
private:
  Gsoft::UInt8   mVersion[10];
};

#pragma pack (pop)
#endif
