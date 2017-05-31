#ifndef INCLUDED_SwitchObject
#define INCLUDED_SwitchObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ClueObject
#include <ClueObject.h>
#endif
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(ClueObject)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(SwitchObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  SwitchObject_obj : public ::ClueObject_obj{
	public:
		typedef ::ClueObject_obj super;
		typedef SwitchObject_obj OBJ_;
		SwitchObject_obj();
		Void __construct(::openfl::display::Bitmap bitmap,int size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="SwitchObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SwitchObject_obj > __new(::openfl::display::Bitmap bitmap,int size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SwitchObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SwitchObject","\xf3","\x77","\x71","\xf9"); }

		virtual Void updateClue( bool colliding);

		virtual Void triggerClue( );

};


#endif /* INCLUDED_SwitchObject */ 
