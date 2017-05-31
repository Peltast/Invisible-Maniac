#ifndef INCLUDED_openfl_display_Shader
#define INCLUDED_openfl_display_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,Shader)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(Dynamic __o_precision);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(Dynamic __o_precision);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		static void __boot();
		int precision;
		::haxe::ds::StringMap data;
		int repeatX;
		int repeatY;
		Dynamic smooth;
		::openfl::display::BlendMode blendMode;
		bool __dirty;
		::String __fragmentCode;
		::String __vertexCode;
		::openfl::_internal::renderer::opengl::shaders2::Shader __shader;
		virtual Void __init( ::lime::graphics::GLRenderContext gl);
		Dynamic __init_dyn();

		virtual Void __buildFragmentCode( ::String code);
		Dynamic __buildFragmentCode_dyn();

		virtual Void __buildVertexCode( ::String code);
		Dynamic __buildVertexCode_dyn();

		static ::EReg uniformRegex;
		static ::String aPosition;
		static ::String aTexCoord;
		static ::String aColor;
		static ::String uSampler;
		static ::String uProjectionMatrix;
		static ::String uColorMultiplier;
		static ::String uColorOffset;
		static ::String uObjectSize;
		static ::String uTextureSize;
		static ::String vTexCoord;
		static ::String vColor;
		static Array< ::String > vertexHeader;
		static Array< ::String > fragmentHeader;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Shader */ 
