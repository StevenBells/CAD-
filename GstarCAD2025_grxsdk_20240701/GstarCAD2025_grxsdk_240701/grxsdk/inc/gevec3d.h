/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEVEC3D_H
#define GC_GEVEC3D_H

#include "gsoft.h"
#include "gegbl.h"
#include "gegblabb.h"
#pragma pack (push, 8)

class GcGeMatrix3d;
class GcGeVector2d;
class GcGePlane;
class GcGePlanarEnt;

class
GcGeVector3d
{
public:
  GE_DLLEXPIMPORT GcGeVector3d();
  GE_DLLEXPIMPORT GcGeVector3d(const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d(double x, double y, double z);
  GE_DLLEXPIMPORT GcGeVector3d(const GcGePlanarEnt&, const GcGeVector2d&);

  GE_DLLDATAEXIMP static const   GcGeVector3d kIdentity;
  GE_DLLDATAEXIMP static const   GcGeVector3d kXAxis;
  GE_DLLDATAEXIMP static const   GcGeVector3d kYAxis;
  GE_DLLDATAEXIMP static const   GcGeVector3d kZAxis;

  friend GE_DLLEXPIMPORT
  GcGeVector3d   operator *  (const GcGeMatrix3d& mat, const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d&  setToProduct(const GcGeMatrix3d& mat, const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d&  transformBy(const GcGeMatrix3d& leftSide);
  GE_DLLEXPIMPORT GcGeVector3d&  rotateBy(double ang, const GcGeVector3d& axis);
  GE_DLLEXPIMPORT GcGeVector3d&  mirror(const GcGeVector3d& normalToPlane);
  GE_DLLEXPIMPORT GcGeVector2d   convert2d(const GcGePlanarEnt& pln) const;

  GE_DLLEXPIMPORT GcGeVector3d   operator *  (double scl) const;
  friend GE_DLLEXPIMPORT 
  GcGeVector3d   operator *  (double scl, const GcGeVector3d& vec);

  GE_DLLEXPIMPORT GcGeVector3d&  operator *= (double scl);
  GE_DLLEXPIMPORT GcGeVector3d&  setToProduct(const GcGeVector3d& vec, double scl);
  GE_DLLEXPIMPORT GcGeVector3d   operator /  (double scl) const;
  GE_DLLEXPIMPORT GcGeVector3d&  operator /= (double scl);

  GE_DLLEXPIMPORT GcGeVector3d   operator +  (const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT GcGeVector3d&  operator += (const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d   operator -  (const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT GcGeVector3d&  operator -= (const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d&  setToSum(const GcGeVector3d& vec1, const GcGeVector3d& vec2);
  GE_DLLEXPIMPORT GcGeVector3d   operator -  () const;
  GE_DLLEXPIMPORT GcGeVector3d&  negate();

  GE_DLLEXPIMPORT GcGeVector3d   perpVector() const;

  GE_DLLEXPIMPORT double         angleTo(const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT double         angleTo(const GcGeVector3d& vec, const GcGeVector3d& refVec) const;
  GE_DLLEXPIMPORT double         angleOnPlane(const GcGePlanarEnt& pln) const;

  GE_DLLEXPIMPORT GcGeVector3d   normal(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT GcGeVector3d&  normalize(const GcGeTol& tol = GcGeContext::gTol);
  GE_DLLEXPIMPORT GcGeVector3d&  normalize(const GcGeTol& tol, GcGeError& flag);
  GE_DLLEXPIMPORT double         length() const;
  GE_DLLEXPIMPORT double         lengthSqrd() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isUnitLength(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isZeroLength(const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isParallelTo(const GcGeVector3d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isParallelTo(const GcGeVector3d& vec, const GcGeTol& tol, GcGeError& flag) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isCodirectionalTo(const GcGeVector3d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isCodirectionalTo(const GcGeVector3d& vec, const GcGeTol& tol, GcGeError& flag) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isPerpendicularTo(const GcGeVector3d& vec, const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isPerpendicularTo(const GcGeVector3d& vec, const GcGeTol& tol, GcGeError& flag) const;

  GE_DLLEXPIMPORT double         dotProduct(const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT GcGeVector3d   crossProduct(const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT GcGeMatrix3d   rotateTo(const GcGeVector3d& vec, const GcGeVector3d& axis = GcGeVector3d::kIdentity) const;

  GE_DLLEXPIMPORT GcGeVector3d   project(const GcGeVector3d& planeNormal, const GcGeVector3d& projectDirection) const;
  GE_DLLEXPIMPORT GcGeVector3d   project(const GcGeVector3d& planeNormal, const GcGeVector3d& projectDirection, const GcGeTol& tol, GcGeError& flag) const;
  GE_DLLEXPIMPORT GcGeVector3d   orthoProject(const GcGeVector3d& planeNormal) const;
  GE_DLLEXPIMPORT GcGeVector3d   orthoProject(const GcGeVector3d& planeNormal, const GcGeTol& tol, GcGeError& flag) const;

  GE_DLLEXPIMPORT bool operator == (const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT bool operator != (const GcGeVector3d& vec) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGeVector3d& vec, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT double         operator [] (unsigned int i) const;
  GE_DLLEXPIMPORT double&        operator [] (unsigned int i);
  GE_DLLEXPIMPORT unsigned int   largestElement() const;
  GE_DLLEXPIMPORT GcGeVector3d&  set(double x, double y, double z);
  GE_DLLEXPIMPORT GcGeVector3d&  set(const GcGePlanarEnt& pln, const GcGeVector2d& vec);

  GE_DLLEXPIMPORT operator GcGeMatrix3d() const;

  double         x, y, z;
};

inline GcGeVector3d::GcGeVector3d() : x(0.0), y(0.0), z(0.0)
{
}

inline GcGeVector3d::GcGeVector3d(const GcGeVector3d& src) : x(src.x), y(src.y), z(src.z)
{  
}

inline GcGeVector3d::GcGeVector3d(double xx, double yy, double zz) : x(xx), y(yy), z(zz)
{
}

inline bool GcGeVector3d::operator == (const GcGeVector3d& v) const
{
  return this->isEqualTo(v);
}

inline bool GcGeVector3d::operator != (const GcGeVector3d& v) const
{
  return !this->isEqualTo(v);
}

inline GcGeVector3d GcGeVector3d::operator + (const GcGeVector3d& v) const
{
  return GcGeVector3d(x + v.x, y + v.y, z + v.z);
}

inline GcGeVector3d& GcGeVector3d::operator += (const GcGeVector3d& v)
{
  x += v.x;
  y += v.y;
  z += v.z;
  return *this;
}

inline GcGeVector3d GcGeVector3d::operator - (const GcGeVector3d& v) const
{
  return GcGeVector3d(x - v.x, y - v.y, z - v.z);
}

inline GcGeVector3d& GcGeVector3d::operator -= (const GcGeVector3d& v)
{
  x -= v.x;
  y -= v.y;
  z -= v.z;
  return *this;
}

inline GcGeVector3d& GcGeVector3d::setToSum(const GcGeVector3d& v1, const GcGeVector3d& v2)
{
  x = v1.x + v2.x;
  y = v1.y + v2.y;
  z = v1.z + v2.z;
  return *this;
}

inline GcGeVector3d GcGeVector3d::operator - () const
{
  return GcGeVector3d(-x, -y, -z);
}

inline GcGeVector3d& GcGeVector3d::negate()
{
  x = -x;
  y = -y;
  z = -z;
  return *this;
}

inline GcGeVector3d GcGeVector3d::operator * (double s) const
{
  return GcGeVector3d(x * s, y * s, z * s);
}

inline GcGeVector3d& GcGeVector3d::operator *= (double s)
{
  x *= s;
  y *= s;
  z *= s;
  return *this;
}

inline GcGeVector3d& GcGeVector3d::setToProduct(const GcGeVector3d& v, double s)
{
  x = s * v.x;
  y = s * v.y;
  z = s * v.z;
  return *this;
}

inline GcGeVector3d GcGeVector3d::operator / (double val) const
{
  return GcGeVector3d(x / val, y / val, z / val);
}

inline GcGeVector3d& GcGeVector3d::operator /= (double val)
{
  x /= val;
  y /= val;
  z /= val;
  return *this;
}

inline double GcGeVector3d::lengthSqrd() const
{
  return x * x + y * y + z * z;
}

inline double GcGeVector3d::dotProduct(const GcGeVector3d& v) const
{
  return x * v.x + y * v.y + z * v.z;
}

inline GcGeVector3d& GcGeVector3d::set(double xx, double yy, double zz)
{
  x = xx;
  y = yy;
  z = zz;
  return *this;
}

inline double GcGeVector3d::operator [] (unsigned int i) const
{
  return *(&x + i);
}

inline double& GcGeVector3d::operator [] (unsigned int i)
{
  return *(&x + i);
}
#define GSFT_GCGEVECTOR3D_DEFINED
#include "gcarrayhelper.h"

#pragma pack (pop)
#endif
