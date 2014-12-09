// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_PolyBis_HeaderFile
#define _Bisector_PolyBis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Bisector_PointOnBis_HeaderFile
#include <Bisector_PointOnBis.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Bisector_PointOnBis;
class gp_Trsf2d;


//! Polygon of PointOnBis <br>
class Bisector_PolyBis  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Bisector_PolyBis();
  
  Standard_EXPORT     void Append(const Bisector_PointOnBis& Point) ;
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT    const Bisector_PointOnBis& Value(const Standard_Integer Index) const;
  
  Standard_EXPORT    const Bisector_PointOnBis& First() const;
  
  Standard_EXPORT    const Bisector_PointOnBis& Last() const;
  
  Standard_EXPORT     Standard_Integer Interval(const Standard_Real U) const;
  
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;





protected:





private:



Bisector_PointOnBis thePoints[30];
Standard_Integer nbPoints;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif