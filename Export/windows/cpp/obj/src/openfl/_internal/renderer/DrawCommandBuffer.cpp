#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
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
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
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
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandBuffer_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","new",0xdc2c151e,"openfl._internal.renderer.DrawCommandBuffer.new","openfl/_internal/renderer/DrawCommandBuffer.hx",36,0xbc8e6e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->types = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(40)
	this->b = Array_obj< bool >::__new();
	HX_STACK_LINE(41)
	this->i = Array_obj< int >::__new();
	HX_STACK_LINE(42)
	this->f = Array_obj< Float >::__new();
	HX_STACK_LINE(43)
	this->o = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(44)
	this->ff = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	this->ii = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(46)
	this->ts = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DrawCommandBuffer_obj::~DrawCommandBuffer_obj() { }

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return  new DrawCommandBuffer_obj; }
hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new()
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawCommandBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::_internal::renderer::DrawCommandBuffer other){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","append",0x1b14a7dc,"openfl._internal.renderer.DrawCommandBuffer.append","openfl/_internal/renderer/DrawCommandBuffer.hx",51,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(53)
	::openfl::_internal::renderer::DrawCommandReader tmp = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(other);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::openfl::_internal::renderer::DrawCommandReader data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		Array< ::Dynamic > _g1 = other->types;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			if ((tmp2)){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::DrawCommandType tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::DrawCommandType type = tmp3;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(57)
			switch( (int)(type->__Index())){
				case (int)0: {
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(59)
					{
						HX_STACK_LINE(59)
						{
							HX_STACK_LINE(59)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(59)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(59)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(59)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(59)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(59)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(59)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(59)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(59)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(59)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(59)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(59)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(59)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(59)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(59)
						tmp4 = data;
					}
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(59)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(59)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(59)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(59)
					::openfl::display::BitmapData tmp9 = ((::openfl::display::BitmapData)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(59)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(59)
					::openfl::geom::Matrix tmp14 = ((::openfl::geom::Matrix)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(59)
					int tmp16 = c->bPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(59)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(59)
					bool tmp18 = tmp15->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(59)
					int tmp20 = c->bPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(59)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(59)
					bool tmp22 = tmp19->b->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(59)
					this->beginBitmapFill(tmp9,tmp14,tmp18,tmp22);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(60)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(60)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(60)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(60)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(60)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(60)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(60)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(60)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(60)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(60)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(60)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(60)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(60)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(60)
						tmp4 = data;
					}
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(60)
					int tmp6 = c->iPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(60)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(60)
					int tmp8 = tmp5->i->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(60)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(60)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(60)
					this->beginFill(tmp8,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(61)
					{
						HX_STACK_LINE(61)
						{
							HX_STACK_LINE(61)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(61)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(61)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(61)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(61)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(61)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(61)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(61)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(61)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(61)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(61)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(61)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(61)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(61)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(61)
						tmp4 = data;
					}
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(61)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(61)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(61)
					::openfl::display::GradientType tmp9 = ((::openfl::display::GradientType)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					int tmp11 = c->iiPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					int tmp14 = c->ffPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(61)
					int tmp17 = c->iiPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(61)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(61)
					int tmp20 = c->oPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(61)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(61)
					Dynamic tmp22 = tmp19->o->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(61)
					::openfl::geom::Matrix tmp23 = ((::openfl::geom::Matrix)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(61)
					int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(61)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(61)
					Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(61)
					::openfl::display::SpreadMethod tmp28 = ((::openfl::display::SpreadMethod)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(61)
					int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(61)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(61)
					Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(61)
					::openfl::display::InterpolationMethod tmp33 = ((::openfl::display::InterpolationMethod)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(61)
					::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(61)
					int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(61)
					int tmp36 = (tmp35 + (int)4);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(61)
					Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(61)
					Dynamic tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(61)
					this->beginGradientFill(tmp9,tmp10->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp15).StaticCast< Array< Float > >(),tmp16->ii->__get(tmp18).StaticCast< Array< int > >(),tmp23,tmp28,tmp33,tmp38);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(62)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(62)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(62)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(62)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(62)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(62)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(62)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(62)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(62)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(62)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(62)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(62)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(62)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(62)
						tmp4 = data;
					}
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(62)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					int tmp15 = (tmp14 + (int)3);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					int tmp19 = (tmp18 + (int)4);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(62)
					int tmp22 = c->fPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(62)
					int tmp23 = (tmp22 + (int)5);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(62)
					Float tmp24 = tmp21->f->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(62)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(62)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(62)
					int tmp27 = (tmp26 + (int)6);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(62)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(62)
					this->cubicCurveTo(tmp8,tmp12,tmp16,tmp20,tmp24,tmp28);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(63)
					{
						HX_STACK_LINE(63)
						{
							HX_STACK_LINE(63)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(63)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(63)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(63)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(63)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(63)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(63)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(63)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(63)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(63)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(63)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(63)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(63)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(63)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(63)
						tmp4 = data;
					}
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(63)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(63)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(63)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(63)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(63)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(63)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(63)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(63)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(63)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(63)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(63)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(63)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(63)
					this->curveTo(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(64)
						{
							HX_STACK_LINE(64)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(64)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(64)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(64)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(64)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(64)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(64)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(64)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(64)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(64)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(64)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(64)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(64)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(64)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(64)
						tmp4 = data;
					}
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(64)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(64)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(64)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(64)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(64)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(64)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					this->drawCircle(tmp8,tmp12,tmp16);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(65)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(65)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(65)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(65)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(65)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(65)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(65)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(65)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(65)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(65)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(65)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(65)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(65)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(65)
						tmp4 = data;
					}
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(65)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(65)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(65)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(65)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(65)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(65)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(65)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(65)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(65)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(65)
					this->drawEllipse(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						{
							HX_STACK_LINE(66)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(66)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(66)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(66)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(66)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(66)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(66)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(66)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(66)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(66)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(66)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(66)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(66)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(66)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_PATH;
						HX_STACK_LINE(66)
						tmp4 = data;
					}
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(66)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(66)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(66)
					Array< int > tmp9 = ((Array< int >)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(66)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(66)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					Array< Float > tmp14 = ((Array< Float >)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(66)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					int tmp16 = c->oPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					Dynamic tmp18 = tmp15->o->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					::openfl::display::GraphicsPathWinding tmp19 = ((::openfl::display::GraphicsPathWinding)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(66)
					this->drawPath(tmp9,tmp14,tmp19);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(67)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(67)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(67)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(67)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(67)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(67)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(67)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(67)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(67)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(67)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(67)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(67)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(67)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(67)
						tmp4 = data;
					}
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(67)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(67)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(67)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(67)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(67)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(67)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(67)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					this->drawRect(tmp8,tmp12,tmp16,tmp20);
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(68)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(68)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(68)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(68)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(68)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(68)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(68)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(68)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(68)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(68)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(68)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(68)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(68)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(68)
						tmp4 = data;
					}
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(68)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(68)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(68)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(68)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(68)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(68)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(68)
					int tmp15 = (tmp14 + (int)2);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(68)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(68)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(68)
					int tmp19 = (tmp18 + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					int tmp22 = c->fPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					int tmp23 = (tmp22 + (int)4);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(68)
					Float tmp24 = tmp21->f->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(68)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(68)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(68)
					int tmp27 = (tmp26 + (int)5);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(68)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(68)
					this->drawRoundRect(tmp8,tmp12,tmp16,tmp20,tmp24,tmp28);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(69)
					{
						HX_STACK_LINE(69)
						{
							HX_STACK_LINE(69)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(69)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(69)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(69)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(69)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(69)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(69)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(69)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(69)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(69)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(69)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(69)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(69)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(69)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
						HX_STACK_LINE(69)
						tmp4 = data;
					}
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(69)
					int tmp6 = c->tsPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					::openfl::display::Tilesheet tmp8 = tmp5->ts->__get(tmp7).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(69)
					int tmp10 = c->ffPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(69)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(69)
					int tmp13 = c->bPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(69)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(69)
					bool tmp15 = tmp12->b->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(69)
					int tmp17 = c->iPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(69)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(69)
					int tmp19 = tmp16->i->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(69)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(69)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(69)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(69)
					::openfl::display::Shader tmp24 = ((::openfl::display::Shader)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(69)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(69)
					int tmp26 = c->iPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(69)
					int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					int tmp28 = tmp25->i->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					this->drawTiles(tmp8,tmp9->ff->__get(tmp11).StaticCast< Array< Float > >(),tmp15,tmp19,tmp24,tmp28);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						{
							HX_STACK_LINE(70)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(70)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(70)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(70)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(70)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(70)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(70)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(70)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(70)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(70)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(70)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(70)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(70)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(70)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(70)
						tmp4 = data;
					}
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(70)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					Array< Float > tmp9 = ((Array< Float >)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(70)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(70)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(70)
					Array< int > tmp14 = ((Array< int >)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(70)
					int tmp16 = c->oPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(70)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(70)
					Dynamic tmp18 = tmp15->o->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(70)
					Array< Float > tmp19 = ((Array< Float >)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(70)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(70)
					int tmp22 = (tmp21 + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(70)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(70)
					::openfl::display::TriangleCulling tmp24 = ((::openfl::display::TriangleCulling)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(70)
					int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(70)
					int tmp27 = (tmp26 + (int)4);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(70)
					Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(70)
					Array< int > tmp29 = ((Array< int >)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(70)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(70)
					int tmp31 = c->iPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(70)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(70)
					int tmp33 = tmp30->i->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(70)
					this->drawTriangles(tmp9,tmp14,tmp19,tmp24,tmp29,tmp33);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(71)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(71)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(71)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(71)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(71)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(71)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(71)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(71)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(71)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(71)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(71)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(71)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(71)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(71)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
						HX_STACK_LINE(71)
						tmp4 = data;
					}
					HX_STACK_LINE(71)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(71)
					this->endFill();
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(72)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(72)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(72)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(72)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(72)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(72)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(72)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(72)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(72)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(72)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(72)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(72)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(72)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(72)
						tmp4 = data;
					}
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(72)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(72)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(72)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(72)
					::openfl::display::BitmapData tmp9 = ((::openfl::display::BitmapData)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(72)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(72)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(72)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(72)
					::openfl::geom::Matrix tmp14 = ((::openfl::geom::Matrix)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(72)
					int tmp16 = c->bPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(72)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(72)
					bool tmp18 = tmp15->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(72)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(72)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(72)
					int tmp21 = c->bPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(72)
					int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(72)
					bool tmp23 = tmp20->b->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(72)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(72)
					this->lineBitmapStyle(tmp9,tmp14,tmp19,tmp24);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(73)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(73)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(73)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(73)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(73)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(73)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(73)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(73)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(73)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(73)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(73)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(73)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(73)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(73)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(73)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(73)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(73)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(73)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(73)
						tmp4 = data;
					}
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					::openfl::display::GradientType tmp9 = ((::openfl::display::GradientType)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					int tmp11 = c->iiPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					int tmp14 = c->ffPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					int tmp17 = c->iiPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(73)
					int tmp20 = c->oPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(73)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(73)
					Dynamic tmp22 = tmp19->o->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(73)
					::openfl::geom::Matrix tmp23 = ((::openfl::geom::Matrix)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(73)
					int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(73)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(73)
					Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(73)
					::openfl::display::SpreadMethod tmp28 = ((::openfl::display::SpreadMethod)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(73)
					int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(73)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(73)
					Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(73)
					::openfl::display::InterpolationMethod tmp33 = ((::openfl::display::InterpolationMethod)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(73)
					::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(73)
					int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(73)
					int tmp36 = (tmp35 + (int)4);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(73)
					Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(73)
					Dynamic tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(73)
					this->lineGradientStyle(tmp9,tmp10->ii->__get(tmp12).StaticCast< Array< int > >(),tmp13->ff->__get(tmp15).StaticCast< Array< Float > >(),tmp16->ii->__get(tmp18).StaticCast< Array< int > >(),tmp23,tmp28,tmp33,tmp38);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(74)
					{
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(74)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(74)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(74)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(74)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(74)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(74)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(74)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(74)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(74)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(74)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(74)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(74)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(74)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(74)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(74)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(74)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(74)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(74)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(74)
						tmp4 = data;
					}
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(74)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(74)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(74)
					Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp10 = c->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(74)
					int tmp11 = c->oPos;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(74)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(74)
					Dynamic tmp13 = tmp10->o->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(74)
					Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(74)
					int tmp16 = c->oPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(74)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(74)
					Dynamic tmp18 = tmp15->o->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(74)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(74)
					int tmp22 = (tmp21 + (int)3);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(74)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(74)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(74)
					int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(74)
					int tmp27 = (tmp26 + (int)4);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(74)
					Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(74)
					::openfl::display::LineScaleMode tmp29 = ((::openfl::display::LineScaleMode)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(74)
					int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(74)
					int tmp32 = (tmp31 + (int)5);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(74)
					Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(74)
					::openfl::display::CapsStyle tmp34 = ((::openfl::display::CapsStyle)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(74)
					int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(74)
					int tmp37 = (tmp36 + (int)6);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(74)
					Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(74)
					::openfl::display::JointStyle tmp39 = ((::openfl::display::JointStyle)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(74)
					::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(74)
					int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(74)
					int tmp42 = (tmp41 + (int)7);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(74)
					Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(74)
					Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(74)
					this->lineStyle(tmp9,tmp14,tmp19,tmp24,tmp29,tmp34,tmp39,tmp44);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(75)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(75)
					{
						HX_STACK_LINE(75)
						{
							HX_STACK_LINE(75)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(75)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(75)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(75)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(75)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(75)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(75)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(75)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(75)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(75)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(75)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(75)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(75)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(75)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(75)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(75)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(75)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(75)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(75)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(75)
						tmp4 = data;
					}
					HX_STACK_LINE(75)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(75)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(75)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(75)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(75)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(75)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(75)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(75)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(75)
					this->lineTo(tmp8,tmp12);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(76)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						{
							HX_STACK_LINE(76)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(76)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(76)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(76)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(76)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(76)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(76)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(76)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(76)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(76)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(76)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(76)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(76)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(76)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(76)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(76)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(76)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(76)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(76)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(76)
						tmp4 = data;
					}
					HX_STACK_LINE(76)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(76)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(76)
					int tmp6 = c->fPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(76)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(76)
					Float tmp8 = tmp5->f->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(76)
					::openfl::_internal::renderer::DrawCommandBuffer tmp9 = c->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(76)
					int tmp10 = c->fPos;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(76)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(76)
					Float tmp12 = tmp9->f->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					this->moveTo(tmp8,tmp12);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(77)
					::openfl::_internal::renderer::DrawCommandReader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					{
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(77)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(77)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(77)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(77)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(77)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(77)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(77)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(77)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(77)
									hx::AddEq(data->iPos,(int)2);
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(77)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(77)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(77)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(77)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(77)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(77)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(77)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(77)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(77)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
						HX_STACK_LINE(77)
						tmp4 = data;
					}
					HX_STACK_LINE(77)
					::openfl::_internal::renderer::DrawCommandReader c = tmp4;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(77)
					::openfl::_internal::renderer::DrawCommandBuffer tmp5 = c->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					int tmp6 = c->oPos;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(77)
					Dynamic tmp8 = tmp5->o->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(77)
					::openfl::geom::Matrix tmp9 = ((::openfl::geom::Matrix)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(77)
					this->overrideMatrix(tmp9);
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(84)
	data->destroy();
	HX_STACK_LINE(85)
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = other;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

Void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginBitmapFill",0x90133359,"openfl._internal.renderer.DrawCommandBuffer.beginBitmapFill","openfl/_internal/renderer/DrawCommandBuffer.hx",90,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(92)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
		HX_STACK_LINE(93)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(94)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(95)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		this->b->push(tmp2);
		HX_STACK_LINE(96)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

Void DrawCommandBuffer_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginFill",0x6ae7148a,"openfl._internal.renderer.DrawCommandBuffer.beginFill","openfl/_internal/renderer/DrawCommandBuffer.hx",100,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(102)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL);
		HX_STACK_LINE(103)
		int tmp = color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->i->push(tmp);
		HX_STACK_LINE(104)
		Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

Void DrawCommandBuffer_obj::beginGradientFill( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginGradientFill",0x7d0b119a,"openfl._internal.renderer.DrawCommandBuffer.beginGradientFill","openfl/_internal/renderer/DrawCommandBuffer.hx",109,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(111)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
		HX_STACK_LINE(112)
		::openfl::display::GradientType tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(113)
		this->ii->push(colors);
		HX_STACK_LINE(114)
		this->ff->push(alphas);
		HX_STACK_LINE(115)
		this->ii->push(ratios);
		HX_STACK_LINE(116)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(117)
		::openfl::display::SpreadMethod tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(118)
		::openfl::display::InterpolationMethod tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(119)
		Dynamic tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

Void DrawCommandBuffer_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","clear",0xfe5ce1cb,"openfl._internal.renderer.DrawCommandBuffer.clear","openfl/_internal/renderer/DrawCommandBuffer.hx",124,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		int tmp = this->types->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		this->types->splice((int)0,tmp);
		HX_STACK_LINE(128)
		int tmp1 = this->b->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		this->b->splice((int)0,tmp1);
		HX_STACK_LINE(129)
		int tmp2 = this->i->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		this->i->splice((int)0,tmp2);
		HX_STACK_LINE(130)
		int tmp3 = this->f->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		this->f->splice((int)0,tmp3);
		HX_STACK_LINE(131)
		int tmp4 = this->o->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		this->o->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp4);
		HX_STACK_LINE(132)
		int tmp5 = this->ff->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		this->ff->splice((int)0,tmp5);
		HX_STACK_LINE(133)
		int tmp6 = this->ii->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		this->ii->splice((int)0,tmp6);
		HX_STACK_LINE(134)
		int tmp7 = this->ts->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		this->ts->splice((int)0,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::copy( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","copy",0xc3289d37,"openfl._internal.renderer.DrawCommandBuffer.copy","openfl/_internal/renderer/DrawCommandBuffer.hx",139,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::openfl::_internal::renderer::DrawCommandBuffer copy = tmp;		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(142)
	copy->append(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(143)
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = copy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

Void DrawCommandBuffer_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","cubicCurveTo",0x96d43b62,"openfl._internal.renderer.DrawCommandBuffer.cubicCurveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",148,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(150)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO);
		HX_STACK_LINE(151)
		Float tmp = controlX1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		this->f->push(tmp);
		HX_STACK_LINE(152)
		Float tmp1 = controlY1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		this->f->push(tmp1);
		HX_STACK_LINE(153)
		Float tmp2 = controlX2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		this->f->push(tmp2);
		HX_STACK_LINE(154)
		Float tmp3 = controlY2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		this->f->push(tmp3);
		HX_STACK_LINE(155)
		Float tmp4 = anchorX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		this->f->push(tmp4);
		HX_STACK_LINE(156)
		Float tmp5 = anchorY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		this->f->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

Void DrawCommandBuffer_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","curveTo",0x1bf4dbc8,"openfl._internal.renderer.DrawCommandBuffer.curveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",160,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(162)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO);
		HX_STACK_LINE(163)
		Float tmp = controlX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		this->f->push(tmp);
		HX_STACK_LINE(164)
		Float tmp1 = controlY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		this->f->push(tmp1);
		HX_STACK_LINE(165)
		Float tmp2 = anchorX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		this->f->push(tmp2);
		HX_STACK_LINE(166)
		Float tmp3 = anchorY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

Void DrawCommandBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","destroy",0x71f2a8b8,"openfl._internal.renderer.DrawCommandBuffer.destroy","openfl/_internal/renderer/DrawCommandBuffer.hx",171,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->clear();
		HX_STACK_LINE(175)
		this->types = null();
		HX_STACK_LINE(177)
		this->b = null();
		HX_STACK_LINE(178)
		this->i = null();
		HX_STACK_LINE(179)
		this->f = null();
		HX_STACK_LINE(180)
		this->o = null();
		HX_STACK_LINE(181)
		this->ff = null();
		HX_STACK_LINE(182)
		this->ii = null();
		HX_STACK_LINE(183)
		this->ts = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

Void DrawCommandBuffer_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawCircle",0x40b9dc36,"openfl._internal.renderer.DrawCommandBuffer.drawCircle","openfl/_internal/renderer/DrawCommandBuffer.hx",188,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(190)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE);
		HX_STACK_LINE(191)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		this->f->push(tmp);
		HX_STACK_LINE(192)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		this->f->push(tmp1);
		HX_STACK_LINE(193)
		Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		this->f->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

Void DrawCommandBuffer_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawEllipse",0x77b6b7f8,"openfl._internal.renderer.DrawCommandBuffer.drawEllipse","openfl/_internal/renderer/DrawCommandBuffer.hx",198,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(200)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE);
		HX_STACK_LINE(201)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		this->f->push(tmp);
		HX_STACK_LINE(202)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		this->f->push(tmp1);
		HX_STACK_LINE(203)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		this->f->push(tmp2);
		HX_STACK_LINE(204)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

Void DrawCommandBuffer_obj::drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawPath",0xd03b5a4b,"openfl._internal.renderer.DrawCommandBuffer.drawPath","openfl/_internal/renderer/DrawCommandBuffer.hx",209,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(211)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_PATH);
		HX_STACK_LINE(212)
		Array< int > tmp = commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(213)
		Array< Float > tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(214)
		::openfl::display::GraphicsPathWinding tmp2 = winding;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawPath,(void))

Void DrawCommandBuffer_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRect",0xd190c1ca,"openfl._internal.renderer.DrawCommandBuffer.drawRect","openfl/_internal/renderer/DrawCommandBuffer.hx",219,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(221)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT);
		HX_STACK_LINE(222)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		this->f->push(tmp);
		HX_STACK_LINE(223)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		this->f->push(tmp1);
		HX_STACK_LINE(224)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		this->f->push(tmp2);
		HX_STACK_LINE(225)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

Void DrawCommandBuffer_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRoundRect",0xb613a22c,"openfl._internal.renderer.DrawCommandBuffer.drawRoundRect","openfl/_internal/renderer/DrawCommandBuffer.hx",229,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(231)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT);
		HX_STACK_LINE(232)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		this->f->push(tmp);
		HX_STACK_LINE(233)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		this->f->push(tmp1);
		HX_STACK_LINE(234)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		this->f->push(tmp2);
		HX_STACK_LINE(235)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(235)
		this->f->push(tmp3);
		HX_STACK_LINE(236)
		Float tmp4 = rx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		this->f->push(tmp4);
		HX_STACK_LINE(237)
		Float tmp5 = ry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		this->f->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

Void DrawCommandBuffer_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,::openfl::display::Shader shader,int count){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawTiles",0xb6919a1f,"openfl._internal.renderer.DrawCommandBuffer.drawTiles","openfl/_internal/renderer/DrawCommandBuffer.hx",242,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sheet,"sheet")
		HX_STACK_ARG(tileData,"tileData")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_ARG(flags,"flags")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(244)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES);
		HX_STACK_LINE(245)
		::openfl::display::Tilesheet tmp = sheet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		this->ts->push(tmp);
		HX_STACK_LINE(246)
		this->ff->push(tileData);
		HX_STACK_LINE(247)
		bool tmp1 = smooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		this->b->push(tmp1);
		HX_STACK_LINE(248)
		int tmp2 = flags;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		this->i->push(tmp2);
		HX_STACK_LINE(249)
		::openfl::display::Shader tmp3 = shader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(250)
		int tmp4 = count;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		this->i->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawTiles,(void))

Void DrawCommandBuffer_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawTriangles",0xb1d12245,"openfl._internal.renderer.DrawCommandBuffer.drawTriangles","openfl/_internal/renderer/DrawCommandBuffer.hx",255,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(uvtData,"uvtData")
		HX_STACK_ARG(culling,"culling")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_LINE(257)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES);
		HX_STACK_LINE(258)
		Array< Float > tmp = vertices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(259)
		Array< int > tmp1 = indices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(260)
		Array< Float > tmp2 = uvtData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(261)
		::openfl::display::TriangleCulling tmp3 = culling;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(262)
		Array< int > tmp4 = colors;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(263)
		int tmp5 = blendMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(263)
		this->i->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawTriangles,(void))

Void DrawCommandBuffer_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","endFill",0x734d03bc,"openfl._internal.renderer.DrawCommandBuffer.endFill","openfl/_internal/renderer/DrawCommandBuffer.hx",270,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::END_FILL);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

Void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineBitmapStyle",0x6b2ca8ec,"openfl._internal.renderer.DrawCommandBuffer.lineBitmapStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",275,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(277)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE);
		HX_STACK_LINE(278)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(279)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(280)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		this->b->push(tmp2);
		HX_STACK_LINE(281)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

Void DrawCommandBuffer_obj::lineGradientStyle( ::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineGradientStyle",0x10f9f9cb,"openfl._internal.renderer.DrawCommandBuffer.lineGradientStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",286,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(288)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE);
		HX_STACK_LINE(289)
		::openfl::display::GradientType tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(290)
		this->ii->push(colors);
		HX_STACK_LINE(291)
		this->ff->push(alphas);
		HX_STACK_LINE(292)
		this->ii->push(ratios);
		HX_STACK_LINE(293)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(294)
		::openfl::display::SpreadMethod tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(295)
		::openfl::display::InterpolationMethod tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(296)
		Dynamic tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

Void DrawCommandBuffer_obj::lineStyle( Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineStyle",0xa96a0fdb,"openfl._internal.renderer.DrawCommandBuffer.lineStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",301,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(303)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE);
		HX_STACK_LINE(304)
		Dynamic tmp = thickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(305)
		Dynamic tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(306)
		Dynamic tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(307)
		Dynamic tmp3 = pixelHinting;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(308)
		::openfl::display::LineScaleMode tmp4 = scaleMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(309)
		::openfl::display::CapsStyle tmp5 = caps;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(310)
		::openfl::display::JointStyle tmp6 = joints;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(311)
		Dynamic tmp7 = miterLimit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

Void DrawCommandBuffer_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineTo",0x77e10c91,"openfl._internal.renderer.DrawCommandBuffer.lineTo","openfl/_internal/renderer/DrawCommandBuffer.hx",316,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(318)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO);
		HX_STACK_LINE(319)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		this->f->push(tmp);
		HX_STACK_LINE(320)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

Void DrawCommandBuffer_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","moveTo",0x57ed98ee,"openfl._internal.renderer.DrawCommandBuffer.moveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",325,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(327)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO);
		HX_STACK_LINE(328)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		this->f->push(tmp);
		HX_STACK_LINE(329)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

Void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","overrideMatrix",0xe20325af,"openfl._internal.renderer.DrawCommandBuffer.overrideMatrix","openfl/_internal/renderer/DrawCommandBuffer.hx",334,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(336)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX);
		HX_STACK_LINE(337)
		::openfl::geom::Matrix tmp = matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

int DrawCommandBuffer_obj::get_length( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","get_length",0x3877f3b1,"openfl._internal.renderer.DrawCommandBuffer.get_length","openfl/_internal/renderer/DrawCommandBuffer.hx",349,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	int tmp = this->types->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )


DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(ts,"ts");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(ts,"ts");
}

Dynamic DrawCommandBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff; }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii; }
		if (HX_FIELD_EQ(inName,"ts") ) { return ts; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawCommandBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ts") ) { ts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawCommandBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ff","\x40","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ts","\x7f","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_HCSTRING("ff","\x40","\x59","\x00","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ts),HX_HCSTRING("ts","\x7f","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("ts","\x7f","\x65","\x00","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawCommandBuffer_obj::__mClass;

void DrawCommandBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandBuffer","\x2c","\xee","\x3f","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DrawCommandBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandBuffer_obj >;
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
} // end namespace _internal
} // end namespace renderer
