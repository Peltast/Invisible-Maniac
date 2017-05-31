#ifndef INCLUDED_Room
#define INCLUDED_Room

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(AnimatedCollidable)
HX_DECLARE_CLASS0(Collidable)
HX_DECLARE_CLASS0(Goal)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Room)
HX_DECLARE_CLASS0(SubwaySandwich)
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  Room_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Room_obj OBJ_;
		Room_obj();
		Void __construct(::lime::utils::ByteArray roomFile,::openfl::display::Bitmap tileSet,Array< ::Dynamic > tileTypes,hx::Null< int >  __o_tileSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Room")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Room_obj > __new(::lime::utils::ByteArray roomFile,::openfl::display::Bitmap tileSet,Array< ::Dynamic > tileTypes,hx::Null< int >  __o_tileSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Room_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"); }

		Array< ::Dynamic > tileArray;
		Array< ::Dynamic > actorArray;
		Array< ::Dynamic > objectArray;
		Array< ::Dynamic > sandwiches;
		::openfl::geom::Point roomStart;
		::Goal roomGoal;
		::openfl::display::Bitmap tileSet;
		Array< ::Dynamic > tileTypes;
		int tileSize;
		int roomHeight;
		int roomWidth;
		::openfl::display::Sprite tileContainer;
		::openfl::display::Sprite objectContainer;
		::openfl::display::Sprite actorContainer;
		virtual Void initializeRoom( );
		Dynamic initializeRoom_dyn();

		virtual Void updateRoom( );
		Dynamic updateRoom_dyn();

		virtual Array< ::Dynamic > getActorCollisions( ::Actor actor);
		Dynamic getActorCollisions_dyn();

		virtual Array< ::Dynamic > getActorTiles( ::Actor actor);
		Dynamic getActorTiles_dyn();

		virtual Void updateObjects( ::Player player);
		Dynamic updateObjects_dyn();

		virtual Void createEnemy( bool horizontal,int distance,int xCoord,int yCoord);
		Dynamic createEnemy_dyn();

		virtual Void addObject( ::Collidable collidable,int xCoord,int yCoord);
		Dynamic addObject_dyn();

		virtual Void resetLevel( ::Player player);
		Dynamic resetLevel_dyn();

		virtual Void setLevel( ::Player player);
		Dynamic setLevel_dyn();

		virtual Void addActor( ::Actor newActor,int xCoord,int yCoord);
		Dynamic addActor_dyn();

		virtual Void setGoal( ::Goal goal,int xCoord,int yCoord);
		Dynamic setGoal_dyn();

		virtual Void parseRoom( Array< ::String > roomFile);
		Dynamic parseRoom_dyn();

		virtual Void parseRoomDimension( Array< ::String > parsedString);
		Dynamic parseRoomDimension_dyn();

		virtual Void initializeTileArray( int width,int height);
		Dynamic initializeTileArray_dyn();

		virtual Void parseTile( int tileID,int xCoord,int yCoord);
		Dynamic parseTile_dyn();

		virtual Void addTile( ::Tile newTile,int xCoord,int yCoord);
		Dynamic addTile_dyn();

		virtual Void readDynamicObjects( Array< ::String > fileArray);
		Dynamic readDynamicObjects_dyn();

		virtual Void parseDynamicObject( Array< ::String > fileArray,int startIndex);
		Dynamic parseDynamicObject_dyn();

		virtual int parseObjectID( ::String idLine);
		Dynamic parseObjectID_dyn();

		virtual ::openfl::geom::Point parseObjectLocation( ::String idLine);
		Dynamic parseObjectLocation_dyn();

		virtual ::haxe::ds::StringMap addObjectProperty( ::String propertyLine,::haxe::ds::StringMap propertyMap);
		Dynamic addObjectProperty_dyn();

};


#endif /* INCLUDED_Room */ 
