// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_SequenceNodeOfSequenceOfLine_HeaderFile
#define _BRepBlend_SequenceNodeOfSequenceOfLine_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BRepBlend_SequenceNodeOfSequenceOfLine.hxx>

#include <Handle_BRepBlend_Line.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class BRepBlend_Line;
class BRepBlend_SequenceOfLine;



class BRepBlend_SequenceNodeOfSequenceOfLine : public TCollection_SeqNode
{

public:

  
    BRepBlend_SequenceNodeOfSequenceOfLine(const Handle(BRepBlend_Line)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(BRepBlend_Line)& Value()  const;




  DEFINE_STANDARD_RTTI(BRepBlend_SequenceNodeOfSequenceOfLine)

protected:




private: 


  Handle(BRepBlend_Line) myValue;


};

#define SeqItem Handle(BRepBlend_Line)
#define SeqItem_hxx <BRepBlend_Line.hxx>
#define TCollection_SequenceNode BRepBlend_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_hxx <BRepBlend_SequenceNodeOfSequenceOfLine.hxx>
#define Handle_TCollection_SequenceNode Handle_BRepBlend_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_Type_() BRepBlend_SequenceNodeOfSequenceOfLine_Type_()
#define TCollection_Sequence BRepBlend_SequenceOfLine
#define TCollection_Sequence_hxx <BRepBlend_SequenceOfLine.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _BRepBlend_SequenceNodeOfSequenceOfLine_HeaderFile
