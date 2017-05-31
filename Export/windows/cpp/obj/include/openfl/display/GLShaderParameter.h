#ifndef INCLUDED_openfl_display_GLShaderParameter
#define INCLUDED_openfl_display_GLShaderParameter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GLShaderParameter)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GLShaderParameter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLShaderParameter_obj OBJ_;
		GLShaderParameter_obj();
		Void __construct(::String type,Dynamic arraySize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GLShaderParameter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLShaderParameter_obj > __new(::String type,Dynamic arraySize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLShaderParameter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLShaderParameter","\x1f","\x45","\x0d","\x58"); }

		::String type;
		int size;
		int arraySize;
		Array< Float > value;
		::openfl::display::BitmapData bitmap;
		bool smooth;
		int repeatX;
		int repeatY;
		bool transpose;
		int internalType;
		virtual Void __init( );
		Dynamic __init_dyn();

		virtual Array< Float > set_value( Array< Float > v);
		Dynamic set_value_dyn();

		virtual ::openfl::display::BitmapData set_bitmap( ::openfl::display::BitmapData v);
		Dynamic set_bitmap_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GLShaderParameter */ 
