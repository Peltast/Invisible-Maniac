#ifndef INCLUDED_AnimatedCollidable
#define INCLUDED_AnimatedCollidable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Animation)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  AnimatedCollidable_obj : public ::Collidable_obj{
	public:
		typedef ::Collidable_obj super;
		typedef AnimatedCollidable_obj OBJ_;
		AnimatedCollidable_obj();
		Void __construct(bool passable,::openfl::display::Bitmap animBitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="AnimatedCollidable")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimatedCollidable_obj > __new(bool passable,::openfl::display::Bitmap animBitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimatedCollidable_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimatedCollidable","\xc4","\xd8","\xc8","\xfe"); }

		::haxe::ds::StringMap animationLibrary;
		::Animation currentAnimation;
		::openfl::display::Bitmap spriteSheet;
		virtual Void addAnimation( ::Animation newAnimation);
		Dynamic addAnimation_dyn();

		virtual Void updateAnimation( );
		Dynamic updateAnimation_dyn();

		virtual Void setAnimation( ::Animation animation);
		Dynamic setAnimation_dyn();

		virtual Void changeAnimation( ::String animationName);
		Dynamic changeAnimation_dyn();

		virtual Void removeBmp( );
		Dynamic removeBmp_dyn();

		virtual Void addAnimationBmp( ::Animation animation);
		Dynamic addAnimationBmp_dyn();

		virtual ::openfl::display::Bitmap getAnimationBmp( ::Animation animation,::openfl::display::Bitmap bitmap);
		Dynamic getAnimationBmp_dyn();

};


#endif /* INCLUDED_AnimatedCollidable */ 
