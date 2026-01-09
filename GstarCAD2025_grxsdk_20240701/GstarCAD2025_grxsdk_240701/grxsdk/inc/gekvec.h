/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEKVEC_H
#define GC_GEKVEC_H

#include "gegbl.h"
#include "gedblar.h"
#pragma pack (push, 8)

class GcGeInterval;

class
GcGeKnotVector
{
public:
  GE_DLLDATAEXIMP static double globalKnotTolerance;
  GE_DLLEXPIMPORT GcGeKnotVector(double eps = globalKnotTolerance);
  GE_DLLEXPIMPORT GcGeKnotVector(int size, int growSize, double eps = globalKnotTolerance);
  GE_DLLEXPIMPORT GcGeKnotVector(int size, const double[], double eps = globalKnotTolerance);
  GE_DLLEXPIMPORT GcGeKnotVector(int plusMult, const GcGeKnotVector& src);
  GE_DLLEXPIMPORT GcGeKnotVector(const GcGeKnotVector& src);
  GE_DLLEXPIMPORT GcGeKnotVector(const GcGeDoubleArray& src, double eps = globalKnotTolerance);
  GE_DLLEXPIMPORT ~GcGeKnotVector();

  GE_DLLEXPIMPORT GcGeKnotVector&     operator =  (const GcGeKnotVector& src);
  GE_DLLEXPIMPORT GcGeKnotVector&     operator =  (const GcGeDoubleArray& src);
  GE_DLLEXPIMPORT double&             operator [] (int);
  GE_DLLEXPIMPORT const double        operator [] (int) const;

  GE_DLLEXPIMPORT Gsoft::Boolean      isEqualTo(const GcGeKnotVector& other) const;

  GE_DLLEXPIMPORT double              startParam() const;
  GE_DLLEXPIMPORT double              endParam() const;
  GE_DLLEXPIMPORT int                 multiplicityAt(int i) const;
  GE_DLLEXPIMPORT int                 multiplicityAt(double param) const;
  GE_DLLEXPIMPORT int                 numIntervals() const;

  GE_DLLEXPIMPORT int                 getInterval(int ord, double par, GcGeInterval& interval) const;
  GE_DLLEXPIMPORT void                getDistinctKnots(GcGeDoubleArray& knots) const;
  GE_DLLEXPIMPORT Gsoft::Boolean      contains(double param) const;
  GE_DLLEXPIMPORT Gsoft::Boolean      isOn(double knot) const;

  GE_DLLEXPIMPORT GcGeKnotVector&     reverse();
  GE_DLLEXPIMPORT GcGeKnotVector&     removeAt(int);
  GE_DLLEXPIMPORT GcGeKnotVector&     removeSubVector(int startIndex, int endIndex);

  GE_DLLEXPIMPORT GcGeKnotVector&     insertAt(int indx, double u, int multiplicity = 1);
  GE_DLLEXPIMPORT GcGeKnotVector&     insert(double u);
  GE_DLLEXPIMPORT int                 append(double val);
  GE_DLLEXPIMPORT GcGeKnotVector&     append(GcGeKnotVector& tail, double knotRatio = 0.);
  GE_DLLEXPIMPORT int                 split(double          par,
                                            GcGeKnotVector* pKnot1,
                                            int             multLast,
                                            GcGeKnotVector* pKnot2,
                                            int             multFirst) const;

  GE_DLLEXPIMPORT GcGeKnotVector&     setRange(double lower, double upper);

  GE_DLLEXPIMPORT double              tolerance() const;
  GE_DLLEXPIMPORT GcGeKnotVector&     setTolerance(double tol);

  GE_DLLEXPIMPORT int                 length() const;
  GE_DLLEXPIMPORT Gsoft::Boolean      isEmpty() const;
  GE_DLLEXPIMPORT int                 logicalLength() const;
  GE_DLLEXPIMPORT GcGeKnotVector&     setLogicalLength(int);
  GE_DLLEXPIMPORT int                 physicalLength() const;
  GE_DLLEXPIMPORT GcGeKnotVector&     setPhysicalLength(int);

  GE_DLLEXPIMPORT int                 growLength() const;
  GE_DLLEXPIMPORT GcGeKnotVector&     setGrowLength(int);

  GE_DLLEXPIMPORT const double*       asArrayPtr() const;
  GE_DLLEXPIMPORT double*             asArrayPtr();

  GE_DLLEXPIMPORT GcGeKnotVector&     set(int size, const double[], double eps = globalKnotTolerance);

protected:
  GcGeDoubleArray    mData;
  double             mTolerance;

  Gsoft::Boolean     isValid(int) const;
};

inline double GcGeKnotVector::tolerance() const
{
  return mTolerance;
}

inline GcGeKnotVector& GcGeKnotVector::setTolerance(double eps)
{
  mTolerance = eps;
  return *this;
}

inline Gsoft::Boolean GcGeKnotVector::isValid(int i) const
{
  return i >= 0 && i < mData.logicalLength();
}

inline double& GcGeKnotVector::operator [] (int i)
{
  assert(isValid(i));
  return mData[i];
}

inline const double GcGeKnotVector::operator [] (int i) const
{
  assert(isValid(i));
  return mData[i];
}

inline const double* GcGeKnotVector::asArrayPtr() const
{
  return mData.asArrayPtr();
}

inline double* GcGeKnotVector::asArrayPtr()
{
  return mData.asArrayPtr();
}

#pragma pack (pop)
#endif
