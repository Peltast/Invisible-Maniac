#ifndef INCLUDED_Tile
#define INCLUDED_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::Collidable_obj{
	public:
		typedef ::Collidable_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(::openfl::display::Bitmap tileBmp,int tileType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(::openfl::display::Bitmap tileBmp,int tileType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		int tileType;
		::openfl::media::Sound tileSound;
		virtual int getType( );
		Dynamic getType_dyn();

		virtual ::openfl::media::Sound getSound( );
		Dynamic getSound_dyn();

};


#endif /* INCLUDED_Tile */ 
