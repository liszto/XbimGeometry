// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeFace_HeaderFile
#define _BRepBuilderAPI_MakeFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_MakeFace_HeaderFile
#include <BRepLib_MakeFace.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepBuilderAPI_FaceError_HeaderFile
#include <BRepBuilderAPI_FaceError.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Face;
class gp_Pln;
class gp_Cylinder;
class gp_Cone;
class gp_Sphere;
class gp_Torus;
class Geom_Surface;
class TopoDS_Wire;


//! Provides methods to build faces. <br>
//! <br>
//!          A face may be built : <br>
//! <br>
//!          * From a surface. <br>
//! <br>
//!             - Elementary surface from gp. <br>
//! <br>
//!             - Surface from Geom. <br>
//! <br>
//!          * From a surface and U,V values. <br>
//! <br>
//!          * From a wire. <br>
//! <br>
//!            - Find the surface automatically if possible. <br>
//! <br>
//!          * From a surface and a wire. <br>
//! <br>
//!            - A flag Inside is given, when this flag is True <br>
//!            the  wire is  oriented to bound a finite area on <br>
//!            the surface. <br>
//! <br>
//!          * From a face and a wire. <br>
//! <br>
//!            - The new wire is a perforation. <br>
class BRepBuilderAPI_MakeFace  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Not done. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace();
  //! Load a face. Usefull to add wires. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const TopoDS_Face& F);
  //! Make a face from a plane. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Pln& P);
  //! Make a face from a cylinder. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cylinder& C);
  //! Make a face from a cone. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cone& C);
  //! Make a face from a sphere. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Sphere& S);
  //! Make a face from a torus. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Torus& C);
  //! Make a face from a Surface. Accepts tolerance value (TolDegen) <br>
//! for resolution of degenerated edges. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const Handle(Geom_Surface)& S,const Standard_Real TolDegen);
  //! Make a face from a plane. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Pln& P,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  //! Make a face from a cylinder. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cylinder& C,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  //! Make a face from a cone. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cone& C,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  //! Make a face from a sphere. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Sphere& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  //! Make a face from a torus. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Torus& C,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax);
  //! Make a face from a Surface. Accepts tolerance value (TolDegen) <br>
//!          for resolution of degenerated edges. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real TolDegen);
  //! Find a surface from the wire and make a face. <br>
//!          if <OnlyPlane> is true, the computed surface will be <br>
//!          a plane. If it is not possible to find a plane, the <br>
//!          flag NotDone will be set. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const TopoDS_Wire& W,const Standard_Boolean OnlyPlane = Standard_False);
  //! Make a face from a plane and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Pln& P,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Make a face from a cylinder and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cylinder& C,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Make a face from a cone and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Cone& C,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Make a face from a sphere and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Sphere& S,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Make a face from a torus and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const gp_Torus& C,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Make a face from a Surface and a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const Handle(Geom_Surface)& S,const TopoDS_Wire& W,const Standard_Boolean Inside = Standard_True);
  //! Adds the wire <W> in the face <F> <br>//! A general method to create a face is to give <br>
//! -      a surface S as the support (the geometric domain) of the face, <br>
//! -      and a wire W to bound it. <br>
//! The bounds of the face can also be defined by four parameter values <br>
//! umin, umax, vmin, vmax which determine isoparametric limitations on <br>
//! the parametric space of the surface. In this way, a patch is <br>
//! defined. The parameter values are optional. If they are omitted, the <br>
//! natural bounds of the surface are used. A wire is automatically <br>
//! built using the defined bounds. Up to four edges and four vertices <br>
//! are created with this wire (no edge is created when the <br>
//! corresponding parameter value is infinite). <br>
//! Wires can then be added using the function Add to define other <br>
//! restrictions on the face. These restrictions represent holes. More <br>
//! than one wire may be added by this way, provided that the wires do <br>
//! not cross each other and that they define only one area on the <br>
//! surface. (Be careful, however, as this is not checked). <br>
//!  Forbidden addition of wires <br>
//! Note that in this schema, the third case is valid if edges of the <br>
//! wire W are declared internal to the face. As a result, these edges <br>
//! are no longer bounds of the face. <br>
//! A default tolerance (Precision::Confusion()) is given to the face, <br>
//! this tolerance may be increased during construction of the face <br>
//! using various algorithms. <br>
//! Rules applied to the arguments <br>
//! For the surface: <br>
//! -      The surface must not be a 'null handle'. <br>
//! -      If the surface is a trimmed surface, the basis surface is used. <br>
//! -      For the wire: the wire is composed of connected edges, each <br>
//!    edge having a parametric curve description in the parametric <br>
//!    domain of the surface; in other words, as a pcurve. <br>
//! For the parameters: <br>
//! -      The parameter values must be in the parametric range of the <br>
//!    surface (or the basis surface, if the surface is trimmed). If this <br>
//!    condition is not satisfied, the face is not built, and the Error <br>
//!    function will return BRepBuilderAPI_ParametersOutOfRange. <br>
//! -      The bounding parameters p1 and p2 are adjusted on a periodic <br>
//!    surface in a given parametric direction by adding or subtracting <br>
//!    the period to obtain p1 in the parametric range of the surface and <br>
//!    such p2, that p2 - p1 <= Period, where Period is the period of the <br>
//!    surface in this parametric direction. <br>
//! -      A parameter value may be infinite. There will be no edge and <br>
//!    no vertex in the corresponding direction. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeFace(const TopoDS_Face& F,const TopoDS_Wire& W);
  //!  Initializes (or reinitializes) the <br>
//! construction of a face by creating a new object which is a copy of <br>
//! the face F, in order to add wires to it, using the function Add. <br>
//! Note: this complete copy of the geometry is only required if you <br>
//! want to work on the geometries of the two faces independently. <br>
  Standard_EXPORT     void Init(const TopoDS_Face& F) ;
  //! Initializes (or reinitializes) the construction of a face on <br>
//! the surface S. If Bound is true, a wire is <br>
//! automatically created from the natural bounds of the <br>
//! surface S and added to the face in order to bound it. If <br>
//! Bound is false, no wire is added. This option is used <br>
//! when real bounds are known. These will be added to <br>
//! the face after this initialization, using the function Add. <br>
//! TolDegen parameter is used for resolution of degenerated edges <br>
//! if calculation of natural bounds is turned on. <br>
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S,const Standard_Boolean Bound,const Standard_Real TolDegen) ;
  //!  Initializes (or reinitializes) the construction of a face on <br>
//! the surface S, limited in the u parametric direction by <br>
//! the two parameter values UMin and UMax and in the <br>
//! v parametric direction by the two parameter values VMin and VMax. <br>
//! Warning <br>
//!  Error returns: <br>
//! -      BRepBuilderAPI_ParametersOutOfRange <br>
//!    when the parameters given are outside the bounds of the <br>
//!    surface or the basis surface of a trimmed surface. <br>
//! TolDegen parameter is used for resolution of degenerated edges. <br>
  Standard_EXPORT     void Init(const Handle(Geom_Surface)& S,const Standard_Real UMin,const Standard_Real UMax,const Standard_Real VMin,const Standard_Real VMax,const Standard_Real TolDegen) ;
  //! Adds the wire W to the constructed face as a hole. <br>
//! Warning <br>
//! W must not cross the other bounds of the face, and all <br>
//! the bounds must define only one area on the surface. <br>
//! (Be careful, however, as this is not checked.) <br>
//! Example <br>
//! // a cylinder <br>
//!    gp_Cylinder C = ..; <br>
//! // a wire <br>
//! TopoDS_Wire W = ...; <br>
//! BRepBuilderAPI_MakeFace MF(C); <br>
//! MF.Add(W); <br>
//! TopoDS_Face F = MF; <br>
  Standard_EXPORT     void Add(const TopoDS_Wire& W) ;
  //! Returns true if this algorithm has a valid face. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const;
  //! Returns the construction status <br>
//!   BRepBuilderAPI_FaceDone if the face is built, or <br>
//! -   another value of the BRepBuilderAPI_FaceError <br>
//!   enumeration indicating why the construction failed, in <br>
//!   particular when the given parameters are outside the <br>
//!   bounds of the surface. <br>
  Standard_EXPORT     BRepBuilderAPI_FaceError Error() const;
  //! Returns the constructed face. <br>
//! Exceptions <br>
//! StdFail_NotDone if no face is built. <br>
  Standard_EXPORT    const TopoDS_Face& Face() const;
Standard_EXPORT operator TopoDS_Face() const;





protected:





private:



BRepLib_MakeFace myMakeFace;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif