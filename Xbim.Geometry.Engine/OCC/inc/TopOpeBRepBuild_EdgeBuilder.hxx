// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_EdgeBuilder_HeaderFile
#define _TopOpeBRepBuild_EdgeBuilder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRepBuild_Area1dBuilder.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class TopOpeBRepBuild_PaveSet;
class TopOpeBRepBuild_PaveClassifier;
class TopOpeBRepBuild_LoopSet;
class TopOpeBRepBuild_LoopClassifier;
class TopoDS_Shape;



class TopOpeBRepBuild_EdgeBuilder  : public TopOpeBRepBuild_Area1dBuilder
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_EdgeBuilder();
  
  //! Creates a EdgeBuilder to find the areas of
  //! the shapes described by <LS> using the classifier <LC>.
  Standard_EXPORT TopOpeBRepBuild_EdgeBuilder(TopOpeBRepBuild_PaveSet& LS, TopOpeBRepBuild_PaveClassifier& LC, const Standard_Boolean ForceClass = Standard_False);
  
  Standard_EXPORT   void InitEdgeBuilder (TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC, const Standard_Boolean ForceClass = Standard_False) ;
  
  Standard_EXPORT   void InitEdge() ;
  
  Standard_EXPORT   Standard_Boolean MoreEdge()  const;
  
  Standard_EXPORT   void NextEdge() ;
  
  Standard_EXPORT   void InitVertex() ;
  
  Standard_EXPORT   Standard_Boolean MoreVertex()  const;
  
  Standard_EXPORT   void NextVertex() ;
  
  Standard_EXPORT  const  TopoDS_Shape& Vertex()  const;
  
  Standard_EXPORT   Standard_Real Parameter()  const;




protected:





private:





};







#endif // _TopOpeBRepBuild_EdgeBuilder_HeaderFile
