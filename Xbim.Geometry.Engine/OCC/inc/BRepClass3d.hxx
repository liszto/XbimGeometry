// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass3d_HeaderFile
#define _BRepClass3d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

class TopoDS_Shell;
class TopoDS_Solid;
class BRepClass3d_Intersector3d;
class BRepClass3d_MapOfInter;
class BRepClass3d_SolidExplorer;
class BRepClass3d_SolidPassiveClassifier;
class BRepClass3d_SClassifier;
class BRepClass3d_SolidClassifier;
class BRepClass3d_DataMapNodeOfMapOfInter;
class BRepClass3d_DataMapIteratorOfMapOfInter;



class BRepClass3d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the outer most shell of <S>. Returns a Null
  //! shell if <S> has no outer shell.
  //! If <S> has only one shell, then it will return, without checking orientation.
  Standard_EXPORT static   TopoDS_Shell OuterShell (const TopoDS_Solid& S) ;




protected:





private:




friend class BRepClass3d_Intersector3d;
friend class BRepClass3d_MapOfInter;
friend class BRepClass3d_SolidExplorer;
friend class BRepClass3d_SolidPassiveClassifier;
friend class BRepClass3d_SClassifier;
friend class BRepClass3d_SolidClassifier;
friend class BRepClass3d_DataMapNodeOfMapOfInter;
friend class BRepClass3d_DataMapIteratorOfMapOfInter;

};







#endif // _BRepClass3d_HeaderFile
