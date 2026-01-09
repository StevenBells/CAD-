/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GESCL3D_H
#define GC_GESCL3D_H

#include "gsoft.h"
#include "gegbl.h"
#pragma pack (push, 8)

class GcGeMatrix3d;

class 
GcGeScale3d
{
public:
  GE_DLLEXPIMPORT GcGeScale3d();
  GE_DLLEXPIMPORT GcGeScale3d(const GcGeScale3d& src);
  GE_DLLEXPIMPORT GcGeScale3d(double factor);
  GE_DLLEXPIMPORT GcGeScale3d(double xFact, double yFact, double zFact);

  GE_DLLDATAEXIMP static const   GcGeScale3d kIdentity;

  GE_DLLEXPIMPORT GcGeScale3d    operator *  (const GcGeScale3d& sclVec) const;
  GE_DLLEXPIMPORT GcGeScale3d&   operator *= (const GcGeScale3d& scl);
  GE_DLLEXPIMPORT GcGeScale3d&   preMultBy(const GcGeScale3d& leftSide);
  GE_DLLEXPIMPORT GcGeScale3d&   postMultBy(const GcGeScale3d& rightSide);
  GE_DLLEXPIMPORT GcGeScale3d&   setToProduct(const GcGeScale3d& sclVec1, const GcGeScale3d& sclVec2);
  GE_DLLEXPIMPORT GcGeScale3d    operator *  (double s) const;
  GE_DLLEXPIMPORT GcGeScale3d&   operator *= (double s);
  GE_DLLEXPIMPORT GcGeScale3d&   setToProduct(const GcGeScale3d& sclVec, double s);
  friend GE_DLLEXPIMPORT
  GcGeScale3d    operator *  (double, const GcGeScale3d& scl);

  GE_DLLEXPIMPORT GcGeScale3d    inverse() const;
  GE_DLLEXPIMPORT GcGeScale3d&   invert();

  GE_DLLEXPIMPORT Gsoft::Boolean isProportional(const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT bool operator == (const GcGeScale3d& sclVec) const;
  GE_DLLEXPIMPORT bool operator != (const GcGeScale3d& sclVec) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGeScale3d& scaleVec, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT double         operator [] (unsigned int i) const;
  GE_DLLEXPIMPORT double&        operator [] (unsigned int i);
  GE_DLLEXPIMPORT GcGeScale3d&   set(double sc0, double sc1, double sc2);

  GE_DLLEXPIMPORT operator GcGeMatrix3d   () const;
  GE_DLLEXPIMPORT void getMatrix(GcGeMatrix3d& mat) const;
  GE_DLLEXPIMPORT GcGeScale3d&   extractScale(const GcGeMatrix3d& mat);
  GE_DLLEXPIMPORT GcGeScale3d&   removeScale(GcGeMatrix3d& mat);

  double         sx, sy, sz;
};

inline bool GcGeScale3d::operator == (const GcGeScale3d& s) const
{
  return this->isEqualTo(s);
}

inline bool GcGeScale3d::operator != (const GcGeScale3d& s) const
{
  return !(this->isEqualTo(s));
}

inline double GcGeScale3d::operator [] (unsigned int i) const
{
  return *(&sx + i);
}

inline double& GcGeScale3d::operator [] (unsigned int i)
{
  return *(&sx + i);
}

#pragma pack (pop)
#endif
