#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Bitmap_obj::__construct(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",96,0x461b2743)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(98)
	super::__construct();
	HX_STACK_LINE(100)
	this->bitmapData = bitmapData;
	HX_STACK_LINE(101)
	this->pixelSnapping = pixelSnapping;
	HX_STACK_LINE(102)
	this->smoothing = smoothing;
	HX_STACK_LINE(104)
	bool tmp = (pixelSnapping == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	if ((tmp)){
		HX_STACK_LINE(106)
		this->pixelSnapping = ::openfl::display::PixelSnapping_obj::AUTO;
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",113,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(115)
		::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(117)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(118)
			::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			int tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			bounds->setTo((int)0,(int)0,tmp4,tmp6);
			HX_STACK_LINE(119)
			::openfl::geom::Rectangle tmp7 = bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			::openfl::geom::Matrix tmp8 = matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			bounds->__transform(tmp7,tmp8);
			HX_STACK_LINE(121)
			Float tmp9 = bounds->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			Float tmp10 = bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float tmp11 = bounds->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			Float tmp12 = bounds->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			rect->__expand(tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


bool Bitmap_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",128,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(130)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(130)
	if ((tmp4)){
		HX_STACK_LINE(130)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(130)
		tmp5 = true;
	}
	HX_STACK_LINE(130)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(130)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(130)
	if ((tmp6)){
		HX_STACK_LINE(130)
		::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		tmp7 = (tmp9 == null());
	}
	else{
		HX_STACK_LINE(130)
		tmp7 = true;
	}
	HX_STACK_LINE(130)
	if ((tmp7)){
		HX_STACK_LINE(130)
		return false;
	}
	HX_STACK_LINE(131)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(131)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(131)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(131)
	if ((tmp9)){
		HX_STACK_LINE(131)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(131)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(131)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(131)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(131)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(131)
		tmp10 = false;
	}
	HX_STACK_LINE(131)
	if ((tmp10)){
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(133)
	this->__getWorldTransform();
	HX_STACK_LINE(135)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(135)
		::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(135)
		Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(135)
		Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(135)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(135)
		Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(135)
		bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(135)
		if ((tmp16)){
			HX_STACK_LINE(135)
			Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			tmp11 = -(tmp17);
		}
		else{
			HX_STACK_LINE(135)
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(135)
			Float tmp19 = (_this->ty - y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(135)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(135)
			Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(135)
			Float tmp22 = (x - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(135)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(135)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(135)
			tmp11 = (tmp17 * tmp24);
		}
	}
	HX_STACK_LINE(135)
	Float px = tmp11;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(136)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(136)
		::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(136)
		Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(136)
		Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(136)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(136)
		Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(136)
		bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(136)
		if ((tmp17)){
			HX_STACK_LINE(136)
			Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			tmp12 = -(tmp18);
		}
		else{
			HX_STACK_LINE(136)
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(136)
			Float tmp20 = (y - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(136)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(136)
			Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			Float tmp23 = (_this->tx - x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(136)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(136)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(136)
			tmp12 = (tmp18 * tmp25);
		}
	}
	HX_STACK_LINE(136)
	Float py = tmp12;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(138)
	bool tmp13 = (px > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(138)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(138)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(138)
	if ((tmp14)){
		HX_STACK_LINE(138)
		tmp15 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(138)
		tmp15 = false;
	}
	HX_STACK_LINE(138)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(138)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(138)
	if ((tmp16)){
		HX_STACK_LINE(138)
		Float tmp18 = px;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(138)
		::openfl::display::BitmapData tmp19 = this->bitmapData;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(138)
		::openfl::display::BitmapData tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(138)
		::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(138)
		int tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(138)
		tmp17 = (tmp18 <= tmp22);
	}
	else{
		HX_STACK_LINE(138)
		tmp17 = false;
	}
	HX_STACK_LINE(138)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(138)
	if ((tmp17)){
		HX_STACK_LINE(138)
		Float tmp19 = py;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(138)
		::openfl::display::BitmapData tmp20 = this->bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(138)
		::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(138)
		int tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(138)
		tmp18 = (tmp19 <= tmp22);
	}
	else{
		HX_STACK_LINE(138)
		tmp18 = false;
	}
	HX_STACK_LINE(138)
	if ((tmp18)){
		HX_STACK_LINE(140)
		bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(140)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(140)
		if ((tmp19)){
			HX_STACK_LINE(140)
			bool tmp21 = interactiveOnly;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(140)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(140)
			tmp20 = !(tmp22);
		}
		else{
			HX_STACK_LINE(140)
			tmp20 = false;
		}
		HX_STACK_LINE(140)
		if ((tmp20)){
			HX_STACK_LINE(142)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(146)
		return true;
	}
	HX_STACK_LINE(150)
	return false;
}


bool Bitmap_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",155,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(157)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	if ((tmp1)){
		HX_STACK_LINE(157)
		return false;
	}
	HX_STACK_LINE(159)
	this->__getWorldTransform();
	HX_STACK_LINE(161)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(161)
		Float tmp4 = (_this->a * _this->d);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		Float tmp5 = (_this->b * _this->c);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(161)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		if ((tmp7)){
			HX_STACK_LINE(161)
			Float tmp8 = _this->tx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			tmp2 = -(tmp8);
		}
		else{
			HX_STACK_LINE(161)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			Float tmp9 = _this->c;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			Float tmp10 = (_this->ty - y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(161)
			Float tmp12 = _this->d;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(161)
			Float tmp13 = (x - _this->tx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(161)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(161)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(161)
			tmp2 = (tmp8 * tmp15);
		}
	}
	HX_STACK_LINE(161)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(162)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		::openfl::geom::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(162)
		Float tmp5 = (_this->a * _this->d);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		Float tmp6 = (_this->b * _this->c);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		Float norm = tmp7;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(162)
		bool tmp8 = (norm == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(162)
		if ((tmp8)){
			HX_STACK_LINE(162)
			Float tmp9 = _this->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(162)
			tmp3 = -(tmp9);
		}
		else{
			HX_STACK_LINE(162)
			Float tmp9 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(162)
			Float tmp10 = _this->a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(162)
			Float tmp11 = (y - _this->ty);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(162)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(162)
			Float tmp13 = _this->b;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(162)
			Float tmp14 = (_this->tx - x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(162)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(162)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(162)
			tmp3 = (tmp9 * tmp16);
		}
	}
	HX_STACK_LINE(162)
	Float py = tmp3;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(164)
	bool tmp4 = (px > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	if ((tmp5)){
		HX_STACK_LINE(164)
		tmp6 = (py > (int)0);
	}
	else{
		HX_STACK_LINE(164)
		tmp6 = false;
	}
	HX_STACK_LINE(164)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	if ((tmp7)){
		HX_STACK_LINE(164)
		Float tmp9 = px;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp10 = this->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		int tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		tmp8 = (tmp9 <= tmp13);
	}
	else{
		HX_STACK_LINE(164)
		tmp8 = false;
	}
	HX_STACK_LINE(164)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(164)
	if ((tmp8)){
		HX_STACK_LINE(164)
		Float tmp10 = py;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp11 = this->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		int tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		tmp9 = (tmp10 <= tmp13);
	}
	else{
		HX_STACK_LINE(164)
		tmp9 = false;
	}
	HX_STACK_LINE(164)
	if ((tmp9)){
		HX_STACK_LINE(166)
		return true;
	}
	HX_STACK_LINE(170)
	return false;
}


Void Bitmap_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",177,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(177)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		if ((tmp3)){
			HX_STACK_LINE(177)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(177)
			tmp4 = true;
		}
		HX_STACK_LINE(177)
		if ((tmp4)){
			HX_STACK_LINE(177)
			Dynamic();
		}
		else{
			HX_STACK_LINE(177)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(177)
			::openfl::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			if ((tmp6)){
				HX_STACK_LINE(177)
				::openfl::display::BitmapData tmp8 = this->bitmapData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(177)
				::openfl::display::BitmapData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				tmp7 = tmp9->__isValid;
			}
			else{
				HX_STACK_LINE(177)
				tmp7 = false;
			}
			HX_STACK_LINE(177)
			if ((tmp7)){
				HX_STACK_LINE(177)
				::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(177)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				if ((tmp9)){
					HX_STACK_LINE(177)
					::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(177)
					renderSession->maskManager->pushMask(tmp10);
				}
				HX_STACK_LINE(177)
				::openfl::geom::Matrix tmp10 = this->__renderTransform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				::openfl::geom::Matrix transform = tmp10;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(177)
				::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				::openfl::geom::Rectangle scrollRect = tmp11;		HX_STACK_VAR(scrollRect,"scrollRect");
				HX_STACK_LINE(177)
				bool tmp12 = renderSession->roundPixels;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(177)
				if ((tmp12)){
					HX_STACK_LINE(177)
					::lime::math::Matrix3 tmp13 = transform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(177)
					::lime::math::Matrix3 matrix = tmp13;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(177)
					Float tmp14 = matrix->tx;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(177)
					int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(177)
					matrix->tx = tmp15;
					HX_STACK_LINE(177)
					Float tmp16 = matrix->ty;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(177)
					int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(177)
					matrix->ty = tmp17;
					HX_STACK_LINE(177)
					::lime::math::Matrix3 tmp18 = matrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					cairo->set_matrix(tmp18);
				}
				else{
					HX_STACK_LINE(177)
					::lime::math::Matrix3 tmp13 = transform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(177)
					cairo->set_matrix(tmp13);
				}
				HX_STACK_LINE(177)
				::openfl::display::BitmapData tmp13 = this->bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(177)
				Dynamic tmp14 = tmp13->getSurface();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(177)
				Dynamic surface = tmp14;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(177)
				bool tmp15 = (surface != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(177)
				if ((tmp15)){
					HX_STACK_LINE(177)
					Dynamic tmp16 = surface;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(177)
					Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(177)
					Dynamic pattern = tmp17;		HX_STACK_VAR(pattern,"pattern");
					HX_STACK_LINE(177)
					Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					bool tmp19 = this->smoothing;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(177)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(177)
					if ((tmp19)){
						HX_STACK_LINE(177)
						tmp20 = (int)1;
					}
					else{
						HX_STACK_LINE(177)
						tmp20 = (int)3;
					}
					HX_STACK_LINE(177)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp18,tmp20);
					HX_STACK_LINE(177)
					bool tmp21 = (scrollRect != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(177)
					if ((tmp21)){
						HX_STACK_LINE(177)
						cairo->pushGroup();
						HX_STACK_LINE(177)
						Dynamic tmp22 = pattern;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(177)
						cairo->set_source(tmp22);
						HX_STACK_LINE(177)
						cairo->newPath();
						HX_STACK_LINE(177)
						Float tmp23 = scrollRect->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(177)
						Float tmp24 = scrollRect->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(177)
						Float tmp25 = scrollRect->width;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(177)
						Float tmp26 = scrollRect->height;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(177)
						cairo->rectangle(tmp23,tmp24,tmp25,tmp26);
						HX_STACK_LINE(177)
						cairo->fill();
						HX_STACK_LINE(177)
						cairo->popGroupToSource();
					}
					else{
						HX_STACK_LINE(177)
						Dynamic tmp22 = pattern;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(177)
						cairo->set_source(tmp22);
					}
					HX_STACK_LINE(177)
					Float tmp22 = this->__worldAlpha;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(177)
					bool tmp23 = (tmp22 == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(177)
					if ((tmp23)){
						HX_STACK_LINE(177)
						cairo->paint();
					}
					else{
						HX_STACK_LINE(177)
						Float tmp24 = this->__worldAlpha;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(177)
						cairo->paintWithAlpha(tmp24);
					}
				}
				HX_STACK_LINE(177)
				::openfl::display::DisplayObject tmp16 = this->__mask;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(177)
				bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(177)
				if ((tmp17)){
					HX_STACK_LINE(177)
					renderSession->maskManager->popMask();
				}
			}
		}
	}
return null();
}


Void Bitmap_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",182,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(184)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		renderSession->cairo->rectangle((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",191,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(191)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",196,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(198)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		renderSession->context->rect((int)0,(int)0,tmp,tmp1);
	}
return null();
}


Void Bitmap_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",205,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(205)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",210,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(212)
		bool tmp = this->__cacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		if ((tmp)){
			HX_STACK_LINE(213)
			{
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				bool hasCacheMatrix = tmp2;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(213)
				::openfl::geom::Rectangle tmp3 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(213)
				Float x = tmp3->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(213)
				::openfl::geom::Rectangle tmp4 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				Float y = tmp4->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(213)
				::openfl::geom::Rectangle tmp5 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				Float w = tmp5->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(213)
				::openfl::geom::Rectangle tmp6 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				Float h = tmp6->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp7 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				if ((tmp8)){
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(213)
					this->__cacheGLMatrix = tmp9;
				}
				HX_STACK_LINE(213)
				bool tmp9 = hasCacheMatrix;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				if ((tmp9)){
					HX_STACK_LINE(213)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					::openfl::geom::Rectangle bmpBounds = tmp10;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(213)
					::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(213)
					::openfl::geom::Rectangle tmp12 = bmpBounds;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp13 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(213)
					tmp11->__transform(tmp12,tmp13);
					HX_STACK_LINE(213)
					x = bmpBounds->x;
					HX_STACK_LINE(213)
					y = bmpBounds->y;
					HX_STACK_LINE(213)
					w = bmpBounds->width;
					HX_STACK_LINE(213)
					h = bmpBounds->height;
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::openfl::geom::Matrix tmp15 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(213)
						::openfl::geom::Matrix _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						tmp14 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(213)
					this->__cacheGLMatrix = tmp14;
				}
				else{
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp10 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					tmp10->identity();
				}
				HX_STACK_LINE(213)
				bool tmp10 = (w <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(213)
				if ((tmp10)){
					HX_STACK_LINE(213)
					tmp11 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(213)
					tmp11 = false;
				}
				HX_STACK_LINE(213)
				if ((tmp11)){
					HX_STACK_LINE(213)
					::String tmp12 = (HX_HCSTRING("Error creating a cached bitmap. The texture size is ","\x1c","\x68","\x47","\xb0") + w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(213)
					::String tmp13 = (tmp12 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(213)
					Float tmp14 = h;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(213)
					::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(213)
				bool tmp12 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(213)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(213)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				if ((tmp13)){
					HX_STACK_LINE(213)
					tmp14 = this->__updateFilters;
				}
				else{
					HX_STACK_LINE(213)
					tmp14 = true;
				}
				HX_STACK_LINE(213)
				if ((tmp14)){
					HX_STACK_LINE(213)
					::openfl::geom::Rectangle tmp15 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(213)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					if ((tmp16)){
						HX_STACK_LINE(213)
						::openfl::geom::Rectangle tmp17 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(213)
						Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(213)
						Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(213)
						Float tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(213)
						Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(213)
						Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(213)
						hx::AddEq(w,tmp23);
						HX_STACK_LINE(213)
						::openfl::geom::Rectangle tmp24 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(213)
						Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(213)
						Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(213)
						::openfl::geom::Rectangle tmp27 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(213)
						Float tmp28 = tmp27->height;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(213)
						Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(213)
						Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(213)
						hx::AddEq(h,tmp30);
					}
					HX_STACK_LINE(213)
					::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					if ((tmp18)){
						HX_STACK_LINE(213)
						::openfl::display::BitmapData tmp19 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(213)
						this->__cachedBitmap = tmp19;
					}
					HX_STACK_LINE(213)
					::openfl::display::BitmapData tmp19 = this->__cachedBitmap;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					Float tmp20 = w;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					int tmp21 = ::Math_obj::ceil(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					Float tmp22 = h;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					int tmp23 = ::Math_obj::ceil(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(213)
					tmp19->__resize(tmp21,tmp23);
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(213)
						::openfl::geom::Matrix tmp25 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(213)
						::openfl::geom::Matrix _this = tmp25;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(213)
						tmp24 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(213)
					::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(213)
					Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(213)
					Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(213)
					Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(213)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(213)
					m->translate(tmp26,tmp28);
					HX_STACK_LINE(213)
					::openfl::display::Shader tmp29 = this->__shader;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(213)
					::openfl::display::Shader shader = tmp29;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(213)
					this->__shader = null();
					HX_STACK_LINE(213)
					::openfl::display::BitmapData tmp30 = this->__cachedBitmap;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(213)
					::openfl::_internal::renderer::RenderSession tmp31 = renderSession;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(213)
					tmp30->__drawGL(tmp31,hx::ObjectPtr<OBJ_>(this),tmp32,null(),null(),null(),true,false,true,null(),null());
					HX_STACK_LINE(213)
					this->__shader = shader;
					HX_STACK_LINE(213)
					this->__updateCachedBitmap = false;
				}
				HX_STACK_LINE(213)
				bool tmp15 = this->__updateFilters;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				if ((tmp15)){
					HX_STACK_LINE(213)
					::openfl::_internal::renderer::RenderSession tmp16 = renderSession;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					::openfl::display::BitmapData tmp18 = this->__cachedBitmap;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp16,tmp17,tmp18,null(),null());
					HX_STACK_LINE(213)
					this->__updateFilters = false;
				}
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(213)
				tmp16->invert();
				HX_STACK_LINE(213)
				{
					HX_STACK_LINE(213)
					::openfl::geom::Matrix tmp17 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					::openfl::geom::Matrix _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(213)
					Float tmp18 = (x * _this->a);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					Float tmp19 = (y * _this->c);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(213)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(213)
					Float tmp21 = _this->tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					_this->tx = tmp22;
					HX_STACK_LINE(213)
					Float tmp23 = (x * _this->b);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(213)
					Float tmp24 = (y * _this->d);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(213)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(213)
					Float tmp26 = _this->ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(213)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(213)
					_this->ty = tmp27;
				}
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp17 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp18 = this->__renderTransform;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				tmp17->concat(tmp18);
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp19 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(213)
				::openfl::geom::Point tmp20 = this->__offset;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(213)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				::openfl::geom::Point tmp22 = this->__offset;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(213)
				tmp19->translate(tmp21,tmp23);
				HX_STACK_LINE(213)
				::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(213)
				bool tmp25 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(213)
				::openfl::geom::Matrix tmp26 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(213)
				::openfl::geom::ColorTransform tmp27 = this->__worldColorTransform;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(213)
				Float tmp28 = this->__worldAlpha;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(213)
				::openfl::display::BlendMode tmp29 = this->blendMode;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(213)
				::openfl::display::Shader tmp30 = this->__shader;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(213)
				renderSession->spriteBatch->renderBitmapData(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,::openfl::display::PixelSnapping_obj::ALWAYS,null());
			}
			HX_STACK_LINE(214)
			return null();
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			if ((tmp2)){
				HX_STACK_LINE(216)
				::openfl::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(216)
				::openfl::geom::Matrix tmp4 = this->__renderTransform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(216)
				renderSession->maskManager->pushRect(tmp3,tmp4);
			}
			HX_STACK_LINE(216)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(216)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			if ((tmp5)){
				HX_STACK_LINE(216)
				::openfl::display::Graphics tmp7 = this->__maskGraphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				::openfl::display::Graphics tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				tmp6 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(216)
				tmp6 = false;
			}
			HX_STACK_LINE(216)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(216)
			if ((tmp6)){
				HX_STACK_LINE(216)
				::openfl::display::Graphics tmp8 = this->__maskGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				::openfl::display::Graphics tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				int tmp10 = tmp9->__commands->get_length();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(216)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				tmp7 = (tmp11 > (int)0);
			}
			else{
				HX_STACK_LINE(216)
				tmp7 = false;
			}
			HX_STACK_LINE(216)
			if ((tmp7)){
				HX_STACK_LINE(216)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			bool tmp1 = this->__renderable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			if ((tmp5)){
				HX_STACK_LINE(217)
				Float tmp7 = this->__worldAlpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(217)
				Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(217)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(217)
				tmp6 = (tmp9 <= (int)0);
			}
			else{
				HX_STACK_LINE(217)
				tmp6 = true;
			}
			HX_STACK_LINE(217)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			if ((tmp8)){
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp10 = this->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				tmp9 = (tmp12 == null());
			}
			else{
				HX_STACK_LINE(217)
				tmp9 = true;
			}
			HX_STACK_LINE(217)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			if ((tmp10)){
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp12 = this->bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				bool tmp14 = tmp13->__isValid;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(217)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				tmp11 = !(tmp15);
			}
			else{
				HX_STACK_LINE(217)
				tmp11 = true;
			}
			HX_STACK_LINE(217)
			if ((tmp11)){
				HX_STACK_LINE(217)
				Dynamic();
			}
			else{
				HX_STACK_LINE(217)
				::openfl::display::BitmapData tmp12 = this->bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				bool tmp13 = this->smoothing;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(217)
				::openfl::geom::Matrix tmp14 = this->__renderTransform;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(217)
				::openfl::geom::ColorTransform tmp15 = this->__worldColorTransform;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				Float tmp16 = this->__worldAlpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				::openfl::display::BlendMode tmp17 = this->__blendMode;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(217)
				::openfl::display::Shader tmp18 = this->__shader;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(217)
				::openfl::display::PixelSnapping tmp19 = this->pixelSnapping;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(217)
				renderSession->spriteBatch->renderBitmapData(tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,null());
			}
		}
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(218)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			if ((tmp3)){
				HX_STACK_LINE(218)
				::openfl::display::Graphics tmp5 = this->__maskGraphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(218)
				::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(218)
				::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(218)
				tmp4 = (tmp7 != null());
			}
			else{
				HX_STACK_LINE(218)
				tmp4 = false;
			}
			HX_STACK_LINE(218)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			if ((tmp4)){
				HX_STACK_LINE(218)
				::openfl::display::Graphics tmp6 = this->__maskGraphics;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(218)
				::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(218)
				int tmp8 = tmp7->__commands->get_length();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(218)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(218)
				tmp5 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(218)
				tmp5 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp5)){
				HX_STACK_LINE(218)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(218)
			::openfl::geom::Rectangle tmp6 = this->__scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			if ((tmp7)){
				HX_STACK_LINE(218)
				renderSession->maskManager->popRect();
			}
		}
	}
return null();
}


Void Bitmap_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",223,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(225)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		maskGraphics->__commands->overrideMatrix(tmp);
		HX_STACK_LINE(226)
		maskGraphics->beginFill((int)0,null());
		HX_STACK_LINE(227)
		::openfl::display::BitmapData tmp1 = this->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		int tmp2 = tmp1->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		int tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		maskGraphics->drawRect((int)0,(int)0,tmp2,tmp4);
		HX_STACK_LINE(229)
		bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		if ((tmp5)){
			HX_STACK_LINE(231)
			::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			maskGraphics->__bounds = tmp6;
		}
		HX_STACK_LINE(235)
		::openfl::geom::Rectangle tmp6 = maskGraphics->__bounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		this->__getBounds(tmp6,tmp7);
		HX_STACK_LINE(237)
		::openfl::display::Graphics tmp8 = maskGraphics;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		this->super::__updateMask(tmp8);
	}
return null();
}


Float Bitmap_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",248,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	if ((tmp1)){
		HX_STACK_LINE(252)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		int tmp3 = tmp2->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		Float tmp4 = this->get_scaleY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		return tmp5;
	}
	HX_STACK_LINE(256)
	return (int)0;
}


Float Bitmap_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",261,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	if ((tmp1)){
		HX_STACK_LINE(265)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		int tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(265)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		if ((tmp5)){
			HX_STACK_LINE(267)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			::openfl::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(267)
			this->set_scaleY(tmp9);
		}
		HX_STACK_LINE(271)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		return tmp6;
	}
	HX_STACK_LINE(275)
	return (int)0;
}


Float Bitmap_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",280,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	if ((tmp1)){
		HX_STACK_LINE(284)
		::openfl::display::BitmapData tmp2 = this->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		Float tmp4 = this->get_scaleX();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(284)
		return tmp5;
	}
	HX_STACK_LINE(288)
	return (int)0;
}


Float Bitmap_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",293,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(295)
	::openfl::display::BitmapData tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	if ((tmp1)){
		HX_STACK_LINE(297)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		::openfl::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		int tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		if ((tmp5)){
			HX_STACK_LINE(299)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(299)
			::openfl::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(299)
			int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(299)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(299)
			this->set_scaleX(tmp9);
		}
		HX_STACK_LINE(303)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		return tmp6;
	}
	HX_STACK_LINE(307)
	return (int)0;
}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return pixelSnapping; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast< ::openfl::display::PixelSnapping >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bitmap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::openfl::display::PixelSnapping*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bitmap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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

} // end namespace openfl
} // end namespace display
