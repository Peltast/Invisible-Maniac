#ifndef INCLUDED_SubwaySandwich
#define INCLUDED_SubwaySandwich

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(SubwaySandwich)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  SubwaySandwich_obj : public ::AnimatedCollidable_obj{
	public:
		typedef ::AnimatedCollidable_obj super;
		typedef SubwaySandwich_obj OBJ_;
		SubwaySandwich_obj();
		Void __construct(::openfl::display::Bitmap bitmap,::openfl::geom::Point origin);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="SubwaySandwich")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SubwaySandwich_obj > __new(::openfl::display::Bitmap bitmap,::openfl::geom::Point origin);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SubwaySandwich_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SubwaySandwich","\x6a","\x5c","\x72","\xcd"); }

		::openfl::geom::Point origin;
		virtual Void updateSandwich( );
		Dynamic updateSandwich_dyn();

		virtual ::openfl::geom::Point originalLocation( );
		Dynamic originalLocation_dyn();

};


#endif /* INCLUDED_SubwaySandwich */ 
