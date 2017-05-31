#ifndef INCLUDED_LevelManager
#define INCLUDED_LevelManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(LevelManager)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  LevelManager_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef LevelManager_obj OBJ_;
		LevelManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="LevelManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LevelManager","\x69","\x69","\x81","\x3a"); }

		::Room currentLevel;
		Array< ::Dynamic > levelList;
		virtual ::Room getCurrentLevel( );
		Dynamic getCurrentLevel_dyn();

		virtual Void addLevel( ::Room newRoom);
		Dynamic addLevel_dyn();

		virtual Void resetLevel( ::Player player);
		Dynamic resetLevel_dyn();

		virtual Void setLevel( int startRoom,::Player player);
		Dynamic setLevel_dyn();

		virtual Void goToNextLevel( ::Room oldRoom,::Player player);
		Dynamic goToNextLevel_dyn();

		virtual ::Room getNextLevel( ::Room oldRoom);
		Dynamic getNextLevel_dyn();

		static ::LevelManager singleton;
		static ::LevelManager getSingleton( );
		static Dynamic getSingleton_dyn();

};


#endif /* INCLUDED_LevelManager */ 
