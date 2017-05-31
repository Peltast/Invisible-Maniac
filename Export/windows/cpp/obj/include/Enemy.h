#ifndef INCLUDED_Enemy
#define INCLUDED_Enemy

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
HX_DECLARE_CLASS0(EnemyAI)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(::EnemyAI ai);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Enemy_obj > __new(::EnemyAI ai);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		::EnemyAI enemyAI;
		bool isDead;
		::openfl::geom::Point startLocation;
		virtual Void updateActor( );

		virtual Void moveX( );

		virtual Void moveY( );

		virtual Void checkPlayerContact( Array< ::Dynamic > collisions);
		Dynamic checkPlayerContact_dyn();

		virtual Void goLeft( );

		virtual Void goRight( );

		virtual Void goUp( );

		virtual Void goDown( );

		virtual Void killEnemy( );
		Dynamic killEnemy_dyn();

		virtual bool isEnemyDead( );
		Dynamic isEnemyDead_dyn();

		virtual Void resetActor( );

};


#endif /* INCLUDED_Enemy */ 
