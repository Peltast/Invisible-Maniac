#ifndef INCLUDED_Collidable
#define INCLUDED_Collidable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Collidable_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Collidable_obj OBJ_;
		Collidable_obj();
		Void __construct(bool passable,::openfl::display::Bitmap objBitmap);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Collidable")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Collidable_obj > __new(bool passable,::openfl::display::Bitmap objBitmap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Collidable_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Collidable","\x41","\x78","\x73","\x46"); }

		::openfl::display::Bitmap objectBitmap;
		bool passable;
		::openfl::geom::Rectangle bounds;
		::openfl::geom::Rectangle tempObjectBounds;
		::openfl::geom::Rectangle tempCollideBounds;
		::openfl::geom::Point thisCenter;
		::openfl::geom::Point otherCenter;
		virtual ::openfl::geom::Rectangle getCollideBounds( );
		Dynamic getCollideBounds_dyn();

		virtual bool isPassable( );
		Dynamic isPassable_dyn();

		virtual bool isColliding( ::Collidable otherObject);
		Dynamic isColliding_dyn();

		virtual int getCollisionDistance( ::Collidable otherCollidable,bool xAxis);
		Dynamic getCollisionDistance_dyn();

		virtual Void resetObject( );
		Dynamic resetObject_dyn();

};


#endif /* INCLUDED_Collidable */ 
