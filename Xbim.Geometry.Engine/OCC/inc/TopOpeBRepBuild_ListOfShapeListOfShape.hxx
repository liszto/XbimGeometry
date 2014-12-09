// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListOfShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_ListOfShapeListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_HeaderFile
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape;
class TopOpeBRepBuild_ShapeListOfShape;
class TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape;



class TopOpeBRepBuild_ListOfShapeListOfShape  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_ListOfShapeListOfShape();
  
  Standard_EXPORT     void Assign(const TopOpeBRepBuild_ListOfShapeListOfShape& Other) ;
    void operator=(const TopOpeBRepBuild_ListOfShapeListOfShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepBuild_ListOfShapeListOfShape()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const TopOpeBRepBuild_ShapeListOfShape& I) ;
  
  Standard_EXPORT     void Prepend(const TopOpeBRepBuild_ShapeListOfShape& I,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& theIt) ;
  
  Standard_EXPORT     void Prepend(TopOpeBRepBuild_ListOfShapeListOfShape& Other) ;
  
  Standard_EXPORT     void Append(const TopOpeBRepBuild_ShapeListOfShape& I) ;
  
  Standard_EXPORT     void Append(const TopOpeBRepBuild_ShapeListOfShape& I,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& theIt) ;
  
  Standard_EXPORT     void Append(TopOpeBRepBuild_ListOfShapeListOfShape& Other) ;
  
  Standard_EXPORT     TopOpeBRepBuild_ShapeListOfShape& First() const;
  
  Standard_EXPORT     TopOpeBRepBuild_ShapeListOfShape& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertBefore(const TopOpeBRepBuild_ShapeListOfShape& I,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertBefore(TopOpeBRepBuild_ListOfShapeListOfShape& Other,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertAfter(const TopOpeBRepBuild_ShapeListOfShape& I,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertAfter(TopOpeBRepBuild_ListOfShapeListOfShape& Other,TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape& It) ;


friend class TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape;



protected:





private:

  
  Standard_EXPORT   TopOpeBRepBuild_ListOfShapeListOfShape(const TopOpeBRepBuild_ListOfShapeListOfShape& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item TopOpeBRepBuild_ShapeListOfShape
#define Item_hxx <TopOpeBRepBuild_ShapeListOfShape.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfShapeListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfShapeListOfShape_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfShapeListOfShape
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfShapeListOfShape.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif