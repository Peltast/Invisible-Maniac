#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS0(SubwaySandwich)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,media,Sound)


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::openfl::media::Sound obstacleSound;
		int soundCount;
		int tileSoundFreq;
		::openfl::geom::Point lastSoundLocation;
		int lastSoundTime;
		bool hasSubwaySandwich;
		::SubwaySandwich sandwich;
		virtual Void updateActor( );

		virtual Void setRoom( ::Room homeRoom);

		virtual Void moveX( );

		virtual Void moveY( );

		virtual Void playTileSound( );
		Dynamic playTileSound_dyn();

		virtual int getDistanceFromLastTileSound( );
		Dynamic getDistanceFromLastTileSound_dyn();

		virtual Void playObstacleSound( );
		Dynamic playObstacleSound_dyn();

		virtual Void checkPlayerInteractions( Array< ::Dynamic > collisions);
		Dynamic checkPlayerInteractions_dyn();

		virtual Void keyDown( ::openfl::events::KeyboardEvent key);
		Dynamic keyDown_dyn();

		virtual Void keyUp( ::openfl::events::KeyboardEvent key);
		Dynamic keyUp_dyn();

		virtual Void pickUpSandwich( ::SubwaySandwich sandwich);
		Dynamic pickUpSandwich_dyn();

		virtual Void dropSandwich( );
		Dynamic dropSandwich_dyn();

		virtual Void lose( ::Enemy enemy);
		Dynamic lose_dyn();

		virtual Void reset( ::openfl::events::KeyboardEvent key);
		Dynamic reset_dyn();

};


#endif /* INCLUDED_Player */ 
