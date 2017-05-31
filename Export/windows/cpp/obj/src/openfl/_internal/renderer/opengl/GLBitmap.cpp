#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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

Void GLBitmap_obj::__construct()
{
	return null();
}

//GLBitmap_obj::~GLBitmap_obj() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return  new GLBitmap_obj; }
hx::ObjectPtr< GLBitmap_obj > GLBitmap_obj::__new()
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase GLBitmap_obj::fbData;

Void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",28,0x02850ac4)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(30)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		if ((tmp4)){
			HX_STACK_LINE(30)
			tmp5 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(30)
			tmp5 = true;
		}
		HX_STACK_LINE(30)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(30)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		if ((tmp7)){
			HX_STACK_LINE(30)
			tmp8 = (bitmap->bitmapData == null());
		}
		else{
			HX_STACK_LINE(30)
			tmp8 = true;
		}
		HX_STACK_LINE(30)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		if ((tmp9)){
			HX_STACK_LINE(30)
			bool tmp11 = bitmap->bitmapData->__isValid;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(30)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(30)
			tmp10 = !(tmp13);
		}
		else{
			HX_STACK_LINE(30)
			tmp10 = true;
		}
		HX_STACK_LINE(30)
		if ((tmp10)){
			HX_STACK_LINE(30)
			return null();
		}
		HX_STACK_LINE(32)
		::openfl::display::BitmapData tmp11 = bitmap->bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		bool tmp12 = bitmap->smoothing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(32)
		::openfl::geom::Matrix tmp13 = bitmap->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(32)
		::openfl::geom::ColorTransform tmp14 = bitmap->__worldColorTransform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(32)
		Float tmp15 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(32)
		::openfl::display::BlendMode tmp16 = bitmap->__blendMode;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(32)
		::openfl::display::Shader tmp17 = bitmap->__shader;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(32)
		::openfl::display::PixelSnapping tmp18 = bitmap->pixelSnapping;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(32)
		renderSession->spriteBatch->renderBitmapData(tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))

::openfl::_internal::renderer::opengl::utils::PingPongTexture GLBitmap_obj::pushFramebuffer( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::_internal::renderer::opengl::utils::PingPongTexture texture,::openfl::geom::Rectangle viewPort,bool smoothing,Dynamic __o_transparent,Dynamic __o_clearBuffer,Dynamic __o_powerOfTwo){
Dynamic transparent = __o_transparent.Default(true);
Dynamic clearBuffer = __o_clearBuffer.Default(false);
Dynamic powerOfTwo = __o_powerOfTwo.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","pushFramebuffer",0x6b2a8d9d,"openfl._internal.renderer.opengl.GLBitmap.pushFramebuffer","openfl/_internal/renderer/opengl/GLBitmap.hx",44,0x02850ac4)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(viewPort,"viewPort")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(powerOfTwo,"powerOfTwo")
{
		HX_STACK_LINE(45)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(46)
		bool tmp = (gl == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		if ((tmp)){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(48)
		::openfl::_internal::renderer::AbstractRenderer renderer = renderSession->renderer;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(49)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(50)
		Float tmp1 = viewPort->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		int x = tmp2;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(51)
		Float tmp3 = viewPort->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		int y = tmp4;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(52)
		Float tmp5 = viewPort->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int width = tmp6;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(53)
		Float tmp7 = viewPort->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		int height = tmp8;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(55)
		spritebatch->finish();
		HX_STACK_LINE(58)
		int tmp9 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		bool tmp10 = (tmp9 <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(58)
		if ((tmp10)){
			struct _Function_2_1{
				inline static Dynamic Block( ::openfl::_internal::renderer::AbstractRenderer &renderer){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLBitmap.hx",59,0x02850ac4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , null(),false);
						__result->Add(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87") , null(),false);
						__result->Add(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22") , renderer->transparent,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(59)
			Dynamic tmp11 = _Function_2_1::Block(renderer);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		}
		HX_STACK_LINE(62)
		bool tmp11 = (texture == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		if ((tmp11)){
			HX_STACK_LINE(63)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp12 = ::openfl::_internal::renderer::opengl::utils::PingPongTexture_obj::__new(gl,width,height,smoothing,powerOfTwo);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			texture = tmp12;
		}
		HX_STACK_LINE(66)
		int tmp12 = width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		int tmp13 = height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		texture->resize(tmp12,tmp13);
		HX_STACK_LINE(67)
		renderer->transparent = transparent;
		HX_STACK_LINE(70)
		renderSession->maskManager->saveState();
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			bool tmp14 = texture->__swapped;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			::openfl::_internal::renderer::opengl::utils::RenderTexture tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			if ((tmp14)){
				HX_STACK_LINE(72)
				tmp15 = texture->__texture1;
			}
			else{
				HX_STACK_LINE(72)
				tmp15 = texture->__texture0;
			}
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GLFramebuffer tmp16 = tmp15->frameBuffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp16;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(73)
		int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(73)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(73)
		renderer->setViewport(tmp14,tmp15,tmp16,tmp17);
		HX_STACK_LINE(76)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(true,true,true,true);
		HX_STACK_LINE(77)
		renderSession->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(79)
		Dynamic tmp18 = clearBuffer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		if ((tmp18)){
			HX_STACK_LINE(80)
			bool tmp19 = texture->__swapped;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::opengl::utils::RenderTexture tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(80)
			if ((tmp19)){
				HX_STACK_LINE(80)
				tmp20 = texture->__texture1;
			}
			else{
				HX_STACK_LINE(80)
				tmp20 = texture->__texture0;
			}
			HX_STACK_LINE(80)
			tmp20->clear((int)0,(int)0,(int)0,(int)0,null());
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::geom::Rectangle &viewPort,Dynamic &transparent,::openfl::_internal::renderer::opengl::utils::PingPongTexture &texture){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLBitmap.hx",83,0x02850ac4)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e") , texture,false);
					__result->Add(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87") , viewPort,false);
					__result->Add(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22") , transparent,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(83)
		Dynamic tmp19 = _Function_1_1::Block(viewPort,transparent,texture);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(83)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
		HX_STACK_LINE(85)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp20 = texture;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(85)
		return tmp20;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLBitmap_obj,pushFramebuffer,return )

Void GLBitmap_obj::drawBitmapDrawable( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::BitmapData target,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","drawBitmapDrawable",0x975da3a7,"openfl._internal.renderer.opengl.GLBitmap.drawBitmapDrawable","openfl/_internal/renderer/opengl/GLBitmap.hx",98,0x02850ac4)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(99)
		int tmp = ::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		Dynamic tmp2 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		Dynamic data = tmp2;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(100)
		bool tmp3 = (data == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(100)
			HX_STACK_DO_THROW(HX_HCSTRING("No data to draw to","\xe9","\xc0","\x1f","\x99"));
		}
		HX_STACK_LINE(102)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(103)
		bool tmp4 = (gl == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		if ((tmp4)){
			HX_STACK_LINE(103)
			return null();
		}
		HX_STACK_LINE(105)
		::openfl::geom::Rectangle viewPort = data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic );		HX_STACK_VAR(viewPort,"viewPort");
		HX_STACK_LINE(106)
		::openfl::_internal::renderer::AbstractRenderer renderer = renderSession->renderer;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(107)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(108)
		bool tmp5 = (target != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		bool drawTarget = tmp5;		HX_STACK_VAR(drawTarget,"drawTarget");
		HX_STACK_LINE(110)
		bool tmp6 = (clipRect == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		::openfl::geom::Rectangle tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(110)
		if ((tmp6)){
			HX_STACK_LINE(110)
			tmp7 = ::openfl::geom::Rectangle_obj::__new(viewPort->x,viewPort->y,viewPort->width,viewPort->height);
		}
		else{
			HX_STACK_LINE(110)
			tmp7 = clipRect->clone();
		}
		HX_STACK_LINE(110)
		::openfl::geom::Rectangle tmpRect = tmp7;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(112)
		::openfl::_internal::renderer::RenderSession tmp8 = renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		bool tmp9 = drawTarget;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::openfl::geom::Rectangle tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		if ((tmp9)){
			HX_STACK_LINE(112)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(112)
			tmp10 = tmpRect;
		}
		HX_STACK_LINE(112)
		spritebatch->begin(tmp8,tmp10);
		HX_STACK_LINE(114)
		bool tmp11 = drawTarget;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		if ((tmp11)){
			HX_STACK_LINE(116)
			target->__worldTransform->identity();
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				::openfl::geom::Matrix m = target->__worldTransform;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(117)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(117)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(117)
				m->tx = (int)0;
				HX_STACK_LINE(117)
				m->ty = (int)0;
				HX_STACK_LINE(117)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(117)
				Float tmp12 = viewPort->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(117)
				m->translate((int)0,tmp12);
				HX_STACK_LINE(117)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(117)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(118)
			::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			target->__renderGL(tmp12);
			HX_STACK_LINE(119)
			spritebatch->stop();
			HX_STACK_LINE(120)
			bool tmp13 = (target->__texture != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			if ((tmp13)){
				HX_STACK_LINE(120)
				::lime::graphics::opengl::GLTexture texture = target->__texture;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(120)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
					}
					HX_STACK_LINE(120)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(121)
			target->__texture = null();
			HX_STACK_LINE(122)
			::openfl::geom::Rectangle tmp14 = tmpRect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(122)
			spritebatch->start(tmp14);
		}
		HX_STACK_LINE(126)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"), hx::paccDynamic );		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(127)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"), hx::paccDynamic );		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(128)
		bool cached = source->__Field(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"), hx::paccDynamic );		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(130)
		bool tmp12 = (matrix != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(130)
		::openfl::geom::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(130)
		if ((tmp12)){
			HX_STACK_LINE(130)
			tmp13 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(130)
			tmp13 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(130)
		::openfl::geom::Matrix m = tmp13;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(132)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(132)
			m->tx = (int)0;
			HX_STACK_LINE(132)
			m->ty = (int)0;
			HX_STACK_LINE(132)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(132)
			Float tmp14 = viewPort->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			m->translate((int)0,tmp14);
			HX_STACK_LINE(132)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(132)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(134)
		bool tmp14 = (colorTransform != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		::openfl::geom::ColorTransform tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(134)
		if ((tmp14)){
			HX_STACK_LINE(134)
			tmp15 = colorTransform;
		}
		else{
			HX_STACK_LINE(134)
			tmp15 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(134)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = tmp15;
		HX_STACK_LINE(135)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendMode;
		HX_STACK_LINE(136)
		::openfl::display::DisplayObject_obj::__cacheAsBitmapMode = true;
		HX_STACK_LINE(138)
		::openfl::geom::Matrix tmp16 = m;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(138)
		source->__updateTransforms(tmp16);
		HX_STACK_LINE(139)
		source->__updateChildren(false);
		HX_STACK_LINE(141)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = false;
		HX_STACK_LINE(142)
		::openfl::_internal::renderer::RenderSession tmp17 = renderSession;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(142)
		source->__renderGL(tmp17);
		HX_STACK_LINE(143)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = cached;
		HX_STACK_LINE(145)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = ctCache;
		HX_STACK_LINE(146)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendModeCache;
		HX_STACK_LINE(147)
		::openfl::display::DisplayObject_obj::__cacheAsBitmapMode = false;
		HX_STACK_LINE(149)
		source->__updateTransforms(null());
		HX_STACK_LINE(150)
		source->__updateChildren(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GLBitmap_obj,drawBitmapDrawable,(void))

Void GLBitmap_obj::popFramebuffer( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","popFramebuffer",0x655209b2,"openfl._internal.renderer.opengl.GLBitmap.popFramebuffer","openfl/_internal/renderer/opengl/GLBitmap.hx",160,0x02850ac4)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(161)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(162)
		bool tmp = (gl == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		renderSession->spriteBatch->finish();
		HX_STACK_LINE(167)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();
		HX_STACK_LINE(168)
		int tmp1 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		Dynamic tmp3 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::fbData->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		Dynamic data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(169)
		bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		if ((tmp4)){
			HX_STACK_LINE(170)
			HX_STACK_DO_THROW(HX_HCSTRING("oh","\x19","\x61","\x00","\x00"));
		}
		HX_STACK_LINE(173)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(173)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(173)
		int width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(173)
		int height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(175)
		bool tmp5 = (data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		if ((tmp5)){
			HX_STACK_LINE(176)
			int tmp6 = y = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			x = tmp6;
			HX_STACK_LINE(177)
			int tmp7 = renderSession->renderer->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			width = tmp7;
			HX_STACK_LINE(178)
			int tmp8 = renderSession->renderer->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			height = tmp8;
		}
		else{
			HX_STACK_LINE(180)
			Float tmp6 = data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(180)
			int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			x = tmp7;
			HX_STACK_LINE(181)
			Float tmp8 = data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			y = tmp9;
			HX_STACK_LINE(182)
			Float tmp10 = data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(182)
			int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(182)
			width = tmp11;
			HX_STACK_LINE(183)
			Float tmp12 = data->__Field(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			int tmp13 = ::Math_obj::ceil(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(183)
			height = tmp13;
		}
		HX_STACK_LINE(186)
		bool tmp6 = (image != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		if ((tmp6)){
			HX_STACK_LINE(189)
			bool tmp7 = (image->width != width);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(189)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			if ((tmp8)){
				HX_STACK_LINE(189)
				tmp9 = (image->height != height);
			}
			else{
				HX_STACK_LINE(189)
				tmp9 = true;
			}
			HX_STACK_LINE(189)
			if ((tmp9)){
				HX_STACK_LINE(191)
				int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				int tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(191)
				image->resize(tmp10,tmp11);
			}
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				::lime::utils::ArrayBufferView tmp10 = image->buffer->data;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(195)
				::lime::utils::ArrayBufferView pixels = tmp10;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					bool tmp11 = (pixels == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(195)
					::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(195)
					if ((tmp11)){
						HX_STACK_LINE(195)
						tmp12 = null();
					}
					else{
						HX_STACK_LINE(195)
						tmp12 = pixels->buffer;
					}
					HX_STACK_LINE(195)
					::haxe::io::Bytes buffer = tmp12;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(195)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_read_pixels.call(x,y,width,height,gl->RGBA,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
				}
			}
			HX_STACK_LINE(197)
			image->dirty = false;
			HX_STACK_LINE(198)
			image->set_premultiplied(true);
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			bool tmp7 = (data->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			::lime::graphics::opengl::GLFramebuffer tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(202)
			if ((tmp7)){
				HX_STACK_LINE(202)
				tmp8 = renderSession->defaultFramebuffer;
			}
			else{
				HX_STACK_LINE(202)
				::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = data->__Field(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"), hx::paccDynamic );		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(202)
				bool tmp9 = _this->__swapped;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				::openfl::_internal::renderer::opengl::utils::RenderTexture tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(202)
				if ((tmp9)){
					HX_STACK_LINE(202)
					tmp10 = _this->__texture1;
				}
				else{
					HX_STACK_LINE(202)
					tmp10 = _this->__texture0;
				}
				HX_STACK_LINE(202)
				tmp8 = tmp10->frameBuffer;
			}
			HX_STACK_LINE(202)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp8;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(202)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(203)
		int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(203)
		int tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(203)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(203)
		renderSession->renderer->setViewport(tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(204)
		renderSession->renderer->transparent = data->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
		HX_STACK_LINE(207)
		renderSession->maskManager->restoreState();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,popFramebuffer,(void))

Void GLBitmap_obj::flipMatrix( ::openfl::geom::Matrix m,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","flipMatrix",0xe0a65ca4,"openfl._internal.renderer.opengl.GLBitmap.flipMatrix","openfl/_internal/renderer/opengl/GLBitmap.hx",211,0x02850ac4)
		HX_STACK_ARG(m,"m")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(213)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(214)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(215)
		m->tx = (int)0;
		HX_STACK_LINE(216)
		m->ty = (int)0;
		HX_STACK_LINE(217)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(218)
		Float tmp = height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		m->translate((int)0,tmp);
		HX_STACK_LINE(219)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(220)
		hx::SubEq(m->ty,ty);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,flipMatrix,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fbData") ) { outValue = fbData; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flipMatrix") ) { outValue = flipMatrix_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"popFramebuffer") ) { outValue = popFramebuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"pushFramebuffer") ) { outValue = pushFramebuffer_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawBitmapDrawable") ) { outValue = drawBitmapDrawable_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &GLBitmap_obj::fbData,HX_HCSTRING("fbData","\x86","\x29","\xe8","\x62")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLBitmap_obj::fbData,"fbData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::fbData,"fbData");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fbData","\x86","\x29","\xe8","\x62"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("pushFramebuffer","\x33","\x95","\x04","\x91"),
	HX_HCSTRING("drawBitmapDrawable","\xd1","\xfd","\x67","\x19"),
	HX_HCSTRING("popFramebuffer","\xdc","\x86","\x85","\x8c"),
	HX_HCSTRING("flipMatrix","\xce","\x7c","\xf5","\x32"),
	::String(null()) };

void GLBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
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

void GLBitmap_obj::__boot()
{
	fbData= cpp::ArrayBase_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
