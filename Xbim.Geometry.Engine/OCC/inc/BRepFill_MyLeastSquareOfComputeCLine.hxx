// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_MyLeastSquareOfComputeCLine_HeaderFile
#define _BRepFill_MyLeastSquareOfComputeCLine_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <Standard_Integer.hxx>
#include <math_Matrix.hxx>
#include <math_Vector.hxx>
#include <Standard_Real.hxx>
#include <AppParCurves_Constraint.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DimensionError;
class BRepFill_MultiLine;
class BRepFill_MultiLineTool;
class AppParCurves_MultiCurve;



class BRepFill_MyLeastSquareOfComputeCLine 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_MyLeastSquareOfComputeCLine(const BRepFill_MultiLine& SSP, const Standard_Real U0, const Standard_Real U1, const AppParCurves_Constraint FirstCons, const AppParCurves_Constraint LastCons, const Standard_Integer Deg, const Standard_Integer NbPoints = 24);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT  const  AppParCurves_MultiCurve& Value() ;
  
  Standard_EXPORT   void Error (Standard_Real& F, Standard_Real& MaxE3d, Standard_Real& MaxE2d)  const;




protected:

  
  Standard_EXPORT   Standard_Integer NbBColumns (const BRepFill_MultiLine& SSP)  const;




private:



  Standard_Boolean Done;
  AppParCurves_MultiCurve SCU;
  Standard_Integer Degre;
  Standard_Integer Nbdiscret;
  Standard_Integer nbP;
  Standard_Integer nbP2d;
  math_Matrix Points;
  math_Matrix Poles;
  math_Vector myParam;
  math_Matrix VB;


};







#endif // _BRepFill_MyLeastSquareOfComputeCLine_HeaderFile
