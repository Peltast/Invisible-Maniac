#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#define INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,PingPongTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,RenderTexture)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PingPongTexture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PingPongTexture_obj OBJ_;
		PingPongTexture_obj();
		Void __construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.PingPongTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PingPongTexture_obj > __new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_powerOfTwo);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PingPongTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PingPongTexture","\x51","\x9e","\x78","\x8d"); }

		::lime::graphics::GLRenderContext gl;
		int width;
		int height;
		bool smoothing;
		bool useOldTexture;
		bool powerOfTwo;
		bool __swapped;
		::openfl::_internal::renderer::opengl::utils::RenderTexture __texture0;
		::openfl::_internal::renderer::opengl::utils::RenderTexture __texture1;
		virtual Void swap( );
		Dynamic swap_dyn();

		virtual Void clear( Dynamic r,Dynamic g,Dynamic b,Dynamic a,Dynamic mask);
		Dynamic clear_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::openfl::_internal::renderer::opengl::utils::RenderTexture get_renderTexture( );
		Dynamic get_renderTexture_dyn();

		virtual ::openfl::_internal::renderer::opengl::utils::RenderTexture set_renderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v);
		Dynamic set_renderTexture_dyn();

		virtual ::openfl::_internal::renderer::opengl::utils::RenderTexture get_oldRenderTexture( );
		Dynamic get_oldRenderTexture_dyn();

		virtual ::openfl::_internal::renderer::opengl::utils::RenderTexture set_oldRenderTexture( ::openfl::_internal::renderer::opengl::utils::RenderTexture v);
		Dynamic set_oldRenderTexture_dyn();

		virtual ::lime::graphics::opengl::GLFramebuffer get_framebuffer( );
		Dynamic get_framebuffer_dyn();

		virtual ::lime::graphics::opengl::GLTexture get_texture( );
		Dynamic get_texture_dyn();

		virtual ::openfl::_internal::renderer::opengl::utils::RenderTexture get___otherTexture( );
		Dynamic get___otherTexture_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture */ 
