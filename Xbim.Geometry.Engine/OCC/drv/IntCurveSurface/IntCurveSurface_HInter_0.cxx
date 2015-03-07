// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <IntCurveSurface_HInter.hxx>

#include <Adaptor3d_HCurve.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <Bnd_BoundSortBox.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Parab.hxx>
#include <gp_Hypr.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <TColgp_Array2OfPnt.hxx>
#include <Bnd_Box.hxx>
#include <TColStd_Array1OfReal.hxx>
 

#define TheCurve Handle(Adaptor3d_HCurve)
#define TheCurve_hxx <Adaptor3d_HCurve.hxx>
#define TheCurveTool IntCurveSurface_TheHCurveTool
#define TheCurveTool_hxx <IntCurveSurface_TheHCurveTool.hxx>
#define TheSurface Handle(Adaptor3d_HSurface)
#define TheSurface_hxx <Adaptor3d_HSurface.hxx>
#define TheSurfaceTool Adaptor3d_HSurfaceTool
#define TheSurfaceTool_hxx <Adaptor3d_HSurfaceTool.hxx>
#define IntCurveSurface_ThePolygon IntCurveSurface_ThePolygonOfHInter
#define IntCurveSurface_ThePolygon_hxx <IntCurveSurface_ThePolygonOfHInter.hxx>
#define IntCurveSurface_ThePolygonTool IntCurveSurface_ThePolygonToolOfHInter
#define IntCurveSurface_ThePolygonTool_hxx <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#define IntCurveSurface_ThePolyhedron IntCurveSurface_ThePolyhedronOfHInter
#define IntCurveSurface_ThePolyhedron_hxx <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#define IntCurveSurface_ThePolyhedronTool IntCurveSurface_ThePolyhedronToolOfHInter
#define IntCurveSurface_ThePolyhedronTool_hxx <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#define IntCurveSurface_TheInterference IntCurveSurface_TheInterferenceOfHInter
#define IntCurveSurface_TheInterference_hxx <IntCurveSurface_TheInterferenceOfHInter.hxx>
#define IntCurveSurface_TheCSFunction IntCurveSurface_TheCSFunctionOfHInter
#define IntCurveSurface_TheCSFunction_hxx <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#define IntCurveSurface_TheExactInter IntCurveSurface_TheExactHInter
#define IntCurveSurface_TheExactInter_hxx <IntCurveSurface_TheExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvExactInter IntCurveSurface_TheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvExactInter_hxx <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter_hxx <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter
#define IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactInter_hxx <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#define IntCurveSurface_Inter IntCurveSurface_HInter
#define IntCurveSurface_Inter_hxx <IntCurveSurface_HInter.hxx>
#include <IntCurveSurface_Inter.gxx>

