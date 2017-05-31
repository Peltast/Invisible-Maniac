#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Void
#include <lime/app/Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
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
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",574,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(576)
	super::__construct();
	HX_STACK_LINE(578)
	this->__caretIndex = (int)-1;
	HX_STACK_LINE(579)
	::openfl::display::Graphics tmp = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	this->__graphics = tmp;
	HX_STACK_LINE(580)
	::openfl::_internal::text::TextEngine tmp1 = ::openfl::_internal::text::TextEngine_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	this->__textEngine = tmp1;
	HX_STACK_LINE(581)
	this->__layoutDirty = true;
	HX_STACK_LINE(582)
	this->__tabEnabled = true;
	HX_STACK_LINE(584)
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(584)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(584)
	if ((tmp3)){
		HX_STACK_LINE(586)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),(int)12,(int)0,false,false,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(586)
		::openfl::text::TextField_obj::__defaultTextFormat = tmp4;
		HX_STACK_LINE(587)
		::openfl::text::TextFormat tmp5 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(587)
		tmp5->blockIndent = (int)0;
		HX_STACK_LINE(588)
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(588)
		tmp6->bullet = false;
		HX_STACK_LINE(589)
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(589)
		tmp7->letterSpacing = (int)0;
		HX_STACK_LINE(590)
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(590)
		tmp8->kerning = false;
	}
	HX_STACK_LINE(594)
	::openfl::text::TextFormat tmp4 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(594)
	::openfl::text::TextFormat tmp5 = tmp4->clone();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(594)
	this->__textFormat = tmp5;
	HX_STACK_LINE(595)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(595)
	::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(595)
	::openfl::_internal::text::TextFormatRange tmp8 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp7,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(595)
	tmp6->textFormatRanges->push(tmp8);
	HX_STACK_LINE(597)
	::String tmp9 = ::openfl::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(597)
	Dynamic tmp10 = this->this_onMouseDown_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(597)
	this->addEventListener(tmp9,tmp10,null(),null(),null());
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",611,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(613)
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		hx::AddEq(tmp->text,text);
		HX_STACK_LINE(614)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		int tmp2 = tmp1->text.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(614)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		int tmp5 = tmp4->textFormatRanges->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(614)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(614)
		::openfl::_internal::text::TextFormatRange tmp7 = tmp3->textFormatRanges->__get(tmp6).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(614)
		tmp7->end = tmp2;
		HX_STACK_LINE(616)
		this->__dirty = true;
		HX_STACK_LINE(617)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",631,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(633)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	if ((tmp1)){
		HX_STACK_LINE(633)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(633)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(633)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(633)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(633)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(633)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(633)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(633)
		tmp2 = true;
	}
	HX_STACK_LINE(633)
	if ((tmp2)){
		HX_STACK_LINE(633)
		return null();
	}
	HX_STACK_LINE(635)
	this->__updateLayout();
	HX_STACK_LINE(637)
	{
		HX_STACK_LINE(637)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(637)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(637)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(637)
		while((true)){
			HX_STACK_LINE(637)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			if ((tmp5)){
				HX_STACK_LINE(637)
				break;
			}
			HX_STACK_LINE(637)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(637)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(637)
			++(_g);
			HX_STACK_LINE(639)
			bool tmp7 = (charIndex >= group->startIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(639)
			if ((tmp7)){
				HX_STACK_LINE(639)
				tmp8 = (charIndex <= group->endIndex);
			}
			else{
				HX_STACK_LINE(639)
				tmp8 = false;
			}
			HX_STACK_LINE(639)
			if ((tmp8)){
				HX_STACK_LINE(641)
				Float x = group->offsetX;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(643)
				{
					HX_STACK_LINE(643)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(643)
					int tmp9 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(643)
					int _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(643)
					while((true)){
						HX_STACK_LINE(643)
						bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(643)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(643)
						if ((tmp11)){
							HX_STACK_LINE(643)
							break;
						}
						HX_STACK_LINE(643)
						int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(643)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(645)
						Float tmp13 = group->advances->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(645)
						hx::AddEq(x,tmp13);
					}
				}
				HX_STACK_LINE(649)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(649)
				Float tmp10 = group->offsetY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(649)
				int tmp11 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(649)
				Float tmp12 = group->advances->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(649)
				Float tmp13 = (group->ascent + group->descent);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(649)
				::openfl::geom::Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__new(tmp9,tmp10,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(649)
				return tmp14;
			}
		}
	}
	HX_STACK_LINE(655)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",670,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(672)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(672)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(672)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(672)
	if ((tmp2)){
		HX_STACK_LINE(672)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(672)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(672)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(672)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(672)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(672)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(672)
		tmp3 = true;
	}
	HX_STACK_LINE(672)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(672)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(672)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(672)
	if ((tmp5)){
		HX_STACK_LINE(672)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(672)
		tmp6 = true;
	}
	HX_STACK_LINE(672)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(672)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(672)
	if ((tmp7)){
		HX_STACK_LINE(672)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(672)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(672)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(672)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(672)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(672)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(672)
		tmp8 = true;
	}
	HX_STACK_LINE(672)
	if ((tmp8)){
		HX_STACK_LINE(672)
		return (int)-1;
	}
	HX_STACK_LINE(674)
	this->__updateLayout();
	HX_STACK_LINE(676)
	int tmp9 = this->get_scrollH();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(676)
	hx::AddEq(x,tmp9);
	HX_STACK_LINE(678)
	{
		HX_STACK_LINE(678)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(678)
		int tmp10 = this->get_scrollV();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(678)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(678)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(678)
		while((true)){
			HX_STACK_LINE(678)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(678)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(678)
			if ((tmp13)){
				HX_STACK_LINE(678)
				break;
			}
			HX_STACK_LINE(678)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(678)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(680)
			::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(680)
			Float tmp16 = tmp15->lineHeights->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(680)
			hx::AddEq(y,tmp16);
		}
	}
	HX_STACK_LINE(684)
	{
		HX_STACK_LINE(684)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(684)
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(684)
		Array< ::Dynamic > _g1 = tmp10->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(684)
		while((true)){
			HX_STACK_LINE(684)
			bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(684)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(684)
			if ((tmp12)){
				HX_STACK_LINE(684)
				break;
			}
			HX_STACK_LINE(684)
			::openfl::_internal::text::TextLayoutGroup tmp13 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(684)
			::openfl::_internal::text::TextLayoutGroup group = tmp13;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(684)
			++(_g);
			HX_STACK_LINE(686)
			bool tmp14 = (y >= group->offsetY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(686)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(686)
			if ((tmp14)){
				HX_STACK_LINE(686)
				Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(686)
				Float tmp17 = (group->offsetY + group->height);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(686)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(686)
				tmp15 = (tmp16 <= tmp18);
			}
			else{
				HX_STACK_LINE(686)
				tmp15 = false;
			}
			HX_STACK_LINE(686)
			if ((tmp15)){
				HX_STACK_LINE(688)
				bool tmp16 = (x >= group->offsetX);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(688)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(688)
				if ((tmp16)){
					HX_STACK_LINE(688)
					Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(688)
					Float tmp19 = (group->offsetX + group->width);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(688)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(688)
					tmp17 = (tmp18 <= tmp20);
				}
				else{
					HX_STACK_LINE(688)
					tmp17 = false;
				}
				HX_STACK_LINE(688)
				if ((tmp17)){
					HX_STACK_LINE(690)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(692)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(692)
						int tmp18 = group->advances->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(692)
						int _g2 = tmp18;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(692)
						while((true)){
							HX_STACK_LINE(692)
							bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(692)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(692)
							if ((tmp20)){
								HX_STACK_LINE(692)
								break;
							}
							HX_STACK_LINE(692)
							int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(692)
							int i = tmp21;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(694)
							Float tmp22 = group->advances->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(694)
							hx::AddEq(advance,tmp22);
							HX_STACK_LINE(696)
							Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(696)
							Float tmp24 = (group->offsetX + advance);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(696)
							bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(696)
							if ((tmp25)){
								HX_STACK_LINE(698)
								int tmp26 = (group->startIndex + i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(698)
								return tmp26;
							}
						}
					}
					HX_STACK_LINE(704)
					int tmp18 = group->endIndex;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(704)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(712)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getFirstCharInParagraph",0xe06fd955,"openfl.text.TextField.getFirstCharInParagraph","openfl/text/TextField.hx",717,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(719)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	if ((tmp1)){
		HX_STACK_LINE(719)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(719)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(719)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(719)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(719)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(719)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(719)
		tmp2 = true;
	}
	HX_STACK_LINE(719)
	if ((tmp2)){
		HX_STACK_LINE(719)
		return (int)0;
	}
	HX_STACK_LINE(721)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(721)
	int tmp4 = tmp3->text.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(721)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(722)
	int startIndex = (int)0;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(724)
	while((true)){
		HX_STACK_LINE(724)
		bool tmp5 = (index > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(724)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(724)
		if ((tmp6)){
			HX_STACK_LINE(724)
			break;
		}
		HX_STACK_LINE(726)
		bool tmp7 = (index <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(726)
		if ((tmp7)){
			HX_STACK_LINE(728)
			int tmp8 = (index + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(728)
			startIndex = tmp8;
		}
		else{
			HX_STACK_LINE(730)
			bool tmp8 = (index > charIndex);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(730)
			if ((tmp8)){
				HX_STACK_LINE(732)
				break;
			}
		}
		HX_STACK_LINE(736)
		::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(736)
		int tmp9 = (index + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(736)
		int tmp10 = tmp8->text.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(736)
		index = tmp10;
	}
	HX_STACK_LINE(740)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(740)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",755,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(757)
	this->__updateLayout();
	HX_STACK_LINE(759)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(759)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(759)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(759)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(759)
	if ((tmp2)){
		HX_STACK_LINE(759)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(759)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(759)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(759)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(759)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(759)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(759)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(759)
		tmp3 = true;
	}
	HX_STACK_LINE(759)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(759)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(759)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(759)
	if ((tmp5)){
		HX_STACK_LINE(759)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(759)
		tmp6 = true;
	}
	HX_STACK_LINE(759)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(759)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(759)
	if ((tmp7)){
		HX_STACK_LINE(759)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(759)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(759)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(759)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(759)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(759)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(759)
		tmp8 = true;
	}
	HX_STACK_LINE(759)
	if ((tmp8)){
		HX_STACK_LINE(759)
		return (int)-1;
	}
	HX_STACK_LINE(761)
	{
		HX_STACK_LINE(761)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(761)
		int tmp9 = this->get_scrollV();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(761)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(761)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(761)
		while((true)){
			HX_STACK_LINE(761)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(761)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(761)
			if ((tmp12)){
				HX_STACK_LINE(761)
				break;
			}
			HX_STACK_LINE(761)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(761)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(763)
			::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(763)
			Float tmp15 = tmp14->lineHeights->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(763)
			hx::AddEq(y,tmp15);
		}
	}
	HX_STACK_LINE(767)
	{
		HX_STACK_LINE(767)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(767)
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(767)
		Array< ::Dynamic > _g1 = tmp9->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(767)
		while((true)){
			HX_STACK_LINE(767)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(767)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(767)
			if ((tmp11)){
				HX_STACK_LINE(767)
				break;
			}
			HX_STACK_LINE(767)
			::openfl::_internal::text::TextLayoutGroup tmp12 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(767)
			::openfl::_internal::text::TextLayoutGroup group = tmp12;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(767)
			++(_g);
			HX_STACK_LINE(769)
			bool tmp13 = (y >= group->offsetY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(769)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(769)
			if ((tmp13)){
				HX_STACK_LINE(769)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(769)
				Float tmp16 = (group->offsetY + group->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(769)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(769)
				tmp14 = (tmp15 <= tmp17);
			}
			else{
				HX_STACK_LINE(769)
				tmp14 = false;
			}
			HX_STACK_LINE(769)
			if ((tmp14)){
				HX_STACK_LINE(771)
				int tmp15 = group->lineIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(771)
				return tmp15;
			}
		}
	}
	HX_STACK_LINE(777)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexOfChar",0xcab049d9,"openfl.text.TextField.getLineIndexOfChar","openfl/text/TextField.hx",782,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(784)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(784)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(784)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(784)
	if ((tmp1)){
		HX_STACK_LINE(784)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(784)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(784)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(784)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(784)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(784)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(784)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(784)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(784)
		tmp2 = true;
	}
	HX_STACK_LINE(784)
	if ((tmp2)){
		HX_STACK_LINE(784)
		return (int)-1;
	}
	HX_STACK_LINE(786)
	this->__updateLayout();
	HX_STACK_LINE(788)
	{
		HX_STACK_LINE(788)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(788)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(788)
		while((true)){
			HX_STACK_LINE(788)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(788)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(788)
			if ((tmp5)){
				HX_STACK_LINE(788)
				break;
			}
			HX_STACK_LINE(788)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(788)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(788)
			++(_g);
			HX_STACK_LINE(790)
			bool tmp7 = (group->startIndex <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(790)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(790)
			if ((tmp7)){
				HX_STACK_LINE(790)
				tmp8 = (group->endIndex >= charIndex);
			}
			else{
				HX_STACK_LINE(790)
				tmp8 = false;
			}
			HX_STACK_LINE(790)
			if ((tmp8)){
				HX_STACK_LINE(792)
				int tmp9 = group->lineIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(792)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(798)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineLength",0x953e9d8c,"openfl.text.TextField.getLineLength","openfl/text/TextField.hx",803,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(805)
	this->__updateLayout();
	HX_STACK_LINE(807)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(807)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(807)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(807)
	if ((tmp1)){
		HX_STACK_LINE(807)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(807)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(807)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(807)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(807)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(807)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(807)
		tmp2 = true;
	}
	HX_STACK_LINE(807)
	if ((tmp2)){
		HX_STACK_LINE(807)
		return (int)0;
	}
	HX_STACK_LINE(809)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(810)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(812)
	{
		HX_STACK_LINE(812)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(812)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(812)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(812)
		while((true)){
			HX_STACK_LINE(812)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(812)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(812)
			if ((tmp5)){
				HX_STACK_LINE(812)
				break;
			}
			HX_STACK_LINE(812)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(812)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(812)
			++(_g);
			HX_STACK_LINE(814)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(814)
			if ((tmp7)){
				HX_STACK_LINE(816)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(816)
				if ((tmp8)){
					HX_STACK_LINE(816)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(818)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(818)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(818)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(818)
				if ((tmp10)){
					HX_STACK_LINE(820)
					endIndex = group->startIndex;
					HX_STACK_LINE(821)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(827)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	if ((tmp3)){
		HX_STACK_LINE(827)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(827)
		int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(827)
		endIndex = tmp5;
	}
	HX_STACK_LINE(828)
	int tmp4 = (endIndex - startIndex);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(828)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",840,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(842)
	this->__updateLayout();
	HX_STACK_LINE(844)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
	Float tmp1 = tmp->lineAscents->__get(lineIndex);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(844)
	Float ascender = tmp1;		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(845)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	Float tmp3 = tmp2->lineDescents->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(845)
	Float descender = tmp3;		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(846)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(846)
	Float tmp5 = tmp4->lineLeadings->__get(lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(846)
	Float leading = tmp5;		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(847)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(847)
	Float tmp7 = tmp6->lineHeights->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(847)
	Float lineHeight = tmp7;		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(848)
	::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(848)
	Float tmp9 = tmp8->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(848)
	Float lineWidth = tmp9;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(850)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(850)
	{
		HX_STACK_LINE(850)
		::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(850)
		::openfl::text::TextFormatAlign _g = tmp11->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(850)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)2: {
				HX_STACK_LINE(852)
				tmp10 = (int)2;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(853)
				::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(853)
				Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(853)
				Float tmp14 = lineWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(853)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(853)
				tmp10 = (tmp15 - (int)2);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(854)
				::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(854)
				Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(854)
				Float tmp14 = lineWidth;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(854)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(854)
				tmp10 = (Float(tmp15) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(850)
	Float margin = tmp10;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(858)
	::openfl::text::TextLineMetrics tmp11 = ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(858)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",872,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(874)
	this->__updateLayout();
	HX_STACK_LINE(876)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(876)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(876)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(876)
	if ((tmp1)){
		HX_STACK_LINE(876)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(876)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(876)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(876)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(876)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(876)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(876)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(876)
		tmp2 = true;
	}
	HX_STACK_LINE(876)
	if ((tmp2)){
		HX_STACK_LINE(876)
		return (int)-1;
	}
	HX_STACK_LINE(878)
	{
		HX_STACK_LINE(878)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(878)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(878)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(878)
		while((true)){
			HX_STACK_LINE(878)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(878)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(878)
			if ((tmp5)){
				HX_STACK_LINE(878)
				break;
			}
			HX_STACK_LINE(878)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(878)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(878)
			++(_g);
			HX_STACK_LINE(880)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(880)
			if ((tmp7)){
				HX_STACK_LINE(882)
				int tmp8 = group->startIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(882)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(888)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",902,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(904)
	this->__updateLayout();
	HX_STACK_LINE(906)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(906)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(906)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(906)
	if ((tmp1)){
		HX_STACK_LINE(906)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(906)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(906)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(906)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(906)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(906)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(906)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(906)
		tmp2 = true;
	}
	HX_STACK_LINE(906)
	if ((tmp2)){
		HX_STACK_LINE(906)
		return null();
	}
	HX_STACK_LINE(908)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(909)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(911)
	{
		HX_STACK_LINE(911)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(911)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(911)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(911)
		while((true)){
			HX_STACK_LINE(911)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(911)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(911)
			if ((tmp5)){
				HX_STACK_LINE(911)
				break;
			}
			HX_STACK_LINE(911)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(911)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(911)
			++(_g);
			HX_STACK_LINE(913)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(913)
			if ((tmp7)){
				HX_STACK_LINE(915)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(915)
				if ((tmp8)){
					HX_STACK_LINE(915)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(917)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(917)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(917)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(917)
				if ((tmp10)){
					HX_STACK_LINE(919)
					endIndex = group->startIndex;
					HX_STACK_LINE(920)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(926)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(926)
	if ((tmp3)){
		HX_STACK_LINE(926)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(926)
		int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(926)
		endIndex = tmp5;
	}
	HX_STACK_LINE(928)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(928)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(928)
	int tmp6 = endIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(928)
	::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(928)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getParagraphLength",0xed64f022,"openfl.text.TextField.getParagraphLength","openfl/text/TextField.hx",933,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(935)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(935)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(935)
	if ((tmp1)){
		HX_STACK_LINE(935)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(935)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(935)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(935)
		int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(935)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(935)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(935)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(935)
		tmp2 = (tmp3 > tmp9);
	}
	else{
		HX_STACK_LINE(935)
		tmp2 = true;
	}
	HX_STACK_LINE(935)
	if ((tmp2)){
		HX_STACK_LINE(935)
		return (int)0;
	}
	HX_STACK_LINE(937)
	int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(937)
	int tmp4 = this->getFirstCharInParagraph(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(937)
	int startIndex = tmp4;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(938)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(938)
	int tmp6 = charIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(938)
	int tmp7 = tmp5->text.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(938)
	int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(938)
	int endIndex = tmp8;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(940)
	bool tmp9 = (endIndex == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(940)
	if ((tmp9)){
		HX_STACK_LINE(940)
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(940)
		int tmp11 = tmp10->text.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(940)
		endIndex = tmp11;
	}
	HX_STACK_LINE(941)
	int tmp10 = (endIndex - startIndex);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(941)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",964,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(966)
		::openfl::text::TextFormat format = null();		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(968)
		{
			HX_STACK_LINE(968)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(968)
			::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(968)
			Array< ::Dynamic > _g1 = tmp->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(968)
			while((true)){
				HX_STACK_LINE(968)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(968)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(968)
				if ((tmp2)){
					HX_STACK_LINE(968)
					break;
				}
				HX_STACK_LINE(968)
				::openfl::_internal::text::TextFormatRange tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(968)
				::openfl::_internal::text::TextFormatRange group = tmp3;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(968)
				++(_g);
				HX_STACK_LINE(970)
				bool tmp4 = (group->start <= beginIndex);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(970)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(970)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(970)
				if ((tmp5)){
					HX_STACK_LINE(970)
					tmp6 = (group->end >= beginIndex);
				}
				else{
					HX_STACK_LINE(970)
					tmp6 = false;
				}
				HX_STACK_LINE(970)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(970)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(970)
				if ((tmp7)){
					HX_STACK_LINE(970)
					bool tmp9 = (group->start <= endIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(970)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(970)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(970)
					if ((tmp11)){
						HX_STACK_LINE(970)
						tmp8 = (group->end >= endIndex);
					}
					else{
						HX_STACK_LINE(970)
						tmp8 = false;
					}
				}
				else{
					HX_STACK_LINE(970)
					tmp8 = true;
				}
				HX_STACK_LINE(970)
				if ((tmp8)){
					HX_STACK_LINE(972)
					bool tmp9 = (format == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(972)
					if ((tmp9)){
						HX_STACK_LINE(974)
						::openfl::text::TextFormat tmp10 = group->format->clone();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(974)
						format = tmp10;
					}
					else{
						HX_STACK_LINE(978)
						::String tmp10 = group->format->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(978)
						::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(978)
						bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(978)
						if ((tmp12)){
							HX_STACK_LINE(978)
							format->font = null();
						}
						HX_STACK_LINE(979)
						Dynamic tmp13 = group->format->size;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(979)
						Dynamic tmp14 = format->size;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(979)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(979)
						if ((tmp15)){
							HX_STACK_LINE(979)
							format->size = null();
						}
						HX_STACK_LINE(980)
						Dynamic tmp16 = group->format->color;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(980)
						Dynamic tmp17 = format->color;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(980)
						bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(980)
						if ((tmp18)){
							HX_STACK_LINE(980)
							format->color = null();
						}
						HX_STACK_LINE(981)
						Dynamic tmp19 = group->format->bold;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(981)
						Dynamic tmp20 = format->bold;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(981)
						bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(981)
						if ((tmp21)){
							HX_STACK_LINE(981)
							format->bold = null();
						}
						HX_STACK_LINE(982)
						Dynamic tmp22 = group->format->italic;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(982)
						Dynamic tmp23 = format->italic;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(982)
						bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(982)
						if ((tmp24)){
							HX_STACK_LINE(982)
							format->italic = null();
						}
						HX_STACK_LINE(983)
						Dynamic tmp25 = group->format->underline;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(983)
						Dynamic tmp26 = format->underline;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(983)
						bool tmp27 = (tmp25 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(983)
						if ((tmp27)){
							HX_STACK_LINE(983)
							format->underline = null();
						}
						HX_STACK_LINE(984)
						::String tmp28 = group->format->url;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(984)
						::String tmp29 = format->url;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(984)
						bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(984)
						if ((tmp30)){
							HX_STACK_LINE(984)
							format->url = null();
						}
						HX_STACK_LINE(985)
						::String tmp31 = group->format->target;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(985)
						::String tmp32 = format->target;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(985)
						bool tmp33 = (tmp31 != tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(985)
						if ((tmp33)){
							HX_STACK_LINE(985)
							format->target = null();
						}
						HX_STACK_LINE(986)
						::openfl::text::TextFormatAlign tmp34 = group->format->align;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(986)
						::openfl::text::TextFormatAlign tmp35 = format->align;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(986)
						bool tmp36 = (tmp34 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(986)
						if ((tmp36)){
							HX_STACK_LINE(986)
							format->align = null();
						}
						HX_STACK_LINE(987)
						Dynamic tmp37 = group->format->leftMargin;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(987)
						Dynamic tmp38 = format->leftMargin;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(987)
						bool tmp39 = (tmp37 != tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(987)
						if ((tmp39)){
							HX_STACK_LINE(987)
							format->leftMargin = null();
						}
						HX_STACK_LINE(988)
						Dynamic tmp40 = group->format->rightMargin;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(988)
						Dynamic tmp41 = format->rightMargin;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(988)
						bool tmp42 = (tmp40 != tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(988)
						if ((tmp42)){
							HX_STACK_LINE(988)
							format->rightMargin = null();
						}
						HX_STACK_LINE(989)
						Dynamic tmp43 = group->format->indent;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(989)
						Dynamic tmp44 = format->indent;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(989)
						bool tmp45 = (tmp43 != tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(989)
						if ((tmp45)){
							HX_STACK_LINE(989)
							format->indent = null();
						}
						HX_STACK_LINE(990)
						Dynamic tmp46 = group->format->leading;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(990)
						Dynamic tmp47 = format->leading;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(990)
						bool tmp48 = (tmp46 != tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(990)
						if ((tmp48)){
							HX_STACK_LINE(990)
							format->leading = null();
						}
						HX_STACK_LINE(991)
						Dynamic tmp49 = group->format->blockIndent;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(991)
						Dynamic tmp50 = format->blockIndent;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(991)
						bool tmp51 = (tmp49 != tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(991)
						if ((tmp51)){
							HX_STACK_LINE(991)
							format->blockIndent = null();
						}
						HX_STACK_LINE(992)
						Dynamic tmp52 = group->format->bullet;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(992)
						Dynamic tmp53 = format->bullet;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(992)
						bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(992)
						if ((tmp54)){
							HX_STACK_LINE(992)
							format->bullet = null();
						}
						HX_STACK_LINE(993)
						Dynamic tmp55 = group->format->kerning;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(993)
						Dynamic tmp56 = format->kerning;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(993)
						bool tmp57 = (tmp55 != tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(993)
						if ((tmp57)){
							HX_STACK_LINE(993)
							format->kerning = null();
						}
						HX_STACK_LINE(994)
						Dynamic tmp58 = group->format->letterSpacing;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(994)
						Dynamic tmp59 = format->letterSpacing;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(994)
						bool tmp60 = (tmp58 != tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(994)
						if ((tmp60)){
							HX_STACK_LINE(994)
							format->letterSpacing = null();
						}
						HX_STACK_LINE(995)
						bool tmp61 = (group->format->tabStops != format->tabStops);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(995)
						if ((tmp61)){
							HX_STACK_LINE(995)
							format->tabStops = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(1003)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1003)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceSelectedText( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceSelectedText",0x86221d58,"openfl.text.TextField.replaceSelectedText","openfl/text/TextField.hx",1008,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1010)
		bool tmp = (value == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1010)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1010)
		if ((tmp)){
			HX_STACK_LINE(1010)
			int tmp2 = this->__selectionIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1010)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1010)
			int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1010)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1010)
			tmp1 = (tmp3 == tmp5);
		}
		else{
			HX_STACK_LINE(1010)
			tmp1 = false;
		}
		HX_STACK_LINE(1010)
		if ((tmp1)){
			HX_STACK_LINE(1010)
			return null();
		}
		HX_STACK_LINE(1012)
		int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1012)
		int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1012)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1012)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1012)
		if ((tmp4)){
			HX_STACK_LINE(1012)
			tmp5 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(1012)
			tmp5 = this->__selectionIndex;
		}
		HX_STACK_LINE(1012)
		int startIndex = tmp5;		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(1013)
		int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1013)
		int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1013)
		bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1013)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1013)
		if ((tmp8)){
			HX_STACK_LINE(1013)
			tmp9 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(1013)
			tmp9 = this->__selectionIndex;
		}
		HX_STACK_LINE(1013)
		int endIndex = tmp9;		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(1015)
		int tmp10 = startIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1015)
		int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1015)
		::String tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1015)
		this->replaceText(tmp10,tmp11,tmp12);
		HX_STACK_LINE(1017)
		int tmp13 = (startIndex + value.length);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1017)
		this->__caretIndex = tmp13;
		HX_STACK_LINE(1018)
		int tmp14 = this->__caretIndex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1018)
		this->__selectionIndex = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceText",0x698fcd5d,"openfl.text.TextField.replaceText","openfl/text/TextField.hx",1023,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(1025)
		bool tmp = (endIndex < beginIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1025)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1025)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1025)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1025)
		if ((tmp2)){
			HX_STACK_LINE(1025)
			tmp3 = (beginIndex < (int)0);
		}
		else{
			HX_STACK_LINE(1025)
			tmp3 = true;
		}
		HX_STACK_LINE(1025)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1025)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1025)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1025)
		if ((tmp5)){
			HX_STACK_LINE(1025)
			int tmp7 = endIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1025)
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1025)
			::openfl::_internal::text::TextEngine tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1025)
			::openfl::_internal::text::TextEngine tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1025)
			int tmp11 = tmp10->text.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1025)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1025)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1025)
			tmp6 = (tmp7 > tmp13);
		}
		else{
			HX_STACK_LINE(1025)
			tmp6 = true;
		}
		HX_STACK_LINE(1025)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1025)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1025)
		if ((tmp7)){
			HX_STACK_LINE(1025)
			tmp8 = (newText == null());
		}
		else{
			HX_STACK_LINE(1025)
			tmp8 = true;
		}
		HX_STACK_LINE(1025)
		if ((tmp8)){
			HX_STACK_LINE(1025)
			return null();
		}
		HX_STACK_LINE(1027)
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1027)
		int tmp10 = beginIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1027)
		::String tmp11 = tmp9->text.substring((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1027)
		::String tmp12 = newText;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1027)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1027)
		::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1027)
		int tmp15 = endIndex;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1027)
		::String tmp16 = tmp14->text.substring(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1027)
		::String tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1027)
		::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1027)
		tmp18->text = tmp17;
		HX_STACK_LINE(1029)
		int tmp19 = newText.length;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1029)
		int tmp20 = (endIndex - beginIndex);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1029)
		int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1029)
		int offset = tmp21;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1031)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1032)
		::openfl::_internal::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(1034)
		while((true)){
			HX_STACK_LINE(1034)
			int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1034)
			::openfl::_internal::text::TextEngine tmp23 = this->__textEngine;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1034)
			int tmp24 = tmp23->textFormatRanges->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1034)
			bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1034)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1034)
			if ((tmp26)){
				HX_STACK_LINE(1034)
				break;
			}
			HX_STACK_LINE(1036)
			::openfl::_internal::text::TextEngine tmp27 = this->__textEngine;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1036)
			::openfl::_internal::text::TextFormatRange tmp28 = tmp27->textFormatRanges->__get(i).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1036)
			range = tmp28;
			HX_STACK_LINE(1038)
			bool tmp29 = (range->start <= beginIndex);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1038)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1038)
			if ((tmp29)){
				HX_STACK_LINE(1038)
				tmp30 = (range->end >= endIndex);
			}
			else{
				HX_STACK_LINE(1038)
				tmp30 = false;
			}
			HX_STACK_LINE(1038)
			if ((tmp30)){
				HX_STACK_LINE(1040)
				hx::AddEq(range->end,offset);
				HX_STACK_LINE(1041)
				(i)++;
			}
			else{
				HX_STACK_LINE(1043)
				bool tmp31 = (range->start >= beginIndex);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1043)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1043)
				if ((tmp31)){
					HX_STACK_LINE(1043)
					tmp32 = (range->end <= endIndex);
				}
				else{
					HX_STACK_LINE(1043)
					tmp32 = false;
				}
				HX_STACK_LINE(1043)
				if ((tmp32)){
					HX_STACK_LINE(1045)
					::openfl::_internal::text::TextEngine tmp33 = this->__textEngine;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1045)
					int tmp34 = i;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1045)
					tmp33->textFormatRanges->splice(tmp34,(int)1);
					HX_STACK_LINE(1046)
					int tmp35 = (range->end - range->start);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1046)
					hx::SubEq(offset,tmp35);
				}
				else{
					HX_STACK_LINE(1048)
					bool tmp33 = (range->start > beginIndex);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1048)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1048)
					if ((tmp33)){
						HX_STACK_LINE(1048)
						tmp34 = (range->start <= endIndex);
					}
					else{
						HX_STACK_LINE(1048)
						tmp34 = false;
					}
					HX_STACK_LINE(1048)
					if ((tmp34)){
						HX_STACK_LINE(1050)
						hx::AddEq(range->start,offset);
						HX_STACK_LINE(1051)
						(i)++;
					}
					else{
						HX_STACK_LINE(1055)
						(i)++;
					}
				}
			}
		}
		HX_STACK_LINE(1061)
		this->__dirty = true;
		HX_STACK_LINE(1062)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",1080,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(1082)
		this->__selectionIndex = beginIndex;
		HX_STACK_LINE(1083)
		this->__caretIndex = endIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",1133,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(1135)
		bool tmp = (format->font != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1135)
		if ((tmp)){
			HX_STACK_LINE(1135)
			::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1135)
			tmp1->font = format->font;
		}
		HX_STACK_LINE(1136)
		bool tmp1 = (format->size != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1136)
		if ((tmp1)){
			HX_STACK_LINE(1136)
			::openfl::text::TextFormat tmp2 = this->__textFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1136)
			tmp2->size = format->size;
		}
		HX_STACK_LINE(1137)
		bool tmp2 = (format->color != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1137)
		if ((tmp2)){
			HX_STACK_LINE(1137)
			::openfl::text::TextFormat tmp3 = this->__textFormat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1137)
			tmp3->color = format->color;
		}
		HX_STACK_LINE(1138)
		bool tmp3 = (format->bold != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1138)
		if ((tmp3)){
			HX_STACK_LINE(1138)
			::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1138)
			tmp4->bold = format->bold;
		}
		HX_STACK_LINE(1139)
		bool tmp4 = (format->italic != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1139)
		if ((tmp4)){
			HX_STACK_LINE(1139)
			::openfl::text::TextFormat tmp5 = this->__textFormat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1139)
			tmp5->italic = format->italic;
		}
		HX_STACK_LINE(1140)
		bool tmp5 = (format->underline != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1140)
		if ((tmp5)){
			HX_STACK_LINE(1140)
			::openfl::text::TextFormat tmp6 = this->__textFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1140)
			tmp6->underline = format->underline;
		}
		HX_STACK_LINE(1141)
		bool tmp6 = (format->url != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1141)
		if ((tmp6)){
			HX_STACK_LINE(1141)
			::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1141)
			tmp7->url = format->url;
		}
		HX_STACK_LINE(1142)
		bool tmp7 = (format->target != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1142)
		if ((tmp7)){
			HX_STACK_LINE(1142)
			::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1142)
			tmp8->target = format->target;
		}
		HX_STACK_LINE(1143)
		bool tmp8 = (format->align != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1143)
		if ((tmp8)){
			HX_STACK_LINE(1143)
			::openfl::text::TextFormat tmp9 = this->__textFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1143)
			tmp9->align = format->align;
		}
		HX_STACK_LINE(1144)
		bool tmp9 = (format->leftMargin != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1144)
		if ((tmp9)){
			HX_STACK_LINE(1144)
			::openfl::text::TextFormat tmp10 = this->__textFormat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1144)
			tmp10->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(1145)
		bool tmp10 = (format->rightMargin != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1145)
		if ((tmp10)){
			HX_STACK_LINE(1145)
			::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1145)
			tmp11->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(1146)
		bool tmp11 = (format->indent != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1146)
		if ((tmp11)){
			HX_STACK_LINE(1146)
			::openfl::text::TextFormat tmp12 = this->__textFormat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1146)
			tmp12->indent = format->indent;
		}
		HX_STACK_LINE(1147)
		bool tmp12 = (format->leading != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1147)
		if ((tmp12)){
			HX_STACK_LINE(1147)
			::openfl::text::TextFormat tmp13 = this->__textFormat;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1147)
			tmp13->leading = format->leading;
		}
		HX_STACK_LINE(1148)
		bool tmp13 = (format->blockIndent != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1148)
		if ((tmp13)){
			HX_STACK_LINE(1148)
			::openfl::text::TextFormat tmp14 = this->__textFormat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1148)
			tmp14->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(1149)
		bool tmp14 = (format->bullet != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1149)
		if ((tmp14)){
			HX_STACK_LINE(1149)
			::openfl::text::TextFormat tmp15 = this->__textFormat;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1149)
			tmp15->bullet = format->bullet;
		}
		HX_STACK_LINE(1150)
		bool tmp15 = (format->kerning != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1150)
		if ((tmp15)){
			HX_STACK_LINE(1150)
			::openfl::text::TextFormat tmp16 = this->__textFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1150)
			tmp16->kerning = format->kerning;
		}
		HX_STACK_LINE(1151)
		bool tmp16 = (format->letterSpacing != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1151)
		if ((tmp16)){
			HX_STACK_LINE(1151)
			::openfl::text::TextFormat tmp17 = this->__textFormat;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1151)
			tmp17->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(1152)
		bool tmp17 = (format->tabStops != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1152)
		if ((tmp17)){
			HX_STACK_LINE(1152)
			::openfl::text::TextFormat tmp18 = this->__textFormat;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1152)
			tmp18->tabStops = format->tabStops;
		}
		HX_STACK_LINE(1154)
		this->__dirty = true;
		HX_STACK_LINE(1155)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",1160,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1162)
		this->__updateLayout();
		HX_STACK_LINE(1163)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1163)
		::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(1164)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1164)
		::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1164)
		::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1164)
		tmp1->bounds->__transform(tmp2,tmp3);
		HX_STACK_LINE(1165)
		Float tmp4 = bounds->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1165)
		Float tmp5 = bounds->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1165)
		Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1165)
		Float tmp7 = bounds->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1165)
		rect->__expand(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",1170,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1172)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1172)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1172)
	::lime::ui::MouseCursor tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1172)
	if ((tmp1)){
		HX_STACK_LINE(1172)
		tmp2 = ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(1172)
		tmp2 = null();
	}
	HX_STACK_LINE(1172)
	return tmp2;
}


int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",1177,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1179)
	this->__updateLayout();
	HX_STACK_LINE(1181)
	int tmp = this->get_scrollH();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	hx::AddEq(x,tmp);
	HX_STACK_LINE(1183)
	{
		HX_STACK_LINE(1183)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1183)
		int tmp1 = this->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1183)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1183)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1183)
		while((true)){
			HX_STACK_LINE(1183)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1183)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1183)
			if ((tmp4)){
				HX_STACK_LINE(1183)
				break;
			}
			HX_STACK_LINE(1183)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1183)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1185)
			::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1185)
			Float tmp7 = tmp6->lineHeights->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1185)
			hx::AddEq(y,tmp7);
		}
	}
	HX_STACK_LINE(1189)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1189)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1189)
	Float tmp3 = tmp2->textHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1189)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1189)
	if ((tmp4)){
		HX_STACK_LINE(1189)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1189)
		y = tmp5->textHeight;
	}
	HX_STACK_LINE(1191)
	bool firstGroup = true;		HX_STACK_VAR(firstGroup,"firstGroup");
	HX_STACK_LINE(1192)
	::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(1192)
	::openfl::_internal::text::TextLayoutGroup nextGroup;		HX_STACK_VAR(nextGroup,"nextGroup");
	HX_STACK_LINE(1194)
	{
		HX_STACK_LINE(1194)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1194)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1194)
		int tmp6 = tmp5->layoutGroups->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1194)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1194)
		while((true)){
			HX_STACK_LINE(1194)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1194)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1194)
			if ((tmp8)){
				HX_STACK_LINE(1194)
				break;
			}
			HX_STACK_LINE(1194)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1194)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1196)
			::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1196)
			::openfl::_internal::text::TextLayoutGroup tmp11 = tmp10->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1196)
			group = tmp11;
			HX_STACK_LINE(1198)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1198)
			::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1198)
			int tmp14 = tmp13->layoutGroups->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1198)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1198)
			bool tmp16 = (tmp12 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1198)
			if ((tmp16)){
				HX_STACK_LINE(1200)
				::openfl::_internal::text::TextEngine tmp17 = this->__textEngine;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1200)
				int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1200)
				::openfl::_internal::text::TextLayoutGroup tmp19 = tmp17->layoutGroups->__get(tmp18).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1200)
				nextGroup = tmp19;
			}
			else{
				HX_STACK_LINE(1204)
				nextGroup = null();
			}
			HX_STACK_LINE(1208)
			bool tmp17 = firstGroup;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1208)
			if ((tmp17)){
				HX_STACK_LINE(1210)
				bool tmp18 = (y < group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1210)
				if ((tmp18)){
					HX_STACK_LINE(1210)
					y = group->offsetY;
				}
				HX_STACK_LINE(1211)
				bool tmp19 = (x < group->offsetX);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1211)
				if ((tmp19)){
					HX_STACK_LINE(1211)
					x = group->offsetX;
				}
				HX_STACK_LINE(1212)
				firstGroup = false;
			}
			HX_STACK_LINE(1216)
			bool tmp18 = (y >= group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1216)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1216)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1216)
			if ((tmp19)){
				HX_STACK_LINE(1216)
				Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1216)
				Float tmp22 = (group->offsetY + group->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1216)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1216)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1216)
				tmp20 = (tmp21 <= tmp24);
			}
			else{
				HX_STACK_LINE(1216)
				tmp20 = false;
			}
			HX_STACK_LINE(1216)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1216)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1216)
			if ((tmp21)){
				HX_STACK_LINE(1216)
				tmp22 = (nextGroup == null());
			}
			else{
				HX_STACK_LINE(1216)
				tmp22 = true;
			}
			HX_STACK_LINE(1216)
			if ((tmp22)){
				HX_STACK_LINE(1218)
				bool tmp23 = (x >= group->offsetX);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1218)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1218)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1218)
				if ((tmp24)){
					HX_STACK_LINE(1218)
					Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1218)
					Float tmp27 = (group->offsetX + group->width);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1218)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1218)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1218)
					tmp25 = (tmp26 <= tmp29);
				}
				else{
					HX_STACK_LINE(1218)
					tmp25 = false;
				}
				HX_STACK_LINE(1218)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1218)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1218)
				if ((tmp26)){
					HX_STACK_LINE(1218)
					bool tmp28 = (nextGroup == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1218)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1218)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1218)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1218)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1218)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1218)
					if ((tmp33)){
						HX_STACK_LINE(1218)
						tmp27 = (nextGroup->lineIndex != group->lineIndex);
					}
					else{
						HX_STACK_LINE(1218)
						tmp27 = true;
					}
				}
				else{
					HX_STACK_LINE(1218)
					tmp27 = true;
				}
				HX_STACK_LINE(1218)
				if ((tmp27)){
					HX_STACK_LINE(1220)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(1222)
					{
						HX_STACK_LINE(1222)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1222)
						int tmp28 = group->advances->length;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1222)
						int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1222)
						while((true)){
							HX_STACK_LINE(1222)
							bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1222)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1222)
							if ((tmp30)){
								HX_STACK_LINE(1222)
								break;
							}
							HX_STACK_LINE(1222)
							int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1222)
							int i1 = tmp31;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1224)
							Float tmp32 = group->advances->__get(i1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1224)
							hx::AddEq(advance,tmp32);
							HX_STACK_LINE(1226)
							Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1226)
							Float tmp34 = (group->offsetX + advance);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1226)
							bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1226)
							if ((tmp35)){
								HX_STACK_LINE(1228)
								Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1228)
								Float tmp37 = group->offsetX;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1228)
								Float tmp38 = advance;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1228)
								Float tmp39 = group->advances->__get(i1);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1228)
								Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1228)
								Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1228)
								Float tmp42 = group->advances->__get(i1);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1228)
								Float tmp43 = (Float(tmp42) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1228)
								Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1228)
								bool tmp45 = (tmp36 <= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1228)
								if ((tmp45)){
									HX_STACK_LINE(1230)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1230)
									return tmp46;
								}
								else{
									HX_STACK_LINE(1234)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1234)
									int tmp47 = group->endIndex;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1234)
									bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1234)
									int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1234)
									if ((tmp48)){
										HX_STACK_LINE(1234)
										int tmp50 = (group->startIndex + i1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1234)
										tmp49 = (tmp50 + (int)1);
									}
									else{
										HX_STACK_LINE(1234)
										tmp49 = group->endIndex;
									}
									HX_STACK_LINE(1234)
									return tmp49;
								}
							}
						}
					}
					HX_STACK_LINE(1242)
					int tmp28 = group->endIndex;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1242)
					return tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(1250)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1250)
	int tmp6 = tmp5->text.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1250)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",1255,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1257)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1257)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1257)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1257)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1257)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1257)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1257)
	if ((tmp4)){
		HX_STACK_LINE(1257)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(1257)
		tmp5 = true;
	}
	HX_STACK_LINE(1257)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1257)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1257)
	if ((tmp6)){
		HX_STACK_LINE(1257)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1257)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1257)
		if ((tmp9)){
			HX_STACK_LINE(1257)
			bool tmp10 = this->mouseEnabled;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1257)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1257)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1257)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1257)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1257)
			tmp7 = !(tmp14);
		}
		else{
			HX_STACK_LINE(1257)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(1257)
		tmp7 = true;
	}
	HX_STACK_LINE(1257)
	if ((tmp7)){
		HX_STACK_LINE(1257)
		return false;
	}
	HX_STACK_LINE(1258)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1258)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1258)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1258)
	if ((tmp9)){
		HX_STACK_LINE(1258)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1258)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1258)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1258)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1258)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1258)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1258)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1258)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1258)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1258)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(1258)
		tmp10 = false;
	}
	HX_STACK_LINE(1258)
	if ((tmp10)){
		HX_STACK_LINE(1258)
		return false;
	}
	HX_STACK_LINE(1260)
	this->__getWorldTransform();
	HX_STACK_LINE(1261)
	this->__updateLayout();
	HX_STACK_LINE(1263)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1263)
	{
		HX_STACK_LINE(1263)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1263)
		::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1263)
		Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1263)
		Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1263)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1263)
		Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1263)
		bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1263)
		if ((tmp16)){
			HX_STACK_LINE(1263)
			Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1263)
			tmp11 = -(tmp17);
		}
		else{
			HX_STACK_LINE(1263)
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1263)
			Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1263)
			Float tmp19 = (_this->ty - y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1263)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1263)
			Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1263)
			Float tmp22 = (x - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1263)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1263)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1263)
			tmp11 = (tmp17 * tmp24);
		}
	}
	HX_STACK_LINE(1263)
	Float px = tmp11;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(1264)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1264)
	{
		HX_STACK_LINE(1264)
		::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1264)
		::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1264)
		Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1264)
		Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1264)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1264)
		Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1264)
		bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1264)
		if ((tmp17)){
			HX_STACK_LINE(1264)
			Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1264)
			tmp12 = -(tmp18);
		}
		else{
			HX_STACK_LINE(1264)
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1264)
			Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1264)
			Float tmp20 = (y - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1264)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1264)
			Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1264)
			Float tmp23 = (_this->tx - x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1264)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1264)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1264)
			tmp12 = (tmp18 * tmp25);
		}
	}
	HX_STACK_LINE(1264)
	Float py = tmp12;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(1266)
	::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1266)
	Float tmp14 = px;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1266)
	Float tmp15 = py;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1266)
	bool tmp16 = tmp13->bounds->contains(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1266)
	if ((tmp16)){
		HX_STACK_LINE(1268)
		bool tmp17 = (stack != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1268)
		if ((tmp17)){
			HX_STACK_LINE(1270)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1274)
		return true;
	}
	HX_STACK_LINE(1278)
	return false;
}


bool TextField_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__hitTestMask",0x0119c60d,"openfl.text.TextField.__hitTestMask","openfl/text/TextField.hx",1283,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1285)
	this->__getWorldTransform();
	HX_STACK_LINE(1286)
	this->__updateLayout();
	HX_STACK_LINE(1288)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1288)
	{
		HX_STACK_LINE(1288)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1288)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1288)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1288)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1288)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1288)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1288)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1288)
		if ((tmp5)){
			HX_STACK_LINE(1288)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1288)
			tmp = -(tmp6);
		}
		else{
			HX_STACK_LINE(1288)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1288)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1288)
			Float tmp8 = (_this->ty - y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1288)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1288)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1288)
			Float tmp11 = (x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1288)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1288)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1288)
			tmp = (tmp6 * tmp13);
		}
	}
	HX_STACK_LINE(1288)
	Float px = tmp;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(1289)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1289)
	{
		HX_STACK_LINE(1289)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1289)
		::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1289)
		Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1289)
		Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1289)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1289)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1289)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1289)
		if ((tmp6)){
			HX_STACK_LINE(1289)
			Float tmp7 = _this->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1289)
			tmp1 = -(tmp7);
		}
		else{
			HX_STACK_LINE(1289)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1289)
			Float tmp8 = _this->a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1289)
			Float tmp9 = (y - _this->ty);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1289)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1289)
			Float tmp11 = _this->b;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1289)
			Float tmp12 = (_this->tx - x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1289)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1289)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1289)
			tmp1 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(1289)
	Float py = tmp1;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(1291)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1291)
	Float tmp3 = px;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1291)
	Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1291)
	bool tmp5 = tmp2->bounds->contains(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1291)
	if ((tmp5)){
		HX_STACK_LINE(1293)
		return true;
	}
	HX_STACK_LINE(1297)
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCairo",0x1a5f4f8e,"openfl.text.TextField.__renderCairo","openfl/text/TextField.hx",1302,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1304)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1304)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp);
		HX_STACK_LINE(1305)
		::openfl::_internal::renderer::RenderSession tmp1 = renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1305)
		this->super::__renderCairo(tmp1);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",1310,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1314)
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1314)
		::openfl::text::AntiAliasType tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1314)
		bool tmp2 = (tmp1 == ::openfl::text::AntiAliasType_obj::ADVANCED);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1314)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1314)
		if ((tmp2)){
			HX_STACK_LINE(1314)
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1314)
			::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1314)
			::openfl::text::GridFitType tmp6 = tmp5->gridFitType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1314)
			tmp3 = (tmp6 == ::openfl::text::GridFitType_obj::PIXEL);
		}
		else{
			HX_STACK_LINE(1314)
			tmp3 = false;
		}
		HX_STACK_LINE(1314)
		if ((tmp3)){
			HX_STACK_LINE(1316)
			bool tmp4 = renderSession->context->imageSmoothingEnabled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1316)
			bool smoothingEnabled = tmp4;		HX_STACK_VAR(smoothingEnabled,"smoothingEnabled");
			HX_STACK_LINE(1318)
			bool tmp5 = smoothingEnabled;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1318)
			if ((tmp5)){
				HX_STACK_LINE(1320)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = false;
				HX_STACK_LINE(1322)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = false;
				HX_STACK_LINE(1323)
				renderSession->context->imageSmoothingEnabled = false;
			}
			HX_STACK_LINE(1327)
			::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1327)
			this->super::__renderCanvas(tmp6);
			HX_STACK_LINE(1329)
			bool tmp7 = smoothingEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1329)
			if ((tmp7)){
				HX_STACK_LINE(1331)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = true;
				HX_STACK_LINE(1333)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = true;
				HX_STACK_LINE(1334)
				renderSession->context->imageSmoothingEnabled = true;
			}
		}
		else{
			HX_STACK_LINE(1340)
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1340)
			this->super::__renderCanvas(tmp4);
		}
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",1349,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1349)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",1354,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1356)
		bool tmp = this->__cacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1356)
		if ((tmp)){
			HX_STACK_LINE(1357)
			{
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1357)
				bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1357)
				bool hasCacheMatrix = tmp2;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(1357)
				::openfl::geom::Rectangle tmp3 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1357)
				Float x = tmp3->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1357)
				::openfl::geom::Rectangle tmp4 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1357)
				Float y = tmp4->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1357)
				::openfl::geom::Rectangle tmp5 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1357)
				Float w = tmp5->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(1357)
				::openfl::geom::Rectangle tmp6 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1357)
				Float h = tmp6->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp7 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1357)
				bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1357)
				if ((tmp8)){
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1357)
					this->__cacheGLMatrix = tmp9;
				}
				HX_STACK_LINE(1357)
				bool tmp9 = hasCacheMatrix;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1357)
				if ((tmp9)){
					HX_STACK_LINE(1357)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1357)
					::openfl::geom::Rectangle bmpBounds = tmp10;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(1357)
					::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1357)
					::openfl::geom::Rectangle tmp12 = bmpBounds;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp13 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1357)
					tmp11->__transform(tmp12,tmp13);
					HX_STACK_LINE(1357)
					x = bmpBounds->x;
					HX_STACK_LINE(1357)
					y = bmpBounds->y;
					HX_STACK_LINE(1357)
					w = bmpBounds->width;
					HX_STACK_LINE(1357)
					h = bmpBounds->height;
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						::openfl::geom::Matrix tmp15 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1357)
						::openfl::geom::Matrix _this = tmp15;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1357)
						tmp14 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1357)
					this->__cacheGLMatrix = tmp14;
				}
				else{
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp10 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1357)
					tmp10->identity();
				}
				HX_STACK_LINE(1357)
				bool tmp10 = (w <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1357)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1357)
				if ((tmp10)){
					HX_STACK_LINE(1357)
					tmp11 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(1357)
					tmp11 = false;
				}
				HX_STACK_LINE(1357)
				if ((tmp11)){
					HX_STACK_LINE(1357)
					::String tmp12 = (HX_HCSTRING("Error creating a cached bitmap. The texture size is ","\x1c","\x68","\x47","\xb0") + w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1357)
					::String tmp13 = (tmp12 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1357)
					Float tmp14 = h;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1357)
					::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1357)
					HX_STACK_DO_THROW(tmp15);
				}
				HX_STACK_LINE(1357)
				bool tmp12 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1357)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1357)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1357)
				if ((tmp13)){
					HX_STACK_LINE(1357)
					tmp14 = this->__updateFilters;
				}
				else{
					HX_STACK_LINE(1357)
					tmp14 = true;
				}
				HX_STACK_LINE(1357)
				if ((tmp14)){
					HX_STACK_LINE(1357)
					::openfl::geom::Rectangle tmp15 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1357)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1357)
					if ((tmp16)){
						HX_STACK_LINE(1357)
						::openfl::geom::Rectangle tmp17 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1357)
						Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1357)
						Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1357)
						::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1357)
						Float tmp21 = tmp20->width;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1357)
						Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1357)
						Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1357)
						hx::AddEq(w,tmp23);
						HX_STACK_LINE(1357)
						::openfl::geom::Rectangle tmp24 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1357)
						Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1357)
						Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1357)
						::openfl::geom::Rectangle tmp27 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1357)
						Float tmp28 = tmp27->height;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1357)
						Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1357)
						Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1357)
						hx::AddEq(h,tmp30);
					}
					HX_STACK_LINE(1357)
					::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1357)
					bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1357)
					if ((tmp18)){
						HX_STACK_LINE(1357)
						::openfl::display::BitmapData tmp19 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1357)
						this->__cachedBitmap = tmp19;
					}
					HX_STACK_LINE(1357)
					::openfl::display::BitmapData tmp19 = this->__cachedBitmap;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1357)
					Float tmp20 = w;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1357)
					int tmp21 = ::Math_obj::ceil(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1357)
					Float tmp22 = h;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1357)
					int tmp23 = ::Math_obj::ceil(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1357)
					tmp19->__resize(tmp21,tmp23);
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1357)
					{
						HX_STACK_LINE(1357)
						::openfl::geom::Matrix tmp25 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1357)
						::openfl::geom::Matrix _this = tmp25;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1357)
						tmp24 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(1357)
					Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1357)
					Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1357)
					Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1357)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1357)
					m->translate(tmp26,tmp28);
					HX_STACK_LINE(1357)
					::openfl::display::Shader tmp29 = this->__shader;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1357)
					::openfl::display::Shader shader = tmp29;		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(1357)
					this->__shader = null();
					HX_STACK_LINE(1357)
					::openfl::display::BitmapData tmp30 = this->__cachedBitmap;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1357)
					::openfl::_internal::renderer::RenderSession tmp31 = renderSession;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1357)
					tmp30->__drawGL(tmp31,hx::ObjectPtr<OBJ_>(this),tmp32,null(),null(),null(),true,false,true,null(),null());
					HX_STACK_LINE(1357)
					this->__shader = shader;
					HX_STACK_LINE(1357)
					this->__updateCachedBitmap = false;
				}
				HX_STACK_LINE(1357)
				bool tmp15 = this->__updateFilters;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1357)
				if ((tmp15)){
					HX_STACK_LINE(1357)
					::openfl::_internal::renderer::RenderSession tmp16 = renderSession;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1357)
					::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1357)
					::openfl::display::BitmapData tmp18 = this->__cachedBitmap;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1357)
					::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp16,tmp17,tmp18,null(),null());
					HX_STACK_LINE(1357)
					this->__updateFilters = false;
				}
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1357)
				tmp16->invert();
				HX_STACK_LINE(1357)
				{
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix tmp17 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1357)
					::openfl::geom::Matrix _this = tmp17;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1357)
					Float tmp18 = (x * _this->a);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1357)
					Float tmp19 = (y * _this->c);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1357)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1357)
					Float tmp21 = _this->tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1357)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1357)
					_this->tx = tmp22;
					HX_STACK_LINE(1357)
					Float tmp23 = (x * _this->b);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1357)
					Float tmp24 = (y * _this->d);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1357)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1357)
					Float tmp26 = _this->ty;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1357)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1357)
					_this->ty = tmp27;
				}
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp17 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp18 = this->__renderTransform;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1357)
				tmp17->concat(tmp18);
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp19 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1357)
				::openfl::geom::Point tmp20 = this->__offset;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1357)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1357)
				::openfl::geom::Point tmp22 = this->__offset;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1357)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1357)
				tmp19->translate(tmp21,tmp23);
				HX_STACK_LINE(1357)
				::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1357)
				bool tmp25 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1357)
				::openfl::geom::Matrix tmp26 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1357)
				::openfl::geom::ColorTransform tmp27 = this->__worldColorTransform;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1357)
				Float tmp28 = this->__worldAlpha;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1357)
				::openfl::display::BlendMode tmp29 = this->blendMode;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1357)
				::openfl::display::Shader tmp30 = this->__shader;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1357)
				renderSession->spriteBatch->renderBitmapData(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,::openfl::display::PixelSnapping_obj::ALWAYS,null());
			}
			HX_STACK_LINE(1358)
			return null();
		}
		HX_STACK_LINE(1361)
		{
			HX_STACK_LINE(1361)
			::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1361)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1361)
			if ((tmp2)){
				HX_STACK_LINE(1361)
				::openfl::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1361)
				::openfl::geom::Matrix tmp4 = this->__renderTransform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1361)
				renderSession->maskManager->pushRect(tmp3,tmp4);
			}
			HX_STACK_LINE(1361)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1361)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1361)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1361)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1361)
			if ((tmp5)){
				HX_STACK_LINE(1361)
				::openfl::display::Graphics tmp7 = this->__maskGraphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1361)
				::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1361)
				::openfl::display::Graphics tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1361)
				tmp6 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(1361)
				tmp6 = false;
			}
			HX_STACK_LINE(1361)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1361)
			if ((tmp6)){
				HX_STACK_LINE(1361)
				::openfl::display::Graphics tmp8 = this->__maskGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1361)
				::openfl::display::Graphics tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1361)
				int tmp10 = tmp9->__commands->get_length();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1361)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1361)
				tmp7 = (tmp11 > (int)0);
			}
			else{
				HX_STACK_LINE(1361)
				tmp7 = false;
			}
			HX_STACK_LINE(1361)
			if ((tmp7)){
				HX_STACK_LINE(1361)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(1366)
		::openfl::_internal::renderer::RenderSession tmp1 = renderSession;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1366)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp1);
		HX_STACK_LINE(1371)
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1371)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1371)
		::openfl::text::AntiAliasType tmp4 = tmp3->antiAliasType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1371)
		bool tmp5 = (tmp4 != ::openfl::text::AntiAliasType_obj::ADVANCED);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1371)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1371)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1371)
		if ((tmp6)){
			HX_STACK_LINE(1371)
			::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1371)
			::openfl::_internal::text::TextEngine tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1371)
			::openfl::text::GridFitType tmp10 = tmp9->gridFitType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1371)
			tmp7 = (tmp10 != ::openfl::text::GridFitType_obj::PIXEL);
		}
		else{
			HX_STACK_LINE(1371)
			tmp7 = true;
		}
		HX_STACK_LINE(1371)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp2,tmp7);
		HX_STACK_LINE(1379)
		{
			HX_STACK_LINE(1379)
			::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1379)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1379)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1379)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1379)
			if ((tmp10)){
				HX_STACK_LINE(1379)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1379)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1379)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1379)
				tmp11 = (tmp14 != null());
			}
			else{
				HX_STACK_LINE(1379)
				tmp11 = false;
			}
			HX_STACK_LINE(1379)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1379)
			if ((tmp11)){
				HX_STACK_LINE(1379)
				::openfl::display::Graphics tmp13 = this->__maskGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1379)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1379)
				int tmp15 = tmp14->__commands->get_length();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1379)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1379)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(1379)
				tmp12 = false;
			}
			HX_STACK_LINE(1379)
			if ((tmp12)){
				HX_STACK_LINE(1379)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(1379)
			::openfl::geom::Rectangle tmp13 = this->__scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1379)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1379)
			if ((tmp14)){
				HX_STACK_LINE(1379)
				renderSession->maskManager->popRect();
			}
		}
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",1384,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1386)
		Dynamic tmp = this->__startCursorTimer_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1386)
		::haxe::Timer tmp1 = ::haxe::Timer_obj::delay(tmp,(int)600);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1386)
		this->__cursorTimer = tmp1;
		HX_STACK_LINE(1387)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1387)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1387)
		this->__showCursor = tmp3;
		HX_STACK_LINE(1388)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__startTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startTextInput",0x3a7d3e9f,"openfl.text.TextField.__startTextInput","openfl/text/TextField.hx",1393,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1395)
		int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1395)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1395)
		if ((tmp1)){
			HX_STACK_LINE(1397)
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1397)
			int tmp3 = tmp2->text.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1397)
			this->__caretIndex = tmp3;
			HX_STACK_LINE(1398)
			int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1398)
			this->__selectionIndex = tmp4;
		}
		HX_STACK_LINE(1402)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1402)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1402)
		if ((tmp3)){
			HX_STACK_LINE(1406)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1406)
			::lime::_backend::native::NativeWindow tmp5 = tmp4->window->backend;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1406)
			tmp5->setEnableTextEvents(true);
			HX_STACK_LINE(1408)
			bool tmp6 = this->__inputEnabled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1408)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1408)
			if ((tmp7)){
				HX_STACK_LINE(1410)
				::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1410)
				::lime::_backend::native::NativeWindow tmp9 = tmp8->window->backend;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1410)
				tmp9->setEnableTextEvents(true);
				HX_STACK_LINE(1412)
				::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1412)
				::lime::app::Event_String_Void tmp11 = tmp10->window->onTextInput;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1412)
				Dynamic tmp12 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1412)
				bool tmp13 = tmp11->has(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1412)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1412)
				if ((tmp14)){
					HX_STACK_LINE(1414)
					::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1414)
					::lime::app::Event_String_Void tmp16 = tmp15->window->onTextInput;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1414)
					Dynamic tmp17 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1414)
					tmp16->add(tmp17,null(),null());
					HX_STACK_LINE(1415)
					::openfl::display::Stage tmp18 = this->stage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1415)
					::lime::app::Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp19 = tmp18->window->onKeyDown;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1415)
					Dynamic tmp20 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1415)
					tmp19->add(tmp20,null(),null());
				}
				HX_STACK_LINE(1419)
				this->__inputEnabled = true;
				HX_STACK_LINE(1420)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startTextInput,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",1431,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1433)
		::haxe::Timer tmp = this->__cursorTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1433)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1433)
		if ((tmp1)){
			HX_STACK_LINE(1435)
			::haxe::Timer tmp2 = this->__cursorTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1435)
			tmp2->stop();
			HX_STACK_LINE(1436)
			this->__cursorTimer = null();
		}
		HX_STACK_LINE(1440)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1440)
		if ((tmp2)){
			HX_STACK_LINE(1442)
			this->__showCursor = false;
			HX_STACK_LINE(1443)
			this->__dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

Void TextField_obj::__stopTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopTextInput",0x6c7c2cf7,"openfl.text.TextField.__stopTextInput","openfl/text/TextField.hx",1450,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1454)
		bool tmp = this->__inputEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1454)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1454)
		if ((tmp)){
			HX_STACK_LINE(1454)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1454)
			::openfl::display::Stage tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1454)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(1454)
			tmp1 = false;
		}
		HX_STACK_LINE(1454)
		if ((tmp1)){
			HX_STACK_LINE(1456)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1456)
			::lime::_backend::native::NativeWindow tmp3 = tmp2->window->backend;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1456)
			tmp3->setEnableTextEvents(false);
			HX_STACK_LINE(1457)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1457)
			::lime::app::Event_String_Void tmp5 = tmp4->window->onTextInput;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1457)
			Dynamic tmp6 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1457)
			tmp5->remove(tmp6);
			HX_STACK_LINE(1458)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1458)
			::lime::app::Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp8 = tmp7->window->onKeyDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1458)
			Dynamic tmp9 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1458)
			tmp8->remove(tmp9);
			HX_STACK_LINE(1460)
			this->__inputEnabled = false;
			HX_STACK_LINE(1461)
			this->__stopCursorTimer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopTextInput,(void))

Void TextField_obj::__updateLayout( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__updateLayout",0x2d3b57d7,"openfl.text.TextField.__updateLayout","openfl/text/TextField.hx",1470,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1472)
		bool tmp = this->__layoutDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1472)
		if ((tmp)){
			HX_STACK_LINE(1474)
			::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1474)
			tmp1->update();
			HX_STACK_LINE(1476)
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1476)
			::openfl::text::TextFieldAutoSize tmp3 = tmp2->autoSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1476)
			bool tmp4 = (tmp3 != ::openfl::text::TextFieldAutoSize_obj::NONE);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1476)
			if ((tmp4)){
				HX_STACK_LINE(1478)
				::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1478)
				Float cacheWidth = tmp5->width;		HX_STACK_VAR(cacheWidth,"cacheWidth");
				HX_STACK_LINE(1479)
				::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1479)
				Float cacheHeight = tmp6->height;		HX_STACK_VAR(cacheHeight,"cacheHeight");
				HX_STACK_LINE(1481)
				{
					HX_STACK_LINE(1481)
					::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1481)
					::openfl::text::TextFieldAutoSize _g = tmp7->autoSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1481)
					switch( (int)(_g->__Index())){
						case (int)1: case (int)3: case (int)0: {
							HX_STACK_LINE(1485)
							::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1485)
							bool tmp9 = tmp8->wordWrap;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1485)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1485)
							if ((tmp10)){
								HX_STACK_LINE(1487)
								::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1487)
								Float tmp12 = tmp11->textWidth;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1487)
								Float tmp13 = (tmp12 + (int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1487)
								::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1487)
								tmp14->width = tmp13;
							}
							HX_STACK_LINE(1491)
							::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1491)
							Float tmp12 = tmp11->textHeight;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1491)
							Float tmp13 = (tmp12 + (int)4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1491)
							::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1491)
							tmp14->height = tmp13;
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(1498)
				::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1498)
				Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1498)
				Float tmp9 = cacheWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1498)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1498)
				if ((tmp10)){
					HX_STACK_LINE(1500)
					::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1500)
					::openfl::text::TextFieldAutoSize _g = tmp11->autoSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1500)
					switch( (int)(_g->__Index())){
						case (int)3: {
							HX_STACK_LINE(1504)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1504)
							Float tmp12 = _g1->get_x();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1504)
							Float tmp13 = cacheWidth;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1504)
							::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1504)
							Float tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1504)
							Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1504)
							Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1504)
							_g1->set_x(tmp17);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(1508)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1508)
							Float tmp12 = _g1->get_x();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1508)
							Float tmp13 = cacheWidth;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1508)
							::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1508)
							Float tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1508)
							Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1508)
							Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1508)
							Float tmp18 = (tmp12 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1508)
							_g1->set_x(tmp18);
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(1518)
				::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1518)
				tmp11->getBounds();
			}
			HX_STACK_LINE(1522)
			this->__layoutDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__updateLayout,(void))

::openfl::text::AntiAliasType TextField_obj::get_antiAliasType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_antiAliasType",0x57115f1b,"openfl.text.TextField.get_antiAliasType","openfl/text/TextField.hx",1536,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1538)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1538)
	::openfl::text::AntiAliasType tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1538)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

::openfl::text::AntiAliasType TextField_obj::set_antiAliasType( ::openfl::text::AntiAliasType value){
	HX_STACK_FRAME("openfl.text.TextField","set_antiAliasType",0x7a7f3727,"openfl.text.TextField.set_antiAliasType","openfl/text/TextField.hx",1543,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1545)
	::openfl::text::AntiAliasType tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1545)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1545)
	::openfl::text::AntiAliasType tmp2 = tmp1->antiAliasType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1545)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1545)
	if ((tmp3)){
	}
	HX_STACK_LINE(1551)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1551)
	::openfl::text::AntiAliasType tmp5 = tmp4->antiAliasType = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1551)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

::openfl::text::TextFieldAutoSize TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("openfl.text.TextField","get_autoSize",0xd7aef1fd,"openfl.text.TextField.get_autoSize","openfl/text/TextField.hx",1556,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1558)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1558)
	::openfl::text::TextFieldAutoSize tmp1 = tmp->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1558)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

::openfl::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",1563,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1565)
	::openfl::text::TextFieldAutoSize tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1565)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1565)
	::openfl::text::TextFieldAutoSize tmp2 = tmp1->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1565)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1565)
	if ((tmp3)){
		HX_STACK_LINE(1567)
		this->__dirty = true;
		HX_STACK_LINE(1568)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1572)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1572)
	::openfl::text::TextFieldAutoSize tmp5 = tmp4->autoSize = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1572)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("openfl.text.TextField","get_background",0x50119b5b,"openfl.text.TextField.get_background","openfl/text/TextField.hx",1577,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1579)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1579)
	bool tmp1 = tmp->background;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1579)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",1584,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1586)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1586)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1586)
	bool tmp2 = tmp1->background;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1586)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1586)
	if ((tmp3)){
		HX_STACK_LINE(1588)
		this->__dirty = true;
	}
	HX_STACK_LINE(1592)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1592)
	bool tmp5 = tmp4->background = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1592)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_backgroundColor",0x63403c08,"openfl.text.TextField.get_backgroundColor","openfl/text/TextField.hx",1597,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1599)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1599)
	int tmp1 = tmp->backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1599)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",1604,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1606)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1606)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1606)
	int tmp2 = tmp1->backgroundColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1606)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1606)
	if ((tmp3)){
		HX_STACK_LINE(1608)
		this->__dirty = true;
	}
	HX_STACK_LINE(1612)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1612)
	int tmp5 = tmp4->backgroundColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1612)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("openfl.text.TextField","get_border",0xa3e0d9d9,"openfl.text.TextField.get_border","openfl/text/TextField.hx",1617,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1619)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1619)
	bool tmp1 = tmp->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1619)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",1624,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1626)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1626)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1626)
	bool tmp2 = tmp1->border;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1626)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1626)
	if ((tmp3)){
		HX_STACK_LINE(1628)
		this->__dirty = true;
	}
	HX_STACK_LINE(1632)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1632)
	bool tmp5 = tmp4->border = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1632)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_borderColor",0x6267b4ca,"openfl.text.TextField.get_borderColor","openfl/text/TextField.hx",1637,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1639)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1639)
	int tmp1 = tmp->borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1639)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1644,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1646)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1646)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1646)
	int tmp2 = tmp1->borderColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1646)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1646)
	if ((tmp3)){
		HX_STACK_LINE(1648)
		this->__dirty = true;
	}
	HX_STACK_LINE(1652)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1652)
	int tmp5 = tmp4->borderColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1652)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1657,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1659)
	this->__updateLayout();
	HX_STACK_LINE(1661)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1661)
	int tmp1 = tmp->bottomScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1661)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretIndex",0x074fbdfc,"openfl.text.TextField.get_caretIndex","openfl/text/TextField.hx",1666,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1668)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1668)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1673,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1675)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1675)
	::openfl::text::TextFormat tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1675)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1680,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1682)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1682)
	::openfl::text::TextFormat tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1682)
	tmp->__merge(tmp1);
	HX_STACK_LINE(1684)
	this->__layoutDirty = true;
	HX_STACK_LINE(1685)
	this->__dirty = true;
	HX_STACK_LINE(1687)
	::openfl::text::TextFormat tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1687)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("openfl.text.TextField","get_displayAsPassword",0x62bc3b42,"openfl.text.TextField.get_displayAsPassword","openfl/text/TextField.hx",1692,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1694)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1694)
	bool tmp1 = tmp->displayAsPassword;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1694)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_displayAsPassword",0xb6c5094e,"openfl.text.TextField.set_displayAsPassword","openfl/text/TextField.hx",1699,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1701)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1701)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1701)
	bool tmp2 = tmp1->displayAsPassword;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1701)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1701)
	if ((tmp3)){
		HX_STACK_LINE(1703)
		this->__dirty = true;
		HX_STACK_LINE(1704)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1708)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1708)
	bool tmp5 = tmp4->displayAsPassword = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1708)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("openfl.text.TextField","get_embedFonts",0xb8d5ce98,"openfl.text.TextField.get_embedFonts","openfl/text/TextField.hx",1713,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1715)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1715)
	bool tmp1 = tmp->embedFonts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1715)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_embedFonts",0xd8f5b70c,"openfl.text.TextField.set_embedFonts","openfl/text/TextField.hx",1720,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1729)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1729)
	bool tmp1 = tmp->embedFonts = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1729)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

::openfl::text::GridFitType TextField_obj::get_gridFitType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_gridFitType",0x3fa66af8,"openfl.text.TextField.get_gridFitType","openfl/text/TextField.hx",1734,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1736)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1736)
	::openfl::text::GridFitType tmp1 = tmp->gridFitType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1736)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

::openfl::text::GridFitType TextField_obj::set_gridFitType( ::openfl::text::GridFitType value){
	HX_STACK_FRAME("openfl.text.TextField","set_gridFitType",0x3b71e804,"openfl.text.TextField.set_gridFitType","openfl/text/TextField.hx",1741,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1750)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1750)
	::openfl::text::GridFitType tmp1 = tmp->gridFitType = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1750)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1755,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1757)
	this->__updateLayout();
	HX_STACK_LINE(1758)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1758)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1758)
	return tmp1;
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1763,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1765)
	Float tmp = this->get_scaleY();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1765)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1765)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1765)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1765)
	if ((tmp2)){
		HX_STACK_LINE(1765)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1765)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1765)
		::openfl::_internal::text::TextEngine tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1765)
		Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1765)
		tmp3 = (tmp4 != tmp7);
	}
	else{
		HX_STACK_LINE(1765)
		tmp3 = true;
	}
	HX_STACK_LINE(1765)
	if ((tmp3)){
		HX_STACK_LINE(1767)
		{
			HX_STACK_LINE(1767)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1767)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1767)
			if ((tmp5)){
				HX_STACK_LINE(1767)
				this->__transformDirty = true;
				HX_STACK_LINE(1767)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1768)
		this->__dirty = true;
		HX_STACK_LINE(1769)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1773)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1774)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1774)
	Float tmp5 = tmp4->height = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1774)
	return tmp5;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1779,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1781)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1781)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1781)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1786,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1788)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1788)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1788)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1788)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1788)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1788)
	if ((tmp3)){
		HX_STACK_LINE(1788)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1788)
		::openfl::_internal::text::TextEngine tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1788)
		::String tmp7 = tmp6->text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1788)
		::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1788)
		tmp4 = (tmp7 != tmp8);
	}
	else{
		HX_STACK_LINE(1788)
		tmp4 = true;
	}
	HX_STACK_LINE(1788)
	if ((tmp4)){
		HX_STACK_LINE(1790)
		this->__dirty = true;
		HX_STACK_LINE(1791)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1795)
	this->__isHTML = true;
	HX_STACK_LINE(1797)
	{
		HX_STACK_LINE(1799)
		::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("<br>","\xb2","\x8d","\xf3","\x27"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1799)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1799)
		::String tmp7 = tmp5->replace(tmp6,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1799)
		value = tmp7;
		HX_STACK_LINE(1800)
		::EReg tmp8 = ::EReg_obj::__new(HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1800)
		::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1800)
		::String tmp10 = tmp8->replace(tmp9,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1800)
		value = tmp10;
		HX_STACK_LINE(1804)
		Array< ::String > segments = value.split(HX_HCSTRING("<font","\x0b","\x2c","\xcb","\xcf"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1806)
		bool tmp11 = (segments->length == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1806)
		if ((tmp11)){
			HX_STACK_LINE(1808)
			::EReg tmp12 = ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1808)
			::String tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1808)
			::String tmp14 = tmp12->replace(tmp13,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1808)
			value = tmp14;
			HX_STACK_LINE(1810)
			::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1810)
			int tmp16 = tmp15->textFormatRanges->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1810)
			bool tmp17 = (tmp16 > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1810)
			if ((tmp17)){
				HX_STACK_LINE(1812)
				::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1812)
				::openfl::_internal::text::TextEngine tmp19 = this->__textEngine;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1812)
				int tmp20 = tmp19->textFormatRanges->length;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1812)
				int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1812)
				tmp18->textFormatRanges->splice((int)1,tmp21);
			}
			HX_STACK_LINE(1816)
			::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1816)
			::openfl::_internal::text::TextFormatRange tmp19 = tmp18->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1816)
			::openfl::_internal::text::TextFormatRange range = tmp19;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1817)
			::openfl::text::TextFormat tmp20 = this->__textFormat;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1817)
			range->format = tmp20;
			HX_STACK_LINE(1818)
			range->start = (int)0;
			HX_STACK_LINE(1819)
			range->end = value.length;
			HX_STACK_LINE(1821)
			::openfl::_internal::text::TextEngine tmp21 = this->__textEngine;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1821)
			::String tmp22 = tmp21->text = value;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1821)
			return tmp22;
		}
		else{
			HX_STACK_LINE(1825)
			::openfl::_internal::text::TextEngine tmp12 = this->__textEngine;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1825)
			::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1825)
			int tmp14 = tmp13->textFormatRanges->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1825)
			tmp12->textFormatRanges->splice((int)0,tmp14);
			HX_STACK_LINE(1827)
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(1831)
			{
				HX_STACK_LINE(1831)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1831)
				while((true)){
					HX_STACK_LINE(1831)
					bool tmp15 = (_g < segments->length);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1831)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1831)
					if ((tmp16)){
						HX_STACK_LINE(1831)
						break;
					}
					HX_STACK_LINE(1831)
					::String tmp17 = segments->__get(_g);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1831)
					::String segment = tmp17;		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(1831)
					++(_g);
					HX_STACK_LINE(1833)
					bool tmp18 = (segment == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1833)
					if ((tmp18)){
						HX_STACK_LINE(1833)
						continue;
					}
					HX_STACK_LINE(1835)
					int tmp19 = segment.indexOf(HX_HCSTRING("</font>","\x3c","\x82","\x5f","\x8e"),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1835)
					int closeFontIndex = tmp19;		HX_STACK_VAR(closeFontIndex,"closeFontIndex");
					HX_STACK_LINE(1837)
					bool tmp20 = (closeFontIndex > (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1837)
					if ((tmp20)){
						HX_STACK_LINE(1839)
						int tmp21 = segment.indexOf(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1839)
						int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1839)
						int start = tmp22;		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(1840)
						int end = closeFontIndex;		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(1841)
						::openfl::text::TextFormat tmp23 = this->__textFormat;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1841)
						::openfl::text::TextFormat tmp24 = tmp23->clone();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1841)
						::openfl::text::TextFormat format = tmp24;		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(1843)
						int tmp25 = segment.indexOf(HX_HCSTRING("face=","\x00","\x55","\x48","\xfb"),null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1843)
						int faceIndex = tmp25;		HX_STACK_VAR(faceIndex,"faceIndex");
						HX_STACK_LINE(1844)
						int tmp26 = segment.indexOf(HX_HCSTRING("color=","\x7a","\xc5","\x86","\xc6"),null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1844)
						int colorIndex = tmp26;		HX_STACK_VAR(colorIndex,"colorIndex");
						HX_STACK_LINE(1845)
						int tmp27 = segment.indexOf(HX_HCSTRING("size=","\x5c","\x08","\xd9","\x7c"),null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1845)
						int sizeIndex = tmp27;		HX_STACK_VAR(sizeIndex,"sizeIndex");
						HX_STACK_LINE(1847)
						int tmp28 = faceIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1847)
						int tmp29 = (int)-1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1847)
						bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1847)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1847)
						if ((tmp30)){
							HX_STACK_LINE(1847)
							tmp31 = (faceIndex < start);
						}
						else{
							HX_STACK_LINE(1847)
							tmp31 = false;
						}
						HX_STACK_LINE(1847)
						if ((tmp31)){
							HX_STACK_LINE(1849)
							int tmp32 = (faceIndex + (int)6);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1849)
							int tmp33 = faceIndex;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1849)
							int tmp34 = segment.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1849)
							::String tmp35 = segment.substr(tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1849)
							format->font = tmp35;
						}
						HX_STACK_LINE(1853)
						int tmp32 = colorIndex;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1853)
						int tmp33 = (int)-1;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1853)
						bool tmp34 = (tmp32 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1853)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1853)
						if ((tmp34)){
							HX_STACK_LINE(1853)
							tmp35 = (colorIndex < start);
						}
						else{
							HX_STACK_LINE(1853)
							tmp35 = false;
						}
						HX_STACK_LINE(1853)
						if ((tmp35)){
							HX_STACK_LINE(1855)
							int tmp36 = (colorIndex + (int)8);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1855)
							::String tmp37 = segment.substr(tmp36,(int)6);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1855)
							::String tmp38 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1855)
							Dynamic tmp39 = ::Std_obj::parseInt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1855)
							format->color = tmp39;
						}
						HX_STACK_LINE(1859)
						int tmp36 = sizeIndex;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1859)
						int tmp37 = (int)-1;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1859)
						bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1859)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1859)
						if ((tmp38)){
							HX_STACK_LINE(1859)
							tmp39 = (sizeIndex < start);
						}
						else{
							HX_STACK_LINE(1859)
							tmp39 = false;
						}
						HX_STACK_LINE(1859)
						if ((tmp39)){
							HX_STACK_LINE(1861)
							int tmp40 = (sizeIndex + (int)6);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1861)
							int tmp41 = sizeIndex;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1861)
							int tmp42 = segment.indexOf(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"),tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1861)
							::String tmp43 = segment.substr(tmp40,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1861)
							Dynamic tmp44 = ::Std_obj::parseInt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1861)
							format->size = tmp44;
						}
						HX_STACK_LINE(1865)
						int tmp40 = start;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1865)
						int tmp41 = end;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1865)
						::String tmp42 = segment.substring(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1865)
						::String sub = tmp42;		HX_STACK_VAR(sub,"sub");
						HX_STACK_LINE(1866)
						::EReg tmp43 = ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1866)
						::String tmp44 = sub;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1866)
						::String tmp45 = tmp43->replace(tmp44,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1866)
						sub = tmp45;
						HX_STACK_LINE(1868)
						::openfl::_internal::text::TextEngine tmp46 = this->__textEngine;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1868)
						::openfl::text::TextFormat tmp47 = format;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1868)
						int tmp48 = value.length;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1868)
						int tmp49 = (value.length + sub.length);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1868)
						::openfl::_internal::text::TextFormatRange tmp50 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp47,tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1868)
						tmp46->textFormatRanges->push(tmp50);
						HX_STACK_LINE(1869)
						hx::AddEq(value,sub);
						HX_STACK_LINE(1871)
						int tmp51 = (closeFontIndex + (int)7);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1871)
						int tmp52 = segment.length;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1871)
						bool tmp53 = (tmp51 < tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1871)
						if ((tmp53)){
							HX_STACK_LINE(1873)
							int tmp54 = (closeFontIndex + (int)7);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1873)
							::String tmp55 = segment.substr(tmp54,null());		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1873)
							sub = tmp55;
							HX_STACK_LINE(1874)
							::openfl::_internal::text::TextEngine tmp56 = this->__textEngine;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1874)
							::openfl::text::TextFormat tmp57 = this->__textFormat;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1874)
							int tmp58 = value.length;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1874)
							int tmp59 = (value.length + sub.length);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1874)
							::openfl::_internal::text::TextFormatRange tmp60 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp57,tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1874)
							tmp56->textFormatRanges->push(tmp60);
							HX_STACK_LINE(1875)
							hx::AddEq(value,sub);
						}
					}
					else{
						HX_STACK_LINE(1881)
						::openfl::_internal::text::TextEngine tmp21 = this->__textEngine;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1881)
						::openfl::text::TextFormat tmp22 = this->__textFormat;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1881)
						int tmp23 = value.length;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1881)
						int tmp24 = (value.length + segment.length);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1881)
						::openfl::_internal::text::TextFormatRange tmp25 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp22,tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1881)
						tmp21->textFormatRanges->push(tmp25);
						HX_STACK_LINE(1882)
						hx::AddEq(value,segment);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1892)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1892)
	::String tmp6 = tmp5->text = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1892)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length( ){
	HX_STACK_FRAME("openfl.text.TextField","get_length",0xdece21d3,"openfl.text.TextField.get_length","openfl/text/TextField.hx",1897,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1899)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1899)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1899)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1899)
	if ((tmp2)){
		HX_STACK_LINE(1901)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1901)
		int tmp4 = tmp3->text.length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1901)
		return tmp4;
	}
	HX_STACK_LINE(1905)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxChars",0x980651c6,"openfl.text.TextField.get_maxChars","openfl/text/TextField.hx",1910,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1912)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1912)
	int tmp1 = tmp->maxChars;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1912)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_maxChars",0xacff753a,"openfl.text.TextField.set_maxChars","openfl/text/TextField.hx",1917,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1919)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1919)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1919)
	int tmp2 = tmp1->maxChars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1919)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1919)
	if ((tmp3)){
		HX_STACK_LINE(1921)
		this->__dirty = true;
		HX_STACK_LINE(1922)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1926)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1926)
	int tmp5 = tmp4->maxChars = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1926)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",1931,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1933)
	this->__updateLayout();
	HX_STACK_LINE(1935)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1935)
	int tmp1 = tmp->maxScrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1935)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",1940,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1942)
	this->__updateLayout();
	HX_STACK_LINE(1944)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1944)
	int tmp1 = tmp->maxScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1944)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("openfl.text.TextField","get_multiline",0x24925820,"openfl.text.TextField.get_multiline","openfl/text/TextField.hx",1949,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1951)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1951)
	bool tmp1 = tmp->multiline;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1951)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_multiline",0x69983a2c,"openfl.text.TextField.set_multiline","openfl/text/TextField.hx",1956,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1958)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1958)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1958)
	bool tmp2 = tmp1->multiline;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1958)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1958)
	if ((tmp3)){
		HX_STACK_LINE(1960)
		this->__dirty = true;
		HX_STACK_LINE(1961)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1965)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1965)
	bool tmp5 = tmp4->multiline = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1965)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",1970,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1972)
	this->__updateLayout();
	HX_STACK_LINE(1974)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1974)
	int tmp1 = tmp->numLines;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1974)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict( ){
	HX_STACK_FRAME("openfl.text.TextField","get_restrict",0x99d42d69,"openfl.text.TextField.get_restrict","openfl/text/TextField.hx",1979,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1981)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1981)
	::String tmp1 = tmp->restrict;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1981)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_restrict",0xaecd50dd,"openfl.text.TextField.set_restrict","openfl/text/TextField.hx",1986,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1988)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1988)
	::String tmp1 = tmp->restrict = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1988)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollH",0xbeccf60e,"openfl.text.TextField.get_scrollH","openfl/text/TextField.hx",1993,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1995)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1995)
	int tmp1 = tmp->scrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1995)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollH",0xc939fd1a,"openfl.text.TextField.set_scrollH","openfl/text/TextField.hx",2000,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2002)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2002)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2002)
	int tmp2 = tmp1->maxScrollH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2002)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2002)
	if ((tmp3)){
		HX_STACK_LINE(2002)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2002)
		value = tmp4->maxScrollH;
	}
	HX_STACK_LINE(2003)
	bool tmp4 = (value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2003)
	if ((tmp4)){
		HX_STACK_LINE(2003)
		value = (int)0;
	}
	HX_STACK_LINE(2005)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2005)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2005)
	int tmp7 = tmp6->scrollH;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2005)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2005)
	if ((tmp8)){
		HX_STACK_LINE(2007)
		this->__dirty = true;
	}
	HX_STACK_LINE(2011)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2011)
	int tmp10 = tmp9->scrollH = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2011)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollV",0xbeccf61c,"openfl.text.TextField.get_scrollV","openfl/text/TextField.hx",2016,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2018)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2018)
	int tmp1 = tmp->scrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2018)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollV",0xc939fd28,"openfl.text.TextField.set_scrollV","openfl/text/TextField.hx",2023,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2025)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2025)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2025)
	int tmp2 = tmp1->maxScrollV;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2025)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2025)
	if ((tmp3)){
		HX_STACK_LINE(2025)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2025)
		value = tmp4->maxScrollV;
	}
	HX_STACK_LINE(2026)
	bool tmp4 = (value < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2026)
	if ((tmp4)){
		HX_STACK_LINE(2026)
		value = (int)1;
	}
	HX_STACK_LINE(2028)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2028)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2028)
	int tmp7 = tmp6->scrollV;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2028)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2028)
	if ((tmp8)){
		HX_STACK_LINE(2030)
		this->__dirty = true;
	}
	HX_STACK_LINE(2034)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2034)
	int tmp10 = tmp9->scrollV = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2034)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectable",0xee1ebe03,"openfl.text.TextField.get_selectable","openfl/text/TextField.hx",2039,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2041)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2041)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2041)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",2046,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2048)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2048)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2048)
	bool tmp2 = tmp1->selectable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2048)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2048)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2048)
	if ((tmp3)){
		HX_STACK_LINE(2048)
		::openfl::text::TextFieldType tmp5 = this->get_type();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2048)
		::openfl::text::TextFieldType tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2048)
		tmp4 = (tmp6 == ::openfl::text::TextFieldType_obj::INPUT);
	}
	else{
		HX_STACK_LINE(2048)
		tmp4 = false;
	}
	HX_STACK_LINE(2048)
	if ((tmp4)){
		HX_STACK_LINE(2050)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2050)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2050)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2050)
		if ((tmp6)){
			HX_STACK_LINE(2050)
			::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2050)
			::openfl::display::Stage tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2050)
			::openfl::display::InteractiveObject tmp10 = tmp9->get_focus();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2050)
			::openfl::display::InteractiveObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2050)
			tmp7 = (tmp11 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(2050)
			tmp7 = false;
		}
		HX_STACK_LINE(2050)
		if ((tmp7)){
			HX_STACK_LINE(2052)
			this->__startTextInput();
		}
		else{
			HX_STACK_LINE(2054)
			bool tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2054)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2054)
			if ((tmp9)){
				HX_STACK_LINE(2056)
				this->__stopTextInput();
			}
		}
	}
	HX_STACK_LINE(2062)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2062)
	bool tmp6 = tmp5->selectable = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2062)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionBeginIndex",0xb79fa288,"openfl.text.TextField.get_selectionBeginIndex","openfl/text/TextField.hx",2067,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2069)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2069)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2069)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2069)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2069)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionEndIndex",0xc3677dd6,"openfl.text.TextField.get_selectionEndIndex","openfl/text/TextField.hx",2074,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2076)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2076)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2076)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2076)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2076)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness( ){
	HX_STACK_FRAME("openfl.text.TextField","get_sharpness",0xa1a5a7b4,"openfl.text.TextField.get_sharpness","openfl/text/TextField.hx",2081,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2083)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2083)
	Float tmp1 = tmp->sharpness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2083)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_sharpness",0xe6ab89c0,"openfl.text.TextField.set_sharpness","openfl/text/TextField.hx",2088,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2090)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2090)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2090)
	Float tmp2 = tmp1->sharpness;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2090)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2090)
	if ((tmp3)){
		HX_STACK_LINE(2092)
		this->__dirty = true;
	}
	HX_STACK_LINE(2096)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2096)
	Float tmp5 = tmp4->sharpness = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2096)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",2101,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2103)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2103)
	::String tmp1 = tmp->text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2103)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",2108,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2110)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2110)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2110)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2110)
	if ((tmp1)){
		HX_STACK_LINE(2110)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2110)
		::openfl::_internal::text::TextEngine tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2110)
		::String tmp5 = tmp4->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2110)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2110)
		tmp2 = (tmp5 != tmp6);
	}
	else{
		HX_STACK_LINE(2110)
		tmp2 = true;
	}
	HX_STACK_LINE(2110)
	if ((tmp2)){
		HX_STACK_LINE(2112)
		this->__dirty = true;
		HX_STACK_LINE(2113)
		this->__layoutDirty = true;
	}
	else{
		HX_STACK_LINE(2117)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2117)
		return tmp3;
	}
	HX_STACK_LINE(2121)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2121)
	int tmp4 = tmp3->textFormatRanges->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2121)
	bool tmp5 = (tmp4 > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2121)
	if ((tmp5)){
		HX_STACK_LINE(2123)
		::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2123)
		::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2123)
		int tmp8 = tmp7->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2123)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2123)
		tmp6->textFormatRanges->splice((int)1,tmp9);
	}
	HX_STACK_LINE(2127)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2127)
	::openfl::_internal::text::TextFormatRange tmp7 = tmp6->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2127)
	::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(2128)
	::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2128)
	range->format = tmp8;
	HX_STACK_LINE(2129)
	range->start = (int)0;
	HX_STACK_LINE(2130)
	range->end = value.length;
	HX_STACK_LINE(2132)
	this->__isHTML = false;
	HX_STACK_LINE(2134)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2134)
	::String tmp10 = tmp9->text = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2134)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",2139,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2141)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2141)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2141)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",2146,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2148)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2148)
	::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2148)
	Dynamic tmp2 = tmp1->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2148)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2148)
	if ((tmp3)){
		HX_STACK_LINE(2148)
		this->__dirty = true;
	}
	HX_STACK_LINE(2150)
	{
		HX_STACK_LINE(2150)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2150)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2150)
		Array< ::Dynamic > _g1 = tmp4->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2150)
		while((true)){
			HX_STACK_LINE(2150)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2150)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2150)
			if ((tmp6)){
				HX_STACK_LINE(2150)
				break;
			}
			HX_STACK_LINE(2150)
			::openfl::_internal::text::TextFormatRange tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2150)
			::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(2150)
			++(_g);
			HX_STACK_LINE(2152)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(2156)
	::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2156)
	Dynamic tmp5 = tmp4->color = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2156)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",2160,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2162)
	this->__updateLayout();
	HX_STACK_LINE(2163)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2163)
	Float tmp1 = tmp->textWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",2168,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2170)
	this->__updateLayout();
	HX_STACK_LINE(2171)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2171)
	Float tmp1 = tmp->textHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2171)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::openfl::text::TextFieldType TextField_obj::get_type( ){
	HX_STACK_FRAME("openfl.text.TextField","get_type",0x3b1c7a67,"openfl.text.TextField.get_type","openfl/text/TextField.hx",2176,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2178)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2178)
	::openfl::text::TextFieldType tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

::openfl::text::TextFieldType TextField_obj::set_type( ::openfl::text::TextFieldType value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",2183,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2185)
	::openfl::text::TextFieldType tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2185)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2185)
	::openfl::text::TextFieldType tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2185)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2185)
	if ((tmp3)){
		HX_STACK_LINE(2187)
		bool tmp4 = (value == ::openfl::text::TextFieldType_obj::INPUT);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2187)
		if ((tmp4)){
			HX_STACK_LINE(2189)
			::String tmp5 = ::openfl::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2189)
			Dynamic tmp6 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2189)
			this->addEventListener(tmp5,tmp6,null(),null(),null());
			HX_STACK_LINE(2190)
			::String tmp7 = ::openfl::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2190)
			Dynamic tmp8 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2190)
			this->addEventListener(tmp7,tmp8,null(),null(),null());
			HX_STACK_LINE(2191)
			::String tmp9 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2191)
			Dynamic tmp10 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2191)
			this->addEventListener(tmp9,tmp10,null(),null(),null());
			HX_STACK_LINE(2193)
			this->this_onFocusIn(null());
		}
		else{
			HX_STACK_LINE(2197)
			::String tmp5 = ::openfl::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2197)
			Dynamic tmp6 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2197)
			this->removeEventListener(tmp5,tmp6,null());
			HX_STACK_LINE(2198)
			::String tmp7 = ::openfl::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2198)
			Dynamic tmp8 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2198)
			this->removeEventListener(tmp7,tmp8,null());
			HX_STACK_LINE(2199)
			::String tmp9 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2199)
			Dynamic tmp10 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2199)
			this->removeEventListener(tmp9,tmp10,null());
			HX_STACK_LINE(2201)
			this->__stopTextInput();
		}
		HX_STACK_LINE(2205)
		this->__dirty = true;
	}
	HX_STACK_LINE(2209)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2209)
	::openfl::text::TextFieldType tmp5 = tmp4->type = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2209)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",2214,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2216)
	this->__updateLayout();
	HX_STACK_LINE(2217)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2217)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2217)
	return tmp1;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",2222,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2224)
	Float tmp = this->get_scaleX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2224)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2224)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2224)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2224)
	if ((tmp2)){
		HX_STACK_LINE(2224)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2224)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2224)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2224)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2224)
		tmp3 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(2224)
		tmp3 = true;
	}
	HX_STACK_LINE(2224)
	if ((tmp3)){
		HX_STACK_LINE(2226)
		{
			HX_STACK_LINE(2226)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2226)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2226)
			if ((tmp5)){
				HX_STACK_LINE(2226)
				this->__transformDirty = true;
				HX_STACK_LINE(2226)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(2227)
		this->__dirty = true;
		HX_STACK_LINE(2228)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(2232)
	this->set_scaleX((int)1);
	HX_STACK_LINE(2233)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2233)
	Float tmp5 = tmp4->width = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2233)
	return tmp5;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",2238,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2240)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2240)
	bool tmp1 = tmp->wordWrap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2240)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",2245,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(2247)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2247)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2247)
	bool tmp2 = tmp1->wordWrap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2247)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2247)
	if ((tmp3)){
		HX_STACK_LINE(2249)
		this->__dirty = true;
		HX_STACK_LINE(2250)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(2254)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2254)
	bool tmp5 = tmp4->wordWrap = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2254)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseMove",0x47084bd2,"openfl.text.TextField.stage_onMouseMove","openfl/text/TextField.hx",2266,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2268)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2268)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2268)
		if ((tmp1)){
			HX_STACK_LINE(2268)
			return null();
		}
		HX_STACK_LINE(2270)
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2270)
		bool tmp3 = tmp2->selectable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2270)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2270)
		if ((tmp3)){
			HX_STACK_LINE(2270)
			int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2270)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2270)
			tmp4 = (tmp6 >= (int)0);
		}
		else{
			HX_STACK_LINE(2270)
			tmp4 = false;
		}
		HX_STACK_LINE(2270)
		if ((tmp4)){
			HX_STACK_LINE(2272)
			this->__updateLayout();
			HX_STACK_LINE(2274)
			Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2274)
			Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2274)
			int tmp7 = this->__getPosition(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2274)
			int position = tmp7;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(2276)
			int tmp8 = position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2276)
			int tmp9 = this->__caretIndex;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2276)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2276)
			if ((tmp10)){
				HX_STACK_LINE(2278)
				this->__caretIndex = position;
				HX_STACK_LINE(2279)
				this->__dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

Void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseUp",0x9bb86cdc,"openfl.text.TextField.stage_onMouseUp","openfl/text/TextField.hx",2288,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2290)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2290)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2290)
		if ((tmp1)){
			HX_STACK_LINE(2290)
			return null();
		}
		HX_STACK_LINE(2292)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2292)
		::String tmp3 = ::openfl::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2292)
		Dynamic tmp4 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2292)
		tmp2->removeEventListener(tmp3,tmp4,null());
		HX_STACK_LINE(2293)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2293)
		::String tmp6 = ::openfl::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2293)
		Dynamic tmp7 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2293)
		tmp5->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(2295)
		::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2295)
		::openfl::display::InteractiveObject tmp9 = tmp8->get_focus();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2295)
		bool tmp10 = (tmp9 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2295)
		if ((tmp10)){
			HX_STACK_LINE(2297)
			this->__getWorldTransform();
			HX_STACK_LINE(2298)
			this->__updateLayout();
			HX_STACK_LINE(2300)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2300)
			{
				HX_STACK_LINE(2300)
				::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2300)
				::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2300)
				Float tmp13 = this->get_x();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2300)
				Float px = tmp13;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(2300)
				Float tmp14 = this->get_y();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2300)
				Float py = tmp14;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(2300)
				Float tmp15 = (_this->a * _this->d);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2300)
				Float tmp16 = (_this->b * _this->c);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2300)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2300)
				Float norm = tmp17;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(2300)
				bool tmp18 = (norm == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2300)
				if ((tmp18)){
					HX_STACK_LINE(2300)
					Float tmp19 = _this->tx;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2300)
					tmp11 = -(tmp19);
				}
				else{
					HX_STACK_LINE(2300)
					Float tmp19 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2300)
					Float tmp20 = _this->c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2300)
					Float tmp21 = (_this->ty - py);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2300)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2300)
					Float tmp23 = _this->d;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2300)
					Float tmp24 = (px - _this->tx);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2300)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2300)
					Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2300)
					tmp11 = (tmp19 * tmp26);
				}
			}
			HX_STACK_LINE(2300)
			Float px = tmp11;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(2301)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2301)
			{
				HX_STACK_LINE(2301)
				::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2301)
				::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2301)
				Float tmp14 = this->get_x();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2301)
				Float px1 = tmp14;		HX_STACK_VAR(px1,"px1");
				HX_STACK_LINE(2301)
				Float tmp15 = this->get_y();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2301)
				Float py = tmp15;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(2301)
				Float tmp16 = (_this->a * _this->d);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2301)
				Float tmp17 = (_this->b * _this->c);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2301)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2301)
				Float norm = tmp18;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(2301)
				bool tmp19 = (norm == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2301)
				if ((tmp19)){
					HX_STACK_LINE(2301)
					Float tmp20 = _this->ty;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2301)
					tmp12 = -(tmp20);
				}
				else{
					HX_STACK_LINE(2301)
					Float tmp20 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2301)
					Float tmp21 = _this->a;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2301)
					Float tmp22 = (py - _this->ty);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2301)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2301)
					Float tmp24 = _this->b;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2301)
					Float tmp25 = (_this->tx - px1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2301)
					Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2301)
					Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2301)
					tmp12 = (tmp20 * tmp27);
				}
			}
			HX_STACK_LINE(2301)
			Float py = tmp12;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(2303)
			Float tmp13 = this->get_mouseX();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2303)
			Float tmp14 = this->get_mouseY();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2303)
			int tmp15 = this->__getPosition(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2303)
			int upPos = tmp15;		HX_STACK_VAR(upPos,"upPos");
			HX_STACK_LINE(2304)
			int leftPos;		HX_STACK_VAR(leftPos,"leftPos");
			HX_STACK_LINE(2305)
			int rightPos;		HX_STACK_VAR(rightPos,"rightPos");
			HX_STACK_LINE(2307)
			int tmp16 = this->__selectionIndex;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2307)
			int tmp17 = upPos;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2307)
			Float tmp18 = ::Math_obj::min(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2307)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2307)
			leftPos = tmp19;
			HX_STACK_LINE(2308)
			int tmp20 = this->__selectionIndex;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2308)
			int tmp21 = upPos;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2308)
			Float tmp22 = ::Math_obj::max(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2308)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2308)
			rightPos = tmp23;
			HX_STACK_LINE(2310)
			this->__selectionIndex = leftPos;
			HX_STACK_LINE(2311)
			this->__caretIndex = rightPos;
			HX_STACK_LINE(2313)
			bool tmp24 = this->__inputEnabled;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2313)
			if ((tmp24)){
				HX_STACK_LINE(2315)
				this->this_onFocusIn(null());
				HX_STACK_LINE(2317)
				this->__stopCursorTimer();
				HX_STACK_LINE(2318)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

Void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onAddedToStage",0x3dbcbc7f,"openfl.text.TextField.this_onAddedToStage","openfl/text/TextField.hx",2329,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2329)
		this->this_onFocusIn(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

Void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusIn",0x90f9e141,"openfl.text.TextField.this_onFocusIn","openfl/text/TextField.hx",2334,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2336)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2336)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2336)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2336)
		if ((tmp1)){
			HX_STACK_LINE(2336)
			::openfl::text::TextFieldType tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2336)
			::openfl::text::TextFieldType tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2336)
			::openfl::text::TextFieldType tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2336)
			tmp2 = (tmp5 == ::openfl::text::TextFieldType_obj::INPUT);
		}
		else{
			HX_STACK_LINE(2336)
			tmp2 = false;
		}
		HX_STACK_LINE(2336)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2336)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2336)
		if ((tmp3)){
			HX_STACK_LINE(2336)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2336)
			::openfl::display::Stage tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2336)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2336)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(2336)
			tmp4 = false;
		}
		HX_STACK_LINE(2336)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2336)
		if ((tmp4)){
			HX_STACK_LINE(2336)
			::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2336)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2336)
			::openfl::display::InteractiveObject tmp8 = tmp7->get_focus();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2336)
			::openfl::display::InteractiveObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2336)
			tmp5 = (tmp9 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(2336)
			tmp5 = false;
		}
		HX_STACK_LINE(2336)
		if ((tmp5)){
			HX_STACK_LINE(2338)
			this->__startTextInput();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

Void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusOut",0x49afcbb2,"openfl.text.TextField.this_onFocusOut","openfl/text/TextField.hx",2347,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2347)
		this->__stopTextInput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

Void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onMouseDown",0xfda1ed8b,"openfl.text.TextField.this_onMouseDown","openfl/text/TextField.hx",2352,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(2354)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2354)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2354)
		if ((tmp1)){
			HX_STACK_LINE(2354)
			return null();
		}
		HX_STACK_LINE(2356)
		this->__updateLayout();
		HX_STACK_LINE(2358)
		Float tmp2 = this->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2358)
		Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2358)
		int tmp4 = this->__getPosition(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2358)
		this->__caretIndex = tmp4;
		HX_STACK_LINE(2359)
		int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2359)
		this->__selectionIndex = tmp5;
		HX_STACK_LINE(2360)
		this->__dirty = true;
		HX_STACK_LINE(2362)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2362)
		::String tmp7 = ::openfl::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2362)
		Dynamic tmp8 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2362)
		tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
		HX_STACK_LINE(2363)
		::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2363)
		::String tmp10 = ::openfl::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2363)
		Dynamic tmp11 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2363)
		tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

Void TextField_obj::window_onKeyDown( int key,int modifier){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onKeyDown",0x61330e17,"openfl.text.TextField.window_onKeyDown","openfl/text/TextField.hx",2368,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(2370)
		int tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2370)
		switch( (int)(tmp)){
			case (int)8: {
				HX_STACK_LINE(2374)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2374)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2374)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2374)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2374)
				if ((tmp3)){
					HX_STACK_LINE(2374)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2374)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2374)
					tmp4 = (tmp6 > (int)0);
				}
				else{
					HX_STACK_LINE(2374)
					tmp4 = false;
				}
				HX_STACK_LINE(2374)
				if ((tmp4)){
					HX_STACK_LINE(2376)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2376)
					int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2376)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(2380)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2380)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2380)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2380)
				if ((tmp7)){
					HX_STACK_LINE(2382)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(2383)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2383)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(2385)
					::String tmp9 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2385)
					::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2385)
					this->dispatchEvent(tmp10);
				}
			}
			;break;
			case (int)127: {
				HX_STACK_LINE(2391)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2391)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2391)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2391)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2391)
				if ((tmp3)){
					HX_STACK_LINE(2391)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2391)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2391)
					::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2391)
					::openfl::_internal::text::TextEngine tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2391)
					int tmp9 = tmp8->text.length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2391)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2391)
					tmp4 = (tmp6 < tmp10);
				}
				else{
					HX_STACK_LINE(2391)
					tmp4 = false;
				}
				HX_STACK_LINE(2391)
				if ((tmp4)){
					HX_STACK_LINE(2393)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2393)
					int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2393)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(2397)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2397)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2397)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2397)
				if ((tmp7)){
					HX_STACK_LINE(2399)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(2400)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2400)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(2402)
					::String tmp9 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2402)
					::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2402)
					this->dispatchEvent(tmp10);
				}
			}
			;break;
			case (int)1073741904: {
				HX_STACK_LINE(2408)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2408)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2408)
				if ((tmp2)){
					HX_STACK_LINE(2410)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2410)
					bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2410)
					if ((tmp4)){
						HX_STACK_LINE(2412)
						(this->__caretIndex)--;
					}
				}
				else{
					HX_STACK_LINE(2418)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2418)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2418)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2418)
					if ((tmp5)){
						HX_STACK_LINE(2420)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2420)
						bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2420)
						if ((tmp7)){
							HX_STACK_LINE(2422)
							(this->__caretIndex)--;
						}
					}
					else{
						HX_STACK_LINE(2428)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2428)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2428)
						Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2428)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2428)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(2432)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2432)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(2436)
				this->__stopCursorTimer();
				HX_STACK_LINE(2437)
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741903: {
				HX_STACK_LINE(2441)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2441)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2441)
				if ((tmp2)){
					HX_STACK_LINE(2443)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2443)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2443)
					int tmp5 = tmp4->text.length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2443)
					bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2443)
					if ((tmp6)){
						HX_STACK_LINE(2445)
						(this->__caretIndex)++;
					}
				}
				else{
					HX_STACK_LINE(2451)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2451)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2451)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2451)
					if ((tmp5)){
						HX_STACK_LINE(2453)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2453)
						::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2453)
						int tmp8 = tmp7->text.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2453)
						bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2453)
						if ((tmp9)){
							HX_STACK_LINE(2455)
							(this->__caretIndex)++;
						}
					}
					else{
						HX_STACK_LINE(2461)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2461)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2461)
						Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2461)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2461)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(2465)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2465)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(2469)
				this->__stopCursorTimer();
				HX_STACK_LINE(2470)
				this->__startCursorTimer();
			}
			;break;
			case (int)99: {
				HX_STACK_LINE(2474)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2474)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2474)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2474)
				if ((tmp2)){
					HX_STACK_LINE(2474)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2474)
					tmp3 = true;
				}
				HX_STACK_LINE(2474)
				if ((tmp3)){
					HX_STACK_LINE(2476)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2476)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2476)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2476)
					::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2476)
					::lime::_system::Clipboard_obj::set_text(tmp7);
				}
			}
			;break;
			case (int)120: {
				HX_STACK_LINE(2482)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2482)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2482)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2482)
				if ((tmp2)){
					HX_STACK_LINE(2482)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2482)
					tmp3 = true;
				}
				HX_STACK_LINE(2482)
				if ((tmp3)){
					HX_STACK_LINE(2484)
					::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2484)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2484)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2484)
					::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2484)
					::lime::_system::Clipboard_obj::set_text(tmp7);
					HX_STACK_LINE(2486)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2486)
					int tmp9 = this->__selectionIndex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2486)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2486)
					if ((tmp10)){
						HX_STACK_LINE(2488)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						HX_STACK_LINE(2489)
						::String tmp11 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2489)
						::openfl::events::Event tmp12 = ::openfl::events::Event_obj::__new(tmp11,true,null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2489)
						this->dispatchEvent(tmp12);
					}
				}
			}
			;break;
			case (int)118: {
				HX_STACK_LINE(2497)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2497)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2497)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2497)
				if ((tmp2)){
					HX_STACK_LINE(2497)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2497)
					tmp3 = true;
				}
				HX_STACK_LINE(2497)
				if ((tmp3)){
					HX_STACK_LINE(2499)
					::String tmp4 = ::lime::_system::Clipboard_obj::get_text();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2499)
					::String text = tmp4;		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(2501)
					bool tmp5 = (text != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2501)
					if ((tmp5)){
						HX_STACK_LINE(2503)
						::String tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2503)
						this->replaceSelectedText(tmp6);
					}
					else{
						HX_STACK_LINE(2507)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(2511)
					::String tmp6 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2511)
					::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2511)
					this->dispatchEvent(tmp7);
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

Void TextField_obj::window_onTextInput( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onTextInput",0xe9818213,"openfl.text.TextField.window_onTextInput","openfl/text/TextField.hx",2522,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(2524)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2524)
		this->replaceSelectedText(tmp);
		HX_STACK_LINE(2526)
		::String tmp1 = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2526)
		::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(tmp1,true,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2526)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return get_scrollV(); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp == hx::paccAlways ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return get_restrict(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return get_sharpness(); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp == hx::paccAlways ? get_textWidth() : textWidth; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return get_background(); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return inCallProp == hx::paccAlways ? get_caretIndex() : caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp == hx::paccAlways ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp == hx::paccAlways ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp == hx::paccAlways ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return get_gridFitType(); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return __caretIndex; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return __textEngine; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return get_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return set_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return get_antiAliasType(); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp == hx::paccAlways ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return __layoutDirty; }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return getLineLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return get_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return set_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return __inputEnabled; }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return __updateLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return get_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return this_onFocusIn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return __stopTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return get_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return set_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return stage_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return this_onFocusOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return __selectionIndex; }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return __startTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return window_onKeyDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return inCallProp == hx::paccAlways ? get_selectionEndIndex() : selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return get_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return set_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return stage_onMouseMove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return getLineIndexOfChar_dyn(); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return getParagraphLength_dyn(); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return window_onTextInput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return inCallProp == hx::paccAlways ? get_selectionBeginIndex() : selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return this_onAddedToStage_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return getFirstCharInParagraph_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = __defaultTextFormat; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return set_scrollV(inValue); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return set_restrict(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return set_sharpness(inValue); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return set_gridFitType(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { __caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { __textEngine=inValue.Cast< ::openfl::_internal::text::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return set_antiAliasType(inValue); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { __layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { __inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { __selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=ioValue.Cast< ::openfl::text::TextFormat >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"));
	outFields->push(HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"));
	outFields->push(HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"));
	outFields->push(HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsInt,(int)offsetof(TextField_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsInt,(int)offsetof(TextField_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionBeginIndex),HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7")},
	{hx::fsInt,(int)offsetof(TextField_obj,selectionEndIndex),HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsInt,(int)offsetof(TextField_obj,__caretIndex),HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsBool,(int)offsetof(TextField_obj,__inputEnabled),HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__layoutDirty),HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionIndex),HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::_internal::text::TextEngine*/ ,(int)offsetof(TextField_obj,__textEngine),HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(void *) &TextField_obj::__defaultTextFormat,HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"),
	HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"),
	HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"),
	HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"),
	HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getFirstCharInParagraph","\xf9","\x5c","\x3d","\x08"),
	HX_HCSTRING("getLineIndexAtPoint","\x35","\xdc","\x50","\x98"),
	HX_HCSTRING("getLineIndexOfChar","\xb5","\x68","\x99","\xa1"),
	HX_HCSTRING("getLineLength","\x30","\xec","\x21","\xd0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getParagraphLength","\xfe","\x0e","\x4e","\xc4"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("replaceSelectedText","\xfc","\xfe","\x33","\xbb"),
	HX_HCSTRING("replaceText","\x01","\x6b","\x95","\x61"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getPosition","\x3f","\xa4","\x66","\x39"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__startCursorTimer","\xed","\x46","\xa3","\x83"),
	HX_HCSTRING("__startTextInput","\x7b","\xae","\x85","\xaa"),
	HX_HCSTRING("__stopCursorTimer","\x0d","\xcd","\x6c","\x26"),
	HX_HCSTRING("__stopTextInput","\x9b","\x6c","\xcb","\xa1"),
	HX_HCSTRING("__updateLayout","\xb3","\xd8","\x3c","\x79"),
	HX_HCSTRING("get_antiAliasType","\xbf","\xcf","\x6a","\xee"),
	HX_HCSTRING("set_antiAliasType","\xcb","\xa7","\xd8","\x11"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_caretIndex","\xd8","\x3e","\x51","\x53"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_gridFitType","\x9c","\xaa","\xf5","\x74"),
	HX_HCSTRING("set_gridFitType","\xa8","\x27","\xc1","\x70"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_restrict","\x45","\x7f","\xb8","\xa6"),
	HX_HCSTRING("set_restrict","\xb9","\xa2","\xb1","\xbb"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_selectionBeginIndex","\x2c","\x26","\x6d","\xdf"),
	HX_HCSTRING("get_selectionEndIndex","\x7a","\x10","\xf0","\xc9"),
	HX_HCSTRING("get_sharpness","\x58","\xf6","\x88","\xdc"),
	HX_HCSTRING("set_sharpness","\x64","\xd8","\x8e","\x21"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("stage_onMouseMove","\x76","\xbc","\x61","\xde"),
	HX_HCSTRING("stage_onMouseUp","\x80","\xac","\x07","\xd1"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onFocusIn","\x1d","\x62","\xfb","\xdc"),
	HX_HCSTRING("this_onFocusOut","\x56","\x0b","\xff","\x7e"),
	HX_HCSTRING("this_onMouseDown","\x67","\x5d","\xaa","\x6d"),
	HX_HCSTRING("window_onKeyDown","\xf3","\x7d","\x3b","\xd1"),
	HX_HCSTRING("window_onTextInput","\xef","\xa0","\x6a","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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
} // end namespace text
