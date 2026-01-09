/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEVEC2D_H
#define GC_GEVEC2D_H

#include "gsoft.h"
#include "gegbl.h"
#include "gegblabb.h"
#pragma pack (push, 8)

class GcGeMatrix2d;

class
GcGeVector2d
{
public:
  GE_DLLEXPIMPORT GcGeVector2d();
  GE_DLLEXPIMPORT GcGeVector2d(const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGeVector2d(double x, double y);

  GE_DLLDATAEXIMP static const   GcGeVector2d kIdentity;
  GE_DLLDATAEXIMP static const   GcGeVector2d kXAxis;
  GE_DLLDATAEXIMP static const   GcGeVector2d kYAxis;

  friend GE_DLLEXPIMPORT 
  GcGeVector2d   operator *  (const GcGeMatrix2d& mat, const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGeVector2d&  setToProduct(const GcGeMatrix2d& mat, const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGeVector2d&  transformBy(const GcGeMatrix2d& leftSide);
  GE_DLLEXPIMPORT GcGeVector2d&  rotateBy(double angle);
  GE_DLLEXPIMPORT GcGeVector2d&  mirror(const GcGeVector2d& line);

  GE_DLLEXPIMPORT GcGeVector2d   operator *  (double scl) const;
  friend GE_DLLEXPIMPORT
  GcGeVector2d   operator *  (double scl, const GcGeVector2d& vec);

  GE_DLLEXPIMPORT GcGeVector2d&  operator *= (double scl);
  GE_DLLEXPIMPORT GcGeVector2d&  setToProduct(const GcGeVector2d& vec, double scl);
  GE_DLLEXPIMPORT GcGeVector2d   operator /  (double scl) const;
  GE_DLLEXPIMPORT GcGeVector2d&  operator /= (double scl);

  GE_DLLEXPIMPORT GcGeVector2d   operator +  (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT GcGeVector2d&  operator += (const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGeVector2d   operator -  (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT GcGeVector2d&  operator -= (const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGeVector2d&  setToSum(const GcGeVector2d& vec1, const GcGeVector2d& vec2);
  GE_DLLEXPIMPORT GcGeVector2d   operator -  () const;
  GE_DLLEXPIMPORT GcGeVector2d&  negate();

  GE_DLLEXPIMPORT GcGeVector2d   perpVector() const;

  GE_DLLEXPIMPORT double         angle() const;
  GE_DLLEXPIMPORT double         angleTo(const GcGeVector2d& vec) const;

  GE_DLLEXPIMPORT GcGeVector2d   normal(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT GcGeVector2d&  normalize(const GcGeTol& tol = GcGeContext::gTol);
  GE_DLLEXPIMPORT GcGeVector2d&  normalize(const GcGeTol& tol, GcGeError& flag);
  GE_DLLEXPIMPORT double         length() const;
  GE_DLLEXPIMPORT double         lengthSqrd() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isUnitLength(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isZeroLength(const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isParallelTo(const GcGeVector2d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isParallelTo(const GcGeVector2d& vec, const GcGeTol& tol, GcGeError& flag) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isCodirectionalTo(const GcGeVector2d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isCodirectionalTo(const GcGeVector2d& vec, const GcGeTol& tol, GcGeError& flag) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isPerpendicularTo(const GcGeVector2d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isPerpendicularTo(const GcGeVector2d& vec, const GcGeTol& tol, GcGeError& flag) const;

  GE_DLLEXPIMPORT double         dotProduct(const GcGeVector2d& vec) const;

  GE_DLLEXPIMPORT bool operator == (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT bool operator != (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGeVector2d& vec, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT double         operator [] (unsigned int i) const;
  GE_DLLEXPIMPORT double&        operator [] (unsigned int i);
  GE_DLLEXPIMPORT GcGeVector2d&  set(double x, double y);

  GE_DLLEXPIMPORT operator GcGeMatrix2d() const;

  double         x, y;
};

inline GcGeVector2d::GcGeVector2d() : x(0.0), y(0.0)
{
}

inline GcGeVector2d::GcGeVector2d(const GcGeVector2d& src) : x(src.x), y(src.y)
{
}

inline GcGeVector2d::GcGeVector2d(double xx, double yy) : x(xx), y(yy)
{
}

inline bool GcGeVector2d::operator == (const GcGeVector2d& v) const
{
  return this->isEqualTo(v);
}

inline bool GcGeVector2d::operator != (const GcGeVector2d& v) const
{
  return !this->isEqualTo(v);
}

inline GcGeVector2d GcGeVector2d::operator * (double s) const
{
  return GcGeVector2d(x * s, y * s);
}

inline GcGeVector2d& GcGeVector2d::operator *= (double s)
{
  x *= s;
  y *= s;
  return *this;
}

inline GcGeVector2d& GcGeVector2d::setToProduct(const GcGeVector2d& v, double s)
{
  x = s * v.x;
  y = s * v.y;
  return *this;
}

inline GcGeVector2d GcGeVector2d::operator / (double val) const
{
  return GcGeVector2d(x / val, y / val);
}

inline GcGeVector2d& GcGeVector2d::operator /= (double val)
{
  x /= val;
  y /= val;
  return *this;
}

inline GcGeVector2d GcGeVector2d::operator + (const GcGeVector2d& v) const
{
  return GcGeVector2d(x + v.x, y + v.y);
}

inline GcGeVector2d& GcGeVector2d::operator += (const GcGeVector2d& v)
{
  x += v.x;
  y += v.y;
  return *this;
}

inline GcGeVector2d GcGeVector2d::operator - (const GcGeVector2d& v) const
{
  return GcGeVector2d(x - v.x, y - v.y);
}

inline GcGeVector2d& GcGeVector2d::operator -= (const GcGeVector2d& v)
{
  x -= v.x;
  y -= v.y;
  return *this;
}

inline GcGeVector2d& GcGeVector2d::setToSum(const GcGeVector2d& v1, const GcGeVector2d& v2)
{
  x = v1.x + v2.x;
  y = v1.y + v2.y;
  return *this;
}

inline GcGeVector2d GcGeVector2d::operator - () const
{
  return GcGeVector2d(-x, -y);
}

inline GcGeVector2d& GcGeVector2d::negate()
{
  x = -x;
  y = -y;
  return *this;
}

inline GcGeVector2d GcGeVector2d::perpVector() const
{
  return GcGeVector2d(-y, x);
}

inline double GcGeVector2d::lengthSqrd() const
{
  return x * x + y * y;
}

inline double GcGeVector2d::dotProduct(const GcGeVector2d& v) const
{
  return x * v.x + y * v.y;
}

inline GcGeVector2d& GcGeVector2d::set(double xx, double yy)
{
  x = xx;
  y = yy;
  return *this;
}

inline double GcGeVector2d::operator [] (unsigned int i) const
{
  return *(&x + i);
}

inline double& GcGeVector2d::operator [] (unsigned int i)
{
  return *(&x + i);
}

#define GSFT_GCGEVECTOR2D_DEFINED
#include "gcarrayhelper.h"

#pragma pack (pop)
#endif