/////////////////////////////////////////////////////////////////////////////////////////
//
// Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
//
/////////////////////////////////////////////////////////////////////////////////////////
//
#ifndef GC_GEINTRVL_H
#define GC_GEINTRVL_H

#include "gegbl.h"
#pragma pack (push, 8)

class
GcGeInterval
{
public:
  GE_DLLEXPIMPORT GcGeInterval(double tol = 1.e-12);
  GE_DLLEXPIMPORT GcGeInterval(const GcGeInterval& src);
  GE_DLLEXPIMPORT GcGeInterval(double lower, double upper, double tol = 1.e-12);
  GE_DLLEXPIMPORT GcGeInterval(Gsoft::Boolean boundedBelow, double bound,
                   double tol = 1.e-12);
  GE_DLLEXPIMPORT ~GcGeInterval();

  GE_DLLEXPIMPORT GcGeInterval&  operator =       (const GcGeInterval& otherInterval);

  GE_DLLEXPIMPORT double         lowerBound() const;
  GE_DLLEXPIMPORT double         upperBound() const;
  GE_DLLEXPIMPORT double         element() const;
  GE_DLLEXPIMPORT void           getBounds(double& lower, double& upper) const;
  GE_DLLEXPIMPORT double         length() const;
  GE_DLLEXPIMPORT double         tolerance() const;

  GE_DLLEXPIMPORT GcGeInterval&  set(double lower, double upper);
  GE_DLLEXPIMPORT GcGeInterval&  set(Gsoft::Boolean boundedBelow, double bound);
  GE_DLLEXPIMPORT GcGeInterval&  set();
  GE_DLLEXPIMPORT GcGeInterval&  setUpper(double upper);
  GE_DLLEXPIMPORT GcGeInterval&  setLower(double lower);
  GE_DLLEXPIMPORT GcGeInterval&  setTolerance(double tol);
  GE_DLLEXPIMPORT void           getMerge(const GcGeInterval& otherInterval, GcGeInterval& result) const;
  GE_DLLEXPIMPORT int            subtract(const GcGeInterval& otherInterval,
                                    GcGeInterval& lInterval,
                                    GcGeInterval& rInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean intersectWith(const GcGeInterval& otherInterval, GcGeInterval& result) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isBounded() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isBoundedAbove() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isBoundedBelow() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isUnBounded() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isSingleton() const;
  GE_DLLEXPIMPORT Gsoft::Boolean isDisjoint(const GcGeInterval& otherInterval) const;

  GE_DLLEXPIMPORT Gsoft::Boolean contains(const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean contains(double val) const;

  GE_DLLEXPIMPORT Gsoft::Boolean isContinuousAtUpper(const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isOverlapAtUpper(const GcGeInterval& otherInterval,
                                  GcGeInterval& overlap) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator ==      (const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator !=      (const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isEqualAtUpper(const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isEqualAtUpper(double value) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isEqualAtLower(const GcGeInterval& otherInterval) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isEqualAtLower(double value) const;
  GE_DLLEXPIMPORT Gsoft::Boolean isPeriodicallyOn(double period, double& val);

  friend GE_DLLEXPIMPORT
  Gsoft::Boolean operator >       (double val, const GcGeInterval& intrvl);
  GE_DLLEXPIMPORT Gsoft::Boolean operator >       (double val) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator >       (const GcGeInterval& otherInterval) const;
  friend GE_DLLEXPIMPORT
  Gsoft::Boolean operator >=      (double val, const GcGeInterval& intrvl);
  GE_DLLEXPIMPORT Gsoft::Boolean operator >=      (double val) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator >=      (const GcGeInterval& otherInterval) const;
  friend GE_DLLEXPIMPORT
  Gsoft::Boolean operator <       (double val, const GcGeInterval& intrvl);
  GE_DLLEXPIMPORT Gsoft::Boolean operator <       (double val) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator <       (const GcGeInterval& otherInterval) const;
  friend GE_DLLEXPIMPORT
  Gsoft::Boolean operator <=      (double val, const GcGeInterval& intrvl);
  GE_DLLEXPIMPORT Gsoft::Boolean operator <=      (double val) const;
  GE_DLLEXPIMPORT Gsoft::Boolean operator <=      (const GcGeInterval& otherInterval) const;

protected:
  friend class GcGeImpInterval;
  class GcGeImpInterval  *mpImpInt;

  GE_DLLEXPIMPORT GcGeInterval(GcGeImpInterval&, int);

private:
  int              mDelInt;
};

#pragma pack (pop)
#endif