#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PingPongTexture_obj::__construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","new",0xbdeddfa2,"openfl._internal.renderer.opengl.utils.PingPongTexture.new","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",10,0x36d315b1)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_smoothing,"smoothing")
HX_STACK_ARG(__o_powerOfTwo,"powerOfTwo")
bool smoothing = __o_smoothing.Default(true);
bool powerOfTwo = __o_powerOfTwo.Default(true);
{
	HX_STACK_LINE(24)
	this->__swapped = false;
	HX_STACK_LINE(22)
	this->powerOfTwo = true;
	HX_STACK_LINE(21)
	this->useOldTexture = false;
	HX_STACK_LINE(30)
	this->gl = gl;
	HX_STACK_LINE(31)
	this->width = width;
	HX_STACK_LINE(32)
	this->height = height;
	HX_STACK_LINE(33)
	this->smoothing = smoothing;
	HX_STACK_LINE(34)
	this->powerOfTwo = powerOfTwo;
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp = ::openfl::_internal::renderer::opengl::utils::RenderTexture_obj::__new(gl,width,height,smoothing,powerOfTwo);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::opengl::utils::RenderTexture v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			bool tmp1 = this->__swapped;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			if ((tmp1)){
				HX_STACK_LINE(36)
				this->__texture1 = v;
			}
			else{
				HX_STACK_LINE(36)
				this->__texture0 = v;
			}
		}
	}
}
;
	return null();
}

//PingPongTexture_obj::~PingPongTexture_obj() { }

Dynamic PingPongTexture_obj::__CreateEmpty() { return  new PingPongTexture_obj; }
hx::ObjectPtr< PingPongTexture_obj > PingPongTexture_obj::__new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo)
{  hx::ObjectPtr< PingPongTexture_obj > _result_ = new PingPongTexture_obj();
	_result_->__construct(gl,width,height,__o_smoothing,__o_powerOfTwo);
	return _result_;}

Dynamic PingPongTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PingPongTexture_obj > _result_ = new PingPongTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void PingPongTexture_obj::swap( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","swap",0x75917511,"openfl._internal.renderer.opengl.utils.PingPongTexture.swap","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",39,0x36d315b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->__swapped = tmp1;
		HX_STACK_LINE(41)
		bool tmp2 = this->__swapped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(41)
			tmp3 = this->__texture1;
		}
		else{
			HX_STACK_LINE(41)
			tmp3 = this->__texture0;
		}
		HX_STACK_LINE(41)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		if ((tmp4)){
			HX_STACK_LINE(42)
			::lime::graphics::GLRenderContext tmp5 = this->gl;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			bool tmp8 = this->smoothing;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(42)
			bool tmp9 = this->powerOfTwo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			::openfl::_internal::renderer::opengl::utils::RenderTexture tmp10 = ::openfl::_internal::renderer::opengl::utils::RenderTexture_obj::__new(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			::openfl::_internal::renderer::opengl::utils::RenderTexture v = tmp10;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				bool tmp11 = this->__swapped;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(42)
				if ((tmp11)){
					HX_STACK_LINE(42)
					this->__texture1 = v;
				}
				else{
					HX_STACK_LINE(42)
					this->__texture0 = v;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,swap,(void))

Void PingPongTexture_obj::clear( Dynamic __o_r,Dynamic __o_g,Dynamic __o_b,Dynamic __o_a,Dynamic mask){
Dynamic r = __o_r.Default(0);
Dynamic g = __o_g.Default(0);
Dynamic b = __o_b.Default(0);
Dynamic a = __o_a.Default(0);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","clear",0x2c09554f,"openfl._internal.renderer.opengl.utils.PingPongTexture.clear","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",46,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(48)
		bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(48)
			tmp1 = this->__texture1;
		}
		else{
			HX_STACK_LINE(48)
			tmp1 = this->__texture0;
		}
		HX_STACK_LINE(48)
		Dynamic tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Dynamic tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Dynamic tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		Dynamic tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Dynamic tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		tmp1->clear(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(PingPongTexture_obj,clear,(void))

Void PingPongTexture_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","resize",0x5cf4bff2,"openfl._internal.renderer.opengl.utils.PingPongTexture.resize","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",52,0x36d315b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(53)
		this->width = width;
		HX_STACK_LINE(54)
		this->height = height;
		HX_STACK_LINE(55)
		bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(55)
			tmp1 = this->__texture1;
		}
		else{
			HX_STACK_LINE(55)
			tmp1 = this->__texture0;
		}
		HX_STACK_LINE(55)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		tmp1->resize(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PingPongTexture_obj,resize,(void))

Void PingPongTexture_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","destroy",0xba46053c,"openfl._internal.renderer.opengl.utils.PingPongTexture.destroy","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",58,0x36d315b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp = this->__texture0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(60)
			::openfl::_internal::renderer::opengl::utils::RenderTexture tmp2 = this->__texture0;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			tmp2->destroy();
			HX_STACK_LINE(61)
			this->__texture0 = null();
		}
		HX_STACK_LINE(63)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp2 = this->__texture1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::openfl::_internal::renderer::opengl::utils::RenderTexture tmp4 = this->__texture1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp4->destroy();
			HX_STACK_LINE(65)
			this->__texture1 = null();
		}
		HX_STACK_LINE(67)
		this->__swapped = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,destroy,(void))

::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get_renderTexture( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_renderTexture",0x5f93c63e,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_renderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",70,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	if ((tmp)){
		HX_STACK_LINE(71)
		tmp1 = this->__texture1;
	}
	else{
		HX_STACK_LINE(71)
		tmp1 = this->__texture0;
	}
	HX_STACK_LINE(71)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_renderTexture,return )

::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::set_renderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","set_renderTexture",0x83019e4a,"openfl._internal.renderer.opengl.utils.PingPongTexture.set_renderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",74,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(75)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(76)
		bool tmp1 = this->__swapped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			tmp = this->__texture1 = v;
		}
		else{
			HX_STACK_LINE(79)
			tmp = this->__texture0 = v;
		}
	}
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PingPongTexture_obj,set_renderTexture,return )

::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get_oldRenderTexture( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_oldRenderTexture",0x32cf6285,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_oldRenderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",83,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(84)
		tmp1 = this->__texture0;
	}
	else{
		HX_STACK_LINE(84)
		tmp1 = this->__texture1;
	}
	HX_STACK_LINE(84)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_oldRenderTexture,return )

::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::set_oldRenderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","set_oldRenderTexture",0xff8719f9,"openfl._internal.renderer.opengl.utils.PingPongTexture.set_oldRenderTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",87,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(88)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(89)
		bool tmp1 = this->__swapped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(90)
			tmp = this->__texture0 = v;
		}
		else{
			HX_STACK_LINE(92)
			tmp = this->__texture1 = v;
		}
	}
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(PingPongTexture_obj,set_oldRenderTexture,return )

::lime::graphics::opengl::GLFramebuffer PingPongTexture_obj::get_framebuffer( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_framebuffer",0x3abeb6c6,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_framebuffer","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",96,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(97)
		tmp1 = this->__texture1;
	}
	else{
		HX_STACK_LINE(97)
		tmp1 = this->__texture0;
	}
	HX_STACK_LINE(97)
	::lime::graphics::opengl::GLFramebuffer tmp2 = tmp1->frameBuffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_framebuffer,return )

::lime::graphics::opengl::GLTexture PingPongTexture_obj::get_texture( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get_texture",0x93d94a34,"openfl._internal.renderer.opengl.utils.PingPongTexture.get_texture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",100,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	bool tmp = this->useOldTexture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::lime::graphics::opengl::GLTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(101)
		bool tmp2 = this->__swapped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		if ((tmp2)){
			HX_STACK_LINE(101)
			tmp3 = this->__texture0;
		}
		else{
			HX_STACK_LINE(101)
			tmp3 = this->__texture1;
		}
		HX_STACK_LINE(101)
		tmp1 = tmp3->texture;
	}
	else{
		HX_STACK_LINE(101)
		bool tmp2 = this->__swapped;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		if ((tmp2)){
			HX_STACK_LINE(101)
			tmp3 = this->__texture1;
		}
		else{
			HX_STACK_LINE(101)
			tmp3 = this->__texture0;
		}
		HX_STACK_LINE(101)
		tmp1 = tmp3->texture;
	}
	HX_STACK_LINE(101)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get_texture,return )

::openfl::_internal::renderer::opengl::utils::RenderTexture PingPongTexture_obj::get___otherTexture( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PingPongTexture","get___otherTexture",0xabc4d2d2,"openfl._internal.renderer.opengl.utils.PingPongTexture.get___otherTexture","openfl/_internal/renderer/opengl/utils/PingPongTexture.hx",104,0x36d315b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	bool tmp = this->__swapped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	::openfl::_internal::renderer::opengl::utils::RenderTexture tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	if ((tmp)){
		HX_STACK_LINE(105)
		tmp1 = this->__texture0;
	}
	else{
		HX_STACK_LINE(105)
		tmp1 = this->__texture1;
	}
	HX_STACK_LINE(105)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PingPongTexture_obj,get___otherTexture,return )


PingPongTexture_obj::PingPongTexture_obj()
{
}

void PingPongTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PingPongTexture);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(useOldTexture,"useOldTexture");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(__swapped,"__swapped");
	HX_MARK_MEMBER_NAME(__texture0,"__texture0");
	HX_MARK_MEMBER_NAME(__texture1,"__texture1");
	HX_MARK_END_CLASS();
}

void PingPongTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(useOldTexture,"useOldTexture");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(__swapped,"__swapped");
	HX_VISIT_MEMBER_NAME(__texture0,"__texture0");
	HX_VISIT_MEMBER_NAME(__texture1,"__texture1");
}

Dynamic PingPongTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == hx::paccAlways) return get_texture(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__swapped") ) { return __swapped; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return powerOfTwo; }
		if (HX_FIELD_EQ(inName,"__texture0") ) { return __texture0; }
		if (HX_FIELD_EQ(inName,"__texture1") ) { return __texture1; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { if (inCallProp == hx::paccAlways) return get_framebuffer(); }
		if (HX_FIELD_EQ(inName,"get_texture") ) { return get_texture_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderTexture") ) { if (inCallProp == hx::paccAlways) return get_renderTexture(); }
		if (HX_FIELD_EQ(inName,"useOldTexture") ) { return useOldTexture; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__otherTexture") ) { if (inCallProp == hx::paccAlways) return get___otherTexture(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_framebuffer") ) { return get_framebuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oldRenderTexture") ) { if (inCallProp == hx::paccAlways) return get_oldRenderTexture(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_renderTexture") ) { return get_renderTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_renderTexture") ) { return set_renderTexture_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get___otherTexture") ) { return get___otherTexture_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_oldRenderTexture") ) { return get_oldRenderTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"set_oldRenderTexture") ) { return set_oldRenderTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PingPongTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__swapped") ) { __swapped=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { powerOfTwo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture0") ) { __texture0=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture1") ) { __texture1=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderTexture") ) { if (inCallProp == hx::paccAlways) return set_renderTexture(inValue); }
		if (HX_FIELD_EQ(inName,"useOldTexture") ) { useOldTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"oldRenderTexture") ) { if (inCallProp == hx::paccAlways) return set_oldRenderTexture(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PingPongTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PingPongTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderTexture","\x25","\x3c","\xce","\x9a"));
	outFields->push(HX_HCSTRING("oldRenderTexture","\xfe","\x56","\x7c","\x26"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8"));
	outFields->push(HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09"));
	outFields->push(HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09"));
	outFields->push(HX_HCSTRING("__otherTexture","\x0b","\x87","\xb1","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(PingPongTexture_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(PingPongTexture_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(PingPongTexture_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,useOldTexture),HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,powerOfTwo),HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea")},
	{hx::fsBool,(int)offsetof(PingPongTexture_obj,__swapped),HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(int)offsetof(PingPongTexture_obj,__texture0),HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(int)offsetof(PingPongTexture_obj,__texture1),HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("useOldTexture","\x1b","\xba","\x71","\x5a"),
	HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"),
	HX_HCSTRING("__swapped","\xfc","\x18","\x26","\xe8"),
	HX_HCSTRING("__texture0","\x15","\x6a","\x07","\x09"),
	HX_HCSTRING("__texture1","\x16","\x6a","\x07","\x09"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_renderTexture","\x7c","\x47","\x3e","\xa1"),
	HX_HCSTRING("set_renderTexture","\x88","\x1f","\xac","\xc4"),
	HX_HCSTRING("get_oldRenderTexture","\x07","\xbc","\xe6","\x44"),
	HX_HCSTRING("set_oldRenderTexture","\x7b","\x73","\x9e","\x11"),
	HX_HCSTRING("get_framebuffer","\x84","\xcc","\x29","\x3b"),
	HX_HCSTRING("get_texture","\xf2","\x28","\xdb","\x24"),
	HX_HCSTRING("get___otherTexture","\xd4","\x67","\x4b","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PingPongTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PingPongTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class PingPongTexture_obj::__mClass;

void PingPongTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PingPongTexture","\xb0","\x26","\x21","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PingPongTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PingPongTexture_obj >;
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
} // end namespace opengl
} // end namespace utils
