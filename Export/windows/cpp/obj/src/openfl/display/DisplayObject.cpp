#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",173,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(761)
	this->__cacheAsBitmapSmooth = true;
	HX_STACK_LINE(759)
	this->__cacheAsBitmap = false;
	HX_STACK_LINE(736)
	this->__maskCached = false;
	HX_STACK_LINE(783)
	super::__construct(null());
	HX_STACK_LINE(785)
	this->__alpha = (int)1;
	HX_STACK_LINE(786)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	this->__transform = tmp;
	HX_STACK_LINE(787)
	this->__visible = true;
	HX_STACK_LINE(789)
	this->__rotation = (int)0;
	HX_STACK_LINE(790)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(791)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(793)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(793)
	this->__renderTransform = tmp1;
	HX_STACK_LINE(795)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(795)
	this->__offset = tmp2;
	HX_STACK_LINE(796)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(796)
	this->__worldOffset = tmp3;
	HX_STACK_LINE(798)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(799)
	::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(799)
	this->__worldTransform = tmp4;
	HX_STACK_LINE(800)
	::openfl::geom::ColorTransform tmp5 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(800)
	this->__worldColorTransform = tmp5;
	HX_STACK_LINE(806)
	int tmp6 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(806)
	::String tmp7 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(806)
	this->set_name(tmp7);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",835,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(837)
	::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(839)
	bool tmp = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(839)
	if ((tmp)){
		HX_STACK_LINE(841)
		::openfl::geom::Matrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		{
			HX_STACK_LINE(841)
			::openfl::geom::Matrix tmp2 = this->__getWorldTransform();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(841)
			::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(841)
			tmp1 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(841)
		matrix = tmp1;
		HX_STACK_LINE(842)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(842)
			::openfl::geom::Matrix tmp3 = targetCoordinateSpace->__getWorldTransform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(842)
			::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(842)
			tmp2 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(842)
		::openfl::geom::Matrix tmp3 = tmp2->invert();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(842)
		matrix->concat(tmp3);
	}
	else{
		HX_STACK_LINE(846)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(846)
		matrix = tmp1;
		HX_STACK_LINE(847)
		matrix->identity();
	}
	HX_STACK_LINE(851)
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(851)
	::openfl::geom::Rectangle bounds = tmp1;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(852)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(852)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(852)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(854)
	::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(854)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",877,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(880)
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",902,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(904)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(904)
	pos = tmp;
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(905)
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(905)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(905)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(905)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(905)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(905)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(905)
		if ((tmp5)){
			HX_STACK_LINE(905)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(905)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(905)
			pos->x = tmp7;
			HX_STACK_LINE(905)
			Float tmp8 = _this->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(905)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(905)
			pos->y = tmp9;
		}
		else{
			HX_STACK_LINE(905)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(905)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(905)
			Float tmp8 = (_this->ty - pos->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(905)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(905)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(905)
			Float tmp11 = (pos->x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(905)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(905)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(905)
			Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(905)
			Float px = tmp14;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(905)
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(905)
			Float tmp16 = _this->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(905)
			Float tmp17 = (pos->y - _this->ty);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(905)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(905)
			Float tmp19 = _this->b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(905)
			Float tmp20 = (_this->tx - pos->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(905)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(905)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(905)
			Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(905)
			pos->y = tmp23;
			HX_STACK_LINE(905)
			pos->x = px;
		}
	}
	HX_STACK_LINE(906)
	::openfl::geom::Point tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(906)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",919,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(921)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(921)
	if ((tmp1)){
		HX_STACK_LINE(921)
		tmp2 = (obj->parent != null());
	}
	else{
		HX_STACK_LINE(921)
		tmp2 = false;
	}
	HX_STACK_LINE(921)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(921)
	if ((tmp2)){
		HX_STACK_LINE(921)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(921)
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(921)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(921)
		tmp3 = false;
	}
	HX_STACK_LINE(921)
	if ((tmp3)){
		HX_STACK_LINE(923)
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(923)
		::openfl::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(924)
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(924)
		::openfl::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(926)
		::openfl::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(926)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(926)
		return tmp7;
	}
	HX_STACK_LINE(930)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",951,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(953)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(953)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(953)
		if ((tmp1)){
			HX_STACK_LINE(955)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(955)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(956)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(956)
			::openfl::geom::Matrix tmp4 = this->__getWorldTransform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(956)
			this->__getBounds(tmp3,tmp4);
			HX_STACK_LINE(958)
			::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(958)
			bool tmp6 = bounds->containsPoint(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(958)
			return tmp6;
		}
		HX_STACK_LINE(962)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",990,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(992)
	::openfl::geom::Matrix tmp = this->__getWorldTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(992)
	::openfl::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(992)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObject","__broadcast",0xe41880ea,"openfl.display.DisplayObject.__broadcast","openfl/display/DisplayObject.hx",997,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(999)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(999)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(999)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(999)
	if ((tmp1)){
		HX_STACK_LINE(999)
		::String tmp3 = event->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(999)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(999)
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		HX_STACK_LINE(999)
		tmp2 = false;
	}
	HX_STACK_LINE(999)
	if ((tmp2)){
		HX_STACK_LINE(1001)
		::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1001)
		bool tmp4 = this->super::__dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1001)
		bool result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1003)
		bool tmp5 = event->__isCancelled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1003)
		if ((tmp5)){
			HX_STACK_LINE(1005)
			return true;
		}
		HX_STACK_LINE(1009)
		bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		return tmp6;
	}
	HX_STACK_LINE(1013)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__broadcast,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatchEvent",0xd8f34d69,"openfl.display.DisplayObject.__dispatchEvent","openfl/display/DisplayObject.hx",1018,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(1020)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1020)
	bool tmp1 = this->super::__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1020)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1022)
	bool tmp2 = event->__isCancelled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1022)
	if ((tmp2)){
		HX_STACK_LINE(1024)
		return true;
	}
	HX_STACK_LINE(1028)
	bool tmp3 = event->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1028)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1028)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1028)
	if ((tmp4)){
		HX_STACK_LINE(1028)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1028)
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1028)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1028)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(1028)
		tmp5 = false;
	}
	HX_STACK_LINE(1028)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1028)
	if ((tmp5)){
		HX_STACK_LINE(1028)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1028)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1028)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(1028)
		tmp6 = false;
	}
	HX_STACK_LINE(1028)
	if ((tmp6)){
		HX_STACK_LINE(1030)
		event->eventPhase = ::openfl::events::EventPhase_obj::BUBBLING_PHASE;
		HX_STACK_LINE(1032)
		bool tmp7 = (event->target == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1032)
		if ((tmp7)){
			HX_STACK_LINE(1034)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1038)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1038)
		::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1038)
		tmp8->__dispatchEvent(tmp9);
	}
	HX_STACK_LINE(1042)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1042)
	return tmp7;
}


Void DisplayObject_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__enterFrame",0x5c5351ec,"openfl.display.DisplayObject.__enterFrame","openfl/display/DisplayObject.hx",1047,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__enterFrame,(void))

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",1054,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1056)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1056)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1056)
		if ((tmp1)){
			HX_STACK_LINE(1058)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1058)
			::openfl::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1058)
			::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1058)
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

Void DisplayObject_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getRenderBounds",0xb06992ca,"openfl.display.DisplayObject.__getRenderBounds","openfl/display/DisplayObject.hx",1064,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1066)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1066)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1066)
		if ((tmp1)){
			HX_STACK_LINE(1067)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1067)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1067)
			this->__getBounds(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(1069)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1069)
			::openfl::geom::Rectangle r = tmp2;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1070)
			::openfl::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1070)
			r->copyFrom(tmp3);
			HX_STACK_LINE(1071)
			::openfl::geom::Rectangle tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1071)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1071)
			r->__transform(tmp4,tmp5);
			HX_STACK_LINE(1072)
			Float tmp6 = matrix->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1072)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1072)
			Float tmp8 = r->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1072)
			Float tmp9 = r->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1072)
			rect->__expand(tmp6,tmp7,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getRenderBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",1080,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1080)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",1087,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(1087)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",1092,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(1094)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1094)
		::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1094)
		this->__getBounds(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getWorldTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getWorldTransform",0x71693ad9,"openfl.display.DisplayObject.__getWorldTransform","openfl/display/DisplayObject.hx",1099,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1101)
	bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1101)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1101)
	if ((tmp1)){
		HX_STACK_LINE(1101)
		int tmp3 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1101)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1101)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(1101)
		tmp2 = true;
	}
	HX_STACK_LINE(1101)
	if ((tmp2)){
		HX_STACK_LINE(1103)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1104)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1105)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1105)
		bool transformDirty = tmp3;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(1107)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1107)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1107)
		if ((tmp5)){
			HX_STACK_LINE(1109)
			bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1109)
			if ((tmp6)){
				HX_STACK_LINE(1109)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(1113)
			while((true)){
				HX_STACK_LINE(1113)
				bool tmp6 = (current->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1113)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1113)
				if ((tmp7)){
					HX_STACK_LINE(1113)
					break;
				}
				HX_STACK_LINE(1115)
				::openfl::display::DisplayObject tmp8 = current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1115)
				list->push(tmp8);
				HX_STACK_LINE(1116)
				current = current->parent;
				HX_STACK_LINE(1118)
				bool tmp9 = current->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1118)
				if ((tmp9)){
					HX_STACK_LINE(1120)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(1128)
		bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1128)
		if ((tmp6)){
			HX_STACK_LINE(1130)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1131)
			while((true)){
				HX_STACK_LINE(1131)
				int tmp7 = --(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1131)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1131)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1131)
				if ((tmp9)){
					HX_STACK_LINE(1131)
					break;
				}
				HX_STACK_LINE(1133)
				::openfl::display::DisplayObject tmp10 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1133)
				tmp10->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(1141)
	::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1141)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getWorldTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",1146,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1148)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1148)
	if ((tmp1)){
		HX_STACK_LINE(1150)
		bool tmp2 = this->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1150)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1150)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1150)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1150)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1150)
		if ((tmp5)){
			HX_STACK_LINE(1150)
			tmp6 = this->__isMask;
		}
		else{
			HX_STACK_LINE(1150)
			tmp6 = true;
		}
		HX_STACK_LINE(1150)
		if ((tmp6)){
			HX_STACK_LINE(1150)
			return false;
		}
		HX_STACK_LINE(1151)
		::openfl::display::DisplayObject tmp7 = this->get_mask();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1151)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1151)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1151)
		if ((tmp8)){
			HX_STACK_LINE(1151)
			::openfl::display::DisplayObject tmp10 = this->get_mask();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1151)
			::openfl::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1151)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1151)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1151)
			Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1151)
			Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1151)
			bool tmp16 = tmp11->__hitTestMask(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1151)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1151)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1151)
			tmp9 = !(tmp18);
		}
		else{
			HX_STACK_LINE(1151)
			tmp9 = false;
		}
		HX_STACK_LINE(1151)
		if ((tmp9)){
			HX_STACK_LINE(1151)
			return false;
		}
		HX_STACK_LINE(1153)
		::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1153)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1153)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1153)
		bool tmp13 = shapeFlag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1153)
		::openfl::geom::Matrix tmp14 = this->__getWorldTransform();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1153)
		bool tmp15 = tmp10->__hitTest(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1153)
		if ((tmp15)){
			HX_STACK_LINE(1155)
			bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1155)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1155)
			if ((tmp16)){
				HX_STACK_LINE(1155)
				bool tmp18 = interactiveOnly;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1155)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1155)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(1155)
				tmp17 = false;
			}
			HX_STACK_LINE(1155)
			if ((tmp17)){
				HX_STACK_LINE(1157)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(1161)
			return true;
		}
	}
	HX_STACK_LINE(1167)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,__hitTest,return )

bool DisplayObject_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTestMask",0x5c65bdfa,"openfl.display.DisplayObject.__hitTestMask","openfl/display/DisplayObject.hx",1172,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1174)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1174)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1174)
	if ((tmp1)){
		HX_STACK_LINE(1176)
		::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1176)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1176)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1176)
		::openfl::geom::Matrix tmp5 = this->__getWorldTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1176)
		bool tmp6 = tmp2->__hitTest(tmp3,tmp4,true,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1176)
		if ((tmp6)){
			HX_STACK_LINE(1178)
			return true;
		}
	}
	HX_STACK_LINE(1184)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__hitTestMask,return )

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairo",0x75ab477b,"openfl.display.DisplayObject.__renderCairo","openfl/display/DisplayObject.hx",1189,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1191)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1191)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1191)
		if ((tmp1)){
			HX_STACK_LINE(1193)
			::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1193)
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(hx::ObjectPtr<OBJ_>(this),tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairoMask",0x9fd38e07,"openfl.display.DisplayObject.__renderCairoMask","openfl/display/DisplayObject.hx",1200,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1202)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1202)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1202)
		if ((tmp1)){
			HX_STACK_LINE(1204)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1204)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1204)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",1211,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1213)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1213)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1213)
		if ((tmp1)){
			HX_STACK_LINE(1215)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvasMask",0x388fe611,"openfl.display.DisplayObject.__renderCanvasMask","openfl/display/DisplayObject.hx",1222,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1224)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		if ((tmp1)){
			HX_STACK_LINE(1226)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1226)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1226)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",1233,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1235)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1235)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1235)
		if ((tmp1)){
			HX_STACK_LINE(1237)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",1244,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1246)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1246)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1246)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1246)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1246)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1246)
		if ((tmp3)){
			HX_STACK_LINE(1246)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1246)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1246)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(1246)
			tmp4 = true;
		}
		HX_STACK_LINE(1246)
		if ((tmp4)){
			HX_STACK_LINE(1246)
			return null();
		}
		HX_STACK_LINE(1248)
		bool tmp5 = this->__cacheAsBitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1248)
		if ((tmp5)){
			HX_STACK_LINE(1249)
			{
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp6 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1249)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1249)
				bool hasCacheMatrix = tmp7;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(1249)
				::openfl::geom::Rectangle tmp8 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1249)
				Float x = tmp8->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1249)
				::openfl::geom::Rectangle tmp9 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1249)
				Float y = tmp9->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1249)
				::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1249)
				Float w = tmp10->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(1249)
				::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1249)
				Float h = tmp11->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp12 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1249)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1249)
				if ((tmp13)){
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1249)
					this->__cacheGLMatrix = tmp14;
				}
				HX_STACK_LINE(1249)
				bool tmp14 = hasCacheMatrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1249)
				if ((tmp14)){
					HX_STACK_LINE(1249)
					::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1249)
					::openfl::geom::Rectangle bmpBounds = tmp15;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(1249)
					::openfl::geom::Rectangle tmp16 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1249)
					::openfl::geom::Rectangle tmp17 = bmpBounds;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp18 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1249)
					tmp16->__transform(tmp17,tmp18);
					HX_STACK_LINE(1249)
					x = bmpBounds->x;
					HX_STACK_LINE(1249)
					y = bmpBounds->y;
					HX_STACK_LINE(1249)
					w = bmpBounds->width;
					HX_STACK_LINE(1249)
					h = bmpBounds->height;
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1249)
					{
						HX_STACK_LINE(1249)
						::openfl::geom::Matrix tmp20 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1249)
						::openfl::geom::Matrix _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1249)
						tmp19 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1249)
					this->__cacheGLMatrix = tmp19;
				}
				else{
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1249)
					tmp15->identity();
				}
				HX_STACK_LINE(1249)
				bool tmp15 = (w <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1249)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1249)
				if ((tmp15)){
					HX_STACK_LINE(1249)
					tmp16 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(1249)
					tmp16 = false;
				}
				HX_STACK_LINE(1249)
				if ((tmp16)){
					HX_STACK_LINE(1249)
					::String tmp17 = (HX_HCSTRING("Error creating a cached bitmap. The texture size is ","\x1c","\x68","\x47","\xb0") + w);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1249)
					::String tmp18 = (tmp17 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1249)
					Float tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1249)
					::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1249)
					HX_STACK_DO_THROW(tmp20);
				}
				HX_STACK_LINE(1249)
				bool tmp17 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1249)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1249)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1249)
				if ((tmp18)){
					HX_STACK_LINE(1249)
					tmp19 = this->__updateFilters;
				}
				else{
					HX_STACK_LINE(1249)
					tmp19 = true;
				}
				HX_STACK_LINE(1249)
				if ((tmp19)){
					HX_STACK_LINE(1249)
					::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1249)
					bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1249)
					if ((tmp21)){
						HX_STACK_LINE(1249)
						::openfl::geom::Rectangle tmp22 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1249)
						Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1249)
						Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1249)
						::openfl::geom::Rectangle tmp25 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1249)
						Float tmp26 = tmp25->width;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1249)
						Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1249)
						Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1249)
						hx::AddEq(w,tmp28);
						HX_STACK_LINE(1249)
						::openfl::geom::Rectangle tmp29 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1249)
						Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1249)
						Float tmp31 = ::Math_obj::abs(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1249)
						::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1249)
						Float tmp33 = tmp32->height;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1249)
						Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1249)
						Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1249)
						hx::AddEq(h,tmp35);
					}
					HX_STACK_LINE(1249)
					::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1249)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1249)
					if ((tmp23)){
						HX_STACK_LINE(1249)
						::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1249)
						this->__cachedBitmap = tmp24;
					}
					HX_STACK_LINE(1249)
					::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1249)
					Float tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1249)
					int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1249)
					Float tmp27 = h;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1249)
					int tmp28 = ::Math_obj::ceil(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1249)
					tmp24->__resize(tmp26,tmp28);
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1249)
					{
						HX_STACK_LINE(1249)
						::openfl::geom::Matrix tmp30 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1249)
						::openfl::geom::Matrix _this = tmp30;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1249)
						tmp29 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix m = tmp29;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1249)
					Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1249)
					Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1249)
					Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1249)
					Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1249)
					m->translate(tmp31,tmp33);
					HX_STACK_LINE(1249)
					::openfl::display::Shader tmp34 = this->__shader;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1249)
					::openfl::display::Shader shader = tmp34;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(1249)
					this->__shader = null();
					HX_STACK_LINE(1249)
					::openfl::display::BitmapData tmp35 = this->__cachedBitmap;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1249)
					::openfl::_internal::renderer::RenderSession tmp36 = renderSession;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1249)
					tmp35->__drawGL(tmp36,hx::ObjectPtr<OBJ_>(this),tmp37,null(),null(),null(),true,false,true,null(),null());
					HX_STACK_LINE(1249)
					this->__shader = shader;
					HX_STACK_LINE(1249)
					this->__updateCachedBitmap = false;
				}
				HX_STACK_LINE(1249)
				bool tmp20 = this->__updateFilters;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1249)
				if ((tmp20)){
					HX_STACK_LINE(1249)
					::openfl::_internal::renderer::RenderSession tmp21 = renderSession;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1249)
					::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1249)
					::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1249)
					::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp21,tmp22,tmp23,null(),null());
					HX_STACK_LINE(1249)
					this->__updateFilters = false;
				}
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp21 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1249)
				tmp21->invert();
				HX_STACK_LINE(1249)
				{
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1249)
					::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1249)
					Float tmp23 = (x * _this->a);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1249)
					Float tmp24 = (y * _this->c);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1249)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1249)
					Float tmp26 = _this->tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1249)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1249)
					_this->tx = tmp27;
					HX_STACK_LINE(1249)
					Float tmp28 = (x * _this->b);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1249)
					Float tmp29 = (y * _this->d);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1249)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1249)
					Float tmp31 = _this->ty;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1249)
					Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1249)
					_this->ty = tmp32;
				}
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp23 = this->__renderTransform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1249)
				tmp22->concat(tmp23);
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp24 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1249)
				::openfl::geom::Point tmp25 = this->__offset;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1249)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1249)
				::openfl::geom::Point tmp27 = this->__offset;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1249)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1249)
				tmp24->translate(tmp26,tmp28);
				HX_STACK_LINE(1249)
				::openfl::display::BitmapData tmp29 = this->__cachedBitmap;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1249)
				bool tmp30 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1249)
				::openfl::geom::Matrix tmp31 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1249)
				::openfl::geom::ColorTransform tmp32 = this->__worldColorTransform;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1249)
				Float tmp33 = this->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1249)
				::openfl::display::BlendMode tmp34 = this->blendMode;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1249)
				::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1249)
				renderSession->spriteBatch->renderBitmapData(tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,::openfl::display::PixelSnapping_obj::ALWAYS,null());
			}
			HX_STACK_LINE(1250)
			return null();
		}
		HX_STACK_LINE(1253)
		{
			HX_STACK_LINE(1253)
			::openfl::geom::Rectangle tmp6 = this->__scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1253)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1253)
			if ((tmp7)){
				HX_STACK_LINE(1253)
				::openfl::geom::Rectangle tmp8 = this->__scrollRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1253)
				::openfl::geom::Matrix tmp9 = this->__renderTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1253)
				renderSession->maskManager->pushRect(tmp8,tmp9);
			}
			HX_STACK_LINE(1253)
			::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1253)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1253)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1253)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1253)
			if ((tmp10)){
				HX_STACK_LINE(1253)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1253)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1253)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1253)
				tmp11 = (tmp14 != null());
			}
			else{
				HX_STACK_LINE(1253)
				tmp11 = false;
			}
			HX_STACK_LINE(1253)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1253)
			if ((tmp11)){
				HX_STACK_LINE(1253)
				::openfl::display::Graphics tmp13 = this->__maskGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1253)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1253)
				int tmp15 = tmp14->__commands->get_length();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1253)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1253)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(1253)
				tmp12 = false;
			}
			HX_STACK_LINE(1253)
			if ((tmp12)){
				HX_STACK_LINE(1253)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(1254)
		{
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1254)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			if ((tmp7)){
				HX_STACK_LINE(1254)
				::openfl::display::Graphics tmp8 = this->__graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1254)
				bool tmp9 = tmp8->__hardware;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1254)
				if ((tmp9)){
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp10);
				}
				else{
					HX_STACK_LINE(1254)
					::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp10,tmp11);
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1254)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp12,null());
				}
			}
		}
		HX_STACK_LINE(1255)
		{
			HX_STACK_LINE(1255)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1255)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1255)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1255)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1255)
			if ((tmp8)){
				HX_STACK_LINE(1255)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1255)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1255)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1255)
				tmp9 = (tmp12 != null());
			}
			else{
				HX_STACK_LINE(1255)
				tmp9 = false;
			}
			HX_STACK_LINE(1255)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1255)
			if ((tmp9)){
				HX_STACK_LINE(1255)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1255)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1255)
				int tmp13 = tmp12->__commands->get_length();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1255)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1255)
				tmp10 = (tmp14 > (int)0);
			}
			else{
				HX_STACK_LINE(1255)
				tmp10 = false;
			}
			HX_STACK_LINE(1255)
			if ((tmp10)){
				HX_STACK_LINE(1255)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(1255)
			::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1255)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1255)
			if ((tmp12)){
				HX_STACK_LINE(1255)
				renderSession->maskManager->popRect();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__drawGraphicsGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__drawGraphicsGL",0x8421324b,"openfl.display.DisplayObject.__drawGraphicsGL","openfl/display/DisplayObject.hx",1259,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1261)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1261)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1261)
		if ((tmp1)){
			HX_STACK_LINE(1263)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1263)
			bool tmp3 = tmp2->__hardware;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1263)
			if ((tmp3)){
				HX_STACK_LINE(1265)
				::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1265)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp4);
			}
			else{
				HX_STACK_LINE(1272)
				::openfl::display::Graphics tmp4 = this->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1272)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1272)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp4,tmp5);
				HX_STACK_LINE(1275)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1275)
				::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp6,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__drawGraphicsGL,(void))

Void DisplayObject_obj::__preRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__preRenderGL",0x31250c67,"openfl.display.DisplayObject.__preRenderGL","openfl/display/DisplayObject.hx",1283,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1285)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1285)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1285)
		if ((tmp1)){
			HX_STACK_LINE(1287)
			::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1287)
			::openfl::geom::Matrix tmp3 = this->__renderTransform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1287)
			renderSession->maskManager->pushRect(tmp2,tmp3);
		}
		HX_STACK_LINE(1291)
		::openfl::display::DisplayObject tmp2 = this->__mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1291)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1291)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1291)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1291)
		if ((tmp4)){
			HX_STACK_LINE(1291)
			::openfl::display::Graphics tmp6 = this->__maskGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1291)
			::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1291)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1291)
			tmp5 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(1291)
			tmp5 = false;
		}
		HX_STACK_LINE(1291)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1291)
		if ((tmp5)){
			HX_STACK_LINE(1291)
			::openfl::display::Graphics tmp7 = this->__maskGraphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1291)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1291)
			int tmp9 = tmp8->__commands->get_length();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1291)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1291)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(1291)
			tmp6 = false;
		}
		HX_STACK_LINE(1291)
		if ((tmp6)){
			HX_STACK_LINE(1293)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__preRenderGL,(void))

Void DisplayObject_obj::__postRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__postRenderGL",0x83814532,"openfl.display.DisplayObject.__postRenderGL","openfl/display/DisplayObject.hx",1300,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1302)
		::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1302)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1302)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1302)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1302)
		if ((tmp2)){
			HX_STACK_LINE(1302)
			::openfl::display::Graphics tmp4 = this->__maskGraphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1302)
			::openfl::display::Graphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1302)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1302)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(1302)
			tmp3 = false;
		}
		HX_STACK_LINE(1302)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1302)
		if ((tmp3)){
			HX_STACK_LINE(1302)
			::openfl::display::Graphics tmp5 = this->__maskGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1302)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1302)
			int tmp7 = tmp6->__commands->get_length();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1302)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1302)
			tmp4 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1302)
			tmp4 = false;
		}
		HX_STACK_LINE(1302)
		if ((tmp4)){
			HX_STACK_LINE(1304)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(1308)
		::openfl::geom::Rectangle tmp5 = this->__scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1308)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1308)
		if ((tmp6)){
			HX_STACK_LINE(1310)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__postRenderGL,(void))

Void DisplayObject_obj::__cacheGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__cacheGL",0x9d05ce90,"openfl.display.DisplayObject.__cacheGL","openfl/display/DisplayObject.hx",1317,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1319)
		::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1319)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1319)
		bool hasCacheMatrix = tmp1;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
		HX_STACK_LINE(1320)
		::openfl::geom::Rectangle tmp2 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1320)
		Float x = tmp2->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1321)
		::openfl::geom::Rectangle tmp3 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1321)
		Float y = tmp3->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1322)
		::openfl::geom::Rectangle tmp4 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1322)
		Float w = tmp4->width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(1323)
		::openfl::geom::Rectangle tmp5 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1323)
		Float h = tmp5->height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(1326)
		::openfl::geom::Matrix tmp6 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1326)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1326)
		if ((tmp7)){
			HX_STACK_LINE(1326)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1326)
			this->__cacheGLMatrix = tmp8;
		}
		HX_STACK_LINE(1328)
		bool tmp8 = hasCacheMatrix;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1328)
		if ((tmp8)){
			HX_STACK_LINE(1331)
			::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1331)
			::openfl::geom::Rectangle bmpBounds = tmp9;		HX_STACK_VAR(bmpBounds,"bmpBounds");
			HX_STACK_LINE(1332)
			::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1332)
			::openfl::geom::Rectangle tmp11 = bmpBounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1332)
			::openfl::geom::Matrix tmp12 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1332)
			tmp10->__transform(tmp11,tmp12);
			HX_STACK_LINE(1333)
			x = bmpBounds->x;
			HX_STACK_LINE(1334)
			y = bmpBounds->y;
			HX_STACK_LINE(1335)
			w = bmpBounds->width;
			HX_STACK_LINE(1336)
			h = bmpBounds->height;
			HX_STACK_LINE(1338)
			::openfl::geom::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1338)
			{
				HX_STACK_LINE(1338)
				::openfl::geom::Matrix tmp14 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1338)
				::openfl::geom::Matrix _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1338)
				tmp13 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			HX_STACK_LINE(1338)
			this->__cacheGLMatrix = tmp13;
		}
		else{
			HX_STACK_LINE(1342)
			::openfl::geom::Matrix tmp9 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1342)
			tmp9->identity();
		}
		HX_STACK_LINE(1346)
		bool tmp9 = (w <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1346)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1346)
		if ((tmp9)){
			HX_STACK_LINE(1346)
			tmp10 = (h <= (int)0);
		}
		else{
			HX_STACK_LINE(1346)
			tmp10 = false;
		}
		HX_STACK_LINE(1346)
		if ((tmp10)){
			HX_STACK_LINE(1347)
			::String tmp11 = (HX_HCSTRING("Error creating a cached bitmap. The texture size is ","\x1c","\x68","\x47","\xb0") + w);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1347)
			::String tmp12 = (tmp11 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1347)
			Float tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1347)
			::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1347)
			HX_STACK_DO_THROW(tmp14);
		}
		HX_STACK_LINE(1350)
		bool tmp11 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1350)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1350)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1350)
		if ((tmp12)){
			HX_STACK_LINE(1350)
			tmp13 = this->__updateFilters;
		}
		else{
			HX_STACK_LINE(1350)
			tmp13 = true;
		}
		HX_STACK_LINE(1350)
		if ((tmp13)){
			HX_STACK_LINE(1352)
			::openfl::geom::Rectangle tmp14 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1352)
			bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1352)
			if ((tmp15)){
				HX_STACK_LINE(1353)
				::openfl::geom::Rectangle tmp16 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1353)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1353)
				Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1353)
				::openfl::geom::Rectangle tmp19 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1353)
				Float tmp20 = tmp19->width;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1353)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1353)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1353)
				hx::AddEq(w,tmp22);
				HX_STACK_LINE(1354)
				::openfl::geom::Rectangle tmp23 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1354)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1354)
				Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1354)
				::openfl::geom::Rectangle tmp26 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1354)
				Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1354)
				Float tmp28 = ::Math_obj::abs(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1354)
				Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1354)
				hx::AddEq(h,tmp29);
			}
			HX_STACK_LINE(1357)
			::openfl::display::BitmapData tmp16 = this->__cachedBitmap;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1357)
			bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1357)
			if ((tmp17)){
				HX_STACK_LINE(1358)
				::openfl::display::BitmapData tmp18 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1358)
				this->__cachedBitmap = tmp18;
			}
			HX_STACK_LINE(1360)
			::openfl::display::BitmapData tmp18 = this->__cachedBitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1360)
			Float tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1360)
			int tmp20 = ::Math_obj::ceil(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1360)
			Float tmp21 = h;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1360)
			int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1360)
			tmp18->__resize(tmp20,tmp22);
			HX_STACK_LINE(1363)
			::openfl::geom::Matrix tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1363)
				::openfl::geom::Matrix tmp24 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1363)
				::openfl::geom::Matrix _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1363)
				tmp23 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			HX_STACK_LINE(1363)
			::openfl::geom::Matrix m = tmp23;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(1364)
			Float tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1364)
			Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1364)
			Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1364)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1364)
			m->translate(tmp25,tmp27);
			HX_STACK_LINE(1366)
			::openfl::display::Shader tmp28 = this->__shader;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1366)
			::openfl::display::Shader shader = tmp28;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(1367)
			this->__shader = null();
			HX_STACK_LINE(1368)
			::openfl::display::BitmapData tmp29 = this->__cachedBitmap;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1368)
			::openfl::_internal::renderer::RenderSession tmp30 = renderSession;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1368)
			::openfl::geom::Matrix tmp31 = m;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1368)
			tmp29->__drawGL(tmp30,hx::ObjectPtr<OBJ_>(this),tmp31,null(),null(),null(),true,false,true,null(),null());
			HX_STACK_LINE(1369)
			this->__shader = shader;
			HX_STACK_LINE(1371)
			this->__updateCachedBitmap = false;
		}
		HX_STACK_LINE(1374)
		bool tmp14 = this->__updateFilters;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1374)
		if ((tmp14)){
			HX_STACK_LINE(1375)
			::openfl::_internal::renderer::RenderSession tmp15 = renderSession;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1375)
			::openfl::display::BitmapData tmp16 = this->__cachedBitmap;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1375)
			::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1375)
			::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp15,tmp16,tmp17,null(),null());
			HX_STACK_LINE(1376)
			this->__updateFilters = false;
		}
		HX_STACK_LINE(1380)
		::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1380)
		tmp15->invert();
		HX_STACK_LINE(1381)
		{
			HX_STACK_LINE(1381)
			::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1381)
			::openfl::geom::Matrix _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1381)
			Float tmp17 = (x * _this->a);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1381)
			Float tmp18 = (y * _this->c);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1381)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1381)
			Float tmp20 = _this->tx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1381)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1381)
			_this->tx = tmp21;
			HX_STACK_LINE(1381)
			Float tmp22 = (x * _this->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1381)
			Float tmp23 = (y * _this->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1381)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1381)
			Float tmp25 = _this->ty;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1381)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1381)
			_this->ty = tmp26;
		}
		HX_STACK_LINE(1382)
		::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1382)
		::openfl::geom::Matrix tmp17 = this->__renderTransform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1382)
		tmp16->concat(tmp17);
		HX_STACK_LINE(1383)
		::openfl::geom::Matrix tmp18 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1383)
		::openfl::geom::Point tmp19 = this->__offset;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1383)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1383)
		::openfl::geom::Point tmp21 = this->__offset;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1383)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1383)
		tmp18->translate(tmp20,tmp22);
		HX_STACK_LINE(1385)
		::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1385)
		bool tmp24 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1385)
		::openfl::geom::Matrix tmp25 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1385)
		::openfl::geom::ColorTransform tmp26 = this->__worldColorTransform;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1385)
		Float tmp27 = this->__worldAlpha;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1385)
		::openfl::display::BlendMode tmp28 = this->blendMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1385)
		::openfl::display::Shader tmp29 = this->__shader;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1385)
		renderSession->spriteBatch->renderBitmapData(tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,::openfl::display::PixelSnapping_obj::ALWAYS,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__cacheGL,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",1389,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1391)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1391)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1391)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1391)
		if ((tmp2)){
			HX_STACK_LINE(1393)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1393)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1393)
			if ((tmp4)){
				HX_STACK_LINE(1395)
				::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1395)
				::openfl::display::InteractiveObject tmp6 = tmp5->get_focus();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1395)
				bool tmp7 = (tmp6 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1395)
				if ((tmp7)){
					HX_STACK_LINE(1397)
					::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1397)
					tmp8->set_focus(null());
				}
				HX_STACK_LINE(1401)
				::String tmp8 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1401)
				::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(tmp8,false,false);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1401)
				this->dispatchEvent(tmp9);
			}
			HX_STACK_LINE(1405)
			this->stage = stage;
			HX_STACK_LINE(1407)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1407)
			if ((tmp5)){
				HX_STACK_LINE(1409)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1409)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1409)
				this->dispatchEvent(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",1418,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1420)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1420)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1420)
		if ((tmp1)){
			HX_STACK_LINE(1422)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1423)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1423)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1423)
			if ((tmp2)){
				HX_STACK_LINE(1423)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1423)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1423)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(1423)
				tmp3 = false;
			}
			HX_STACK_LINE(1423)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(1424)
			this->__renderDirty = true;
			HX_STACK_LINE(1425)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",1432,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1434)
		bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1434)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1434)
		if ((tmp1)){
			HX_STACK_LINE(1436)
			this->__transformDirty = true;
			HX_STACK_LINE(1437)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransfrom){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateTransforms",0x37510227,"openfl.display.DisplayObject.__updateTransforms","openfl/display/DisplayObject.hx",1444,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransfrom,"overrideTransfrom")
		HX_STACK_LINE(1446)
		bool tmp = (overrideTransfrom != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1446)
		bool overrided = tmp;		HX_STACK_VAR(overrided,"overrided");
		HX_STACK_LINE(1447)
		bool tmp1 = overrided;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1447)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1447)
		if ((tmp1)){
			HX_STACK_LINE(1447)
			tmp2 = ::openfl::geom::Matrix_obj::__new(overrideTransfrom->a,overrideTransfrom->b,overrideTransfrom->c,overrideTransfrom->d,overrideTransfrom->tx,overrideTransfrom->ty);
		}
		else{
			HX_STACK_LINE(1447)
			tmp2 = this->__transform;
		}
		HX_STACK_LINE(1447)
		::openfl::geom::Matrix local = tmp2;		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(1449)
		::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1449)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1449)
		if ((tmp4)){
			HX_STACK_LINE(1451)
			::openfl::geom::Matrix tmp5 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1451)
			this->__worldTransform = tmp5;
		}
		HX_STACK_LINE(1455)
		bool tmp5 = overrided;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1455)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1455)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1455)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1455)
		if ((tmp7)){
			HX_STACK_LINE(1455)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1455)
			::openfl::display::DisplayObjectContainer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1455)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(1455)
			tmp8 = false;
		}
		HX_STACK_LINE(1455)
		if ((tmp8)){
			HX_STACK_LINE(1457)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1457)
			::openfl::geom::Matrix parentTransform = tmp9->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(1459)
			Float tmp10 = (local->a * parentTransform->a);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1459)
			Float tmp11 = (local->b * parentTransform->c);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1459)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1459)
			::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1459)
			tmp13->a = tmp12;
			HX_STACK_LINE(1460)
			Float tmp14 = (local->a * parentTransform->b);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1460)
			Float tmp15 = (local->b * parentTransform->d);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1460)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1460)
			::openfl::geom::Matrix tmp17 = this->__worldTransform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1460)
			tmp17->b = tmp16;
			HX_STACK_LINE(1461)
			Float tmp18 = (local->c * parentTransform->a);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1461)
			Float tmp19 = (local->d * parentTransform->c);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1461)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1461)
			::openfl::geom::Matrix tmp21 = this->__worldTransform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1461)
			tmp21->c = tmp20;
			HX_STACK_LINE(1462)
			Float tmp22 = (local->c * parentTransform->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1462)
			Float tmp23 = (local->d * parentTransform->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1462)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1462)
			::openfl::geom::Matrix tmp25 = this->__worldTransform;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1462)
			tmp25->d = tmp24;
			HX_STACK_LINE(1463)
			Float tmp26 = (local->tx * parentTransform->a);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1463)
			Float tmp27 = (local->ty * parentTransform->c);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1463)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1463)
			Float tmp29 = parentTransform->tx;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1463)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1463)
			::openfl::geom::Matrix tmp31 = this->__worldTransform;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1463)
			tmp31->tx = tmp30;
			HX_STACK_LINE(1464)
			Float tmp32 = (local->tx * parentTransform->b);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1464)
			Float tmp33 = (local->ty * parentTransform->d);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1464)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1464)
			Float tmp35 = parentTransform->ty;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1464)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1464)
			::openfl::geom::Matrix tmp37 = this->__worldTransform;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1464)
			tmp37->ty = tmp36;
			HX_STACK_LINE(1466)
			::openfl::geom::Point tmp38 = this->__worldOffset;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1466)
			::openfl::display::DisplayObjectContainer tmp39 = this->parent;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1466)
			::openfl::geom::Point tmp40 = tmp39->__worldOffset;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1466)
			tmp38->copyFrom(tmp40);
		}
		else{
			HX_STACK_LINE(1470)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1470)
			::openfl::geom::Matrix tmp10 = local;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1470)
			tmp9->copyFrom(tmp10);
			HX_STACK_LINE(1471)
			{
				HX_STACK_LINE(1471)
				::openfl::geom::Point tmp11 = this->__worldOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1471)
				::openfl::geom::Point _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1471)
				_this->x = (int)0;
				HX_STACK_LINE(1471)
				_this->y = (int)0;
			}
		}
		HX_STACK_LINE(1475)
		::openfl::geom::Rectangle tmp9 = this->__scrollRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1475)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1475)
		if ((tmp10)){
			HX_STACK_LINE(1477)
			::openfl::geom::Matrix tmp11 = this->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1477)
			::openfl::geom::Rectangle tmp12 = this->__scrollRect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1477)
			::openfl::geom::Point tmp13 = tmp12->get_topLeft();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1477)
			::openfl::geom::Point tmp14 = tmp11->deltaTransformPoint(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1477)
			this->__offset = tmp14;
			HX_STACK_LINE(1478)
			::openfl::geom::Point tmp15 = this->__worldOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1478)
			::openfl::geom::Point tmp16 = this->__offset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1478)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1478)
			::openfl::geom::Point tmp18 = this->__offset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1478)
			Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1478)
			tmp15->offset(tmp17,tmp19);
		}
		else{
			HX_STACK_LINE(1482)
			::openfl::geom::Point tmp11 = this->__offset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1482)
			::openfl::geom::Point _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1482)
			_this->x = (int)0;
			HX_STACK_LINE(1482)
			_this->y = (int)0;
		}
		HX_STACK_LINE(1486)
		::openfl::geom::Matrix tmp11 = this->__renderTransform;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1486)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1486)
		tmp11->copyFrom(tmp12);
		HX_STACK_LINE(1487)
		::openfl::geom::Matrix tmp13 = this->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1487)
		::openfl::geom::Point tmp14 = this->__worldOffset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1487)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1487)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1487)
		::openfl::geom::Point tmp17 = this->__worldOffset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1487)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1487)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1487)
		tmp13->translate(tmp16,tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateTransforms,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",1492,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1494)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1494)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1494)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1494)
		if ((tmp1)){
			HX_STACK_LINE(1494)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1494)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1494)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1494)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1494)
			tmp2 = false;
		}
		HX_STACK_LINE(1494)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1494)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1494)
		if ((tmp3)){
			HX_STACK_LINE(1494)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1494)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1494)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1494)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1494)
			tmp4 = false;
		}
		HX_STACK_LINE(1494)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1494)
		if ((tmp4)){
			HX_STACK_LINE(1494)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1494)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1494)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1494)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1494)
			tmp5 = false;
		}
		HX_STACK_LINE(1494)
		this->__renderable = tmp5;
		HX_STACK_LINE(1496)
		this->__updateTransforms(null());
		HX_STACK_LINE(1499)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1499)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1499)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1499)
		if ((tmp7)){
			HX_STACK_LINE(1499)
			tmp8 = this->__isMask;
		}
		else{
			HX_STACK_LINE(1499)
			tmp8 = false;
		}
		HX_STACK_LINE(1499)
		if ((tmp8)){
			HX_STACK_LINE(1501)
			this->__maskCached = false;
		}
		HX_STACK_LINE(1505)
		bool tmp9 = updateChildren;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1505)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1505)
		if ((tmp9)){
			HX_STACK_LINE(1505)
			tmp10 = this->__transformDirty;
		}
		else{
			HX_STACK_LINE(1505)
			tmp10 = false;
		}
		HX_STACK_LINE(1505)
		if ((tmp10)){
			HX_STACK_LINE(1507)
			this->__transformDirty = false;
			HX_STACK_LINE(1508)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(1512)
		bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1512)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1512)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1512)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1512)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1512)
		if ((tmp14)){
			HX_STACK_LINE(1512)
			::openfl::display::DisplayObject tmp16 = this->__mask;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1512)
			::openfl::display::DisplayObject tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1512)
			::openfl::display::DisplayObject tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1512)
			tmp15 = (tmp18 != null());
		}
		else{
			HX_STACK_LINE(1512)
			tmp15 = false;
		}
		HX_STACK_LINE(1512)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1512)
		if ((tmp15)){
			HX_STACK_LINE(1512)
			::openfl::display::DisplayObject tmp17 = this->__mask;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1512)
			::openfl::display::DisplayObject tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1512)
			bool tmp19 = tmp18->__maskCached;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1512)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1512)
			tmp16 = !(tmp20);
		}
		else{
			HX_STACK_LINE(1512)
			tmp16 = false;
		}
		HX_STACK_LINE(1512)
		if ((tmp16)){
			HX_STACK_LINE(1514)
			::openfl::display::Graphics tmp17 = this->__maskGraphics;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1514)
			bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1514)
			if ((tmp18)){
				HX_STACK_LINE(1516)
				::openfl::display::Graphics tmp19 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1516)
				this->__maskGraphics = tmp19;
			}
			HX_STACK_LINE(1520)
			::openfl::display::Graphics tmp19 = this->__maskGraphics;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1520)
			tmp19->clear();
			HX_STACK_LINE(1522)
			::openfl::display::DisplayObject tmp20 = this->__mask;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1522)
			::openfl::display::Graphics tmp21 = this->__maskGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1522)
			tmp20->__update(true,true,tmp21);
			HX_STACK_LINE(1523)
			::openfl::display::DisplayObject tmp22 = this->__mask;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1523)
			tmp22->__maskCached = true;
		}
		HX_STACK_LINE(1527)
		bool tmp17 = (maskGraphics != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1527)
		if ((tmp17)){
			HX_STACK_LINE(1529)
			::openfl::display::Graphics tmp18 = maskGraphics;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1529)
			this->__updateMask(tmp18);
		}
		HX_STACK_LINE(1533)
		bool tmp18 = transformOnly;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1533)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1533)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1533)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1533)
		if ((tmp20)){
			HX_STACK_LINE(1533)
			tmp21 = this->__cacheAsBitmap;
		}
		else{
			HX_STACK_LINE(1533)
			tmp21 = false;
		}
		HX_STACK_LINE(1533)
		if ((tmp21)){
			HX_STACK_LINE(1536)
			bool tmp22 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1536)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1536)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1536)
			if ((tmp23)){
				HX_STACK_LINE(1536)
				tmp24 = this->__updateFilters;
			}
			else{
				HX_STACK_LINE(1536)
				tmp24 = true;
			}
			HX_STACK_LINE(1536)
			if ((tmp24)){
				HX_STACK_LINE(1538)
				::openfl::geom::Rectangle tmp25 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1538)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1538)
				if ((tmp26)){
					HX_STACK_LINE(1539)
					::openfl::geom::Rectangle tmp27 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1539)
					this->__cachedBitmapBounds = tmp27;
				}
				HX_STACK_LINE(1542)
				::openfl::geom::Rectangle tmp27 = this->cacheAsBitmapBounds;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1542)
				bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1542)
				if ((tmp28)){
					HX_STACK_LINE(1543)
					::openfl::geom::Rectangle tmp29 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1543)
					::openfl::geom::Rectangle tmp30 = this->cacheAsBitmapBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1543)
					tmp29->copyFrom(tmp30);
				}
				else{
					HX_STACK_LINE(1546)
					::openfl::geom::Rectangle tmp29 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1546)
					tmp29->setEmpty();
					HX_STACK_LINE(1547)
					::openfl::geom::Rectangle tmp30 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1547)
					::openfl::geom::Matrix tmp31 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1547)
					this->__getRenderBounds(tmp30,tmp31);
				}
				HX_STACK_LINE(1552)
				bool tmp29 = (this->__filters != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1552)
				if ((tmp29)){
					HX_STACK_LINE(1554)
					::openfl::geom::Rectangle tmp30 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1554)
					bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1554)
					if ((tmp31)){
						HX_STACK_LINE(1555)
						::openfl::geom::Rectangle tmp32 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1555)
						this->__cachedFilterBounds = tmp32;
					}
					HX_STACK_LINE(1557)
					::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1557)
					tmp32->setEmpty();
					HX_STACK_LINE(1558)
					::openfl::geom::Rectangle tmp33 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1558)
					::openfl::geom::Matrix tmp34 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1558)
					::openfl::filters::BitmapFilter_obj::__expandBounds(this->__filters,tmp33,tmp34);
					HX_STACK_LINE(1560)
					::openfl::geom::Rectangle tmp35 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1560)
					::openfl::geom::Rectangle tmp36 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1560)
					hx::AddEq(tmp36->x,tmp35->x);
					HX_STACK_LINE(1561)
					::openfl::geom::Rectangle tmp37 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1561)
					::openfl::geom::Rectangle tmp38 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1561)
					hx::AddEq(tmp38->y,tmp37->y);
				}
			}
		}
		HX_STACK_LINE(1569)
		bool tmp22 = transformOnly;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1569)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1569)
		if ((tmp23)){
			HX_STACK_LINE(1587)
			::openfl::geom::ColorTransform tmp24 = this->__worldColorTransform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1587)
			::openfl::geom::Transform tmp25 = this->get_transform();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1587)
			::openfl::geom::ColorTransform tmp26 = tmp25->get_colorTransform();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1587)
			bool tmp27 = tmp24->__equals(tmp26,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1587)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1587)
			if ((tmp28)){
				HX_STACK_LINE(1589)
				::openfl::geom::Transform tmp29 = this->get_transform();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1589)
				::openfl::geom::ColorTransform tmp30 = tmp29->get_colorTransform();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1589)
				::openfl::geom::ColorTransform tmp31 = tmp30->__clone();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1589)
				this->__worldColorTransform = tmp31;
			}
			HX_STACK_LINE(1593)
			::openfl::display::DisplayObjectContainer tmp29 = this->parent;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1593)
			bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1593)
			if ((tmp30)){
				HX_STACK_LINE(1597)
				Float tmp31 = this->get_alpha();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1597)
				::openfl::display::DisplayObjectContainer tmp32 = this->parent;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1597)
				Float tmp33 = tmp32->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1597)
				Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1597)
				this->__worldAlpha = tmp34;
				HX_STACK_LINE(1598)
				::openfl::geom::ColorTransform tmp35 = this->__worldColorTransform;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1598)
				::openfl::display::DisplayObjectContainer tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1598)
				::openfl::geom::ColorTransform tmp37 = tmp36->__worldColorTransform;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1598)
				tmp35->__combine(tmp37);
				HX_STACK_LINE(1600)
				::openfl::display::BlendMode tmp38 = this->blendMode;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1600)
				bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1600)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1600)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1600)
				if ((tmp40)){
					HX_STACK_LINE(1600)
					::openfl::display::BlendMode tmp42 = this->blendMode;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1600)
					::openfl::display::BlendMode tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1600)
					tmp41 = (tmp43 == ::openfl::display::BlendMode_obj::NORMAL);
				}
				else{
					HX_STACK_LINE(1600)
					tmp41 = true;
				}
				HX_STACK_LINE(1600)
				if ((tmp41)){
					HX_STACK_LINE(1602)
					::openfl::display::DisplayObjectContainer tmp42 = this->parent;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1602)
					this->__blendMode = tmp42->__blendMode;
				}
				HX_STACK_LINE(1606)
				::openfl::display::Shader tmp42 = this->shader;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1606)
				bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1606)
				if ((tmp43)){
					HX_STACK_LINE(1607)
					::openfl::display::DisplayObjectContainer tmp44 = this->parent;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1607)
					this->__shader = tmp44->__shader;
				}
			}
			else{
				HX_STACK_LINE(1645)
				Float tmp31 = this->get_alpha();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1645)
				this->__worldAlpha = tmp31;
			}
			HX_STACK_LINE(1670)
			bool tmp31 = updateChildren;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1670)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1670)
			if ((tmp31)){
				HX_STACK_LINE(1670)
				tmp32 = this->__renderDirty;
			}
			else{
				HX_STACK_LINE(1670)
				tmp32 = false;
			}
			HX_STACK_LINE(1670)
			if ((tmp32)){
				HX_STACK_LINE(1672)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",1681,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1683)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1683)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1683)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1683)
		if ((tmp1)){
			HX_STACK_LINE(1683)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1683)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1683)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1683)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1683)
			tmp2 = false;
		}
		HX_STACK_LINE(1683)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1683)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1683)
		if ((tmp3)){
			HX_STACK_LINE(1683)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1683)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1683)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1683)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1683)
			tmp4 = false;
		}
		HX_STACK_LINE(1683)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1683)
		if ((tmp4)){
			HX_STACK_LINE(1683)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1683)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1683)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1683)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1683)
			tmp5 = false;
		}
		HX_STACK_LINE(1683)
		this->__renderable = tmp5;
		HX_STACK_LINE(1684)
		bool tmp6 = this->__renderable;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1684)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1684)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1684)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1684)
		if ((tmp8)){
			HX_STACK_LINE(1684)
			bool tmp10 = this->__isMask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1684)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1684)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1684)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(1684)
			tmp9 = false;
		}
		HX_STACK_LINE(1684)
		if ((tmp9)){
			HX_STACK_LINE(1684)
			return null();
		}
		HX_STACK_LINE(1685)
		Float tmp10 = this->get_alpha();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1685)
		this->__worldAlpha = tmp10;
		HX_STACK_LINE(1687)
		bool tmp11 = this->__transformDirty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1687)
		if ((tmp11)){
			HX_STACK_LINE(1689)
			this->__transformDirty = false;
			HX_STACK_LINE(1690)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",1697,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1699)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1699)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1699)
		if ((tmp1)){
			HX_STACK_LINE(1701)
			::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1701)
			maskGraphics->__commands->overrideMatrix(tmp2);
			HX_STACK_LINE(1702)
			::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1702)
			::openfl::_internal::renderer::DrawCommandBuffer tmp4 = tmp3->__commands;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1702)
			maskGraphics->__commands->append(tmp4);
			HX_STACK_LINE(1703)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(1704)
			maskGraphics->__visible = true;
			HX_STACK_LINE(1706)
			bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1706)
			if ((tmp5)){
				HX_STACK_LINE(1708)
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1708)
				maskGraphics->__bounds = tmp6;
			}
			HX_STACK_LINE(1712)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1712)
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1712)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1712)
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",1726,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1728)
	Float tmp = this->__alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1728)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",1733,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1735)
	bool tmp = (value > ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1735)
	if ((tmp)){
		HX_STACK_LINE(1735)
		value = ((Float)1.0);
	}
	HX_STACK_LINE(1736)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1736)
	Float tmp2 = this->__alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1736)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1736)
	if ((tmp3)){
		HX_STACK_LINE(1736)
		bool tmp4 = this->__renderDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1736)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1736)
		if ((tmp5)){
			HX_STACK_LINE(1736)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1736)
			bool tmp6 = (this->get_filters() != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1736)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1736)
			if ((tmp6)){
				HX_STACK_LINE(1736)
				int tmp8 = this->get_filters()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1736)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1736)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1736)
				tmp7 = false;
			}
			HX_STACK_LINE(1736)
			this->__updateFilters = tmp7;
			HX_STACK_LINE(1736)
			this->__renderDirty = true;
			HX_STACK_LINE(1736)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1737)
	Float tmp4 = this->__alpha = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1737)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

::openfl::display::BlendMode DisplayObject_obj::set_blendMode( ::openfl::display::BlendMode value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",1742,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1744)
	this->__blendMode = value;
	HX_STACK_LINE(1745)
	::openfl::display::BlendMode tmp = this->blendMode = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1745)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

::openfl::display::Shader DisplayObject_obj::set_shader( ::openfl::display::Shader value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_shader",0x9bde6c79,"openfl.display.DisplayObject.set_shader","openfl/display/DisplayObject.hx",1749,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1751)
	this->__shader = value;
	HX_STACK_LINE(1752)
	::openfl::display::Shader tmp = this->shader = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1752)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_shader,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmap",0xa5311003,"openfl.display.DisplayObject.get_cacheAsBitmap","openfl/display/DisplayObject.hx",1756,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1758)
	bool tmp = this->__cacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1758)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmap",0xc89ee80f,"openfl.display.DisplayObject.set_cacheAsBitmap","openfl/display/DisplayObject.hx",1762,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1764)
	{
		HX_STACK_LINE(1764)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1764)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1764)
		if ((tmp1)){
			HX_STACK_LINE(1764)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1764)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1764)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1764)
			if ((tmp2)){
				HX_STACK_LINE(1764)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1764)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1764)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(1764)
				tmp3 = false;
			}
			HX_STACK_LINE(1764)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(1764)
			this->__renderDirty = true;
			HX_STACK_LINE(1764)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1765)
	bool tmp = this->__forceCacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1765)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1765)
	if ((tmp)){
		HX_STACK_LINE(1765)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1765)
		tmp1 = value;
	}
	HX_STACK_LINE(1765)
	bool tmp2 = this->__cacheAsBitmap = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1765)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

::openfl::geom::Matrix DisplayObject_obj::get_cacheAsBitmapMatrix( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmapMatrix",0xe47a1ea4,"openfl.display.DisplayObject.get_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1769,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1771)
	::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1771)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapMatrix,return )

::openfl::geom::Matrix DisplayObject_obj::set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmapMatrix",0xe6db87b0,"openfl.display.DisplayObject.set_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1775,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1777)
	{
		HX_STACK_LINE(1777)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1777)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1777)
		if ((tmp1)){
			HX_STACK_LINE(1777)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1777)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1777)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1777)
			if ((tmp2)){
				HX_STACK_LINE(1777)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1777)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1777)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(1777)
				tmp3 = false;
			}
			HX_STACK_LINE(1777)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(1777)
			this->__renderDirty = true;
			HX_STACK_LINE(1777)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1778)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(value->a,value->b,value->c,value->d,value->tx,value->ty);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1778)
	::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1778)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapMatrix,return )

bool DisplayObject_obj::get_cacheAsBitmapSmooth( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmapSmooth",0x301cf091,"openfl.display.DisplayObject.get_cacheAsBitmapSmooth","openfl/display/DisplayObject.hx",1782,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1784)
	bool tmp = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1784)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapSmooth,return )

bool DisplayObject_obj::set_cacheAsBitmapSmooth( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmapSmooth",0x327e599d,"openfl.display.DisplayObject.set_cacheAsBitmapSmooth","openfl/display/DisplayObject.hx",1788,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1790)
	bool tmp = this->__cacheAsBitmapSmooth = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1790)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapSmooth,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1794,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1796)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1796)
	if ((tmp)){
		HX_STACK_LINE(1798)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(1802)
		return this->__filters->copy();
	}
	HX_STACK_LINE(1796)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1809,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1811)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1811)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1811)
	if ((tmp)){
		HX_STACK_LINE(1811)
		tmp1 = (value->length > (int)0);
	}
	else{
		HX_STACK_LINE(1811)
		tmp1 = false;
	}
	HX_STACK_LINE(1811)
	if ((tmp1)){
		HX_STACK_LINE(1812)
		this->__filters = value;
		HX_STACK_LINE(1813)
		this->__forceCacheAsBitmap = true;
		HX_STACK_LINE(1814)
		this->__cacheAsBitmap = true;
		HX_STACK_LINE(1815)
		this->__updateFilters = true;
	}
	else{
		HX_STACK_LINE(1817)
		this->__filters = null();
		HX_STACK_LINE(1818)
		this->__forceCacheAsBitmap = false;
		HX_STACK_LINE(1819)
		this->__cacheAsBitmap = false;
		HX_STACK_LINE(1820)
		this->__updateFilters = false;
	}
	HX_STACK_LINE(1823)
	{
		HX_STACK_LINE(1823)
		bool tmp2 = this->__renderDirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1823)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1823)
		if ((tmp3)){
			HX_STACK_LINE(1823)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1823)
			bool tmp4 = (this->get_filters() != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1823)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1823)
			if ((tmp4)){
				HX_STACK_LINE(1823)
				int tmp6 = this->get_filters()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1823)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1823)
				tmp5 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(1823)
				tmp5 = false;
			}
			HX_STACK_LINE(1823)
			this->__updateFilters = tmp5;
			HX_STACK_LINE(1823)
			this->__renderDirty = true;
			HX_STACK_LINE(1823)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1825)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1830,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1832)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1832)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1833)
	{
		HX_STACK_LINE(1833)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1833)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1833)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1835)
	Float tmp1 = bounds->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1835)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1840,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1842)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1842)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1844)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1844)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1845)
	matrix->identity();
	HX_STACK_LINE(1847)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1847)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1847)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1849)
	bool tmp4 = (value != bounds->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1849)
	if ((tmp4)){
		HX_STACK_LINE(1851)
		Float tmp5 = (Float(value) / Float(bounds->height));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1851)
		this->set_scaleY(tmp5);
	}
	else{
		HX_STACK_LINE(1855)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(1859)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1859)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",1864,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1866)
	::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1866)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",1871,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1873)
	::openfl::display::DisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1873)
	::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1873)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1873)
	if ((tmp2)){
		HX_STACK_LINE(1874)
		{
			HX_STACK_LINE(1874)
			bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1874)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1874)
			if ((tmp4)){
				HX_STACK_LINE(1874)
				this->__transformDirty = true;
				HX_STACK_LINE(1874)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1875)
		{
			HX_STACK_LINE(1875)
			bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1875)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1875)
			if ((tmp4)){
				HX_STACK_LINE(1875)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(1875)
				bool tmp5 = (this->get_filters() != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1875)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1875)
				if ((tmp5)){
					HX_STACK_LINE(1875)
					int tmp7 = this->get_filters()->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1875)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1875)
					tmp6 = (tmp8 > (int)0);
				}
				else{
					HX_STACK_LINE(1875)
					tmp6 = false;
				}
				HX_STACK_LINE(1875)
				this->__updateFilters = tmp6;
				HX_STACK_LINE(1875)
				this->__renderDirty = true;
				HX_STACK_LINE(1875)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1877)
	::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1877)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1877)
	if ((tmp4)){
		HX_STACK_LINE(1878)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1878)
		tmp5->__isMask = false;
		HX_STACK_LINE(1879)
		::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1879)
		tmp6->__maskCached = false;
		HX_STACK_LINE(1880)
		{
			HX_STACK_LINE(1880)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1880)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1880)
			bool tmp8 = _this->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1880)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1880)
			if ((tmp9)){
				HX_STACK_LINE(1880)
				_this->__transformDirty = true;
				HX_STACK_LINE(1880)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1881)
		{
			HX_STACK_LINE(1881)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1881)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1881)
			bool tmp8 = _this->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1881)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1881)
			if ((tmp9)){
				HX_STACK_LINE(1881)
				_this->__updateCachedBitmap = true;
				HX_STACK_LINE(1881)
				bool tmp10 = (_this->get_filters() != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1881)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1881)
				if ((tmp10)){
					HX_STACK_LINE(1881)
					int tmp12 = _this->get_filters()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1881)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1881)
					tmp11 = (tmp13 > (int)0);
				}
				else{
					HX_STACK_LINE(1881)
					tmp11 = false;
				}
				HX_STACK_LINE(1881)
				_this->__updateFilters = tmp11;
				HX_STACK_LINE(1881)
				_this->__renderDirty = true;
				HX_STACK_LINE(1881)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(1882)
		this->__maskGraphics = null();
	}
	HX_STACK_LINE(1884)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1884)
	if ((tmp5)){
		HX_STACK_LINE(1884)
		value->__isMask = true;
	}
	HX_STACK_LINE(1885)
	::openfl::display::DisplayObject tmp6 = this->__mask = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1885)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1890,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1892)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1892)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1892)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1892)
	if ((tmp1)){
		HX_STACK_LINE(1892)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1892)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1892)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1892)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1892)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1893)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1893)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1893)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1893)
	if ((tmp4)){
		HX_STACK_LINE(1893)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1893)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1893)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1893)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1893)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1895)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1895)
	{
		HX_STACK_LINE(1895)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1895)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1895)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1895)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1895)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1895)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1895)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1895)
		if ((tmp11)){
			HX_STACK_LINE(1895)
			Float tmp12 = _this->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1895)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1895)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1895)
			Float tmp13 = _this->c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1895)
			Float tmp14 = (_this->ty - mouseY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1895)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1895)
			Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1895)
			Float tmp17 = (mouseX - _this->tx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1895)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1895)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1895)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1895)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1900,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1902)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1902)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1902)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1902)
	if ((tmp1)){
		HX_STACK_LINE(1902)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1902)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1902)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1902)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1902)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1903)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1903)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1903)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1903)
	if ((tmp4)){
		HX_STACK_LINE(1903)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1903)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1903)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1903)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1903)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1905)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1905)
	{
		HX_STACK_LINE(1905)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1905)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1905)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1905)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1905)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1905)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1905)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1905)
		if ((tmp11)){
			HX_STACK_LINE(1905)
			Float tmp12 = _this->ty;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1905)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1905)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1905)
			Float tmp13 = _this->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1905)
			Float tmp14 = (mouseY - _this->ty);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1905)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1905)
			Float tmp16 = _this->b;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1905)
			Float tmp17 = (_this->tx - mouseX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1905)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1905)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1905)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1905)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1910,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1912)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1912)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1917,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1919)
	::String tmp = this->__name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1919)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1924,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1926)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1926)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1926)
	if ((tmp1)){
		HX_STACK_LINE(1928)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1928)
		return tmp2;
	}
	HX_STACK_LINE(1932)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1937,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1939)
	Float tmp = this->__rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1939)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1944,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1946)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1946)
	Float tmp1 = this->__rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1946)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1946)
	if ((tmp2)){
		HX_STACK_LINE(1948)
		this->__rotation = value;
		HX_STACK_LINE(1949)
		Float tmp3 = this->__rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1949)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1949)
		Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1949)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1949)
		Float radians = tmp6;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(1950)
		Float tmp7 = radians;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1950)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1950)
		this->__rotationSine = tmp8;
		HX_STACK_LINE(1951)
		Float tmp9 = radians;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1951)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1951)
		this->__rotationCosine = tmp10;
		HX_STACK_LINE(1953)
		Float tmp11 = this->get_scaleX();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1953)
		Float __scaleX = tmp11;		HX_STACK_VAR(__scaleX,"__scaleX");
		HX_STACK_LINE(1954)
		Float tmp12 = this->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1954)
		Float __scaleY = tmp12;		HX_STACK_VAR(__scaleY,"__scaleY");
		HX_STACK_LINE(1956)
		Float tmp13 = this->__rotationCosine;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1956)
		Float tmp14 = __scaleX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1956)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1956)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1956)
		tmp16->a = tmp15;
		HX_STACK_LINE(1957)
		Float tmp17 = this->__rotationSine;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1957)
		Float tmp18 = __scaleX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1957)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1957)
		::openfl::geom::Matrix tmp20 = this->__transform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1957)
		tmp20->b = tmp19;
		HX_STACK_LINE(1958)
		Float tmp21 = this->__rotationSine;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1958)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1958)
		Float tmp23 = __scaleY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1958)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1958)
		::openfl::geom::Matrix tmp25 = this->__transform;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1958)
		tmp25->c = tmp24;
		HX_STACK_LINE(1959)
		Float tmp26 = this->__rotationCosine;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1959)
		Float tmp27 = __scaleY;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1959)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1959)
		::openfl::geom::Matrix tmp29 = this->__transform;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1959)
		tmp29->d = tmp28;
		HX_STACK_LINE(1961)
		{
			HX_STACK_LINE(1961)
			bool tmp30 = this->__transformDirty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1961)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1961)
			if ((tmp31)){
				HX_STACK_LINE(1961)
				this->__transformDirty = true;
				HX_STACK_LINE(1961)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(1965)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1965)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1970,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1972)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1972)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1972)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1972)
	if ((tmp2)){
		HX_STACK_LINE(1974)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1974)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1974)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1978)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1978)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1978)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1978)
		Float tmp6 = tmp5->a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1978)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1978)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1978)
		Float tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1978)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1978)
		Float tmp11 = tmp10->b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1978)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1978)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1978)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1978)
		return tmp14;
	}
	HX_STACK_LINE(1972)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1985,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1987)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1987)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1987)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1987)
	if ((tmp2)){
		HX_STACK_LINE(1989)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1989)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1989)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1989)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1989)
		if ((tmp6)){
			HX_STACK_LINE(1989)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1989)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1989)
			if ((tmp8)){
				HX_STACK_LINE(1989)
				this->__transformDirty = true;
				HX_STACK_LINE(1989)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1990)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1990)
		tmp7->a = value;
	}
	else{
		HX_STACK_LINE(1994)
		Float tmp3 = this->__rotationCosine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1994)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1994)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1994)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1995)
		Float tmp6 = this->__rotationSine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1995)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1995)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1995)
		Float b = tmp8;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1997)
		::openfl::geom::Matrix tmp9 = this->__transform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1997)
		Float tmp10 = tmp9->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1997)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1997)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1997)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1997)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1997)
		if ((tmp13)){
			HX_STACK_LINE(1997)
			::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1997)
			::openfl::geom::Matrix tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1997)
			Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1997)
			Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1997)
			tmp14 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(1997)
			tmp14 = true;
		}
		HX_STACK_LINE(1997)
		if ((tmp14)){
			HX_STACK_LINE(1999)
			bool tmp15 = this->__transformDirty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1999)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1999)
			if ((tmp16)){
				HX_STACK_LINE(1999)
				this->__transformDirty = true;
				HX_STACK_LINE(1999)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(2003)
		::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2003)
		tmp15->a = a;
		HX_STACK_LINE(2004)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2004)
		tmp16->b = b;
	}
	HX_STACK_LINE(2008)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2008)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",2013,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2015)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2015)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2015)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2015)
	if ((tmp2)){
		HX_STACK_LINE(2017)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2017)
		Float tmp4 = tmp3->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2017)
		return tmp4;
	}
	else{
		HX_STACK_LINE(2021)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2021)
		Float tmp4 = tmp3->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2021)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2021)
		Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2021)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2021)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2021)
		Float tmp9 = tmp8->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2021)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2021)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2021)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2021)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2021)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2021)
		return tmp14;
	}
	HX_STACK_LINE(2015)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",2028,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2030)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2030)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2030)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2030)
	if ((tmp2)){
		HX_STACK_LINE(2032)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2032)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2032)
		Float tmp5 = tmp4->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2032)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2032)
		if ((tmp6)){
			HX_STACK_LINE(2032)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2032)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2032)
			if ((tmp8)){
				HX_STACK_LINE(2032)
				this->__transformDirty = true;
				HX_STACK_LINE(2032)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(2033)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2033)
		tmp7->d = value;
	}
	else{
		HX_STACK_LINE(2037)
		Float tmp3 = this->__rotationSine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2037)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2037)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2037)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2037)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(2038)
		Float tmp7 = this->__rotationCosine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2038)
		Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2038)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2038)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(2040)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2040)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2040)
		Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2040)
		bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2040)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2040)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2040)
		if ((tmp14)){
			HX_STACK_LINE(2040)
			::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2040)
			::openfl::geom::Matrix tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2040)
			Float tmp18 = tmp17->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2040)
			Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2040)
			tmp15 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(2040)
			tmp15 = true;
		}
		HX_STACK_LINE(2040)
		if ((tmp15)){
			HX_STACK_LINE(2042)
			bool tmp16 = this->__transformDirty;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2042)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2042)
			if ((tmp17)){
				HX_STACK_LINE(2042)
				this->__transformDirty = true;
				HX_STACK_LINE(2042)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(2046)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2046)
		tmp16->c = c;
		HX_STACK_LINE(2047)
		::openfl::geom::Matrix tmp17 = this->__transform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2047)
		tmp17->d = d;
	}
	HX_STACK_LINE(2051)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2051)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",2056,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2058)
	::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2058)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2058)
	if ((tmp1)){
		HX_STACK_LINE(2058)
		return null();
	}
	HX_STACK_LINE(2060)
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2060)
	::openfl::geom::Rectangle tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2060)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",2065,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2067)
	::openfl::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2067)
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2067)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2067)
	if ((tmp2)){
		HX_STACK_LINE(2069)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2069)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2069)
		if ((tmp4)){
			HX_STACK_LINE(2069)
			this->__transformDirty = true;
			HX_STACK_LINE(2069)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(2074)
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2074)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",2079,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2081)
	::openfl::geom::Transform tmp = this->__objectTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2081)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2081)
	if ((tmp1)){
		HX_STACK_LINE(2083)
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2083)
		this->__objectTransform = tmp2;
	}
	HX_STACK_LINE(2087)
	::openfl::geom::Transform tmp2 = this->__objectTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2087)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",2092,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2094)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2094)
	if ((tmp)){
		HX_STACK_LINE(2096)
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2096)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(2100)
	::openfl::geom::Transform tmp1 = this->__objectTransform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2100)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2100)
	if ((tmp2)){
		HX_STACK_LINE(2102)
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2102)
		this->__objectTransform = tmp3;
	}
	HX_STACK_LINE(2106)
	{
		HX_STACK_LINE(2106)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2106)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2106)
		if ((tmp4)){
			HX_STACK_LINE(2106)
			this->__transformDirty = true;
			HX_STACK_LINE(2106)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(2107)
	::openfl::geom::Transform tmp3 = this->__objectTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2107)
	::openfl::geom::Matrix tmp4 = value->get_matrix();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2107)
	tmp3->set_matrix(tmp4);
	HX_STACK_LINE(2108)
	::openfl::geom::Transform tmp5 = this->__objectTransform;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2108)
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2108)
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2108)
	tmp5->set_colorTransform(tmp7);
	HX_STACK_LINE(2110)
	::openfl::geom::Transform tmp8 = this->__objectTransform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2110)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",2115,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2117)
	bool tmp = this->__visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",2122,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2124)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2124)
	bool tmp1 = this->__visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2124)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2124)
	if ((tmp2)){
		HX_STACK_LINE(2124)
		bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2124)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2124)
		if ((tmp4)){
			HX_STACK_LINE(2124)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(2124)
			bool tmp5 = (this->get_filters() != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2124)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2124)
			if ((tmp5)){
				HX_STACK_LINE(2124)
				int tmp7 = this->get_filters()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2124)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2124)
				tmp6 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(2124)
				tmp6 = false;
			}
			HX_STACK_LINE(2124)
			this->__updateFilters = tmp6;
			HX_STACK_LINE(2124)
			this->__renderDirty = true;
			HX_STACK_LINE(2124)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(2125)
	bool tmp3 = this->__visible = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2125)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",2130,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2132)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2132)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2133)
	{
		HX_STACK_LINE(2133)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2133)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2133)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(2135)
	Float tmp1 = bounds->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2135)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",2140,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2142)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2142)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2144)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2144)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(2145)
	matrix->identity();
	HX_STACK_LINE(2147)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2147)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2147)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(2149)
	bool tmp4 = (value != bounds->width);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2149)
	if ((tmp4)){
		HX_STACK_LINE(2151)
		Float tmp5 = (Float(value) / Float(bounds->width));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2151)
		this->set_scaleX(tmp5);
	}
	else{
		HX_STACK_LINE(2155)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(2159)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2159)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",2164,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2166)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2166)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2166)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",2171,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2173)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2173)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2173)
	Float tmp2 = tmp1->tx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2173)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2173)
	if ((tmp3)){
		HX_STACK_LINE(2173)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2173)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2173)
		if ((tmp5)){
			HX_STACK_LINE(2173)
			this->__transformDirty = true;
			HX_STACK_LINE(2173)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(2174)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2174)
	Float tmp5 = tmp4->tx = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2174)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",2179,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2181)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2181)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2181)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",2186,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2188)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2188)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2188)
	Float tmp2 = tmp1->ty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2188)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2188)
	if ((tmp3)){
		HX_STACK_LINE(2188)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2188)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2188)
		if ((tmp5)){
			HX_STACK_LINE(2188)
			this->__transformDirty = true;
			HX_STACK_LINE(2188)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(2189)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2189)
	Float tmp5 = tmp4->ty = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2189)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;

bool DisplayObject_obj::__cacheAsBitmapMode;


DisplayObject_obj::DisplayObject_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmapBounds,"cacheAsBitmapBounds");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_MARK_MEMBER_NAME(__maskCached,"__maskCached");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(__offset,"__offset");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__shader,"__shader");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapSmooth,"__cacheAsBitmapSmooth");
	HX_MARK_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_MARK_MEMBER_NAME(__updateCachedBitmap,"__updateCachedBitmap");
	HX_MARK_MEMBER_NAME(__cachedBitmap,"__cachedBitmap");
	HX_MARK_MEMBER_NAME(__cachedBitmapBounds,"__cachedBitmapBounds");
	HX_MARK_MEMBER_NAME(__cachedFilterBounds,"__cachedFilterBounds");
	HX_MARK_MEMBER_NAME(__updateFilters,"__updateFilters");
	HX_MARK_MEMBER_NAME(__cacheGLMatrix,"__cacheGLMatrix");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmapBounds,"cacheAsBitmapBounds");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_VISIT_MEMBER_NAME(__maskCached,"__maskCached");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(__offset,"__offset");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__shader,"__shader");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapSmooth,"__cacheAsBitmapSmooth");
	HX_VISIT_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__updateCachedBitmap,"__updateCachedBitmap");
	HX_VISIT_MEMBER_NAME(__cachedBitmap,"__cachedBitmap");
	HX_VISIT_MEMBER_NAME(__cachedBitmapBounds,"__cachedBitmapBounds");
	HX_VISIT_MEMBER_NAME(__cachedFilterBounds,"__cachedFilterBounds");
	HX_VISIT_MEMBER_NAME(__updateFilters,"__updateFilters");
	HX_VISIT_MEMBER_NAME(__cacheGLMatrix,"__cacheGLMatrix");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__offset") ) { return __offset; }
		if (HX_FIELD_EQ(inName,"__shader") ) { return __shader; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"__cacheGL") ) { return __cacheGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { return __maskCached; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { return __worldOffset; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"__preRenderGL") ) { return __preRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { return __maskGraphics; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__cachedBitmap") ) { return __cachedBitmap; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__postRenderGL") ) { return __postRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__updateFilters") ) { return __updateFilters; }
		if (HX_FIELD_EQ(inName,"__cacheGLMatrix") ) { return __cacheGLMatrix; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGraphicsGL") ) { return __drawGraphicsGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return __objectTransform; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapMatrix(); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapSmooth") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapSmooth(); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapBounds") ) { return cacheAsBitmapBounds; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return __getWorldTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { return __forceCacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__updateCachedBitmap") ) { return __updateCachedBitmap; }
		if (HX_FIELD_EQ(inName,"__cachedBitmapBounds") ) { return __cachedBitmapBounds; }
		if (HX_FIELD_EQ(inName,"__cachedFilterBounds") ) { return __cachedFilterBounds; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { return __cacheAsBitmapMatrix; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapSmooth") ) { return __cacheAsBitmapSmooth; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapMatrix") ) { return get_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapMatrix") ) { return set_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapSmooth") ) { return get_cacheAsBitmapSmooth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapSmooth") ) { return set_cacheAsBitmapSmooth_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { outValue = __worldRenderDirty; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMode") ) { outValue = __cacheAsBitmapMode; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { outValue = __worldTransformDirty; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offset") ) { __offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shader") ) { __shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue);blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { __maskCached=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { __worldOffset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { __maskGraphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedBitmap") ) { __cachedBitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__updateFilters") ) { __updateFilters=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheGLMatrix") ) { __cacheGLMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { __objectTransform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapMatrix(inValue); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapSmooth") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapSmooth(inValue); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapBounds") ) { cacheAsBitmapBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { __forceCacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__updateCachedBitmap") ) { __updateCachedBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedBitmapBounds") ) { __cachedBitmapBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedFilterBounds") ) { __cachedFilterBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { __cacheAsBitmapMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapSmooth") ) { __cacheAsBitmapSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMode") ) { __cacheAsBitmapMode=ioValue.Cast< bool >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("cacheAsBitmapMatrix","\x84","\xf9","\x81","\x95"));
	outFields->push(HX_HCSTRING("cacheAsBitmapSmooth","\x71","\xcb","\x24","\xe1"));
	outFields->push(HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"));
	outFields->push(HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"));
	outFields->push(HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"));
	outFields->push(HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f"));
	outFields->push(HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"));
	outFields->push(HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c"));
	outFields->push(HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65"));
	outFields->push(HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e"));
	outFields->push(HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70"));
	outFields->push(HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c"));
	outFields->push(HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,cacheAsBitmapBounds),HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(DisplayObject_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__worldOffset),HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__maskGraphics),HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__maskCached),HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__objectTransform),HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__offset),HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(DisplayObject_obj,__shader),HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheAsBitmapMatrix),HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmapSmooth),HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__forceCacheAsBitmap),HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__updateCachedBitmap),HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(DisplayObject_obj,__cachedBitmap),HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__cachedBitmapBounds),HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__cachedFilterBounds),HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__updateFilters),HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheGLMatrix),HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldRenderDirty,HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldTransformDirty,HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46")},
	{hx::fsBool,(void *) &DisplayObject_obj::__cacheAsBitmapMode,HX_HCSTRING("__cacheAsBitmapMode","\xc6","\x58","\x18","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"),
	HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"),
	HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"),
	HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"),
	HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f"),
	HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"),
	HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c"),
	HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65"),
	HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e"),
	HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70"),
	HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c"),
	HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getWorldTransform","\xd0","\xf4","\xfc","\x8b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__drawGraphicsGL","\xf4","\xa7","\x39","\x8e"),
	HX_HCSTRING("__preRenderGL","\x1e","\x63","\xbc","\x10"),
	HX_HCSTRING("__postRenderGL","\x9b","\xce","\x55","\x48"),
	HX_HCSTRING("__cacheGL","\xc7","\xbd","\x6f","\xa4"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_cacheAsBitmapMatrix","\x1b","\xa0","\xd7","\x9d"),
	HX_HCSTRING("set_cacheAsBitmapMatrix","\x27","\x09","\x39","\xa0"),
	HX_HCSTRING("get_cacheAsBitmapSmooth","\x08","\x72","\x7a","\xe9"),
	HX_HCSTRING("set_cacheAsBitmapSmooth","\x14","\xdb","\xdb","\xeb"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__cacheAsBitmapMode,"__cacheAsBitmapMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__cacheAsBitmapMode,"__cacheAsBitmapMode");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2"),
	HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46"),
	HX_HCSTRING("__cacheAsBitmapMode","\xc6","\x58","\x18","\xcf"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
	__cacheAsBitmapMode= false;
}

} // end namespace openfl
} // end namespace display
