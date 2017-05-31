#ifndef INCLUDED_Goal
#define INCLUDED_Goal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(Goal)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Goal_obj : public ::Collidable_obj{
	public:
		typedef ::Collidable_obj super;
		typedef Goal_obj OBJ_;
		Goal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Goal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Goal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Goal_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Goal","\x33","\xb5","\x42","\x2f"); }

};


#endif /* INCLUDED_Goal */ 
