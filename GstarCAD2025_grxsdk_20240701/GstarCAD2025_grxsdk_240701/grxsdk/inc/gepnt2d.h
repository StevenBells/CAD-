/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEPNT2D_H
#define GC_GEPNT2D_H

#include "gevec2d.h"
#pragma pack (push, 8)

class GcGeMatrix2d;
class GcGeVector2d;
class GcGeLinearEnt2d;
class GcGeLine2d;

class
GcGePoint2d
{
public:
  GE_DLLEXPIMPORT GcGePoint2d();
  GE_DLLEXPIMPORT GcGePoint2d(const GcGePoint2d& pnt);
  GE_DLLEXPIMPORT GcGePoint2d(double x, double y);

  GE_DLLDATAEXIMP static const   GcGePoint2d kOrigin;

  friend GE_DLLEXPIMPORT 
  GcGePoint2d    operator *  (const GcGeMatrix2d& mat, const GcGePoint2d& pnt);
  GE_DLLEXPIMPORT GcGePoint2d&   setToProduct(const GcGeMatrix2d& mat, const GcGePoint2d& pnt);
  GE_DLLEXPIMPORT GcGePoint2d&   transformBy(const GcGeMatrix2d& leftSide);
  GE_DLLEXPIMPORT GcGePoint2d&   rotateBy(double angle, const GcGePoint2d& wrtPoint = GcGePoint2d::kOrigin);
  GE_DLLEXPIMPORT GcGePoint2d&   mirror(const GcGeLine2d& line);
  GE_DLLEXPIMPORT GcGePoint2d&   scaleBy(double scaleFactor, const GcGePoint2d& wrtPoint = GcGePoint2d::kOrigin);

  GE_DLLEXPIMPORT GcGePoint2d    operator *  (double) const;
  GE_DLLEXPIMPORT friend 
  GcGePoint2d    operator *  (double, const GcGePoint2d& scl);
  GE_DLLEXPIMPORT GcGePoint2d&   operator *= (double scl);
  GE_DLLEXPIMPORT GcGePoint2d    operator /  (double scl) const;
  GE_DLLEXPIMPORT GcGePoint2d&   operator /= (double scl);

  GE_DLLEXPIMPORT GcGePoint2d    operator +  (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT GcGePoint2d&   operator += (const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGePoint2d    operator -  (const GcGeVector2d& vec) const;
  GE_DLLEXPIMPORT GcGePoint2d&   operator -= (const GcGeVector2d& vec);
  GE_DLLEXPIMPORT GcGePoint2d&   setToSum(const GcGePoint2d& pnt, const GcGeVector2d& vec);

  GE_DLLEXPIMPORT GcGeVector2d   operator -  (const GcGePoint2d& pnt) const;
  GE_DLLEXPIMPORT GcGeVector2d   asVector() const;

  GE_DLLEXPIMPORT double         distanceTo(const GcGePoint2d& pnt) const;

  GE_DLLEXPIMPORT bool operator == (const GcGePoint2d& pnt) const;
  GE_DLLEXPIMPORT bool operator != (const GcGePoint2d& pnt) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGePoint2d& pnt, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT double         operator [] (unsigned int i) const;
  GE_DLLEXPIMPORT double&        operator [] (unsigned int idx);
  GE_DLLEXPIMPORT GcGePoint2d&   set(double x, double y);

  double         x, y;
};

inline GcGePoint2d::GcGePoint2d() : x(0.0), y(0.0)
{
}

inline GcGePoint2d::GcGePoint2d(const GcGePoint2d& src) : x(src.x), y(src.y)
{
}

inline GcGePoint2d::GcGePoint2d(double xx, double yy) : x(xx), y(yy)
{
}

inline bool GcGePoint2d::operator == (const GcGePoint2d& p) const
{
  return this->isEqualTo(p);
}

inline bool GcGePoint2d::operator != (const GcGePoint2d& p) const
{
  return !this->isEqualTo(p);
}

inline GcGePoint2d GcGePoint2d::operator * (double val) const
{
  return GcGePoint2d(x*val, y*val);
}

inline GcGePoint2d operator * (double val, const GcGePoint2d& p)
{
  return GcGePoint2d(p.x*val, p.y*val);
}

inline GcGePoint2d& GcGePoint2d::operator *= (double val)
{
  x *= val;
  y *= val;
  return *this;
}

inline GcGePoint2d GcGePoint2d::operator / (double val) const
{
  return GcGePoint2d(x / val, y / val);
}

inline GcGePoint2d& GcGePoint2d::operator /= (double val)
{
  x /= val;
  y /= val;
  return *this;
}

inline GcGePoint2d GcGePoint2d::operator + (const GcGeVector2d& v) const
{
  return GcGePoint2d(x + v.x, y + v.y);
}

inline GcGePoint2d& GcGePoint2d::operator += (const GcGeVector2d& v)
{
  x += v.x;
  y += v.y;
  return *this;
}

inline GcGePoint2d GcGePoint2d::operator - (const GcGeVector2d& v) const
{
  return GcGePoint2d(x - v.x, y - v.y);
}

inline GcGePoint2d& GcGePoint2d::operator -= (const GcGeVector2d& v)
{
  x -= v.x;
  y -= v.y;
  return *this;
}

inline GcGeVector2d GcGePoint2d::operator - (const GcGePoint2d& p) const
{
  return GcGeVector2d(x - p.x, y - p.y);
}

inline GcGeVector2d GcGePoint2d::asVector() const
{
  return GcGeVector2d(x, y);
}

inline GcGePoint2d& GcGePoint2d::set(double xx, double yy)
{
  x = xx;
  y = yy;
  return *this;
}

inline double GcGePoint2d::operator [] (unsigned int i) const
{
  return *(&x + i);
}

inline double& GcGePoint2d::operator [] (unsigned int i)
{
  return *(&x + i);
}

#define GSFT_GCGEPOINT2D_DEFINED
#include "gcarrayhelper.h"

#pragma pack (pop)
#endif
