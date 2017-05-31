#ifndef INCLUDED_EnemyAI
#define INCLUDED_EnemyAI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(EnemyAI)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  EnemyAI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EnemyAI_obj OBJ_;
		EnemyAI_obj();
		Void __construct(bool horizontal,int distance,::openfl::geom::Point startPoint);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="EnemyAI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyAI_obj > __new(bool horizontal,int distance,::openfl::geom::Point startPoint);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyAI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyAI","\x10","\x95","\x6b","\xa0"); }

		bool horizontal;
		int distance;
		::openfl::geom::Point startPoint;
		virtual Void updateAI( ::Actor host);
		Dynamic updateAI_dyn();

		virtual Void handleCollision( ::Actor host);
		Dynamic handleCollision_dyn();

		virtual Void switchDirections( ::Actor host);
		Dynamic switchDirections_dyn();

};


#endif /* INCLUDED_EnemyAI */ 
