// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray2OfPnt_HeaderFile
#define _TColgp_HArray2OfPnt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HArray2OfPnt.hxx>

#include <TColgp_Array2OfPnt.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_Pnt;
class TColgp_Array2OfPnt;



class TColgp_HArray2OfPnt : public MMgt_TShared
{

public:

  
    TColgp_HArray2OfPnt(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColgp_HArray2OfPnt(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const gp_Pnt& V);
  
      void Init (const gp_Pnt& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const gp_Pnt& Value) ;
  
     const  gp_Pnt& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      gp_Pnt& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColgp_Array2OfPnt& Array2()  const;
  
      TColgp_Array2OfPnt& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray2OfPnt)

protected:




private: 


  TColgp_Array2OfPnt myArray;


};

#define ItemHArray2 gp_Pnt
#define ItemHArray2_hxx <gp_Pnt.hxx>
#define TheArray2 TColgp_Array2OfPnt
#define TheArray2_hxx <TColgp_Array2OfPnt.hxx>
#define TCollection_HArray2 TColgp_HArray2OfPnt
#define TCollection_HArray2_hxx <TColgp_HArray2OfPnt.hxx>
#define Handle_TCollection_HArray2 Handle_TColgp_HArray2OfPnt
#define TCollection_HArray2_Type_() TColgp_HArray2OfPnt_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColgp_HArray2OfPnt_HeaderFile
