#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",102,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	this->mouseChildren = true;
	HX_STACK_LINE(108)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(109)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",144,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(146)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(148)
		bool tmp1 = (child->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			child->parent->removeChild(tmp2);
		}
		HX_STACK_LINE(154)
		::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		this->__children->push(tmp2);
		HX_STACK_LINE(155)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(157)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(161)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			child->__setStageReference(tmp5);
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			bool tmp5 = child->__transformDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(165)
				child->__transformDirty = true;
				HX_STACK_LINE(165)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			bool tmp5 = child->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			if ((tmp6)){
				HX_STACK_LINE(166)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(166)
				bool tmp7 = (child->get_filters() != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				if ((tmp7)){
					HX_STACK_LINE(166)
					int tmp9 = child->get_filters()->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(166)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(166)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(166)
					tmp8 = false;
				}
				HX_STACK_LINE(166)
				child->__updateFilters = tmp8;
				HX_STACK_LINE(166)
				child->__renderDirty = true;
				HX_STACK_LINE(166)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			bool tmp5 = this->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			if ((tmp6)){
				HX_STACK_LINE(167)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(167)
				bool tmp7 = (this->get_filters() != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(167)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(167)
				if ((tmp7)){
					HX_STACK_LINE(167)
					int tmp9 = this->get_filters()->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(167)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(167)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(167)
					tmp8 = false;
				}
				HX_STACK_LINE(167)
				this->__updateFilters = tmp8;
				HX_STACK_LINE(167)
				this->__renderDirty = true;
				HX_STACK_LINE(167)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(169)
		::String tmp5 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(170)
		event->target = child;
		HX_STACK_LINE(171)
		::openfl::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		child->__dispatchEvent(tmp7);
	}
	HX_STACK_LINE(175)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",209,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(211)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	if ((tmp3)){
		HX_STACK_LINE(211)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(211)
		tmp4 = true;
	}
	HX_STACK_LINE(211)
	if ((tmp4)){
		HX_STACK_LINE(213)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(217)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(217)
	if ((tmp5)){
		HX_STACK_LINE(219)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(219)
		this->__children->remove(tmp6);
	}
	else{
		HX_STACK_LINE(223)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		if ((tmp6)){
			HX_STACK_LINE(225)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(229)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(231)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		if ((tmp8)){
			HX_STACK_LINE(235)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			child->__setStageReference(tmp9);
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			bool tmp9 = child->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(239)
			if ((tmp10)){
				HX_STACK_LINE(239)
				child->__transformDirty = true;
				HX_STACK_LINE(239)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			bool tmp9 = child->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			if ((tmp10)){
				HX_STACK_LINE(240)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(240)
				bool tmp11 = (child->get_filters() != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				if ((tmp11)){
					HX_STACK_LINE(240)
					int tmp13 = child->get_filters()->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(240)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(240)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(240)
					tmp12 = false;
				}
				HX_STACK_LINE(240)
				child->__updateFilters = tmp12;
				HX_STACK_LINE(240)
				child->__renderDirty = true;
				HX_STACK_LINE(240)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			bool tmp9 = this->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(241)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(241)
			if ((tmp10)){
				HX_STACK_LINE(241)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(241)
				bool tmp11 = (this->get_filters() != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(241)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(241)
				if ((tmp11)){
					HX_STACK_LINE(241)
					int tmp13 = this->get_filters()->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(241)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(241)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(241)
					tmp12 = false;
				}
				HX_STACK_LINE(241)
				this->__updateFilters = tmp12;
				HX_STACK_LINE(241)
				this->__renderDirty = true;
				HX_STACK_LINE(241)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(243)
		::String tmp9 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(243)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(243)
		::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(244)
		event->target = child;
		HX_STACK_LINE(245)
		::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(245)
		child->__dispatchEvent(tmp11);
	}
	HX_STACK_LINE(249)
	int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(249)
	::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(249)
	this->__children->insert(tmp6,tmp7);
	HX_STACK_LINE(251)
	::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(251)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",279,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(279)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",296,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(298)
	while((true)){
		HX_STACK_LINE(298)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp)){
			HX_STACK_LINE(298)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(298)
			tmp1 = false;
		}
		HX_STACK_LINE(298)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		if ((tmp2)){
			HX_STACK_LINE(298)
			break;
		}
		HX_STACK_LINE(300)
		child = child->parent;
	}
	HX_STACK_LINE(304)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",322,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(324)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	if ((tmp)){
		HX_STACK_LINE(324)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(324)
		tmp1 = false;
	}
	HX_STACK_LINE(324)
	if ((tmp1)){
		HX_STACK_LINE(326)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		return tmp2;
	}
	HX_STACK_LINE(330)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",353,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(355)
		while((true)){
			HX_STACK_LINE(355)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(355)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(355)
			if ((tmp1)){
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(355)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(355)
			++(_g);
			HX_STACK_LINE(357)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			if ((tmp5)){
				HX_STACK_LINE(357)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(361)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",374,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(376)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(376)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(376)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			if ((tmp2)){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(376)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(378)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(378)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(378)
			if ((tmp6)){
				HX_STACK_LINE(378)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(378)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(382)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",406,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(408)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(409)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	this->__hitTest(tmp,tmp1,false,stack,false);
	HX_STACK_LINE(410)
	stack->reverse();
	HX_STACK_LINE(411)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",435,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(437)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	if ((tmp)){
		HX_STACK_LINE(437)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(437)
		tmp1 = false;
	}
	HX_STACK_LINE(437)
	if ((tmp1)){
		HX_STACK_LINE(439)
		::String tmp2 = ::openfl::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(439)
		::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(tmp2,true,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		child->__dispatchEvent(tmp3);
		HX_STACK_LINE(441)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		if ((tmp5)){
			HX_STACK_LINE(443)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(447)
		child->parent = null();
		HX_STACK_LINE(448)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(448)
		this->__children->remove(tmp6);
		HX_STACK_LINE(449)
		::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(449)
		this->__removedChildren->push(tmp7);
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			bool tmp8 = child->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(450)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(450)
			if ((tmp9)){
				HX_STACK_LINE(450)
				child->__transformDirty = true;
				HX_STACK_LINE(450)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			bool tmp8 = child->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(451)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			if ((tmp9)){
				HX_STACK_LINE(451)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(451)
				bool tmp10 = (child->get_filters() != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(451)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(451)
				if ((tmp10)){
					HX_STACK_LINE(451)
					int tmp12 = child->get_filters()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(451)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(451)
					tmp11 = (tmp13 > (int)0);
				}
				else{
					HX_STACK_LINE(451)
					tmp11 = false;
				}
				HX_STACK_LINE(451)
				child->__updateFilters = tmp11;
				HX_STACK_LINE(451)
				child->__renderDirty = true;
				HX_STACK_LINE(451)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			bool tmp8 = this->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(452)
			if ((tmp9)){
				HX_STACK_LINE(452)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(452)
				bool tmp10 = (this->get_filters() != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				if ((tmp10)){
					HX_STACK_LINE(452)
					int tmp12 = this->get_filters()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(452)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(452)
					tmp11 = (tmp13 > (int)0);
				}
				else{
					HX_STACK_LINE(452)
					tmp11 = false;
				}
				HX_STACK_LINE(452)
				this->__updateFilters = tmp11;
				HX_STACK_LINE(452)
				this->__renderDirty = true;
				HX_STACK_LINE(452)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(456)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(456)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",483,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(485)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	if ((tmp)){
		HX_STACK_LINE(485)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(485)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(485)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(485)
		tmp1 = false;
	}
	HX_STACK_LINE(485)
	if ((tmp1)){
		HX_STACK_LINE(487)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(487)
		return tmp3;
	}
	HX_STACK_LINE(491)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",496,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(498)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(498)
		if ((tmp)){
			HX_STACK_LINE(500)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(500)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(500)
			endIndex = tmp2;
			HX_STACK_LINE(502)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(502)
			if ((tmp3)){
				HX_STACK_LINE(504)
				return null();
			}
		}
		HX_STACK_LINE(510)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		if ((tmp4)){
			HX_STACK_LINE(512)
			return null();
		}
		else{
			HX_STACK_LINE(514)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			if ((tmp7)){
				HX_STACK_LINE(514)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(514)
				tmp8 = true;
			}
			HX_STACK_LINE(514)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			if ((tmp9)){
				HX_STACK_LINE(514)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(514)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(514)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(514)
				tmp10 = true;
			}
			HX_STACK_LINE(514)
			if ((tmp10)){
				HX_STACK_LINE(516)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(516)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(520)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(521)
		while((true)){
			HX_STACK_LINE(521)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(521)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(521)
			if ((tmp7)){
				HX_STACK_LINE(521)
				break;
			}
			HX_STACK_LINE(523)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(523)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(524)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",531,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fieldName,"fieldName")
	HX_STACK_LINE(533)
	bool tmp = (this->__children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	if ((tmp)){
		HX_STACK_LINE(533)
		return null();
	}
	HX_STACK_LINE(535)
	{
		HX_STACK_LINE(535)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(535)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(535)
		while((true)){
			HX_STACK_LINE(535)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(535)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(535)
			if ((tmp2)){
				HX_STACK_LINE(535)
				break;
			}
			HX_STACK_LINE(535)
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(535)
			::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(535)
			++(_g);
			HX_STACK_LINE(537)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(537)
			if ((tmp6)){
				HX_STACK_LINE(539)
				::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(539)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(545)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",578,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(580)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(580)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		if ((tmp1)){
			HX_STACK_LINE(580)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(580)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(580)
			tmp2 = false;
		}
		HX_STACK_LINE(580)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		if ((tmp2)){
			HX_STACK_LINE(580)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(580)
			tmp3 = false;
		}
		HX_STACK_LINE(580)
		if ((tmp3)){
			HX_STACK_LINE(582)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			this->__children->remove(tmp4);
			HX_STACK_LINE(583)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",600,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(602)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		if ((tmp)){
			HX_STACK_LINE(602)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(602)
			tmp1 = false;
		}
		HX_STACK_LINE(602)
		if ((tmp1)){
			HX_STACK_LINE(606)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(606)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(607)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(607)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(607)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(630)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(631)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(631)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",647,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(649)
		::openfl::display::DisplayObject tmp = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(650)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(650)
		this->__children[child1] = tmp1;
		HX_STACK_LINE(651)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(651)
		this->__children[child2] = tmp2;
		HX_STACK_LINE(652)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",657,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(659)
	bool tmp = (event->target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	if ((tmp)){
		HX_STACK_LINE(661)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(665)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(665)
	bool tmp2 = notifyChilden;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(665)
	bool tmp3 = this->super::__broadcast(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(665)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(667)
	bool tmp4 = event->__isCancelled;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(667)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(667)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(667)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(667)
	if ((tmp6)){
		HX_STACK_LINE(667)
		tmp7 = notifyChilden;
	}
	else{
		HX_STACK_LINE(667)
		tmp7 = false;
	}
	HX_STACK_LINE(667)
	if ((tmp7)){
		HX_STACK_LINE(669)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(669)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(669)
		while((true)){
			HX_STACK_LINE(669)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(669)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(669)
			if ((tmp9)){
				HX_STACK_LINE(669)
				break;
			}
			HX_STACK_LINE(669)
			::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(669)
			::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(669)
			++(_g);
			HX_STACK_LINE(671)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(671)
			child->__broadcast(tmp11,true);
			HX_STACK_LINE(673)
			bool tmp12 = event->__isCancelled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(673)
			if ((tmp12)){
				HX_STACK_LINE(675)
				return true;
			}
		}
	}
	HX_STACK_LINE(683)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(683)
	return tmp8;
}


Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",690,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(690)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(690)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(690)
		while((true)){
			HX_STACK_LINE(690)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(690)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(690)
			if ((tmp1)){
				HX_STACK_LINE(690)
				break;
			}
			HX_STACK_LINE(690)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(690)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(690)
			++(_g);
			HX_STACK_LINE(692)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(692)
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",699,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(701)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(703)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(703)
		if ((tmp3)){
			HX_STACK_LINE(703)
			return null();
		}
		HX_STACK_LINE(705)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		if ((tmp4)){
			HX_STACK_LINE(707)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(707)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(708)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(712)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(712)
			while((true)){
				HX_STACK_LINE(712)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(712)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(712)
				if ((tmp6)){
					HX_STACK_LINE(712)
					break;
				}
				HX_STACK_LINE(712)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(712)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(712)
				++(_g);
				HX_STACK_LINE(714)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(714)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(714)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(714)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(714)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(714)
				if ((tmp11)){
					HX_STACK_LINE(714)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(714)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(714)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(714)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(714)
					tmp12 = true;
				}
				HX_STACK_LINE(714)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(714)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(714)
				if ((tmp13)){
					HX_STACK_LINE(714)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(714)
					tmp14 = true;
				}
				HX_STACK_LINE(714)
				if ((tmp14)){
					HX_STACK_LINE(714)
					continue;
				}
				HX_STACK_LINE(715)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(715)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(715)
				child->__getBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(719)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		if ((tmp5)){
			HX_STACK_LINE(721)
			this->__updateTransforms(null());
			HX_STACK_LINE(722)
			this->__updateChildren(true);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",728,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(730)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(730)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(730)
		if ((tmp1)){
			HX_STACK_LINE(731)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(731)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(731)
			this->super::__getRenderBounds(tmp2,tmp3);
			HX_STACK_LINE(732)
			return null();
		}
		else{
			HX_STACK_LINE(734)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(734)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(734)
			this->super::__getBounds(tmp2,tmp3);
		}
		HX_STACK_LINE(737)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(737)
		if ((tmp3)){
			HX_STACK_LINE(737)
			return null();
		}
		HX_STACK_LINE(739)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(739)
		if ((tmp4)){
			HX_STACK_LINE(741)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(741)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(742)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(746)
		{
			HX_STACK_LINE(746)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(746)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(746)
			while((true)){
				HX_STACK_LINE(746)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(746)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(746)
				if ((tmp6)){
					HX_STACK_LINE(746)
					break;
				}
				HX_STACK_LINE(746)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(746)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(746)
				++(_g);
				HX_STACK_LINE(748)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(748)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(748)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(748)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(748)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(748)
				if ((tmp11)){
					HX_STACK_LINE(748)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(748)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(748)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(748)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(748)
					tmp12 = true;
				}
				HX_STACK_LINE(748)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(748)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(748)
				if ((tmp13)){
					HX_STACK_LINE(748)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(748)
					tmp14 = true;
				}
				HX_STACK_LINE(748)
				if ((tmp14)){
					HX_STACK_LINE(748)
					continue;
				}
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(749)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(749)
				child->__getRenderBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(753)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(753)
		if ((tmp5)){
			HX_STACK_LINE(755)
			this->__updateTransforms(null());
			HX_STACK_LINE(756)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",762,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(764)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(764)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(764)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(764)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(764)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(764)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(764)
	if ((tmp4)){
		HX_STACK_LINE(764)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(764)
		tmp5 = true;
	}
	HX_STACK_LINE(764)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(764)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(764)
	if ((tmp6)){
		HX_STACK_LINE(764)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(764)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(764)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(764)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(764)
		if ((tmp11)){
			HX_STACK_LINE(764)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(764)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(764)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(764)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(764)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(764)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(764)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(764)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(764)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(764)
			tmp10 = false;
		}
		HX_STACK_LINE(764)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(764)
		if ((tmp12)){
			HX_STACK_LINE(764)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(764)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(764)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(764)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(764)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(764)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(764)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(764)
		tmp7 = true;
	}
	HX_STACK_LINE(764)
	if ((tmp7)){
		HX_STACK_LINE(764)
		return false;
	}
	HX_STACK_LINE(765)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(765)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(765)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(765)
	if ((tmp9)){
		HX_STACK_LINE(765)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(765)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(765)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(765)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(765)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(765)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(765)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(765)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(765)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(765)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(765)
		tmp10 = false;
	}
	HX_STACK_LINE(765)
	if ((tmp10)){
		HX_STACK_LINE(765)
		return false;
	}
	HX_STACK_LINE(766)
	::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(766)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(766)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(766)
	if ((tmp12)){
		HX_STACK_LINE(766)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(766)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp19 = this->globalToLocal(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(766)
		::openfl::geom::Point tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(766)
		bool tmp22 = tmp15->containsPoint(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(766)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(766)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(766)
		tmp13 = !(tmp24);
	}
	else{
		HX_STACK_LINE(766)
		tmp13 = false;
	}
	HX_STACK_LINE(766)
	if ((tmp13)){
		HX_STACK_LINE(766)
		return false;
	}
	HX_STACK_LINE(768)
	int tmp14 = this->__children->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(768)
	int i = tmp14;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(769)
	bool tmp15 = interactiveOnly;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(769)
	if ((tmp15)){
		HX_STACK_LINE(771)
		bool tmp16 = (stack == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(771)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(771)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(771)
		if ((tmp17)){
			HX_STACK_LINE(771)
			bool tmp19 = this->mouseChildren;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(771)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(771)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(771)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(771)
			tmp18 = true;
		}
		HX_STACK_LINE(771)
		if ((tmp18)){
			HX_STACK_LINE(773)
			while((true)){
				HX_STACK_LINE(773)
				int tmp19 = --(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(773)
				bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(773)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(773)
				if ((tmp21)){
					HX_STACK_LINE(773)
					break;
				}
				HX_STACK_LINE(775)
				::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(775)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(775)
				Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(775)
				bool tmp25 = shapeFlag;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(775)
				bool tmp26 = tmp22->__hitTest(tmp23,tmp24,tmp25,null(),true);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(775)
				if ((tmp26)){
					HX_STACK_LINE(777)
					bool tmp27 = (stack != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(777)
					if ((tmp27)){
						HX_STACK_LINE(779)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(783)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(789)
			bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(789)
			if ((tmp19)){
				HX_STACK_LINE(791)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(793)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(794)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(796)
				while((true)){
					HX_STACK_LINE(796)
					int tmp20 = --(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(796)
					bool tmp21 = (tmp20 >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(796)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(796)
					if ((tmp22)){
						HX_STACK_LINE(796)
						break;
					}
					HX_STACK_LINE(798)
					::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(798)
					bool tmp24 = tmp23->__getInteractive(null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(798)
					interactive = tmp24;
					HX_STACK_LINE(800)
					bool tmp25 = interactive;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(800)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(800)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(800)
					if ((tmp26)){
						HX_STACK_LINE(800)
						bool tmp28 = this->mouseEnabled;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(800)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(800)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(800)
						if ((tmp30)){
							HX_STACK_LINE(800)
							bool tmp31 = hitTest;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(800)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(800)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(800)
							tmp27 = !(tmp33);
						}
						else{
							HX_STACK_LINE(800)
							tmp27 = false;
						}
					}
					else{
						HX_STACK_LINE(800)
						tmp27 = true;
					}
					HX_STACK_LINE(800)
					if ((tmp27)){
						HX_STACK_LINE(802)
						::openfl::display::DisplayObject tmp28 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(802)
						Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(802)
						Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(802)
						bool tmp31 = shapeFlag;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(802)
						bool tmp32 = tmp28->__hitTest(tmp29,tmp30,tmp31,stack,true);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(802)
						if ((tmp32)){
							HX_STACK_LINE(804)
							hitTest = true;
							HX_STACK_LINE(806)
							bool tmp33 = interactive;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(806)
							if ((tmp33)){
								HX_STACK_LINE(808)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(818)
				bool tmp20 = hitTest;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(818)
				if ((tmp20)){
					HX_STACK_LINE(820)
					int tmp21 = length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(820)
					stack->insert(tmp21,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(821)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			int tmp16 = --(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(829)
			bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(829)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(829)
			if ((tmp18)){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(831)
			::openfl::display::DisplayObject tmp19 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(831)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(831)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(831)
			bool tmp22 = shapeFlag;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(831)
			tmp19->__hitTest(tmp20,tmp21,tmp22,stack,false);
		}
	}
	HX_STACK_LINE(837)
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",842,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(844)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(846)
	while((true)){
		HX_STACK_LINE(846)
		int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(846)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(846)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(846)
		if ((tmp3)){
			HX_STACK_LINE(846)
			break;
		}
		HX_STACK_LINE(848)
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(848)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(848)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(848)
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(848)
		if ((tmp7)){
			HX_STACK_LINE(850)
			return true;
		}
	}
	HX_STACK_LINE(856)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",861,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(863)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(863)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(863)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(863)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(863)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(863)
		if ((tmp3)){
			HX_STACK_LINE(863)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(863)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(863)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(863)
			tmp4 = true;
		}
		HX_STACK_LINE(863)
		if ((tmp4)){
			HX_STACK_LINE(863)
			return null();
		}
		HX_STACK_LINE(865)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(865)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(867)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(867)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		if ((tmp7)){
			HX_STACK_LINE(869)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(869)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(869)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(873)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(873)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(873)
		if ((tmp9)){
			HX_STACK_LINE(875)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(875)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(879)
		{
			HX_STACK_LINE(879)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(879)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(879)
			while((true)){
				HX_STACK_LINE(879)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(879)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(879)
				if ((tmp11)){
					HX_STACK_LINE(879)
					break;
				}
				HX_STACK_LINE(879)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(879)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(879)
				++(_g);
				HX_STACK_LINE(881)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(881)
				child->__renderCairo(tmp13);
			}
		}
		HX_STACK_LINE(885)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(885)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(885)
		if ((tmp11)){
			HX_STACK_LINE(887)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(887)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(891)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(891)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(891)
		if ((tmp13)){
			HX_STACK_LINE(893)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(897)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(897)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(897)
		if ((tmp15)){
			HX_STACK_LINE(899)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",906,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(908)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		if ((tmp1)){
			HX_STACK_LINE(910)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(910)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(910)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(919)
		{
			HX_STACK_LINE(919)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(919)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(919)
			while((true)){
				HX_STACK_LINE(919)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(919)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(919)
				if ((tmp3)){
					HX_STACK_LINE(919)
					break;
				}
				HX_STACK_LINE(919)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(919)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(919)
				++(_g);
				HX_STACK_LINE(921)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(921)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",928,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(930)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(930)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(930)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(930)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(930)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(930)
		if ((tmp3)){
			HX_STACK_LINE(930)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(930)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(930)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(930)
			tmp4 = true;
		}
		HX_STACK_LINE(930)
		if ((tmp4)){
			HX_STACK_LINE(930)
			return null();
		}
		HX_STACK_LINE(934)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(934)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(936)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(936)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(936)
		if ((tmp7)){
			HX_STACK_LINE(938)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(938)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(938)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(942)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(942)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(942)
		if ((tmp9)){
			HX_STACK_LINE(944)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(944)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(948)
		{
			HX_STACK_LINE(948)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(948)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(948)
			while((true)){
				HX_STACK_LINE(948)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(948)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(948)
				if ((tmp11)){
					HX_STACK_LINE(948)
					break;
				}
				HX_STACK_LINE(948)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(948)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(948)
				++(_g);
				HX_STACK_LINE(950)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(950)
				child->__renderCanvas(tmp13);
			}
		}
		HX_STACK_LINE(954)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(954)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(954)
		if ((tmp11)){
			HX_STACK_LINE(956)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(956)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(960)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(960)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(960)
		if ((tmp13)){
			HX_STACK_LINE(962)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(966)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(966)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(966)
		if ((tmp15)){
			HX_STACK_LINE(968)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",977,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(979)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(979)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(979)
		if ((tmp1)){
			HX_STACK_LINE(981)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(981)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(981)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(985)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(985)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(986)
		{
			HX_STACK_LINE(986)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(986)
			::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(986)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(988)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(988)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(988)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",999,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1005)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1005)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(1007)
		::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1007)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1007)
		if ((tmp2)){
			HX_STACK_LINE(1009)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1009)
			renderSession->maskManager->pushMask(tmp3);
		}
		HX_STACK_LINE(1015)
		{
			HX_STACK_LINE(1015)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1015)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1015)
			while((true)){
				HX_STACK_LINE(1015)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1015)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1015)
				if ((tmp4)){
					HX_STACK_LINE(1015)
					break;
				}
				HX_STACK_LINE(1015)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1015)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1015)
				++(_g);
				HX_STACK_LINE(1017)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1017)
				child->__renderDOM(tmp6);
			}
		}
		HX_STACK_LINE(1021)
		{
			HX_STACK_LINE(1021)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1021)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1021)
			while((true)){
				HX_STACK_LINE(1021)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1021)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1021)
				if ((tmp4)){
					HX_STACK_LINE(1021)
					break;
				}
				HX_STACK_LINE(1021)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1021)
				::openfl::display::DisplayObject orphan = tmp5;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(1021)
				++(_g);
				HX_STACK_LINE(1023)
				bool tmp6 = (orphan->stage == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1023)
				if ((tmp6)){
					HX_STACK_LINE(1025)
					::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1025)
					orphan->__renderDOM(tmp7);
				}
			}
		}
		HX_STACK_LINE(1031)
		int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1031)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1031)
		if ((tmp4)){
			HX_STACK_LINE(1033)
			int tmp5 = this->__removedChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1033)
			this->__removedChildren->splice((int)0,tmp5);
		}
		HX_STACK_LINE(1037)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1037)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1037)
		if ((tmp6)){
			HX_STACK_LINE(1039)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",1048,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1050)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1050)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1050)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1050)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1050)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1050)
		if ((tmp3)){
			HX_STACK_LINE(1050)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1050)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1050)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(1050)
			tmp4 = true;
		}
		HX_STACK_LINE(1050)
		if ((tmp4)){
			HX_STACK_LINE(1050)
			return null();
		}
		HX_STACK_LINE(1052)
		bool tmp5 = this->__cacheAsBitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1052)
		if ((tmp5)){
			HX_STACK_LINE(1053)
			{
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp6 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1053)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1053)
				bool hasCacheMatrix = tmp7;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(1053)
				::openfl::geom::Rectangle tmp8 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1053)
				Float x = tmp8->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1053)
				::openfl::geom::Rectangle tmp9 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1053)
				Float y = tmp9->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1053)
				::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1053)
				Float w = tmp10->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(1053)
				::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1053)
				Float h = tmp11->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp12 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1053)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1053)
				if ((tmp13)){
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1053)
					this->__cacheGLMatrix = tmp14;
				}
				HX_STACK_LINE(1053)
				bool tmp14 = hasCacheMatrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1053)
				if ((tmp14)){
					HX_STACK_LINE(1053)
					::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1053)
					::openfl::geom::Rectangle bmpBounds = tmp15;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(1053)
					::openfl::geom::Rectangle tmp16 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1053)
					::openfl::geom::Rectangle tmp17 = bmpBounds;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp18 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1053)
					tmp16->__transform(tmp17,tmp18);
					HX_STACK_LINE(1053)
					x = bmpBounds->x;
					HX_STACK_LINE(1053)
					y = bmpBounds->y;
					HX_STACK_LINE(1053)
					w = bmpBounds->width;
					HX_STACK_LINE(1053)
					h = bmpBounds->height;
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1053)
					{
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix tmp20 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1053)
						tmp19 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1053)
					this->__cacheGLMatrix = tmp19;
				}
				else{
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1053)
					tmp15->identity();
				}
				HX_STACK_LINE(1053)
				bool tmp15 = (w <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1053)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1053)
				if ((tmp15)){
					HX_STACK_LINE(1053)
					tmp16 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(1053)
					tmp16 = false;
				}
				HX_STACK_LINE(1053)
				if ((tmp16)){
					HX_STACK_LINE(1053)
					::String tmp17 = (HX_HCSTRING("Error creating a cached bitmap. The texture size is ","\x1c","\x68","\x47","\xb0") + w);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1053)
					::String tmp18 = (tmp17 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1053)
					Float tmp19 = h;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1053)
					::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1053)
					HX_STACK_DO_THROW(tmp20);
				}
				HX_STACK_LINE(1053)
				bool tmp17 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1053)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1053)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1053)
				if ((tmp18)){
					HX_STACK_LINE(1053)
					tmp19 = this->__updateFilters;
				}
				else{
					HX_STACK_LINE(1053)
					tmp19 = true;
				}
				HX_STACK_LINE(1053)
				if ((tmp19)){
					HX_STACK_LINE(1053)
					::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1053)
					bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1053)
					if ((tmp21)){
						HX_STACK_LINE(1053)
						::openfl::geom::Rectangle tmp22 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1053)
						Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1053)
						Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1053)
						::openfl::geom::Rectangle tmp25 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1053)
						Float tmp26 = tmp25->width;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1053)
						Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1053)
						Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1053)
						hx::AddEq(w,tmp28);
						HX_STACK_LINE(1053)
						::openfl::geom::Rectangle tmp29 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1053)
						Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1053)
						Float tmp31 = ::Math_obj::abs(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1053)
						::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1053)
						Float tmp33 = tmp32->height;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1053)
						Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1053)
						Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1053)
						hx::AddEq(h,tmp35);
					}
					HX_STACK_LINE(1053)
					::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1053)
					bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1053)
					if ((tmp23)){
						HX_STACK_LINE(1053)
						::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1053)
						this->__cachedBitmap = tmp24;
					}
					HX_STACK_LINE(1053)
					::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1053)
					Float tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1053)
					int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1053)
					Float tmp27 = h;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1053)
					int tmp28 = ::Math_obj::ceil(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1053)
					tmp24->__resize(tmp26,tmp28);
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1053)
					{
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix tmp30 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1053)
						::openfl::geom::Matrix _this = tmp30;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1053)
						tmp29 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix m = tmp29;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1053)
					Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1053)
					Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1053)
					Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1053)
					Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1053)
					m->translate(tmp31,tmp33);
					HX_STACK_LINE(1053)
					::openfl::display::Shader tmp34 = this->__shader;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1053)
					::openfl::display::Shader shader = tmp34;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(1053)
					this->__shader = null();
					HX_STACK_LINE(1053)
					::openfl::display::BitmapData tmp35 = this->__cachedBitmap;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1053)
					::openfl::_internal::renderer::RenderSession tmp36 = renderSession;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp37 = m;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1053)
					tmp35->__drawGL(tmp36,hx::ObjectPtr<OBJ_>(this),tmp37,null(),null(),null(),true,false,true,null(),null());
					HX_STACK_LINE(1053)
					this->__shader = shader;
					HX_STACK_LINE(1053)
					this->__updateCachedBitmap = false;
				}
				HX_STACK_LINE(1053)
				bool tmp20 = this->__updateFilters;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1053)
				if ((tmp20)){
					HX_STACK_LINE(1053)
					::openfl::_internal::renderer::RenderSession tmp21 = renderSession;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1053)
					::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1053)
					::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1053)
					::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp21,tmp22,tmp23,null(),null());
					HX_STACK_LINE(1053)
					this->__updateFilters = false;
				}
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp21 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1053)
				tmp21->invert();
				HX_STACK_LINE(1053)
				{
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1053)
					::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1053)
					Float tmp23 = (x * _this->a);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1053)
					Float tmp24 = (y * _this->c);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1053)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1053)
					Float tmp26 = _this->tx;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1053)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1053)
					_this->tx = tmp27;
					HX_STACK_LINE(1053)
					Float tmp28 = (x * _this->b);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1053)
					Float tmp29 = (y * _this->d);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1053)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1053)
					Float tmp31 = _this->ty;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1053)
					Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1053)
					_this->ty = tmp32;
				}
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp23 = this->__renderTransform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1053)
				tmp22->concat(tmp23);
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp24 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1053)
				::openfl::geom::Point tmp25 = this->__offset;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1053)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1053)
				::openfl::geom::Point tmp27 = this->__offset;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1053)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1053)
				tmp24->translate(tmp26,tmp28);
				HX_STACK_LINE(1053)
				::openfl::display::BitmapData tmp29 = this->__cachedBitmap;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1053)
				bool tmp30 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1053)
				::openfl::geom::Matrix tmp31 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1053)
				::openfl::geom::ColorTransform tmp32 = this->__worldColorTransform;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1053)
				Float tmp33 = this->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1053)
				::openfl::display::BlendMode tmp34 = this->blendMode;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1053)
				::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1053)
				renderSession->spriteBatch->renderBitmapData(tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,::openfl::display::PixelSnapping_obj::ALWAYS,null());
			}
			HX_STACK_LINE(1054)
			return null();
		}
		HX_STACK_LINE(1057)
		{
			HX_STACK_LINE(1057)
			::openfl::geom::Rectangle tmp6 = this->__scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1057)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1057)
			if ((tmp7)){
				HX_STACK_LINE(1057)
				::openfl::geom::Rectangle tmp8 = this->__scrollRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1057)
				::openfl::geom::Matrix tmp9 = this->__renderTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1057)
				renderSession->maskManager->pushRect(tmp8,tmp9);
			}
			HX_STACK_LINE(1057)
			::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1057)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1057)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1057)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1057)
			if ((tmp10)){
				HX_STACK_LINE(1057)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1057)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1057)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1057)
				tmp11 = (tmp14 != null());
			}
			else{
				HX_STACK_LINE(1057)
				tmp11 = false;
			}
			HX_STACK_LINE(1057)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1057)
			if ((tmp11)){
				HX_STACK_LINE(1057)
				::openfl::display::Graphics tmp13 = this->__maskGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1057)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1057)
				int tmp15 = tmp14->__commands->get_length();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1057)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1057)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(1057)
				tmp12 = false;
			}
			HX_STACK_LINE(1057)
			if ((tmp12)){
				HX_STACK_LINE(1057)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(1058)
		{
			HX_STACK_LINE(1058)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1058)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1058)
			if ((tmp7)){
				HX_STACK_LINE(1058)
				::openfl::display::Graphics tmp8 = this->__graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1058)
				bool tmp9 = tmp8->__hardware;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1058)
				if ((tmp9)){
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp10);
				}
				else{
					HX_STACK_LINE(1058)
					::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp10,tmp11);
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1058)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp12,null());
				}
			}
		}
		HX_STACK_LINE(1060)
		{
			HX_STACK_LINE(1060)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1060)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1060)
			while((true)){
				HX_STACK_LINE(1060)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1060)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1060)
				if ((tmp7)){
					HX_STACK_LINE(1060)
					break;
				}
				HX_STACK_LINE(1060)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1060)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1060)
				++(_g);
				HX_STACK_LINE(1062)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1062)
				child->__renderGL(tmp9);
			}
		}
		HX_STACK_LINE(1066)
		{
			HX_STACK_LINE(1066)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1066)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1066)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1066)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1066)
			if ((tmp8)){
				HX_STACK_LINE(1066)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1066)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1066)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1066)
				tmp9 = (tmp12 != null());
			}
			else{
				HX_STACK_LINE(1066)
				tmp9 = false;
			}
			HX_STACK_LINE(1066)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1066)
			if ((tmp9)){
				HX_STACK_LINE(1066)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1066)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1066)
				int tmp13 = tmp12->__commands->get_length();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1066)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1066)
				tmp10 = (tmp14 > (int)0);
			}
			else{
				HX_STACK_LINE(1066)
				tmp10 = false;
			}
			HX_STACK_LINE(1066)
			if ((tmp10)){
				HX_STACK_LINE(1066)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(1066)
			::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1066)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1066)
			if ((tmp12)){
				HX_STACK_LINE(1066)
				renderSession->maskManager->popRect();
			}
		}
		HX_STACK_LINE(1068)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1068)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1068)
		if ((tmp7)){
			HX_STACK_LINE(1070)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1070)
			this->__removedChildren->splice((int)0,tmp8);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",1077,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1079)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1079)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1079)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1079)
		if ((tmp2)){
			HX_STACK_LINE(1081)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1081)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1081)
			if ((tmp4)){
				HX_STACK_LINE(1083)
				::String tmp5 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1083)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1083)
				this->__dispatchEvent(tmp6);
			}
			HX_STACK_LINE(1087)
			this->stage = stage;
			HX_STACK_LINE(1089)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1089)
			if ((tmp5)){
				HX_STACK_LINE(1091)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1091)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1091)
				this->__dispatchEvent(tmp7);
			}
			HX_STACK_LINE(1095)
			bool tmp6 = (this->__children != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1095)
			if ((tmp6)){
				HX_STACK_LINE(1097)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1097)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1097)
				while((true)){
					HX_STACK_LINE(1097)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1097)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1097)
					if ((tmp8)){
						HX_STACK_LINE(1097)
						break;
					}
					HX_STACK_LINE(1097)
					::openfl::display::DisplayObject tmp9 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1097)
					::openfl::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1097)
					++(_g);
					HX_STACK_LINE(1099)
					::openfl::display::Stage tmp10 = stage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1099)
					child->__setStageReference(tmp10);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1110,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1112)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1112)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1112)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1112)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(1115)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1115)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1115)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1115)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1115)
		if ((tmp5)){
			HX_STACK_LINE(1115)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1115)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1115)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1115)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1115)
			tmp6 = false;
		}
		HX_STACK_LINE(1115)
		if ((tmp6)){
			HX_STACK_LINE(1117)
			return null();
		}
		HX_STACK_LINE(1123)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1123)
		if ((tmp7)){
			HX_STACK_LINE(1125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1125)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1125)
			while((true)){
				HX_STACK_LINE(1125)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1125)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1125)
				if ((tmp9)){
					HX_STACK_LINE(1125)
					break;
				}
				HX_STACK_LINE(1125)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1125)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1125)
				++(_g);
				HX_STACK_LINE(1127)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1127)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1127)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1136,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1138)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1138)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(1140)
		{
			HX_STACK_LINE(1140)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1140)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1140)
			while((true)){
				HX_STACK_LINE(1140)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1140)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1140)
				if ((tmp2)){
					HX_STACK_LINE(1140)
					break;
				}
				HX_STACK_LINE(1140)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1140)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1140)
				++(_g);
				HX_STACK_LINE(1142)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1142)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1156,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1158)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1158)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObjectContainer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DisplayObjectContainer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
