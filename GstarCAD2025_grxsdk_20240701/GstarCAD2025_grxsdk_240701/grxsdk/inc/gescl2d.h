/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GESCL2D_H
#define GC_GESCL2D_H

#include "gsoft.h"
#include "gegbl.h"
#pragma pack (push, 8)

class GcGeMatrix2d;
class GcGeScale3d;

class 
GcGeScale2d
{
public:
  GE_DLLEXPIMPORT GcGeScale2d();
  GE_DLLEXPIMPORT GcGeScale2d(const GcGeScale2d& src);
  GE_DLLEXPIMPORT GcGeScale2d(double factor);
  GE_DLLEXPIMPORT GcGeScale2d(double xFactor, double yFactor);

  GE_DLLDATAEXIMP static const   GcGeScale2d kIdentity;

  GE_DLLEXPIMPORT GcGeScale2d    operator *  (const GcGeScale2d& sclVec) const;
  GE_DLLEXPIMPORT GcGeScale2d&   operator *= (const GcGeScale2d& scl);
  GE_DLLEXPIMPORT GcGeScale2d&   preMultBy(const GcGeScale2d& leftSide);
  GE_DLLEXPIMPORT GcGeScale2d&   postMultBy(const GcGeScale2d& rightSide);
  GE_DLLEXPIMPORT GcGeScale2d&   setToProduct(const GcGeScale2d& sclVec1, const GcGeScale2d& sclVec2);
  GE_DLLEXPIMPORT GcGeScale2d    operator *  (double s) const;
  GE_DLLEXPIMPORT GcGeScale2d&   operator *= (double s);
  GE_DLLEXPIMPORT GcGeScale2d&   setToProduct(const GcGeScale2d& sclVec, double s);
  friend GE_DLLEXPIMPORT
  GcGeScale2d    operator *  (double, const GcGeScale2d& scl);

  GE_DLLEXPIMPORT GcGeScale2d    inverse() const;
  GE_DLLEXPIMPORT GcGeScale2d&   invert();

  GE_DLLEXPIMPORT Gsoft::Boolean isProportional(const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT bool operator == (const GcGeScale2d& sclVec) const;
  GE_DLLEXPIMPORT bool operator != (const GcGeScale2d& sclVec) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGeScale2d& scaleVec, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT double         operator [] (unsigned int i) const;
  GE_DLLEXPIMPORT double&        operator [] (unsigned int i);
  GE_DLLEXPIMPORT GcGeScale2d&   set(double sc0, double sc1);

  GE_DLLEXPIMPORT operator GcGeMatrix2d   () const;
  GE_DLLEXPIMPORT void           getMatrix(GcGeMatrix2d& mat) const;
  GE_DLLEXPIMPORT GcGeScale2d&   extractScale(const GcGeMatrix2d& mat);
  GE_DLLEXPIMPORT GcGeScale2d&   removeScale(GcGeMatrix2d& mat);

  GE_DLLEXPIMPORT operator GcGeScale3d    () const;

  double         sx, sy;
};

inline double GcGeScale2d::operator [] (unsigned int i) const
{
  return *(&sx + i);
}

inline double& GcGeScale2d::operator [] (unsigned int i)
{
  return *(&sx + i);
}

inline bool GcGeScale2d::operator == (const GcGeScale2d& s) const
{
  return this->isEqualTo(s);
}

inline bool GcGeScale2d::operator != (const GcGeScale2d& s) const
{
  return !this->isEqualTo(s);
}

#pragma pack (pop)
#endif
