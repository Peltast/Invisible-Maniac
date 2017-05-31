#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void RenderTexture_obj::__construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","new",0x70d3b196,"openfl._internal.renderer.opengl.utils.RenderTexture.new","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",11,0x95417f7d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_smoothing,"smoothing")
HX_STACK_ARG(__o_powerOfTwo,"powerOfTwo")
bool smoothing = __o_smoothing.Default(true);
bool powerOfTwo = __o_powerOfTwo.Default(true);
{
	HX_STACK_LINE(21)
	this->powerOfTwo = true;
	HX_STACK_LINE(29)
	this->gl = gl;
	HX_STACK_LINE(30)
	this->powerOfTwo = powerOfTwo;
	HX_STACK_LINE(32)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::lime::graphics::opengl::GLFramebuffer tmp1 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_framebuffer.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->frameBuffer = tmp1;
	HX_STACK_LINE(33)
	int tmp2 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GLTexture tmp3 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp2,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	this->texture = tmp3;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GLTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
	HX_STACK_LINE(36)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(37)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(39)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GLFramebuffer tmp4 = this->frameBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GLFramebuffer framebuffer = tmp4;		HX_STACK_VAR(framebuffer,"framebuffer");
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		int texture = tmp4->id;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(42)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_texture2D.call(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,gl->TEXTURE_2D,texture,(int)0);
	}
	HX_STACK_LINE(44)
	int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	::lime::graphics::opengl::GLRenderbuffer tmp5 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp4,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	this->renderBuffer = tmp5;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::lime::graphics::opengl::GLRenderbuffer tmp6 = this->renderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp6;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(45)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call(gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::lime::graphics::opengl::GLRenderbuffer tmp6 = this->renderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		int renderbuffer = tmp6->id;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(46)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call(gl->FRAMEBUFFER,gl->DEPTH_STENCIL_ATTACHMENT,gl->RENDERBUFFER,renderbuffer);
	}
	HX_STACK_LINE(48)
	int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	this->resize(tmp6,tmp7);
}
;
	return null();
}

//RenderTexture_obj::~RenderTexture_obj() { }

Dynamic RenderTexture_obj::__CreateEmpty() { return  new RenderTexture_obj; }
hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(gl,width,height,__o_smoothing,__o_powerOfTwo);
	return _result_;}

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderTexture_obj > _result_ = new RenderTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void RenderTexture_obj::clear( Dynamic __o_r,Dynamic __o_g,Dynamic __o_b,Dynamic __o_a,Dynamic mask){
Dynamic r = __o_r.Default(0);
Dynamic g = __o_g.Default(0);
Dynamic b = __o_b.Default(0);
Dynamic a = __o_a.Default(0);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","clear",0xc17e8c43,"openfl._internal.renderer.opengl.utils.RenderTexture.clear","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",53,0x95417f7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Float red = r;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(55)
			Float green = g;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(55)
			Float blue = b;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(55)
			Float alpha = a;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(55)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
		}
		HX_STACK_LINE(56)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call((  (((mask == null()))) ? int(this->gl->COLOR_BUFFER_BIT) : int(mask) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(RenderTexture_obj,clear,(void))

Void RenderTexture_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","destroy",0x80ade130,"openfl._internal.renderer.opengl.utils.RenderTexture.destroy","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",61,0x95417f7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::lime::graphics::opengl::GLFramebuffer tmp = this->frameBuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			::lime::graphics::opengl::GLFramebuffer tmp2 = this->frameBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					int framebuffer1 = framebuffer->id;		HX_STACK_VAR(framebuffer1,"framebuffer1");
					HX_STACK_LINE(63)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_framebuffer.call(framebuffer1);
				}
				HX_STACK_LINE(63)
				framebuffer->invalidate();
			}
		}
		HX_STACK_LINE(64)
		::lime::graphics::opengl::GLTexture tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			::lime::graphics::opengl::GLTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				{
					HX_STACK_LINE(64)
					int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(64)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
				}
				HX_STACK_LINE(64)
				texture->invalidate();
			}
		}
		HX_STACK_LINE(66)
		this->frameBuffer = null();
		HX_STACK_LINE(67)
		this->texture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,destroy,(void))

Void RenderTexture_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","resize",0x8e0f9e7e,"openfl._internal.renderer.opengl.utils.RenderTexture.resize","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",72,0x95417f7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(74)
		int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(74)
			int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			tmp3 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(74)
			tmp3 = false;
		}
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(76)
		this->width = width;
		HX_STACK_LINE(77)
		this->height = height;
		HX_STACK_LINE(79)
		int pow2W = width;		HX_STACK_VAR(pow2W,"pow2W");
		HX_STACK_LINE(80)
		int pow2H = height;		HX_STACK_VAR(pow2H,"pow2H");
		HX_STACK_LINE(82)
		bool tmp4 = this->powerOfTwo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		if ((tmp4)){
			HX_STACK_LINE(83)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int n = (int)1;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(83)
				while((true)){
					HX_STACK_LINE(83)
					bool tmp6 = (n < width);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(83)
					if ((tmp7)){
						HX_STACK_LINE(83)
						break;
					}
					HX_STACK_LINE(83)
					hx::ShlEq(n,(int)1);
				}
				HX_STACK_LINE(83)
				tmp5 = n;
			}
			HX_STACK_LINE(83)
			pow2W = tmp5;
			HX_STACK_LINE(84)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int n = (int)1;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					bool tmp7 = (n < height);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					if ((tmp8)){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					hx::ShlEq(n,(int)1);
				}
				HX_STACK_LINE(84)
				tmp6 = n;
			}
			HX_STACK_LINE(84)
			pow2H = tmp6;
		}
		HX_STACK_LINE(87)
		int tmp5 = this->__width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		int lastW = tmp5;		HX_STACK_VAR(lastW,"lastW");
		HX_STACK_LINE(88)
		int tmp6 = this->__height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		int lastH = tmp6;		HX_STACK_VAR(lastH,"lastH");
		HX_STACK_LINE(90)
		this->__width = pow2W;
		HX_STACK_LINE(91)
		this->__height = pow2H;
		HX_STACK_LINE(93)
		this->createUVs();
		HX_STACK_LINE(95)
		bool tmp7 = (lastW == pow2W);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		if ((tmp7)){
			HX_STACK_LINE(95)
			tmp8 = (lastH == pow2H);
		}
		else{
			HX_STACK_LINE(95)
			tmp8 = false;
		}
		HX_STACK_LINE(95)
		if ((tmp8)){
			HX_STACK_LINE(95)
			return null();
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::lime::graphics::opengl::GLTexture tmp9 = this->texture;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			::lime::graphics::opengl::GLTexture texture = tmp9;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(97)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			if ((tmp9)){
				HX_STACK_LINE(98)
				tmp10 = null();
			}
			else{
				HX_STACK_LINE(98)
				tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(98)
			::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(98)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(this->gl->TEXTURE_2D,(int)0,this->gl->RGBA,this->__width,this->__height,(int)0,this->gl->RGBA,this->gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(int)0);
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::lime::graphics::opengl::GLRenderbuffer tmp9 = this->renderBuffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp9;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(100)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call(this->gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
		}
		HX_STACK_LINE(101)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call(this->gl->RENDERBUFFER,this->gl->DEPTH_STENCIL,this->__width,this->__height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderTexture_obj,resize,(void))

Void RenderTexture_obj::createUVs( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","createUVs",0xc68c972c,"openfl._internal.renderer.opengl.utils.RenderTexture.createUVs","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",105,0x95417f7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(106)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(107)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		int tmp3 = this->__width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		Float w = tmp4;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(108)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		int tmp6 = this->__height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		Float h = tmp7;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(109)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		tmp8->x0 = (int)0;
		HX_STACK_LINE(110)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		tmp9->y0 = (int)0;
		HX_STACK_LINE(111)
		::openfl::display::TextureUvs tmp10 = this->__uvData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		tmp10->x1 = w;
		HX_STACK_LINE(112)
		::openfl::display::TextureUvs tmp11 = this->__uvData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		tmp11->y1 = (int)0;
		HX_STACK_LINE(113)
		::openfl::display::TextureUvs tmp12 = this->__uvData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		tmp12->x2 = w;
		HX_STACK_LINE(114)
		::openfl::display::TextureUvs tmp13 = this->__uvData;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(114)
		tmp13->y2 = h;
		HX_STACK_LINE(115)
		::openfl::display::TextureUvs tmp14 = this->__uvData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(115)
		tmp14->x3 = (int)0;
		HX_STACK_LINE(116)
		::openfl::display::TextureUvs tmp15 = this->__uvData;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(116)
		tmp15->y3 = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,createUVs,(void))

int RenderTexture_obj::powOfTwo( int value){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.RenderTexture","powOfTwo",0xa9421307,"openfl._internal.renderer.opengl.utils.RenderTexture.powOfTwo","openfl/_internal/renderer/opengl/utils/RenderTexture.hx",120,0x95417f7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(121)
	int n = (int)1;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(122)
	while((true)){
		HX_STACK_LINE(122)
		bool tmp = (n < value);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(122)
			break;
		}
		HX_STACK_LINE(122)
		hx::ShlEq(n,(int)1);
	}
	HX_STACK_LINE(123)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,powOfTwo,return )


RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_MARK_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_VISIT_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(powerOfTwo,"powerOfTwo");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
}

Dynamic RenderTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
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
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"powOfTwo") ) { return powOfTwo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"createUVs") ) { return createUVs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return powerOfTwo; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { return frameBuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { return renderBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { powerOfTwo=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { frameBuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { renderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RenderTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"));
	outFields->push(HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(RenderTexture_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(RenderTexture_obj,frameBuffer),HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(RenderTexture_obj,renderBuffer),HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(RenderTexture_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsBool,(int)offsetof(RenderTexture_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsInt,(int)offsetof(RenderTexture_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(RenderTexture_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(RenderTexture_obj,powerOfTwo),HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea")},
	{hx::fsInt,(int)offsetof(RenderTexture_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsInt,(int)offsetof(RenderTexture_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(RenderTexture_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"),
	HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("createUVs","\x76","\xe9","\xe6","\x49"),
	HX_HCSTRING("powOfTwo","\xfd","\x17","\xac","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderTexture_obj::__mClass;

void RenderTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.RenderTexture","\xa4","\xee","\xd1","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RenderTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTexture_obj >;
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
