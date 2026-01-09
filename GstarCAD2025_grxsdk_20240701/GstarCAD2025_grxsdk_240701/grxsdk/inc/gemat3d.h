/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEMAT3D_H
#define GC_GEMAT3D_H

#include "gegbl.h"
#include "gemat2d.h"
#include "gepnt3d.h"
#pragma pack (push, 8)

class GcGeLine3d;
class GcGeVector3d;
class GcGePlane;
class GcGeTol;

class
GcGeMatrix3d
{
public:
  GE_DLLEXPIMPORT GcGeMatrix3d();
  GE_DLLEXPIMPORT GcGeMatrix3d(const GcGeMatrix3d& src);

  GE_DLLDATAEXIMP static const   GcGeMatrix3d    kIdentity;

  GE_DLLEXPIMPORT GcGeMatrix3d&  setToIdentity();

  GE_DLLEXPIMPORT GcGeMatrix3d   operator *      (const GcGeMatrix3d& mat) const;
  GE_DLLEXPIMPORT GcGeMatrix3d&  operator *=     (const GcGeMatrix3d& mat);
  GE_DLLEXPIMPORT GcGeMatrix3d&  preMultBy(const GcGeMatrix3d& leftSide);
  GE_DLLEXPIMPORT GcGeMatrix3d&  postMultBy(const GcGeMatrix3d& rightSide);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToProduct(const GcGeMatrix3d& mat1, const GcGeMatrix3d& mat2);

  GE_DLLEXPIMPORT GcGeMatrix3d&  invert();
  GE_DLLEXPIMPORT GcGeMatrix3d   inverse() const;
  GE_DLLEXPIMPORT GcGeMatrix3d   inverse(const GcGeTol& tol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isSingular(const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT GcGeMatrix3d&  transposeIt();
  GE_DLLEXPIMPORT GcGeMatrix3d   transpose() const;

  GE_DLLEXPIMPORT bool operator ==     (const GcGeMatrix3d& mat) const;
  GE_DLLEXPIMPORT bool operator !=     (const GcGeMatrix3d& mat) const;
  GE_DLLEXPIMPORT bool isEqualTo(const GcGeMatrix3d& mat, const GcGeTol& tol = GcGeContext::gTol) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isUniScaledOrtho(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isScaledOrtho(const GcGeTol& tol = GcGeContext::gTol) const;
  GE_DLLEXPIMPORT double         det() const;
  GE_DLLEXPIMPORT GcGeMatrix3d&  setTranslation(const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeVector3d   translation() const;

  GE_DLLEXPIMPORT GcGeMatrix3d&  setCoordSystem(const GcGePoint3d&  origin,
                                                const GcGeVector3d& xAxis,
                                                const GcGeVector3d& yAxis,
                                                const GcGeVector3d& zAxis);
  GE_DLLEXPIMPORT void           getCoordSystem(GcGePoint3d&  origin,
                                                GcGeVector3d& xAxis,
                                                GcGeVector3d& yAxis,
                                                GcGeVector3d& zAxis) const;

  GE_DLLEXPIMPORT GcGeMatrix3d&  setToTranslation(const GcGeVector3d& vec);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToRotation(double              angle,
                                               const GcGeVector3d& axis,
                                               const GcGePoint3d&  center = GcGePoint3d::kOrigin);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToScaling(double scaleAll, const GcGePoint3d& center = GcGePoint3d::kOrigin);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToMirroring(const GcGePlane& pln);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToMirroring(const GcGePoint3d& pnt);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToMirroring(const GcGeLine3d& line);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToProjection(const GcGePlane& projectionPlane, const GcGeVector3d& projectDir);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToAlignCoordSys(const GcGePoint3d&  fromOrigin,
                                                    const GcGeVector3d& fromXAxis,
                                                    const GcGeVector3d& fromYAxis,
                                                    const GcGeVector3d& fromZAxis,
                                                    const GcGePoint3d&  toOrigin,
                                                    const GcGeVector3d& toXAxis,
                                                    const GcGeVector3d& toYAxis,
                                                    const GcGeVector3d& toZAxis);

  GE_DLLEXPIMPORT GcGeMatrix3d&  setToWorldToPlane(const GcGeVector3d& normal);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToWorldToPlane(const GcGePlane& plane);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToPlaneToWorld(const GcGeVector3d& normal);
  GE_DLLEXPIMPORT GcGeMatrix3d&  setToPlaneToWorld(const GcGePlane& plane);

  GE_DLLEXPIMPORT static
  GcGeMatrix3d   translation(const GcGeVector3d& vec);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   rotation(double angle, const GcGeVector3d& axis,
                          const GcGePoint3d&  center = GcGePoint3d::kOrigin);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   scaling(double scaleAll, const GcGePoint3d& center = GcGePoint3d::kOrigin);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   mirroring(const GcGePlane& pln);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   mirroring(const GcGePoint3d& pnt);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   mirroring(const GcGeLine3d& line);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   projection(const GcGePlane& projectionPlane, const GcGeVector3d& projectDir);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   alignCoordSys(const GcGePoint3d&  fromOrigin,
                               const GcGeVector3d& fromXAxis,
                               const GcGeVector3d& fromYAxis,
                               const GcGeVector3d& fromZAxis,
                               const GcGePoint3d&  toOrigin,
                               const GcGeVector3d& toXAxis,
                               const GcGeVector3d& toYAxis,
                               const GcGeVector3d& toZAxis);

  GE_DLLEXPIMPORT static
  GcGeMatrix3d   worldToPlane(const GcGeVector3d& normal);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   worldToPlane(const GcGePlane&);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   planeToWorld(const GcGeVector3d& normal);
  GE_DLLEXPIMPORT static
  GcGeMatrix3d   planeToWorld(const GcGePlane&);

  GE_DLLEXPIMPORT double scale(void) const;
  GE_DLLEXPIMPORT double norm() const;

  GE_DLLEXPIMPORT GcGeMatrix2d convertToLocal(GcGeVector3d& normal, double& elev) const;

  GE_DLLEXPIMPORT double         operator ()     (unsigned int, unsigned int) const;
  GE_DLLEXPIMPORT double&        operator ()     (unsigned int, unsigned int);

  double         entry[4][4];

  GE_DLLEXPIMPORT Gsoft::Boolean  inverse(GcGeMatrix3d& inv, double tol) const;

private:
  void           pivot(int, GcGeMatrix3d&);
  int            pivotIndex(int) const;
  void           swapRows(int, int, GcGeMatrix3d&);
};

inline bool GcGeMatrix3d::operator == (const GcGeMatrix3d& otherMatrix) const
{
  return this->isEqualTo(otherMatrix);
}

inline bool GcGeMatrix3d::operator != (const GcGeMatrix3d& otherMatrix) const
{
  return !this->isEqualTo(otherMatrix);
}

inline double  GcGeMatrix3d::operator () (unsigned int row, unsigned int column) const
{
  return entry[row][column];
}

inline double& GcGeMatrix3d::operator () (unsigned int row, unsigned int column)
{
  return entry[row][column];
}

#pragma pack (pop)
#endif
