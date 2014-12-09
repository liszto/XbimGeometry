// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_PointOnElement_HeaderFile
#define _HatchGen_PointOnElement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _HatchGen_IntersectionType_HeaderFile
#include <HatchGen_IntersectionType.hxx>
#endif
#ifndef _HatchGen_IntersectionPoint_HeaderFile
#include <HatchGen_IntersectionPoint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class IntRes2d_IntersectionPoint;



class HatchGen_PointOnElement  : public HatchGen_IntersectionPoint {
public:

  DEFINE_STANDARD_ALLOC

  //!---Purpose; Creates an empty point on element <br>
  Standard_EXPORT   HatchGen_PointOnElement();
  //! Creates a point from an other. <br>
  Standard_EXPORT   HatchGen_PointOnElement(const HatchGen_PointOnElement& Point);
  //! Creates a point from an intersection point. <br>
  Standard_EXPORT   HatchGen_PointOnElement(const IntRes2d_IntersectionPoint& Point);
  //! Sets the intersection type at this point. <br>
        void SetIntersectionType(const HatchGen_IntersectionType Type) ;
  //! Returns the intersection type at this point. <br>
        HatchGen_IntersectionType IntersectionType() const;
  //! Tests if the point is identical to an other. <br>
//!          That is to say : <br>
//!            P1.myIndex  = P2.myIndex <br>
//!            Abs (P1.myParam - P2.myParam) <= Confusion <br>
//!            P1.myPosit  = P2.myPosit <br>
//!            P1.myBefore = P2.myBefore <br>
//!            P1.myAfter  = P2.myAfter <br>
//!            P1.mySegBeg = P2.mySegBeg <br>
//!            P1.mySegEnd = P2.mySegEnd <br>
//!            P1.myType   = P2.myType <br>
  Standard_EXPORT     Standard_Boolean IsIdentical(const HatchGen_PointOnElement& Point,const Standard_Real Confusion) const;
  //! Tests if the point is different from an other. <br>
  Standard_EXPORT     Standard_Boolean IsDifferent(const HatchGen_PointOnElement& Point,const Standard_Real Confusion) const;
  //! Dump of the point on element. <br>
  Standard_EXPORT     void Dump(const Standard_Integer Index = 0) const;





protected:



HatchGen_IntersectionType myType;


private:





};


#include <HatchGen_PointOnElement.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif