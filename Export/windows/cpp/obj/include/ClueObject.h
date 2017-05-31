#ifndef INCLUDED_ClueObject
#define INCLUDED_ClueObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(ClueObject)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)


class HXCPP_CLASS_ATTRIBUTES  ClueObject_obj : public ::AnimatedCollidable_obj{
	public:
		typedef ::AnimatedCollidable_obj super;
		typedef ClueObject_obj OBJ_;
		ClueObject_obj();
		Void __construct(::openfl::display::Bitmap bitmap,int size,::String sound);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ClueObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClueObject_obj > __new(::openfl::display::Bitmap bitmap,int size,::String sound);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClueObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ClueObject","\xf8","\xa0","\x2f","\x27"); }

		bool triggered;
		::openfl::media::Sound triggerSound;
		virtual Void updateClue( bool colliding);
		Dynamic updateClue_dyn();

		virtual Void triggerClue( );
		Dynamic triggerClue_dyn();

		virtual Void resetObject( );

};


#endif /* INCLUDED_ClueObject */ 
