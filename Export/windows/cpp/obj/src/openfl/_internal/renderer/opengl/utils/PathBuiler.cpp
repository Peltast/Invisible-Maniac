#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#include <openfl/_internal/renderer/GraphicsPaths.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PathBuiler_obj::__construct()
{
	return null();
}

//PathBuiler_obj::~PathBuiler_obj() { }

Dynamic PathBuiler_obj::__CreateEmpty() { return  new PathBuiler_obj; }
hx::ObjectPtr< PathBuiler_obj > PathBuiler_obj::__new()
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathBuiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::opengl::utils::DrawPath PathBuiler_obj::__currentPath;

int PathBuiler_obj::__currentWinding;

Array< ::Dynamic > PathBuiler_obj::__drawPaths;

::openfl::_internal::renderer::opengl::utils::LineStyle PathBuiler_obj::__line;

::openfl::_internal::renderer::opengl::utils::FillType PathBuiler_obj::__fill;

int PathBuiler_obj::__fillIndex;

Void PathBuiler_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","closePath",0x65da1ed8,"openfl._internal.renderer.opengl.utils.PathBuiler.closePath","openfl/_internal/renderer/opengl/utils/DrawPath.hx",83,0xf0fd7951)
		HX_STACK_LINE(84)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(84)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			tmp2 = tmp3->points->length;
		}
		HX_STACK_LINE(84)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(85)
		bool tmp3 = (l <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		if ((tmp3)){
			HX_STACK_LINE(85)
			return null();
		}
		HX_STACK_LINE(87)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		bool tmp6 = (tmp5 == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		if ((tmp6)){
			HX_STACK_LINE(87)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			::openfl::_internal::renderer::opengl::utils::FillType tmp10 = tmp9->fill;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			tmp7 = (tmp10 != ::openfl::_internal::renderer::opengl::utils::FillType_obj::None);
		}
		else{
			HX_STACK_LINE(87)
			tmp7 = false;
		}
		HX_STACK_LINE(87)
		if ((tmp7)){
			HX_STACK_LINE(88)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			Float tmp9 = tmp8->points->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			Float sx = tmp9;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(89)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			Float tmp11 = tmp10->points->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			Float sy = tmp11;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(90)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			int tmp13 = (l - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			Float tmp14 = tmp12->points->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(90)
			Float ex = tmp14;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(91)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(91)
			int tmp16 = (l - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(91)
			Float tmp17 = tmp15->points->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(91)
			Float ey = tmp17;		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(93)
			bool tmp18 = (sx == ex);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(93)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			if ((tmp18)){
				HX_STACK_LINE(93)
				tmp19 = (sy == ey);
			}
			else{
				HX_STACK_LINE(93)
				tmp19 = false;
			}
			HX_STACK_LINE(93)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			if ((tmp20)){
				HX_STACK_LINE(94)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp21 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(94)
				Array< Float > points = tmp21->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(94)
				bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
				HX_STACK_LINE(94)
				bool tmp22 = (points->length > (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				if ((tmp22)){
					HX_STACK_LINE(94)
					int tmp23 = (points->length - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(94)
					Float tmp24 = points->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(94)
					Float lastX = tmp24;		HX_STACK_VAR(lastX,"lastX");
					HX_STACK_LINE(94)
					int tmp25 = (points->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(94)
					Float tmp26 = points->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(94)
					Float lastY = tmp26;		HX_STACK_VAR(lastY,"lastY");
					HX_STACK_LINE(94)
					bool tmp27 = (lastX == sx);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(94)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(94)
					if ((tmp27)){
						HX_STACK_LINE(94)
						tmp28 = (lastY == sy);
					}
					else{
						HX_STACK_LINE(94)
						tmp28 = false;
					}
					HX_STACK_LINE(94)
					if ((tmp28)){
						HX_STACK_LINE(94)
						push_point = false;
					}
				}
				HX_STACK_LINE(94)
				bool tmp23 = (push_point == true);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(94)
				if ((tmp23)){
					HX_STACK_LINE(94)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(94)
					Float tmp25 = sx;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(94)
					tmp24->points->push(tmp25);
					HX_STACK_LINE(94)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(94)
					Float tmp27 = sy;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(94)
					tmp26->points->push(tmp27);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,closePath,(void))

Void PathBuiler_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","endFill",0xe6a5a499,"openfl._internal.renderer.opengl.utils.PathBuiler.endFill","openfl/_internal/renderer/opengl/utils/DrawPath.hx",99,0xf0fd7951)
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
		HX_STACK_LINE(102)
		(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,endFill,(void))

Void PathBuiler_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","moveTo",0x360182b1,"openfl._internal.renderer.opengl.utils.PathBuiler.moveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",106,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(108)
			bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(108)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			if ((tmp1)){
				HX_STACK_LINE(108)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(108)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				bool tmp5 = (tmp4->points == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				if ((tmp10)){
					HX_STACK_LINE(108)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(108)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(108)
					int tmp14 = tmp13->points->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(108)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(108)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					tmp2 = (tmp16 == (int)0);
				}
				else{
					HX_STACK_LINE(108)
					tmp2 = true;
				}
			}
			else{
				HX_STACK_LINE(108)
				tmp2 = false;
			}
			HX_STACK_LINE(108)
			if ((tmp2)){
				HX_STACK_LINE(108)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(108)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
		}
		HX_STACK_LINE(109)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
		HX_STACK_LINE(110)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp1 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp2 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::openfl::_internal::renderer::opengl::utils::FillType tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		int tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		int tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		tmp1->update(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(111)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		tmp6->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
		HX_STACK_LINE(112)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		tmp7->points->push(tmp8);
		HX_STACK_LINE(113)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		tmp9->points->push(tmp10);
		HX_STACK_LINE(115)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(115)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,moveTo,(void))

Void PathBuiler_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","lineTo",0x55f4f654,"openfl._internal.renderer.opengl.utils.PathBuiler.lineTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",119,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(120)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		Array< Float > points = tmp->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(121)
		bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
		HX_STACK_LINE(124)
		bool tmp1 = (points->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(125)
			int tmp2 = (points->length - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			Float lastX = tmp3;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(126)
			int tmp4 = (points->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			Float lastY = tmp5;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(127)
			bool tmp6 = (lastX == x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			if ((tmp6)){
				HX_STACK_LINE(127)
				tmp7 = (lastY == y);
			}
			else{
				HX_STACK_LINE(127)
				tmp7 = false;
			}
			HX_STACK_LINE(127)
			if ((tmp7)){
				HX_STACK_LINE(128)
				push_point = false;
			}
		}
		HX_STACK_LINE(132)
		bool tmp2 = (push_point == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		if ((tmp2)){
			HX_STACK_LINE(133)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			tmp3->points->push(tmp4);
			HX_STACK_LINE(134)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			tmp5->points->push(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,lineTo,(void))

Void PathBuiler_obj::curveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","curveTo",0x8f4d7ca5,"openfl._internal.renderer.opengl.utils.PathBuiler.curveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",138,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(140)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			int tmp6 = tmp5->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			tmp3 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(140)
			tmp3 = true;
		}
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				bool tmp5 = tmp4->isRemovable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				if ((tmp5)){
					HX_STACK_LINE(141)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					bool tmp9 = (tmp8->points == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(141)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(141)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(141)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(141)
					if ((tmp14)){
						HX_STACK_LINE(141)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(141)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(141)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(141)
						int tmp18 = tmp17->points->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(141)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(141)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(141)
						tmp6 = (tmp20 == (int)0);
					}
					else{
						HX_STACK_LINE(141)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(141)
					tmp6 = false;
				}
				HX_STACK_LINE(141)
				if ((tmp6)){
					HX_STACK_LINE(141)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(141)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp4;
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::FillType tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(141)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(141)
			int tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(141)
			tmp5->update(tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(141)
			tmp10->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			tmp11->points->push((int)0);
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(141)
			tmp12->points->push((int)0);
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(141)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp13);
		}
		HX_STACK_LINE(144)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		Float tmp5 = cx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(144)
		Float tmp6 = cy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(144)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(144)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp4->points,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PathBuiler_obj,curveTo,(void))

Void PathBuiler_obj::cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","cubicCurveTo",0x7b165965,"openfl._internal.renderer.opengl.utils.PathBuiler.cubicCurveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",148,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(150)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			int tmp6 = tmp5->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp3 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(150)
			tmp3 = true;
		}
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				bool tmp5 = tmp4->isRemovable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(151)
				if ((tmp5)){
					HX_STACK_LINE(151)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(151)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(151)
					bool tmp9 = (tmp8->points == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(151)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(151)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(151)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(151)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(151)
					if ((tmp14)){
						HX_STACK_LINE(151)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(151)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(151)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(151)
						int tmp18 = tmp17->points->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(151)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(151)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(151)
						tmp6 = (tmp20 == (int)0);
					}
					else{
						HX_STACK_LINE(151)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(151)
					tmp6 = false;
				}
				HX_STACK_LINE(151)
				if ((tmp6)){
					HX_STACK_LINE(151)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(151)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp4;
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::FillType tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			int tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			tmp5->update(tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			tmp10->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(151)
			tmp11->points->push((int)0);
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(151)
			tmp12->points->push((int)0);
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp13);
		}
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			Array< Float > points = tmp4->points;		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(154)
			int n = (int)20;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(154)
			Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(154)
			Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
			HX_STACK_LINE(154)
			Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
			HX_STACK_LINE(154)
			Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(154)
			Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(154)
			int tmp5 = (points->length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			Float tmp6 = points->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			Float fromX = tmp6;		HX_STACK_VAR(fromX,"fromX");
			HX_STACK_LINE(154)
			int tmp7 = (points->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			Float tmp8 = points->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			Float fromY = tmp8;		HX_STACK_VAR(fromY,"fromY");
			HX_STACK_LINE(154)
			Float px = (int)0;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(154)
			Float py = (int)0;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(154)
			Float tmp9 = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(154)
				int tmp10 = (n + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(154)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(154)
				while((true)){
					HX_STACK_LINE(154)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					if ((tmp12)){
						HX_STACK_LINE(154)
						break;
					}
					HX_STACK_LINE(154)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(154)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(154)
					Float tmp14 = (Float(i) / Float(n));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(154)
					tmp9 = tmp14;
					HX_STACK_LINE(154)
					Float tmp15 = ((int)1 - tmp9);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(154)
					dt = tmp15;
					HX_STACK_LINE(154)
					Float tmp16 = (dt * dt);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(154)
					dt2 = tmp16;
					HX_STACK_LINE(154)
					Float tmp17 = (dt2 * dt);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(154)
					dt3 = tmp17;
					HX_STACK_LINE(154)
					Float tmp18 = (tmp9 * tmp9);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(154)
					t2 = tmp18;
					HX_STACK_LINE(154)
					Float tmp19 = (t2 * tmp9);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(154)
					t3 = tmp19;
					HX_STACK_LINE(154)
					Float tmp20 = (dt3 * fromX);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(154)
					Float tmp21 = ((int)3 * dt2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(154)
					Float tmp22 = tmp9;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(154)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(154)
					Float tmp24 = cx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(154)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(154)
					Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(154)
					Float tmp27 = ((int)3 * dt);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(154)
					Float tmp28 = t2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(154)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(154)
					Float tmp30 = cx2;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(154)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(154)
					Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(154)
					Float tmp33 = (t3 * x);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(154)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(154)
					px = tmp34;
					HX_STACK_LINE(154)
					Float tmp35 = (dt3 * fromY);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(154)
					Float tmp36 = ((int)3 * dt2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(154)
					Float tmp37 = tmp9;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(154)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(154)
					Float tmp39 = cy;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(154)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(154)
					Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(154)
					Float tmp42 = ((int)3 * dt);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(154)
					Float tmp43 = t2;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(154)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(154)
					Float tmp45 = cy2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(154)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(154)
					Float tmp47 = (tmp41 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(154)
					Float tmp48 = (t3 * y);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(154)
					Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(154)
					py = tmp49;
					HX_STACK_LINE(154)
					Float tmp50 = px;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(154)
					points->push(tmp50);
					HX_STACK_LINE(154)
					Float tmp51 = py;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(154)
					points->push(tmp51);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(PathBuiler_obj,cubicCurveTo,(void))

Void PathBuiler_obj::graphicDataPop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","graphicDataPop",0x871be484,"openfl._internal.renderer.opengl.utils.PathBuiler.graphicDataPop","openfl/_internal/renderer/opengl/utils/DrawPath.hx",158,0xf0fd7951)
		HX_STACK_LINE(160)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		if ((tmp1)){
			HX_STACK_LINE(160)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			bool tmp5 = (tmp4->points == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			if ((tmp10)){
				HX_STACK_LINE(160)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(160)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(160)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(160)
				int tmp14 = tmp13->points->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(160)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(160)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(160)
				tmp2 = (tmp16 == (int)0);
			}
			else{
				HX_STACK_LINE(160)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(160)
			tmp2 = false;
		}
		HX_STACK_LINE(160)
		if ((tmp2)){
			HX_STACK_LINE(161)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(163)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,graphicDataPop,(void))

::openfl::_internal::renderer::opengl::utils::GLStack PathBuiler_obj::build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","build",0xe0200b09,"openfl._internal.renderer.opengl.utils.PathBuiler.build","openfl/_internal/renderer/opengl/utils/DrawPath.hx",168,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(170)
	::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
	HX_STACK_LINE(171)
	::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(173)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(174)
	::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
	HX_STACK_LINE(175)
	::openfl::_internal::renderer::opengl::utils::LineStyle tmp1 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp1;
	HX_STACK_LINE(176)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(177)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex = (int)0;
	HX_STACK_LINE(179)
	int tmp2 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = graphics->__glStack->__get(tmp2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	glStack = tmp3;
	HX_STACK_LINE(181)
	bool tmp4 = (glStack == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	if ((tmp4)){
		HX_STACK_LINE(183)
		int tmp5 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = ::openfl::_internal::renderer::opengl::utils::GLStack_obj::__new(gl);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp7 = graphics->__glStack[tmp5] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		glStack = tmp7;
	}
	HX_STACK_LINE(187)
	bool tmp5 = graphics->__visible;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(187)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(187)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(187)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(187)
	if ((tmp9)){
		HX_STACK_LINE(187)
		int tmp11 = graphics->__commands->get_length();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(187)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		tmp10 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(187)
		tmp10 = true;
	}
	HX_STACK_LINE(187)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(187)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(187)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(187)
	if ((tmp12)){
		HX_STACK_LINE(187)
		tmp13 = (bounds == null());
	}
	else{
		HX_STACK_LINE(187)
		tmp13 = true;
	}
	HX_STACK_LINE(187)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(187)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(187)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(187)
	if ((tmp15)){
		HX_STACK_LINE(187)
		tmp16 = (bounds->width == (int)0);
	}
	else{
		HX_STACK_LINE(187)
		tmp16 = true;
	}
	HX_STACK_LINE(187)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(187)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(187)
	if ((tmp17)){
		HX_STACK_LINE(187)
		tmp18 = (bounds->height == (int)0);
	}
	else{
		HX_STACK_LINE(187)
		tmp18 = true;
	}
	HX_STACK_LINE(187)
	if ((tmp18)){
	}
	else{
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(195)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(195)
				if ((tmp21)){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(195)
				::openfl::_internal::renderer::DrawCommandType type = tmp22;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(195)
				++(_g);
				HX_STACK_LINE(197)
				switch( (int)(type->__Index())){
					case (int)0: {
						HX_STACK_LINE(201)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(201)
						{
							HX_STACK_LINE(201)
							{
								HX_STACK_LINE(201)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(201)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(201)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(201)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(201)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(201)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(201)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(201)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(201)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(201)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(201)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(201)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(201)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(201)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(201)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(201)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(201)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(201)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(201)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
							HX_STACK_LINE(201)
							tmp23 = data;
						}
						HX_STACK_LINE(201)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(202)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
						HX_STACK_LINE(203)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(203)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(203)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(203)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(203)
						::openfl::display::BitmapData tmp28 = ((::openfl::display::BitmapData)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(203)
						bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(203)
						::openfl::_internal::renderer::opengl::utils::FillType tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(203)
						if ((tmp29)){
							HX_STACK_LINE(203)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(203)
							int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(203)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(203)
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(203)
							::openfl::display::BitmapData tmp35 = ((::openfl::display::BitmapData)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(203)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(203)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(203)
							int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(203)
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(203)
							::openfl::geom::Matrix tmp40 = ((::openfl::geom::Matrix)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(203)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(203)
							int tmp42 = c->bPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(203)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(203)
							bool tmp44 = tmp41->b->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(203)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(203)
							int tmp46 = c->bPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(203)
							int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(203)
							bool tmp48 = tmp45->b->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(203)
							tmp30 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Texture(tmp35,tmp40,tmp44,tmp48);
						}
						else{
							HX_STACK_LINE(203)
							tmp30 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
						}
						HX_STACK_LINE(203)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp30;
						HX_STACK_LINE(205)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(205)
						bool tmp32 = (tmp31->points == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(205)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(205)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(205)
						if ((tmp33)){
							HX_STACK_LINE(205)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(205)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(205)
							int tmp37 = tmp36->points->length;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(205)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(205)
							tmp34 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(205)
							tmp34 = true;
						}
						HX_STACK_LINE(205)
						if ((tmp34)){
							HX_STACK_LINE(207)
							{
								HX_STACK_LINE(207)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(207)
								bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(207)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(207)
								if ((tmp36)){
									HX_STACK_LINE(207)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(207)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(207)
									bool tmp40 = (tmp39->points == null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(207)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(207)
									bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(207)
									bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(207)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(207)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(207)
									if ((tmp45)){
										HX_STACK_LINE(207)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(207)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(207)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(207)
										int tmp49 = tmp48->points->length;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(207)
										int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(207)
										int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(207)
										tmp37 = (tmp51 == (int)0);
									}
									else{
										HX_STACK_LINE(207)
										tmp37 = true;
									}
								}
								else{
									HX_STACK_LINE(207)
									tmp37 = false;
								}
								HX_STACK_LINE(207)
								if ((tmp37)){
									HX_STACK_LINE(207)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(207)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(208)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(208)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
							HX_STACK_LINE(209)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(209)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(209)
							::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(209)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(209)
							tmp36->update(tmp37,tmp38,tmp39,tmp40);
							HX_STACK_LINE(210)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(210)
							tmp41->points = Array_obj< Float >::__new();
							HX_STACK_LINE(211)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(211)
							tmp42->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(212)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(212)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp43);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(218)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(218)
						{
							HX_STACK_LINE(218)
							{
								HX_STACK_LINE(218)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(218)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(218)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(218)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(218)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(218)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(218)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(218)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(218)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(218)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(218)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(218)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(218)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(218)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(218)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(218)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(218)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(218)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(218)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
							HX_STACK_LINE(218)
							tmp23 = data;
						}
						HX_STACK_LINE(218)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(219)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
						HX_STACK_LINE(220)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(220)
						int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(220)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(220)
						Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(220)
						bool tmp28 = (tmp27 > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(220)
						::openfl::_internal::renderer::opengl::utils::FillType tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(220)
						if ((tmp28)){
							HX_STACK_LINE(220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(220)
							int tmp31 = c->iPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(220)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(220)
							int tmp33 = tmp30->i->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(220)
							int tmp34 = (int(tmp33) & int((int)16777215));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(220)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(220)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(220)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(220)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(220)
							tmp29 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Color(tmp34,tmp38);
						}
						else{
							HX_STACK_LINE(220)
							tmp29 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
						}
						HX_STACK_LINE(220)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp29;
						HX_STACK_LINE(222)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(222)
						bool tmp31 = (tmp30->points == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(222)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(222)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(222)
						if ((tmp32)){
							HX_STACK_LINE(222)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(222)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(222)
							int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(222)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(222)
							tmp33 = (tmp37 == (int)0);
						}
						else{
							HX_STACK_LINE(222)
							tmp33 = true;
						}
						HX_STACK_LINE(222)
						if ((tmp33)){
							HX_STACK_LINE(224)
							{
								HX_STACK_LINE(224)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(224)
								bool tmp35 = tmp34->isRemovable;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(224)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(224)
								if ((tmp35)){
									HX_STACK_LINE(224)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(224)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(224)
									bool tmp39 = (tmp38->points == null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(224)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(224)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(224)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(224)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(224)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(224)
									if ((tmp44)){
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(224)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(224)
										int tmp48 = tmp47->points->length;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(224)
										int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(224)
										int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(224)
										tmp36 = (tmp50 == (int)0);
									}
									else{
										HX_STACK_LINE(224)
										tmp36 = true;
									}
								}
								else{
									HX_STACK_LINE(224)
									tmp36 = false;
								}
								HX_STACK_LINE(224)
								if ((tmp36)){
									HX_STACK_LINE(224)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(224)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(225)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(225)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp34;
							HX_STACK_LINE(226)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(226)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(226)
							::openfl::_internal::renderer::opengl::utils::FillType tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(226)
							int tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(226)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(226)
							tmp35->update(tmp36,tmp37,tmp38,tmp39);
							HX_STACK_LINE(227)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(227)
							tmp40->points = Array_obj< Float >::__new();
							HX_STACK_LINE(228)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(228)
							tmp41->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(229)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(229)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp42);
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(235)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							{
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(235)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(235)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(235)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(235)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(235)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(235)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(235)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(235)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(235)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(235)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(235)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(235)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(235)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(235)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(235)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(235)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(235)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(235)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(235)
							tmp23 = data;
						}
						HX_STACK_LINE(235)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(236)
						{
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(236)
							int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(236)
							Float tmp26 = tmp24->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(236)
							Float cx = tmp26;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(236)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(236)
							int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(236)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(236)
							Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(236)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(236)
							int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(236)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(236)
							Float cx2 = tmp34;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(236)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(236)
							int tmp37 = (tmp36 + (int)4);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(236)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(236)
							Float cy2 = tmp38;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(236)
							int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(236)
							int tmp41 = (tmp40 + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(236)
							Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(236)
							Float x = tmp42;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(236)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(236)
							int tmp45 = (tmp44 + (int)6);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(236)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(236)
							Float y = tmp46;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(236)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(236)
							bool tmp48 = (tmp47->points == null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(236)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(236)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(236)
							if ((tmp49)){
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(236)
								int tmp53 = tmp52->points->length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(236)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(236)
								tmp50 = (tmp54 == (int)0);
							}
							else{
								HX_STACK_LINE(236)
								tmp50 = true;
							}
							HX_STACK_LINE(236)
							if ((tmp50)){
								HX_STACK_LINE(236)
								{
									HX_STACK_LINE(236)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(236)
									bool tmp52 = tmp51->isRemovable;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(236)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(236)
									if ((tmp52)){
										HX_STACK_LINE(236)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(236)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(236)
										bool tmp56 = (tmp55->points == null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(236)
										bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(236)
										bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(236)
										bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(236)
										bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(236)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(236)
										if ((tmp61)){
											HX_STACK_LINE(236)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(236)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(236)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(236)
											int tmp65 = tmp64->points->length;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(236)
											int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(236)
											int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(236)
											tmp53 = (tmp67 == (int)0);
										}
										else{
											HX_STACK_LINE(236)
											tmp53 = true;
										}
									}
									else{
										HX_STACK_LINE(236)
										tmp53 = false;
									}
									HX_STACK_LINE(236)
									if ((tmp53)){
										HX_STACK_LINE(236)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(236)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp51;
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::FillType tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(236)
								int tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(236)
								int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(236)
								tmp52->update(tmp53,tmp54,tmp55,tmp56);
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(236)
								tmp57->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(236)
								tmp58->points->push((int)0);
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(236)
								tmp59->points->push((int)0);
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp60);
							}
							HX_STACK_LINE(236)
							{
								HX_STACK_LINE(236)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(236)
								Array< Float > points = tmp51->points;		HX_STACK_VAR(points,"points");
								HX_STACK_LINE(236)
								int n = (int)20;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(236)
								Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(236)
								Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
								HX_STACK_LINE(236)
								Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
								HX_STACK_LINE(236)
								Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(236)
								Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
								HX_STACK_LINE(236)
								int tmp52 = (points->length - (int)2);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(236)
								Float tmp53 = points->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(236)
								Float fromX = tmp53;		HX_STACK_VAR(fromX,"fromX");
								HX_STACK_LINE(236)
								int tmp54 = (points->length - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(236)
								Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(236)
								Float fromY = tmp55;		HX_STACK_VAR(fromY,"fromY");
								HX_STACK_LINE(236)
								Float px = (int)0;		HX_STACK_VAR(px,"px");
								HX_STACK_LINE(236)
								Float py = (int)0;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(236)
								Float tmp56 = (int)0;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(236)
								{
									HX_STACK_LINE(236)
									int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(236)
									int tmp57 = (n + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(236)
									int _g2 = tmp57;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(236)
									while((true)){
										HX_STACK_LINE(236)
										bool tmp58 = (_g11 < _g2);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(236)
										bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(236)
										if ((tmp59)){
											HX_STACK_LINE(236)
											break;
										}
										HX_STACK_LINE(236)
										int tmp60 = (_g11)++;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(236)
										int i = tmp60;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(236)
										Float tmp61 = (Float(i) / Float(n));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(236)
										tmp56 = tmp61;
										HX_STACK_LINE(236)
										Float tmp62 = ((int)1 - tmp56);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(236)
										dt = tmp62;
										HX_STACK_LINE(236)
										Float tmp63 = (dt * dt);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(236)
										dt2 = tmp63;
										HX_STACK_LINE(236)
										Float tmp64 = (dt2 * dt);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(236)
										dt3 = tmp64;
										HX_STACK_LINE(236)
										Float tmp65 = (tmp56 * tmp56);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(236)
										t2 = tmp65;
										HX_STACK_LINE(236)
										Float tmp66 = (t2 * tmp56);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(236)
										t3 = tmp66;
										HX_STACK_LINE(236)
										Float tmp67 = (dt3 * fromX);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(236)
										Float tmp68 = ((int)3 * dt2);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(236)
										Float tmp69 = tmp56;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(236)
										Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(236)
										Float tmp71 = cx;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(236)
										Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(236)
										Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(236)
										Float tmp74 = ((int)3 * dt);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(236)
										Float tmp75 = t2;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(236)
										Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(236)
										Float tmp77 = cx2;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(236)
										Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(236)
										Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(236)
										Float tmp80 = (t3 * x);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(236)
										Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(236)
										px = tmp81;
										HX_STACK_LINE(236)
										Float tmp82 = (dt3 * fromY);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(236)
										Float tmp83 = ((int)3 * dt2);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(236)
										Float tmp84 = tmp56;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(236)
										Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(236)
										Float tmp86 = cy;		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(236)
										Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(236)
										Float tmp88 = (tmp82 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(236)
										Float tmp89 = ((int)3 * dt);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(236)
										Float tmp90 = t2;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(236)
										Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(236)
										Float tmp92 = cy2;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(236)
										Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(236)
										Float tmp94 = (tmp88 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(236)
										Float tmp95 = (t3 * y);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(236)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(236)
										py = tmp96;
										HX_STACK_LINE(236)
										Float tmp97 = px;		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(236)
										points->push(tmp97);
										HX_STACK_LINE(236)
										Float tmp98 = py;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(236)
										points->push(tmp98);
									}
								}
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(240)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							{
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(240)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(240)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(240)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(240)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(240)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(240)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(240)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(240)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(240)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(240)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(240)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(240)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(240)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(240)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(240)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(240)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(240)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(240)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(240)
							tmp23 = data;
						}
						HX_STACK_LINE(240)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(241)
							bool tmp25 = (tmp24->points == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(241)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(241)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(241)
							if ((tmp26)){
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(241)
								int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(241)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(241)
								tmp27 = (tmp31 == (int)0);
							}
							else{
								HX_STACK_LINE(241)
								tmp27 = true;
							}
							HX_STACK_LINE(241)
							if ((tmp27)){
								HX_STACK_LINE(241)
								{
									HX_STACK_LINE(241)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(241)
									bool tmp29 = tmp28->isRemovable;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(241)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(241)
									if ((tmp29)){
										HX_STACK_LINE(241)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(241)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(241)
										bool tmp33 = (tmp32->points == null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(241)
										bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(241)
										bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(241)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(241)
										bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(241)
										bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(241)
										if ((tmp38)){
											HX_STACK_LINE(241)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(241)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(241)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(241)
											int tmp42 = tmp41->points->length;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(241)
											int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(241)
											int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(241)
											tmp30 = (tmp44 == (int)0);
										}
										else{
											HX_STACK_LINE(241)
											tmp30 = true;
										}
									}
									else{
										HX_STACK_LINE(241)
										tmp30 = false;
									}
									HX_STACK_LINE(241)
									if ((tmp30)){
										HX_STACK_LINE(241)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(241)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp28;
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::FillType tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(241)
								int tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(241)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(241)
								tmp29->update(tmp30,tmp31,tmp32,tmp33);
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(241)
								tmp34->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(241)
								tmp35->points->push((int)0);
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(241)
								tmp36->points->push((int)0);
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(241)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp37);
							}
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(241)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(241)
							Float tmp31 = tmp29->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(241)
							int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(241)
							int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(241)
							Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(241)
							int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(241)
							int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(241)
							Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(241)
							int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(241)
							int tmp42 = (tmp41 + (int)3);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(241)
							Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(241)
							::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp28->points,tmp31,tmp35,tmp39,tmp43);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(245)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(245)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(245)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(245)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(245)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(245)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(245)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(245)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(245)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(245)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(245)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(245)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(245)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(245)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(245)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(245)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(245)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(245)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(245)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(245)
							tmp23 = data;
						}
						HX_STACK_LINE(245)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(246)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(246)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(246)
							if ((tmp25)){
								HX_STACK_LINE(246)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(246)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(246)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(246)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(246)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(246)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(246)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(246)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(246)
								if ((tmp34)){
									HX_STACK_LINE(246)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(246)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(246)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(246)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(246)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(246)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(246)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(246)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(246)
								tmp26 = false;
							}
							HX_STACK_LINE(246)
							if ((tmp26)){
								HX_STACK_LINE(246)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(246)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(248)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(248)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(249)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(249)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(249)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(249)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(249)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(249)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(250)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(250)
						tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Circle;
						HX_STACK_LINE(251)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(251)
						int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(251)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(251)
						Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(251)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(251)
						int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(251)
						int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(251)
						Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(251)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(251)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(251)
						int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(251)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(251)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(251)
						tmp43->points = Array_obj< Float >::__new().Add(tmp34).Add(tmp38).Add(tmp42);
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp44);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(257)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							{
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(257)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(257)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(257)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(257)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(257)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(257)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(257)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(257)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(257)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(257)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(257)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(257)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(257)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(257)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(257)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(257)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(257)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(257)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(257)
							tmp23 = data;
						}
						HX_STACK_LINE(257)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(258)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(258)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(258)
							if ((tmp25)){
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(258)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(258)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(258)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(258)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(258)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(258)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(258)
								if ((tmp34)){
									HX_STACK_LINE(258)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(258)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(258)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(258)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(258)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(258)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(258)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(258)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(258)
								tmp26 = false;
							}
							HX_STACK_LINE(258)
							if ((tmp26)){
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(261)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(261)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(261)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(261)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(261)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(261)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(262)
						tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse;
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(263)
						int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(263)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(263)
						Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(263)
						int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(263)
						int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(263)
						Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(263)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(263)
						int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(263)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(263)
						int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(263)
						int tmp45 = (tmp44 + (int)3);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(263)
						Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(263)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(263)
						tmp47->points = Array_obj< Float >::__new().Add(tmp34).Add(tmp38).Add(tmp42).Add(tmp46);
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp48);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(269)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(269)
						{
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(269)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(269)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(269)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(269)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(269)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(269)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(269)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(269)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(269)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(269)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(269)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(269)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(269)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							HX_STACK_LINE(269)
							tmp23 = data;
						}
						HX_STACK_LINE(269)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(270)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(270)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(270)
							if ((tmp25)){
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(270)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(270)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(270)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(270)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(270)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(270)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(270)
								if ((tmp34)){
									HX_STACK_LINE(270)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(270)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(270)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(270)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(270)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(270)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(270)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(270)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(270)
								tmp26 = false;
							}
							HX_STACK_LINE(270)
							if ((tmp26)){
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(273)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(273)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(273)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp30 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(false);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(274)
						tmp31->type = tmp30;
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(275)
						int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(275)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(275)
						Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(275)
						int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(275)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(275)
						Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(275)
						int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(275)
						int tmp42 = (tmp41 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(275)
						Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(275)
						int tmp45 = c->fPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(275)
						int tmp46 = (tmp45 + (int)3);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(275)
						Float tmp47 = tmp44->f->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(275)
						tmp48->points = Array_obj< Float >::__new().Add(tmp35).Add(tmp39).Add(tmp43).Add(tmp47);
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp49);
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							{
								HX_STACK_LINE(281)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(281)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(281)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(281)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(281)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(281)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							HX_STACK_LINE(281)
							tmp23 = data;
						}
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(283)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(283)
						int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(283)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(283)
						Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(283)
						Float x = tmp27;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(284)
						::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(284)
						int tmp29 = c->fPos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(284)
						int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(284)
						Float tmp31 = tmp28->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(284)
						Float y = tmp31;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(285)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(285)
						int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(285)
						int tmp34 = (tmp33 + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(285)
						Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(285)
						Float width = tmp35;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(286)
						int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(286)
						int tmp38 = (tmp37 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(286)
						Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(286)
						Float height = tmp39;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(287)
						int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(287)
						int tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(287)
						Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(287)
						Float rx = tmp43;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(288)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(288)
						int tmp45 = c->fPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(288)
						int tmp46 = (tmp45 + (int)5);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(288)
						Float tmp47 = tmp44->f->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(288)
						Float ry = tmp47;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(290)
						bool tmp48 = (ry == (int)-1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(290)
						if ((tmp48)){
							HX_STACK_LINE(290)
							ry = rx;
						}
						HX_STACK_LINE(292)
						hx::MultEq(rx,((Float)0.5));
						HX_STACK_LINE(293)
						hx::MultEq(ry,((Float)0.5));
						HX_STACK_LINE(295)
						Float tmp49 = rx;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(295)
						Float tmp50 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(295)
						bool tmp51 = (tmp49 > tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(295)
						if ((tmp51)){
							HX_STACK_LINE(295)
							Float tmp52 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(295)
							rx = tmp52;
						}
						HX_STACK_LINE(296)
						Float tmp52 = ry;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(296)
						Float tmp53 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(296)
						bool tmp54 = (tmp52 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(296)
						if ((tmp54)){
							HX_STACK_LINE(296)
							Float tmp55 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(296)
							ry = tmp55;
						}
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(298)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(298)
							bool tmp56 = tmp55->isRemovable;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(298)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(298)
							if ((tmp56)){
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(298)
								bool tmp60 = (tmp59->points == null());		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(298)
								bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(298)
								bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(298)
								bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(298)
								bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(298)
								bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(298)
								if ((tmp65)){
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(298)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(298)
									int tmp69 = tmp68->points->length;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(298)
									int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(298)
									int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(298)
									tmp57 = (tmp71 == (int)0);
								}
								else{
									HX_STACK_LINE(298)
									tmp57 = true;
								}
							}
							else{
								HX_STACK_LINE(298)
								tmp57 = false;
							}
							HX_STACK_LINE(298)
							if ((tmp57)){
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(298)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp55;
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::opengl::utils::FillType tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(301)
						int tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(301)
						int tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(301)
						tmp56->update(tmp57,tmp58,tmp59,tmp60);
						HX_STACK_LINE(302)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp61 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(true);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(302)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(302)
						tmp62->type = tmp61;
						HX_STACK_LINE(303)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(303)
						tmp63->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry);
						HX_STACK_LINE(305)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(305)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp64);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(309)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(309)
						{
							HX_STACK_LINE(309)
							{
								HX_STACK_LINE(309)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(309)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(309)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(309)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(309)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(309)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(309)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(309)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(309)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(309)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(309)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(309)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(309)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(309)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(309)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(309)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(309)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(309)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(309)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(309)
							tmp23 = data;
						}
						HX_STACK_LINE(309)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(310)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(314)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							{
								HX_STACK_LINE(314)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(314)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(314)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(314)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(314)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(314)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(314)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(314)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(314)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(314)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(314)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(314)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(314)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(314)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(314)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(314)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(314)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(314)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(314)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(314)
							tmp23 = data;
						}
						HX_STACK_LINE(314)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(315)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp24 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(315)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp24;
						HX_STACK_LINE(317)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(317)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(317)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(317)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(317)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(317)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(317)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(317)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(317)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(317)
						if ((tmp32)){
							HX_STACK_LINE(317)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(317)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(317)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(317)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(317)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(317)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(317)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(317)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(317)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(317)
							Dynamic tmp43 = tmp36->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(317)
							Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(317)
							Dynamic tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(317)
							Dynamic tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(317)
							Dynamic tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(317)
							Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(317)
							tmp33 = ::Math_obj::isNaN(tmp48);
						}
						else{
							HX_STACK_LINE(317)
							tmp33 = true;
						}
						HX_STACK_LINE(317)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(317)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(317)
						if ((tmp34)){
							HX_STACK_LINE(317)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(317)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(317)
							int tmp38 = c->oPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(317)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(317)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(317)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(317)
							Dynamic tmp42 = tmp37->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(317)
							Dynamic tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(317)
							Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(317)
							tmp35 = (tmp44 < (int)0);
						}
						else{
							HX_STACK_LINE(317)
							tmp35 = true;
						}
						HX_STACK_LINE(317)
						if ((tmp35)){
							HX_STACK_LINE(319)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(319)
							tmp36->width = (int)0;
						}
						else{
							HX_STACK_LINE(321)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(321)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(321)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(321)
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(321)
							Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(321)
							bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(321)
							if ((tmp41)){
								HX_STACK_LINE(323)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(323)
								tmp42->width = (int)1;
							}
							else{
								HX_STACK_LINE(327)
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(327)
								int tmp43 = c->oPos;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(327)
								int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(327)
								Dynamic tmp45 = tmp42->o->__GetItem(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(327)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(327)
								tmp46->width = tmp45;
							}
						}
						HX_STACK_LINE(331)
						{
							HX_STACK_LINE(331)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(331)
							bool tmp37 = tmp36->isRemovable;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(331)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(331)
							if ((tmp37)){
								HX_STACK_LINE(331)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(331)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(331)
								bool tmp41 = (tmp40->points == null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(331)
								bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(331)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(331)
								bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(331)
								bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(331)
								bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(331)
								if ((tmp46)){
									HX_STACK_LINE(331)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(331)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(331)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(331)
									int tmp50 = tmp49->points->length;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(331)
									int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(331)
									int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(331)
									tmp38 = (tmp52 == (int)0);
								}
								else{
									HX_STACK_LINE(331)
									tmp38 = true;
								}
							}
							else{
								HX_STACK_LINE(331)
								tmp38 = false;
							}
							HX_STACK_LINE(331)
							if ((tmp38)){
								HX_STACK_LINE(331)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(331)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(333)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(333)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(333)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(333)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(333)
						Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(333)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(333)
						int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(333)
						if ((tmp41)){
							HX_STACK_LINE(333)
							tmp42 = (int)0;
						}
						else{
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(333)
							int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(333)
							int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(333)
							Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(333)
							tmp42 = tmp46;
						}
						HX_STACK_LINE(333)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(333)
						tmp43->color = tmp42;
						HX_STACK_LINE(334)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(334)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(334)
						int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(334)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(334)
						Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(334)
						bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(334)
						Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(334)
						if ((tmp49)){
							HX_STACK_LINE(334)
							tmp50 = (int)1;
						}
						else{
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(334)
							int tmp52 = c->oPos;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(334)
							int tmp53 = (tmp52 + (int)2);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(334)
							Dynamic tmp54 = tmp51->o->__GetItem(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(334)
							tmp50 = tmp54;
						}
						HX_STACK_LINE(334)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(334)
						tmp51->alpha = tmp50;
						HX_STACK_LINE(335)
						::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(335)
						int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(335)
						int tmp54 = (tmp53 + (int)4);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(335)
						Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(335)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(335)
						tmp56->scaleMode = ((::openfl::display::LineScaleMode)(tmp55));
						HX_STACK_LINE(336)
						::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(336)
						int tmp58 = c->oPos;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(336)
						int tmp59 = (tmp58 + (int)5);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(336)
						Dynamic tmp60 = tmp57->o->__GetItem(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(336)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp61 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(336)
						tmp61->caps = ((::openfl::display::CapsStyle)(tmp60));
						HX_STACK_LINE(337)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(337)
						int tmp63 = c->oPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(337)
						int tmp64 = (tmp63 + (int)6);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(337)
						Dynamic tmp65 = tmp62->o->__GetItem(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(337)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(337)
						tmp66->joints = ((::openfl::display::JointStyle)(tmp65));
						HX_STACK_LINE(338)
						::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(338)
						int tmp68 = c->oPos;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(338)
						int tmp69 = (tmp68 + (int)7);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(338)
						Dynamic tmp70 = tmp67->o->__GetItem(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(338)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(338)
						tmp71->miterLimit = tmp70;
						HX_STACK_LINE(340)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp72 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(340)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp72;
						HX_STACK_LINE(341)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp73 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(341)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp74 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(341)
						::openfl::_internal::renderer::opengl::utils::FillType tmp75 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(341)
						int tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(341)
						int tmp77 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(341)
						tmp73->update(tmp74,tmp75,tmp76,tmp77);
						HX_STACK_LINE(342)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp78 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(342)
						tmp78->points = Array_obj< Float >::__new();
						HX_STACK_LINE(343)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp79 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(343)
						tmp79->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
						HX_STACK_LINE(345)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(345)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp80);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(349)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							{
								HX_STACK_LINE(349)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(349)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(349)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(349)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(349)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(349)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(349)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(349)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(349)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(349)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(349)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(349)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(349)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(349)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(349)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(349)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(349)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(349)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(349)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(349)
							tmp23 = data;
						}
						HX_STACK_LINE(349)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(350)
							int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(350)
							Float tmp26 = tmp24->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(350)
							Float x = tmp26;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(350)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(350)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(350)
							int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(350)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(350)
							Float y = tmp30;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(350)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(350)
							Array< Float > points = tmp31->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(350)
							bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
							HX_STACK_LINE(350)
							bool tmp32 = (points->length > (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(350)
							if ((tmp32)){
								HX_STACK_LINE(350)
								int tmp33 = (points->length - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(350)
								Float tmp34 = points->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(350)
								Float lastX = tmp34;		HX_STACK_VAR(lastX,"lastX");
								HX_STACK_LINE(350)
								int tmp35 = (points->length - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(350)
								Float tmp36 = points->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(350)
								Float lastY = tmp36;		HX_STACK_VAR(lastY,"lastY");
								HX_STACK_LINE(350)
								bool tmp37 = (lastX == x);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(350)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(350)
								if ((tmp37)){
									HX_STACK_LINE(350)
									tmp38 = (lastY == y);
								}
								else{
									HX_STACK_LINE(350)
									tmp38 = false;
								}
								HX_STACK_LINE(350)
								if ((tmp38)){
									HX_STACK_LINE(350)
									push_point = false;
								}
							}
							HX_STACK_LINE(350)
							bool tmp33 = (push_point == true);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(350)
							if ((tmp33)){
								HX_STACK_LINE(350)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(350)
								Float tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(350)
								tmp34->points->push(tmp35);
								HX_STACK_LINE(350)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(350)
								Float tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(350)
								tmp36->points->push(tmp37);
							}
						}
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(354)
						{
							HX_STACK_LINE(354)
							{
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(354)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(354)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(354)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(354)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(354)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(354)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(354)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(354)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(354)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(354)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(354)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(354)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(354)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(354)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(354)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(354)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(354)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(354)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(354)
							tmp23 = data;
						}
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(355)
						{
							HX_STACK_LINE(355)
							{
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(355)
								bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(355)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(355)
								if ((tmp25)){
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(355)
									bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(355)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(355)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(355)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(355)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(355)
									bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(355)
									if ((tmp34)){
										HX_STACK_LINE(355)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(355)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(355)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(355)
										int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(355)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(355)
										int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(355)
										tmp26 = (tmp40 == (int)0);
									}
									else{
										HX_STACK_LINE(355)
										tmp26 = true;
									}
								}
								else{
									HX_STACK_LINE(355)
									tmp26 = false;
								}
								HX_STACK_LINE(355)
								if ((tmp26)){
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(355)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(355)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(355)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(355)
							tmp25->update(tmp26,tmp27,tmp28,tmp29);
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(355)
							tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(355)
							int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(355)
							Float tmp34 = tmp32->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(355)
							tmp31->points->push(tmp34);
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(355)
							int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(355)
							int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(355)
							Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(355)
							tmp35->points->push(tmp39);
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(355)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp40);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(359)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							{
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(359)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(359)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(359)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(359)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(359)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
							HX_STACK_LINE(359)
							tmp23 = data;
						}
						HX_STACK_LINE(359)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(361)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(361)
						int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(361)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(361)
						Array< Float > uvtData = ((Array< Float >)(tmp27));		HX_STACK_VAR(uvtData,"uvtData");
						HX_STACK_LINE(362)
						::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(362)
						int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(362)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(362)
						Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(362)
						Array< Float > vertices = ((Array< Float >)(tmp31));		HX_STACK_VAR(vertices,"vertices");
						HX_STACK_LINE(363)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(363)
						int tmp33 = c->oPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(363)
						int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(363)
						Dynamic tmp35 = tmp32->o->__GetItem(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(363)
						Array< int > indices = ((Array< int >)(tmp35));		HX_STACK_VAR(indices,"indices");
						HX_STACK_LINE(364)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(364)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(364)
						int tmp38 = (tmp37 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(364)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(364)
						::openfl::display::TriangleCulling culling = ((::openfl::display::TriangleCulling)(tmp39));		HX_STACK_VAR(culling,"culling");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(365)
						int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(365)
						int tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(365)
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(365)
						Array< int > colors = ((Array< int >)(tmp43));		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(366)
						int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(366)
						int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(366)
						int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(366)
						int blendMode = tmp47;		HX_STACK_VAR(blendMode,"blendMode");
						HX_STACK_LINE(368)
						bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::FillType tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(368)
							::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp49;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(368)
							switch( (int)(_g2->__Index())){
								case (int)1: {
									HX_STACK_LINE(368)
									tmp48 = true;
								}
								;break;
								default: {
									HX_STACK_LINE(368)
									tmp48 = false;
								}
							}
						}
						HX_STACK_LINE(368)
						bool isColor = tmp48;		HX_STACK_VAR(isColor,"isColor");
						HX_STACK_LINE(369)
						bool tmp49 = isColor;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(369)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(369)
						if ((tmp49)){
							HX_STACK_LINE(369)
							tmp50 = (uvtData != null());
						}
						else{
							HX_STACK_LINE(369)
							tmp50 = false;
						}
						HX_STACK_LINE(369)
						if ((tmp50)){
							HX_STACK_LINE(371)
							continue;
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(374)
							bool tmp52 = tmp51->isRemovable;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(374)
							bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(374)
							if ((tmp52)){
								HX_STACK_LINE(374)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(374)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(374)
								bool tmp56 = (tmp55->points == null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(374)
								bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(374)
								bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(374)
								bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(374)
								bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(374)
								bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(374)
								if ((tmp61)){
									HX_STACK_LINE(374)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(374)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(374)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(374)
									int tmp65 = tmp64->points->length;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(374)
									int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(374)
									int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(374)
									tmp53 = (tmp67 == (int)0);
								}
								else{
									HX_STACK_LINE(374)
									tmp53 = true;
								}
							}
							else{
								HX_STACK_LINE(374)
								tmp53 = false;
							}
							HX_STACK_LINE(374)
							if ((tmp53)){
								HX_STACK_LINE(374)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(374)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp51;
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(377)
						::openfl::_internal::renderer::opengl::utils::FillType tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(377)
						int tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(377)
						int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(377)
						tmp52->update(tmp53,tmp54,tmp55,tmp56);
						HX_STACK_LINE(378)
						bool tmp57 = (uvtData == null());		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(378)
						if ((tmp57)){
							HX_STACK_LINE(379)
							Array< Float > tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								Array< Float > this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(379)
								this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
								HX_STACK_LINE(379)
								tmp58 = this1;
							}
							HX_STACK_LINE(379)
							uvtData = tmp58;
							HX_STACK_LINE(380)
							{
								HX_STACK_LINE(380)
								::openfl::_internal::renderer::opengl::utils::FillType tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(380)
								::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp59;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(380)
								switch( (int)(_g2->__Index())){
									case (int)2: {
										HX_STACK_LINE(380)
										::openfl::display::BitmapData tmp60 = (::openfl::_internal::renderer::opengl::utils::FillType(_g2))->__Param(0);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(380)
										::openfl::display::BitmapData b = tmp60;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(382)
										{
											HX_STACK_LINE(382)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(382)
											int tmp61 = vertices->length;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(382)
											Float tmp62 = (Float(tmp61) / Float((int)2));		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(382)
											int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(382)
											int _g3 = tmp63;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(382)
											while((true)){
												HX_STACK_LINE(382)
												bool tmp64 = (_g4 < _g3);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(382)
												bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(382)
												if ((tmp65)){
													HX_STACK_LINE(382)
													break;
												}
												HX_STACK_LINE(382)
												int tmp66 = (_g4)++;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(382)
												int i = tmp66;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(383)
												int tmp67 = (i * (int)2);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(383)
												Float tmp68 = vertices->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(383)
												Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(383)
												int tmp70 = b->width;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(383)
												Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(383)
												uvtData->push(tmp71);
												HX_STACK_LINE(384)
												int tmp72 = (i * (int)2);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(384)
												int tmp73 = (tmp72 + (int)1);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(384)
												Float tmp74 = vertices->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(384)
												Dynamic tmp75 = ((Dynamic)(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(384)
												int tmp76 = b->height;		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(384)
												Float tmp77 = (Float(tmp75) / Float(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(384)
												uvtData->push(tmp77);
											}
										}
									}
									;break;
									default: {
									}
								}
							}
						}
						HX_STACK_LINE(389)
						Array< Float > tmp58 = vertices;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(389)
						Array< int > tmp59 = indices;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(389)
						Array< Float > tmp60 = uvtData;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(389)
						::openfl::display::TriangleCulling tmp61 = culling;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(389)
						Array< int > tmp62 = colors;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(389)
						int tmp63 = blendMode;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(389)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp64 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTriangles(tmp58,tmp59,tmp60,tmp61,tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(389)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(389)
						tmp65->type = tmp64;
						HX_STACK_LINE(390)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(390)
						tmp66->isRemovable = false;
						HX_STACK_LINE(391)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp67 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(391)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp67);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(395)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							{
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(395)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(395)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(395)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(395)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(395)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(395)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(395)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(395)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(395)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(395)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(395)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(395)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(395)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(395)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(395)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(395)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(395)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(395)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
							HX_STACK_LINE(395)
							tmp23 = data;
						}
						HX_STACK_LINE(395)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(396)
						{
							HX_STACK_LINE(396)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(396)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(396)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(396)
							if ((tmp25)){
								HX_STACK_LINE(396)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(396)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(396)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(396)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(396)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(396)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(396)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(396)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(396)
								if ((tmp34)){
									HX_STACK_LINE(396)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(396)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(396)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(396)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(396)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(396)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(396)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(396)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(396)
								tmp26 = false;
							}
							HX_STACK_LINE(396)
							if ((tmp26)){
								HX_STACK_LINE(396)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(396)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(398)
						(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
						HX_STACK_LINE(399)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(false);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(399)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(400)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(400)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(400)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(401)
						int tmp31 = c->tsPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(401)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(401)
						::openfl::display::Tilesheet tmp33 = tmp30->ts->__get(tmp32).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(401)
						int tmp35 = c->ffPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(401)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(401)
						int tmp38 = c->bPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(401)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(401)
						bool tmp40 = tmp37->b->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(401)
						int tmp42 = c->iPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(401)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(401)
						int tmp44 = tmp41->i->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(401)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(401)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(401)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(401)
						::openfl::display::Shader tmp49 = ((::openfl::display::Shader)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(401)
						int tmp51 = c->iPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(401)
						int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(401)
						int tmp53 = tmp50->i->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp54 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTiles(tmp33,tmp34->ff->__get(tmp36).StaticCast< Array< Float > >(),tmp40,tmp44,tmp49,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(401)
						tmp55->type = tmp54;
						HX_STACK_LINE(402)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(402)
						tmp56->isRemovable = false;
						HX_STACK_LINE(403)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(403)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp57);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(407)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(407)
						{
							HX_STACK_LINE(407)
							{
								HX_STACK_LINE(407)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(407)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(407)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(407)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(407)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(407)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(407)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(407)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(407)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(407)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(407)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(407)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(407)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(407)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(407)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(407)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(407)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(407)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(407)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_PATH;
							HX_STACK_LINE(407)
							tmp23 = data;
						}
						HX_STACK_LINE(407)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(408)
						{
							HX_STACK_LINE(408)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(408)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(408)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(408)
							if ((tmp25)){
								HX_STACK_LINE(408)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(408)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(408)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(408)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(408)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(408)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(408)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(408)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(408)
								if ((tmp34)){
									HX_STACK_LINE(408)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(408)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(408)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(408)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(408)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(408)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(408)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(408)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(408)
								tmp26 = false;
							}
							HX_STACK_LINE(408)
							if ((tmp26)){
								HX_STACK_LINE(408)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(408)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(410)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(410)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(410)
						int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(410)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(410)
						::openfl::display::GraphicsPathWinding tmp28 = ((::openfl::display::GraphicsPathWinding)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(410)
						::openfl::display::GraphicsPathWinding _switch_1 = (tmp28);
						if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::EVEN_ODD)){
							HX_STACK_LINE(412)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
						else if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::NON_ZERO)){
							HX_STACK_LINE(414)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)1;
						}
						else  {
							HX_STACK_LINE(416)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
;
;
						HX_STACK_LINE(419)
						int command;		HX_STACK_VAR(command,"command");
						HX_STACK_LINE(420)
						Float cx;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(420)
						Float cy;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(421)
						Float cx2;		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(421)
						Float cy2;		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(422)
						Float ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(422)
						Float ay;		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(423)
						int idx = (int)0;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(424)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(424)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(424)
							Dynamic tmp31 = tmp29->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(424)
							int tmp32 = ((Array< int >)(tmp31))->length;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(424)
							int _g2 = tmp32;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(424)
							while((true)){
								HX_STACK_LINE(424)
								bool tmp33 = (_g3 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(424)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(424)
								if ((tmp34)){
									HX_STACK_LINE(424)
									break;
								}
								HX_STACK_LINE(424)
								int tmp35 = (_g3)++;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(424)
								int i = tmp35;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(425)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(425)
								int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(425)
								Dynamic tmp38 = tmp36->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(425)
								int tmp39 = ((Array< int >)(tmp38))->__get(i);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(425)
								command = ((Dynamic)(tmp39));
								HX_STACK_LINE(426)
								int tmp40 = command;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(426)
								switch( (int)(tmp40)){
									case (int)1: {
										HX_STACK_LINE(428)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(428)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(428)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(428)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(428)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(428)
										ax = ((Dynamic)(tmp45));
										HX_STACK_LINE(429)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(429)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(429)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(429)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(429)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(429)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(429)
										ay = ((Dynamic)(tmp51));
										HX_STACK_LINE(430)
										hx::AddEq(idx,(int)2);
										HX_STACK_LINE(431)
										{
											HX_STACK_LINE(431)
											{
												HX_STACK_LINE(431)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(431)
												bool tmp53 = tmp52->isRemovable;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(431)
												bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(431)
												if ((tmp53)){
													HX_STACK_LINE(431)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(431)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(431)
													bool tmp57 = (tmp56->points == null());		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(431)
													bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(431)
													bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(431)
													bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(431)
													bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(431)
													bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(431)
													if ((tmp62)){
														HX_STACK_LINE(431)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(431)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(431)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(431)
														int tmp66 = tmp65->points->length;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(431)
														int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(431)
														int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(431)
														tmp54 = (tmp68 == (int)0);
													}
													else{
														HX_STACK_LINE(431)
														tmp54 = true;
													}
												}
												else{
													HX_STACK_LINE(431)
													tmp54 = false;
												}
												HX_STACK_LINE(431)
												if ((tmp54)){
													HX_STACK_LINE(431)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(431)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
											}
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp52;
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::LineStyle tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::FillType tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(431)
											int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(431)
											int tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(431)
											tmp53->update(tmp54,tmp55,tmp56,tmp57);
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(431)
											tmp58->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(431)
											Float tmp60 = ax;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(431)
											tmp59->points->push(tmp60);
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp61 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(431)
											Float tmp62 = ay;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(431)
											tmp61->points->push(tmp62);
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(431)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp63);
										}
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(433)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(433)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(433)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(433)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(433)
										int tmp45 = (idx + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(433)
										Float tmp46 = ((Array< Float >)(tmp44))->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(433)
										ax = ((Dynamic)(tmp46));
										HX_STACK_LINE(434)
										::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(434)
										int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(434)
										int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(434)
										Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(434)
										int tmp51 = (idx + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(434)
										Float tmp52 = ((Array< Float >)(tmp50))->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(434)
										ay = ((Dynamic)(tmp52));
										HX_STACK_LINE(435)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(436)
										{
											HX_STACK_LINE(436)
											{
												HX_STACK_LINE(436)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(436)
												bool tmp54 = tmp53->isRemovable;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(436)
												bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(436)
												if ((tmp54)){
													HX_STACK_LINE(436)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(436)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(436)
													bool tmp58 = (tmp57->points == null());		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(436)
													bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(436)
													bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(436)
													bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(436)
													bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(436)
													bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(436)
													if ((tmp63)){
														HX_STACK_LINE(436)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(436)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(436)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(436)
														int tmp67 = tmp66->points->length;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(436)
														int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(436)
														int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(436)
														tmp55 = (tmp69 == (int)0);
													}
													else{
														HX_STACK_LINE(436)
														tmp55 = true;
													}
												}
												else{
													HX_STACK_LINE(436)
													tmp55 = false;
												}
												HX_STACK_LINE(436)
												if ((tmp55)){
													HX_STACK_LINE(436)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(436)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
											}
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp53;
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::LineStyle tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::FillType tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(436)
											int tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(436)
											int tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(436)
											tmp54->update(tmp55,tmp56,tmp57,tmp58);
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(436)
											tmp59->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(436)
											Float tmp61 = ax;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(436)
											tmp60->points->push(tmp61);
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(436)
											Float tmp63 = ay;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(436)
											tmp62->points->push(tmp63);
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(436)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp64);
										}
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(438)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(438)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(438)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(438)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(438)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(438)
										ax = ((Dynamic)(tmp45));
										HX_STACK_LINE(439)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(439)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(439)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(439)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(439)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(439)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(439)
										ay = ((Dynamic)(tmp51));
										HX_STACK_LINE(440)
										hx::AddEq(idx,(int)2);
										HX_STACK_LINE(441)
										{
											HX_STACK_LINE(441)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(441)
											Array< Float > points = tmp52->points;		HX_STACK_VAR(points,"points");
											HX_STACK_LINE(441)
											bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
											HX_STACK_LINE(441)
											bool tmp53 = (points->length > (int)1);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(441)
											if ((tmp53)){
												HX_STACK_LINE(441)
												int tmp54 = (points->length - (int)2);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(441)
												Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(441)
												Float lastX = tmp55;		HX_STACK_VAR(lastX,"lastX");
												HX_STACK_LINE(441)
												int tmp56 = (points->length - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(441)
												Float tmp57 = points->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(441)
												Float lastY = tmp57;		HX_STACK_VAR(lastY,"lastY");
												HX_STACK_LINE(441)
												bool tmp58 = (lastX == ax);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(441)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(441)
												if ((tmp58)){
													HX_STACK_LINE(441)
													tmp59 = (lastY == ay);
												}
												else{
													HX_STACK_LINE(441)
													tmp59 = false;
												}
												HX_STACK_LINE(441)
												if ((tmp59)){
													HX_STACK_LINE(441)
													push_point = false;
												}
											}
											HX_STACK_LINE(441)
											bool tmp54 = (push_point == true);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(441)
											if ((tmp54)){
												HX_STACK_LINE(441)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(441)
												Float tmp56 = ax;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(441)
												tmp55->points->push(tmp56);
												HX_STACK_LINE(441)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(441)
												Float tmp58 = ay;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(441)
												tmp57->points->push(tmp58);
											}
										}
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(443)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(443)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(443)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(443)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(443)
										int tmp45 = (idx + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(443)
										Float tmp46 = ((Array< Float >)(tmp44))->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(443)
										ax = ((Dynamic)(tmp46));
										HX_STACK_LINE(444)
										::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(444)
										int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(444)
										int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(444)
										Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(444)
										int tmp51 = (idx + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(444)
										Float tmp52 = ((Array< Float >)(tmp50))->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(444)
										ay = ((Dynamic)(tmp52));
										HX_STACK_LINE(445)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(446)
										{
											HX_STACK_LINE(446)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(446)
											Array< Float > points = tmp53->points;		HX_STACK_VAR(points,"points");
											HX_STACK_LINE(446)
											bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
											HX_STACK_LINE(446)
											bool tmp54 = (points->length > (int)1);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(446)
											if ((tmp54)){
												HX_STACK_LINE(446)
												int tmp55 = (points->length - (int)2);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(446)
												Float tmp56 = points->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(446)
												Float lastX = tmp56;		HX_STACK_VAR(lastX,"lastX");
												HX_STACK_LINE(446)
												int tmp57 = (points->length - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(446)
												Float tmp58 = points->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(446)
												Float lastY = tmp58;		HX_STACK_VAR(lastY,"lastY");
												HX_STACK_LINE(446)
												bool tmp59 = (lastX == ax);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(446)
												bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(446)
												if ((tmp59)){
													HX_STACK_LINE(446)
													tmp60 = (lastY == ay);
												}
												else{
													HX_STACK_LINE(446)
													tmp60 = false;
												}
												HX_STACK_LINE(446)
												if ((tmp60)){
													HX_STACK_LINE(446)
													push_point = false;
												}
											}
											HX_STACK_LINE(446)
											bool tmp55 = (push_point == true);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(446)
											if ((tmp55)){
												HX_STACK_LINE(446)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(446)
												Float tmp57 = ax;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(446)
												tmp56->points->push(tmp57);
												HX_STACK_LINE(446)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(446)
												Float tmp59 = ay;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(446)
												tmp58->points->push(tmp59);
											}
										}
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(448)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(448)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(448)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(448)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(448)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(448)
										cx = ((Dynamic)(tmp45));
										HX_STACK_LINE(449)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(449)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(449)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(449)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(449)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(449)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(449)
										cy = ((Dynamic)(tmp51));
										HX_STACK_LINE(450)
										::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(450)
										int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(450)
										int tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(450)
										Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(450)
										int tmp56 = (idx + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(450)
										Float tmp57 = ((Array< Float >)(tmp55))->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(450)
										ax = ((Dynamic)(tmp57));
										HX_STACK_LINE(451)
										::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(451)
										int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(451)
										int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(451)
										Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(451)
										int tmp62 = (idx + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(451)
										Float tmp63 = ((Array< Float >)(tmp61))->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(451)
										ay = ((Dynamic)(tmp63));
										HX_STACK_LINE(452)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(453)
										{
											HX_STACK_LINE(453)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(453)
											bool tmp65 = (tmp64->points == null());		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(453)
											bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(453)
											bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(453)
											if ((tmp66)){
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(453)
												int tmp70 = tmp69->points->length;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(453)
												int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(453)
												tmp67 = (tmp71 == (int)0);
											}
											else{
												HX_STACK_LINE(453)
												tmp67 = true;
											}
											HX_STACK_LINE(453)
											if ((tmp67)){
												HX_STACK_LINE(453)
												{
													HX_STACK_LINE(453)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(453)
													bool tmp69 = tmp68->isRemovable;		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(453)
													bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(453)
													if ((tmp69)){
														HX_STACK_LINE(453)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(453)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(453)
														bool tmp73 = (tmp72->points == null());		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(453)
														bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(453)
														bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(453)
														bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(453)
														bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(453)
														bool tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(453)
														if ((tmp78)){
															HX_STACK_LINE(453)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp79 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp79,"tmp79");
															HX_STACK_LINE(453)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
															HX_STACK_LINE(453)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
															HX_STACK_LINE(453)
															int tmp82 = tmp81->points->length;		HX_STACK_VAR(tmp82,"tmp82");
															HX_STACK_LINE(453)
															int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
															HX_STACK_LINE(453)
															int tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(453)
															tmp70 = (tmp84 == (int)0);
														}
														else{
															HX_STACK_LINE(453)
															tmp70 = true;
														}
													}
													else{
														HX_STACK_LINE(453)
														tmp70 = false;
													}
													HX_STACK_LINE(453)
													if ((tmp70)){
														HX_STACK_LINE(453)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(453)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp68;
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp69 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp70 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::FillType tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(453)
												int tmp72 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(453)
												int tmp73 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(453)
												tmp69->update(tmp70,tmp71,tmp72,tmp73);
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp74 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(453)
												tmp74->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp75 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(453)
												tmp75->points->push((int)0);
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(453)
												tmp76->points->push((int)0);
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp77 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(453)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp77);
											}
											HX_STACK_LINE(453)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(453)
											Float tmp69 = cx;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(453)
											Float tmp70 = cy;		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(453)
											Float tmp71 = ax;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(453)
											Float tmp72 = ay;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(453)
											::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp68->points,tmp69,tmp70,tmp71,tmp72);
										}
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(455)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(455)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(455)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(455)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(455)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(455)
										cx = ((Dynamic)(tmp45));
										HX_STACK_LINE(456)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(456)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(456)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(456)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(456)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(456)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(456)
										cy = ((Dynamic)(tmp51));
										HX_STACK_LINE(457)
										::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(457)
										int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(457)
										int tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(457)
										Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(457)
										int tmp56 = (idx + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(457)
										Float tmp57 = ((Array< Float >)(tmp55))->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(457)
										cx2 = ((Dynamic)(tmp57));
										HX_STACK_LINE(458)
										::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(458)
										int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(458)
										int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(458)
										Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(458)
										int tmp62 = (idx + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(458)
										Float tmp63 = ((Array< Float >)(tmp61))->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(458)
										cy2 = ((Dynamic)(tmp63));
										HX_STACK_LINE(459)
										::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(459)
										int tmp65 = c->oPos;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(459)
										int tmp66 = (tmp65 + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(459)
										Dynamic tmp67 = tmp64->o->__GetItem(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(459)
										int tmp68 = (idx + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(459)
										Float tmp69 = ((Array< Float >)(tmp67))->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(459)
										ax = ((Dynamic)(tmp69));
										HX_STACK_LINE(460)
										::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(460)
										int tmp71 = c->oPos;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(460)
										int tmp72 = (tmp71 + (int)1);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(460)
										Dynamic tmp73 = tmp70->o->__GetItem(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(460)
										int tmp74 = (idx + (int)5);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(460)
										Float tmp75 = ((Array< Float >)(tmp73))->__get(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(460)
										ay = ((Dynamic)(tmp75));
										HX_STACK_LINE(461)
										hx::AddEq(idx,(int)6);
										HX_STACK_LINE(462)
										{
											HX_STACK_LINE(462)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(462)
											bool tmp77 = (tmp76->points == null());		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(462)
											bool tmp78 = !(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(462)
											bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(462)
											if ((tmp78)){
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(462)
												int tmp82 = tmp81->points->length;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(462)
												int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(462)
												tmp79 = (tmp83 == (int)0);
											}
											else{
												HX_STACK_LINE(462)
												tmp79 = true;
											}
											HX_STACK_LINE(462)
											if ((tmp79)){
												HX_STACK_LINE(462)
												{
													HX_STACK_LINE(462)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(462)
													bool tmp81 = tmp80->isRemovable;		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(462)
													bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(462)
													if ((tmp81)){
														HX_STACK_LINE(462)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp83 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(462)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(462)
														bool tmp85 = (tmp84->points == null());		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(462)
														bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(462)
														bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(462)
														bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(462)
														bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(462)
														bool tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(462)
														if ((tmp90)){
															HX_STACK_LINE(462)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp91 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp91,"tmp91");
															HX_STACK_LINE(462)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
															HX_STACK_LINE(462)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
															HX_STACK_LINE(462)
															int tmp94 = tmp93->points->length;		HX_STACK_VAR(tmp94,"tmp94");
															HX_STACK_LINE(462)
															int tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
															HX_STACK_LINE(462)
															int tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
															HX_STACK_LINE(462)
															tmp82 = (tmp96 == (int)0);
														}
														else{
															HX_STACK_LINE(462)
															tmp82 = true;
														}
													}
													else{
														HX_STACK_LINE(462)
														tmp82 = false;
													}
													HX_STACK_LINE(462)
													if ((tmp82)){
														HX_STACK_LINE(462)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(462)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp80;
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp82 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::FillType tmp83 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(462)
												int tmp84 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(462)
												int tmp85 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(462)
												tmp81->update(tmp82,tmp83,tmp84,tmp85);
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp86 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(462)
												tmp86->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp87 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(462)
												tmp87->points->push((int)0);
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp88 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(462)
												tmp88->points->push((int)0);
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp89 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp89);
											}
											HX_STACK_LINE(462)
											{
												HX_STACK_LINE(462)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(462)
												Array< Float > points = tmp80->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(462)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(462)
												Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
												HX_STACK_LINE(462)
												Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
												HX_STACK_LINE(462)
												Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
												HX_STACK_LINE(462)
												Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(462)
												Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(462)
												int tmp81 = (points->length - (int)2);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(462)
												Float tmp82 = points->__get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(462)
												Float fromX = tmp82;		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(462)
												int tmp83 = (points->length - (int)1);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(462)
												Float tmp84 = points->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(462)
												Float fromY = tmp84;		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(462)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(462)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(462)
												Float tmp85 = (int)0;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(462)
												{
													HX_STACK_LINE(462)
													int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(462)
													int tmp86 = (n + (int)1);		HX_STACK_VAR(tmp86,"tmp86");
													HX_STACK_LINE(462)
													int _g4 = tmp86;		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(462)
													while((true)){
														HX_STACK_LINE(462)
														bool tmp87 = (_g11 < _g4);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(462)
														bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(462)
														if ((tmp88)){
															HX_STACK_LINE(462)
															break;
														}
														HX_STACK_LINE(462)
														int tmp89 = (_g11)++;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(462)
														int i1 = tmp89;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(462)
														Float tmp90 = (Float(i1) / Float(n));		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(462)
														tmp85 = tmp90;
														HX_STACK_LINE(462)
														Float tmp91 = ((int)1 - tmp85);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(462)
														dt = tmp91;
														HX_STACK_LINE(462)
														Float tmp92 = (dt * dt);		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(462)
														dt2 = tmp92;
														HX_STACK_LINE(462)
														Float tmp93 = (dt2 * dt);		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(462)
														dt3 = tmp93;
														HX_STACK_LINE(462)
														Float tmp94 = (tmp85 * tmp85);		HX_STACK_VAR(tmp94,"tmp94");
														HX_STACK_LINE(462)
														t2 = tmp94;
														HX_STACK_LINE(462)
														Float tmp95 = (t2 * tmp85);		HX_STACK_VAR(tmp95,"tmp95");
														HX_STACK_LINE(462)
														t3 = tmp95;
														HX_STACK_LINE(462)
														Float tmp96 = (dt3 * fromX);		HX_STACK_VAR(tmp96,"tmp96");
														HX_STACK_LINE(462)
														Float tmp97 = ((int)3 * dt2);		HX_STACK_VAR(tmp97,"tmp97");
														HX_STACK_LINE(462)
														Float tmp98 = tmp85;		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(462)
														Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(462)
														Float tmp100 = cx;		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(462)
														Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(462)
														Float tmp102 = (tmp96 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(462)
														Float tmp103 = ((int)3 * dt);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(462)
														Float tmp104 = t2;		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(462)
														Float tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(462)
														Float tmp106 = cx2;		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(462)
														Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
														HX_STACK_LINE(462)
														Float tmp108 = (tmp102 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
														HX_STACK_LINE(462)
														Float tmp109 = (t3 * ax);		HX_STACK_VAR(tmp109,"tmp109");
														HX_STACK_LINE(462)
														Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
														HX_STACK_LINE(462)
														px = tmp110;
														HX_STACK_LINE(462)
														Float tmp111 = (dt3 * fromY);		HX_STACK_VAR(tmp111,"tmp111");
														HX_STACK_LINE(462)
														Float tmp112 = ((int)3 * dt2);		HX_STACK_VAR(tmp112,"tmp112");
														HX_STACK_LINE(462)
														Float tmp113 = tmp85;		HX_STACK_VAR(tmp113,"tmp113");
														HX_STACK_LINE(462)
														Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
														HX_STACK_LINE(462)
														Float tmp115 = cy;		HX_STACK_VAR(tmp115,"tmp115");
														HX_STACK_LINE(462)
														Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
														HX_STACK_LINE(462)
														Float tmp117 = (tmp111 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
														HX_STACK_LINE(462)
														Float tmp118 = ((int)3 * dt);		HX_STACK_VAR(tmp118,"tmp118");
														HX_STACK_LINE(462)
														Float tmp119 = t2;		HX_STACK_VAR(tmp119,"tmp119");
														HX_STACK_LINE(462)
														Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
														HX_STACK_LINE(462)
														Float tmp121 = cy2;		HX_STACK_VAR(tmp121,"tmp121");
														HX_STACK_LINE(462)
														Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
														HX_STACK_LINE(462)
														Float tmp123 = (tmp117 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
														HX_STACK_LINE(462)
														Float tmp124 = (t3 * ay);		HX_STACK_VAR(tmp124,"tmp124");
														HX_STACK_LINE(462)
														Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
														HX_STACK_LINE(462)
														py = tmp125;
														HX_STACK_LINE(462)
														Float tmp126 = px;		HX_STACK_VAR(tmp126,"tmp126");
														HX_STACK_LINE(462)
														points->push(tmp126);
														HX_STACK_LINE(462)
														Float tmp127 = py;		HX_STACK_VAR(tmp127,"tmp127");
														HX_STACK_LINE(462)
														points->push(tmp127);
													}
												}
											}
										}
									}
									;break;
									default: {
									}
								}
							}
						}
						HX_STACK_LINE(468)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(472)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(472)
						{
							HX_STACK_LINE(472)
							{
								HX_STACK_LINE(472)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(472)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(472)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(472)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(472)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(472)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(472)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(472)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(472)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(472)
										hx::AddEq(data->iPos,(int)2);
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(472)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(472)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(472)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(472)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(472)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(472)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(472)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(472)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(472)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
							HX_STACK_LINE(472)
							tmp23 = data;
						}
						HX_STACK_LINE(472)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(473)
						{
							HX_STACK_LINE(473)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(473)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(473)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(473)
							if ((tmp25)){
								HX_STACK_LINE(473)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(473)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(473)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(473)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(473)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(473)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(473)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(473)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(473)
								if ((tmp34)){
									HX_STACK_LINE(473)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(473)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(473)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(473)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(473)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(473)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(473)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(473)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(473)
								tmp26 = false;
							}
							HX_STACK_LINE(473)
							if ((tmp26)){
								HX_STACK_LINE(473)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(473)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(475)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(475)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(476)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(476)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(476)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(477)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(477)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(477)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(477)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(477)
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(477)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp35 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::OverrideMatrix(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(477)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(477)
						tmp36->type = tmp35;
						HX_STACK_LINE(478)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(478)
						tmp37->isRemovable = false;
						HX_STACK_LINE(479)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(479)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp38);
					}
					;break;
					default: {
						HX_STACK_LINE(483)
						{
							HX_STACK_LINE(483)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(483)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(483)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(483)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(483)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(483)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(483)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(483)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(483)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(483)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(483)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(483)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(483)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(483)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(483)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(483)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(483)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(483)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(483)
						data->prev = type;
					}
				}
			}
		}
		HX_STACK_LINE(489)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		HX_STACK_LINE(490)
		data->destroy();
	}
	HX_STACK_LINE(494)
	graphics->__drawPaths = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths;
	HX_STACK_LINE(496)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp19 = glStack;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(496)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,build,return )


PathBuiler_obj::PathBuiler_obj()
{
}

bool PathBuiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { outValue = __line; return true;  }
		if (HX_FIELD_EQ(inName,"__fill") ) { outValue = __fill; return true;  }
		if (HX_FIELD_EQ(inName,"moveTo") ) { outValue = moveTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineTo") ) { outValue = lineTo_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { outValue = __drawPaths; return true;  }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { outValue = __fillIndex; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { outValue = cubicCurveTo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { outValue = __currentPath; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicDataPop") ) { outValue = graphicDataPop_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { outValue = __currentWinding; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::DrawPath*/ ,(void *) &PathBuiler_obj::__currentPath,HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb")},
	{hx::fsInt,(void *) &PathBuiler_obj::__currentWinding,HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &PathBuiler_obj::__drawPaths,HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(void *) &PathBuiler_obj::__line,HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(void *) &PathBuiler_obj::__fill,HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2")},
	{hx::fsInt,(void *) &PathBuiler_obj::__fillIndex,HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#endif

hx::Class PathBuiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb"),
	HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6"),
	HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2"),
	HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("graphicDataPop","\xbf","\x67","\x3a","\x4f"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null()) };

void PathBuiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PathBuiler","\x09","\xea","\x3d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PathBuiler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PathBuiler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void PathBuiler_obj::__boot()
{
	__currentWinding= (int)0;
	__fillIndex= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
