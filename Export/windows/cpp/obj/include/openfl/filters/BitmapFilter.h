#ifndef INCLUDED_openfl_filters_BitmapFilter
#define INCLUDED_openfl_filters_BitmapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,RenderTexture)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BitmapFilter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFilter_obj OBJ_;
		BitmapFilter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.filters.BitmapFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFilter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BitmapFilter","\x27","\x0d","\x67","\x58"); }

		bool __dirty;
		int __passes;
		bool __saveLastFilter;
		virtual ::openfl::filters::BitmapFilter clone( );
		Dynamic clone_dyn();

		virtual Void __growBounds( ::openfl::geom::Rectangle rect);
		Dynamic __growBounds_dyn();

		virtual ::openfl::display::Shader __preparePass( int pass);
		Dynamic __preparePass_dyn();

		virtual bool __useLastFilter( int pass);
		Dynamic __useLastFilter_dyn();

		static ::openfl::_internal::renderer::opengl::utils::RenderTexture __tmpRenderTexture;
		static Void __expandBounds( Array< ::Dynamic > filters,::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		static Dynamic __expandBounds_dyn();

		static Void __applyFilters( Array< ::Dynamic > filters,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::BitmapData source,::openfl::display::BitmapData target,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint);
		static Dynamic __applyFilters_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilter */ 
