#ifndef INCLUDED_Actor
#define INCLUDED_Actor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Actor_obj : public ::AnimatedCollidable_obj{
	public:
		typedef ::AnimatedCollidable_obj super;
		typedef Actor_obj OBJ_;
		Actor_obj();
		Void __construct(::openfl::display::Bitmap actorBmp);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Actor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Actor_obj > __new(::openfl::display::Bitmap actorBmp);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Actor","\xd5","\x3a","\xd4","\xae"); }

		Float yVel;
		Float xVel;
		int maxSpeed;
		Float acc;
		int targetXVel;
		int targetYVel;
		::openfl::display::Bitmap actorBmp;
		int actorWidth;
		int actorHeight;
		::Room currentRoom;
		virtual Void updateActor( );
		Dynamic updateActor_dyn();

		virtual Void setRoom( ::Room homeRoom);
		Dynamic setRoom_dyn();

		virtual ::Room getCurrentRoom( );
		Dynamic getCurrentRoom_dyn();

		virtual Void updateSpeed( );
		Dynamic updateSpeed_dyn();

		virtual Void updatePosition( );
		Dynamic updatePosition_dyn();

		virtual Void moveX( );
		Dynamic moveX_dyn();

		virtual Void moveY( );
		Dynamic moveY_dyn();

		virtual int getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis);
		Dynamic getCollisionLargestDistance_dyn();

		virtual Float getXVel( );
		Dynamic getXVel_dyn();

		virtual Float getYVel( );
		Dynamic getYVel_dyn();

		virtual Void goUp( );
		Dynamic goUp_dyn();

		virtual Void goDown( );
		Dynamic goDown_dyn();

		virtual Void goLeft( );
		Dynamic goLeft_dyn();

		virtual Void goRight( );
		Dynamic goRight_dyn();

		virtual Void stopUp( );
		Dynamic stopUp_dyn();

		virtual Void stopDown( );
		Dynamic stopDown_dyn();

		virtual Void stopLeft( );
		Dynamic stopLeft_dyn();

		virtual Void stopRight( );
		Dynamic stopRight_dyn();

		virtual Void stopAll( );
		Dynamic stopAll_dyn();

		virtual Void freeze( );
		Dynamic freeze_dyn();

		virtual bool isMoving( );
		Dynamic isMoving_dyn();

		virtual Void resetActor( );
		Dynamic resetActor_dyn();

};


#endif /* INCLUDED_Actor */ 
