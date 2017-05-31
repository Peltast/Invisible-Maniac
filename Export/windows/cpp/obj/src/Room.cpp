#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_ClueObject
#include <ClueObject.h>
#endif
#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyAI
#include <EnemyAI.h>
#endif
#ifndef INCLUDED_Goal
#include <Goal.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_SubwaySandwich
#include <SubwaySandwich.h>
#endif
#ifndef INCLUDED_SwitchObject
#include <SwitchObject.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Room_obj::__construct(::lime::utils::ByteArray roomFile,::openfl::display::Bitmap tileSet,Array< ::Dynamic > tileTypes,hx::Null< int >  __o_tileSize)
{
HX_STACK_FRAME("Room","new",0x9cfcf4ad,"Room.new","Room.hx",35,0xe526ff63)
HX_STACK_THIS(this)
HX_STACK_ARG(roomFile,"roomFile")
HX_STACK_ARG(tileSet,"tileSet")
HX_STACK_ARG(tileTypes,"tileTypes")
HX_STACK_ARG(__o_tileSize,"tileSize")
int tileSize = __o_tileSize.Default(16);
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(38)
	this->tileSet = tileSet;
	HX_STACK_LINE(39)
	this->tileTypes = tileTypes;
	HX_STACK_LINE(40)
	this->tileSize = tileSize;
	HX_STACK_LINE(42)
	this->initializeRoom();
	HX_STACK_LINE(43)
	::String tmp = roomFile->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Array< ::String > parsedFile = tmp.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(parsedFile,"parsedFile");
	HX_STACK_LINE(44)
	this->parseRoom(parsedFile);
	HX_STACK_LINE(45)
	this->readDynamicObjects(parsedFile);
}
;
	return null();
}

//Room_obj::~Room_obj() { }

Dynamic Room_obj::__CreateEmpty() { return  new Room_obj; }
hx::ObjectPtr< Room_obj > Room_obj::__new(::lime::utils::ByteArray roomFile,::openfl::display::Bitmap tileSet,Array< ::Dynamic > tileTypes,hx::Null< int >  __o_tileSize)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(roomFile,tileSet,tileTypes,__o_tileSize);
	return _result_;}

Dynamic Room_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Room_obj > _result_ = new Room_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Room_obj::initializeRoom( ){
{
		HX_STACK_FRAME("Room","initializeRoom",0x4333885e,"Room.initializeRoom","Room.hx",48,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->tileContainer = tmp;
		HX_STACK_LINE(50)
		::openfl::display::Sprite tmp1 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		this->objectContainer = tmp1;
		HX_STACK_LINE(51)
		::openfl::display::Sprite tmp2 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		this->actorContainer = tmp2;
		HX_STACK_LINE(52)
		::openfl::display::Sprite tmp3 = this->tileContainer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		this->addChild(tmp3);
		HX_STACK_LINE(53)
		::openfl::display::Sprite tmp4 = this->objectContainer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		this->addChild(tmp4);
		HX_STACK_LINE(54)
		::openfl::display::Sprite tmp5 = this->actorContainer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		this->addChild(tmp5);
		HX_STACK_LINE(55)
		this->actorArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(56)
		this->objectArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(57)
		this->sandwiches = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,initializeRoom,(void))

Void Room_obj::updateRoom( ){
{
		HX_STACK_FRAME("Room","updateRoom",0x8b138817,"Room.updateRoom","Room.hx",62,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		int tmp = this->actorArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			if ((tmp2)){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			::Actor tmp4 = this->actorArray->__get(i).StaticCast< ::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			tmp4->updateActor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Room_obj,updateRoom,(void))

Array< ::Dynamic > Room_obj::getActorCollisions( ::Actor actor){
	HX_STACK_FRAME("Room","getActorCollisions",0x96ef0973,"Room.getActorCollisions","Room.hx",66,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(67)
	Float tmp = actor->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	int actorX = tmp3;		HX_STACK_VAR(actorX,"actorX");
	HX_STACK_LINE(68)
	Float tmp4 = actor->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	int actorY = tmp7;		HX_STACK_VAR(actorY,"actorY");
	HX_STACK_LINE(69)
	Array< ::Dynamic > collisions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisions,"collisions");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int tmp8 = (actorY - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int tmp9 = (actorY + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		int _g = tmp9;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			if ((tmp11)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			int y = tmp12;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(72)
			bool tmp13 = (y < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(72)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			if ((tmp14)){
				HX_STACK_LINE(72)
				int tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(72)
				int tmp17 = this->tileArray->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(72)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(72)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(72)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(72)
				tmp15 = (tmp16 > tmp20);
			}
			else{
				HX_STACK_LINE(72)
				tmp15 = true;
			}
			HX_STACK_LINE(72)
			if ((tmp15)){
				HX_STACK_LINE(72)
				continue;
			}
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				int tmp16 = (actorX - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(74)
				int _g3 = tmp16;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(74)
				int tmp17 = (actorX + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(74)
				int _g2 = tmp17;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(74)
				while((true)){
					HX_STACK_LINE(74)
					bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(74)
					if ((tmp19)){
						HX_STACK_LINE(74)
						break;
					}
					HX_STACK_LINE(74)
					int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(74)
					int x = tmp20;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(75)
					bool tmp21 = (x < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(75)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(75)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(75)
					if ((tmp22)){
						HX_STACK_LINE(75)
						int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(75)
						int tmp25 = this->tileArray->__get(y).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(75)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(75)
						int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(75)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(75)
						tmp23 = (tmp24 > tmp28);
					}
					else{
						HX_STACK_LINE(75)
						tmp23 = true;
					}
					HX_STACK_LINE(75)
					if ((tmp23)){
						HX_STACK_LINE(75)
						continue;
					}
					HX_STACK_LINE(77)
					::Tile tmp24 = this->tileArray->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::Tile >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(77)
					::Tile tempTile = tmp24;		HX_STACK_VAR(tempTile,"tempTile");
					HX_STACK_LINE(78)
					bool tmp25 = tempTile->isPassable();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(78)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(78)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(78)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(78)
					if ((tmp27)){
						HX_STACK_LINE(78)
						::Tile tmp29 = tempTile;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(78)
						::Tile tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(78)
						tmp28 = actor->isColliding(tmp30);
					}
					else{
						HX_STACK_LINE(78)
						tmp28 = false;
					}
					HX_STACK_LINE(78)
					if ((tmp28)){
						HX_STACK_LINE(79)
						::Tile tmp29 = tempTile;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(79)
						collisions->push(tmp29);
					}
				}
			}
		}
	}
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		int tmp8 = this->actorArray->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			if ((tmp10)){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(83)
			::Actor tmp12 = this->actorArray->__get(i).StaticCast< ::Actor >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			::Actor tmp13 = actor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			if ((tmp14)){
				HX_STACK_LINE(83)
				continue;
			}
			HX_STACK_LINE(84)
			::Actor tmp15 = this->actorArray->__get(i).StaticCast< ::Actor >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			bool tmp16 = actor->isColliding(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			if ((tmp16)){
				HX_STACK_LINE(85)
				::Actor tmp17 = this->actorArray->__get(i).StaticCast< ::Actor >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(85)
				collisions->push(tmp17);
			}
		}
	}
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		int tmp8 = this->objectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		int _g = tmp8;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			if ((tmp10)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(88)
			::Collidable tmp12 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(88)
			bool tmp13 = actor->isColliding(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			if ((tmp13)){
				HX_STACK_LINE(89)
				::Collidable tmp14 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(89)
				collisions->push(tmp14);
			}
		}
	}
	HX_STACK_LINE(92)
	return collisions;
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,getActorCollisions,return )

Array< ::Dynamic > Room_obj::getActorTiles( ::Actor actor){
	HX_STACK_FRAME("Room","getActorTiles",0x6aa58d13,"Room.getActorTiles","Room.hx",94,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_LINE(95)
	Float tmp = actor->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	int actorX = tmp3;		HX_STACK_VAR(actorX,"actorX");
	HX_STACK_LINE(96)
	Float tmp4 = actor->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	int actorY = tmp7;		HX_STACK_VAR(actorY,"actorY");
	HX_STACK_LINE(97)
	Array< ::Dynamic > collisions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(collisions,"collisions");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int tmp8 = (actorY - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		int tmp9 = (actorY + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		int _g = tmp9;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			if ((tmp11)){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			int y = tmp12;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(100)
			bool tmp13 = (y < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			if ((tmp14)){
				HX_STACK_LINE(100)
				int tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				int tmp17 = this->tileArray->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(100)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(100)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(100)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(100)
				tmp15 = (tmp16 > tmp20);
			}
			else{
				HX_STACK_LINE(100)
				tmp15 = true;
			}
			HX_STACK_LINE(100)
			if ((tmp15)){
				HX_STACK_LINE(100)
				continue;
			}
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				int tmp16 = (actorX - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				int _g3 = tmp16;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(102)
				int tmp17 = (actorX + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				int _g2 = tmp17;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					bool tmp18 = (_g3 < _g2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(102)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(102)
					if ((tmp19)){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(102)
					int tmp20 = (_g3)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(102)
					int x = tmp20;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(103)
					bool tmp21 = (x < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(103)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(103)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(103)
					if ((tmp22)){
						HX_STACK_LINE(103)
						int tmp24 = x;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(103)
						int tmp25 = this->tileArray->__get(y).StaticCast< Array< ::Dynamic > >()->length;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(103)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(103)
						int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(103)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(103)
						tmp23 = (tmp24 > tmp28);
					}
					else{
						HX_STACK_LINE(103)
						tmp23 = true;
					}
					HX_STACK_LINE(103)
					if ((tmp23)){
						HX_STACK_LINE(103)
						continue;
					}
					HX_STACK_LINE(105)
					::Tile tmp24 = this->tileArray->__get(y).StaticCast< Array< ::Dynamic > >()->__get(x).StaticCast< ::Tile >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(105)
					::Tile tempTile = tmp24;		HX_STACK_VAR(tempTile,"tempTile");
					HX_STACK_LINE(106)
					::Tile tmp25 = tempTile;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(106)
					bool tmp26 = actor->isColliding(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(106)
					if ((tmp26)){
						HX_STACK_LINE(107)
						::Tile tmp27 = tempTile;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(107)
						collisions->push(tmp27);
					}
				}
			}
		}
	}
	HX_STACK_LINE(110)
	return collisions;
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,getActorTiles,return )

Void Room_obj::updateObjects( ::Player player){
{
		HX_STACK_FRAME("Room","updateObjects",0xc1a23458,"Room.updateObjects","Room.hx",114,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(114)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		int tmp = this->objectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(114)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			if ((tmp2)){
				HX_STACK_LINE(114)
				break;
			}
			HX_STACK_LINE(114)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(115)
			::Collidable tmp4 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ClueObject >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			if ((tmp5)){
				HX_STACK_LINE(116)
				::Collidable tmp6 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(116)
				::ClueObject clue = ((::ClueObject)(tmp6));		HX_STACK_VAR(clue,"clue");
				HX_STACK_LINE(117)
				::ClueObject tmp7 = clue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				bool tmp8 = player->isColliding(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				clue->updateClue(tmp8);
			}
			HX_STACK_LINE(119)
			::Collidable tmp6 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::SubwaySandwich >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			if ((tmp7)){
				HX_STACK_LINE(120)
				::Collidable tmp8 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				::SubwaySandwich sandwich = ((::SubwaySandwich)(tmp8));		HX_STACK_VAR(sandwich,"sandwich");
				HX_STACK_LINE(121)
				sandwich->updateSandwich();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,updateObjects,(void))

Void Room_obj::createEnemy( bool horizontal,int distance,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","createEnemy",0xed0002f9,"Room.createEnemy","Room.hx",126,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(horizontal,"horizontal")
		HX_STACK_ARG(distance,"distance")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(128)
		bool tmp = horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		int tmp1 = distance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		int tmp2 = xCoord;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		int tmp3 = this->tileSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		int tmp5 = yCoord;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		::EnemyAI tmp9 = ::EnemyAI_obj::__new(tmp,tmp1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		::EnemyAI enemyAI = tmp9;		HX_STACK_VAR(enemyAI,"enemyAI");
		HX_STACK_LINE(129)
		::Enemy tmp10 = ::Enemy_obj::__new(enemyAI);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		int tmp11 = xCoord;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(129)
		int tmp12 = yCoord;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		this->addActor(tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Room_obj,createEnemy,(void))

Void Room_obj::addObject( ::Collidable collidable,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","addObject",0x55748fcd,"Room.addObject","Room.hx",131,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collidable,"collidable")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(132)
		::Collidable tmp = collidable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		this->objectArray->push(tmp);
		HX_STACK_LINE(133)
		int tmp1 = xCoord;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		int tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		collidable->set_x(tmp3);
		HX_STACK_LINE(134)
		int tmp4 = yCoord;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		collidable->set_y(tmp6);
		HX_STACK_LINE(135)
		::openfl::display::Sprite tmp7 = this->objectContainer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		::Collidable tmp8 = collidable;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		tmp7->addChild(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Room_obj,addObject,(void))

Void Room_obj::resetLevel( ::Player player){
{
		HX_STACK_FRAME("Room","resetLevel",0xe1aefc88,"Room.resetLevel","Room.hx",138,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(140)
		{
			HX_STACK_LINE(140)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			int tmp = this->objectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(140)
			while((true)){
				HX_STACK_LINE(140)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(140)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(140)
				if ((tmp2)){
					HX_STACK_LINE(140)
					break;
				}
				HX_STACK_LINE(140)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(140)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(141)
				::Collidable tmp4 = this->objectArray->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				tmp4->resetObject();
			}
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			int tmp = this->actorArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			while((true)){
				HX_STACK_LINE(143)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(143)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(143)
				if ((tmp2)){
					HX_STACK_LINE(143)
					break;
				}
				HX_STACK_LINE(143)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(144)
				::Actor tmp4 = this->actorArray->__get(i).StaticCast< ::Actor >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				tmp4->resetActor();
			}
		}
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(146)
			int tmp = this->sandwiches->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(146)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while((true)){
				HX_STACK_LINE(146)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(146)
				if ((tmp2)){
					HX_STACK_LINE(146)
					break;
				}
				HX_STACK_LINE(146)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(146)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(147)
				::SubwaySandwich tmp4 = this->sandwiches->__get(i).StaticCast< ::SubwaySandwich >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				::SubwaySandwich tmp5 = this->sandwiches->__get(i).StaticCast< ::SubwaySandwich >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				::openfl::geom::Point tmp6 = tmp5->originalLocation();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(147)
				Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				::SubwaySandwich tmp9 = this->sandwiches->__get(i).StaticCast< ::SubwaySandwich >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				::openfl::geom::Point tmp10 = tmp9->originalLocation();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(147)
				this->addObject(tmp4,tmp8,tmp12);
			}
		}
		HX_STACK_LINE(149)
		::openfl::geom::Point tmp = this->roomStart;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		int tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		player->set_x(tmp3);
		HX_STACK_LINE(150)
		::openfl::geom::Point tmp4 = this->roomStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		player->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,resetLevel,(void))

Void Room_obj::setLevel( ::Player player){
{
		HX_STACK_FRAME("Room","setLevel",0x01c6a315,"Room.setLevel","Room.hx",152,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(153)
		::Player tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::openfl::geom::Point tmp1 = this->roomStart;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		::openfl::geom::Point tmp4 = this->roomStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		this->addActor(tmp,tmp3,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,setLevel,(void))

Void Room_obj::addActor( ::Actor newActor,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","addActor",0x163315a7,"Room.addActor","Room.hx",157,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newActor,"newActor")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(158)
		int tmp = xCoord;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		newActor->set_x(tmp2);
		HX_STACK_LINE(159)
		int tmp3 = yCoord;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		int tmp4 = this->tileSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		newActor->set_y(tmp5);
		HX_STACK_LINE(160)
		::Actor tmp6 = newActor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		this->actorArray->push(tmp6);
		HX_STACK_LINE(161)
		::openfl::display::Sprite tmp7 = this->actorContainer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		::Actor tmp8 = newActor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(161)
		tmp7->addChild(tmp8);
		HX_STACK_LINE(163)
		newActor->setRoom(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Room_obj,addActor,(void))

Void Room_obj::setGoal( ::Goal goal,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","setGoal",0x71d398a2,"Room.setGoal","Room.hx",165,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(goal,"goal")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(166)
		this->roomGoal = goal;
		HX_STACK_LINE(167)
		::Goal tmp = this->roomGoal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		int tmp1 = xCoord;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		int tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		tmp->set_x(tmp3);
		HX_STACK_LINE(168)
		::Goal tmp4 = this->roomGoal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		int tmp5 = yCoord;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		int tmp6 = this->tileSize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		tmp4->set_y(tmp7);
		HX_STACK_LINE(169)
		::Goal tmp8 = this->roomGoal;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(169)
		this->objectArray->push(tmp8);
		HX_STACK_LINE(170)
		::openfl::display::Sprite tmp9 = this->objectContainer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(170)
		::Goal tmp10 = this->roomGoal;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		tmp9->addChild(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Room_obj,setGoal,(void))

Void Room_obj::parseRoom( Array< ::String > roomFile){
{
		HX_STACK_FRAME("Room","parseRoom",0x5b661bfb,"Room.parseRoom","Room.hx",173,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(roomFile,"roomFile")
		HX_STACK_LINE(175)
		int xCoord = (int)0;		HX_STACK_VAR(xCoord,"xCoord");
		HX_STACK_LINE(176)
		int yCoord = (int)0;		HX_STACK_VAR(yCoord,"yCoord");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			int _g = roomFile->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(178)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(178)
				if ((tmp1)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(180)
				::String tmp3 = roomFile->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("layer name","\xfa","\x4a","\x34","\xc8"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(180)
				bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(180)
				if ((tmp5)){
					HX_STACK_LINE(181)
					::String tmp6 = roomFile->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(181)
					this->parseRoomDimension(tmp6.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00")));
				}
				else{
					HX_STACK_LINE(182)
					::String tmp6 = roomFile->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(182)
					int tmp7 = tmp6.indexOf(HX_HCSTRING("tile gid","\x10","\x52","\xa2","\x64"),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(182)
					bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(182)
					if ((tmp8)){
						HX_STACK_LINE(184)
						::String tmp9 = roomFile->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(184)
						::String tmp10 = tmp9.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(184)
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(184)
						int tmp12 = xCoord;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(184)
						int tmp13 = yCoord;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(184)
						this->parseTile(tmp11,tmp12,tmp13);
						HX_STACK_LINE(185)
						hx::AddEq(xCoord,(int)1);
						HX_STACK_LINE(186)
						int tmp14 = xCoord;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						int tmp15 = this->roomWidth;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(186)
						int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(186)
						bool tmp17 = (tmp14 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(186)
						if ((tmp17)){
							HX_STACK_LINE(187)
							xCoord = (int)0;
							HX_STACK_LINE(188)
							hx::AddEq(yCoord,(int)1);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,parseRoom,(void))

Void Room_obj::parseRoomDimension( Array< ::String > parsedString){
{
		HX_STACK_FRAME("Room","parseRoomDimension",0xa26927eb,"Room.parseRoomDimension","Room.hx",193,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parsedString,"parsedString")
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			int _g = parsedString->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(195)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(195)
				if ((tmp1)){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				int k = tmp2;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(196)
				::String tmp3 = parsedString->__get(k);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(196)
				int tmp4 = tmp3.indexOf(HX_HCSTRING("width=","\x77","\x8f","\xfc","\x4b"),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				if ((tmp5)){
					HX_STACK_LINE(197)
					::String tmp6 = parsedString->__get(k);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(197)
					::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(197)
					Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(197)
					this->roomWidth = tmp8;
				}
				HX_STACK_LINE(198)
				::String tmp6 = parsedString->__get(k);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				int tmp7 = tmp6.indexOf(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(198)
				if ((tmp8)){
					HX_STACK_LINE(199)
					::String tmp9 = parsedString->__get(k);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					::String tmp10 = tmp9.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					this->roomHeight = tmp11;
				}
			}
		}
		HX_STACK_LINE(201)
		int tmp = this->roomWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		int tmp1 = this->roomHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		this->initializeTileArray(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,parseRoomDimension,(void))

Void Room_obj::initializeTileArray( int width,int height){
{
		HX_STACK_FRAME("Room","initializeTileArray",0xba611e68,"Room.initializeTileArray","Room.hx",203,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(204)
		this->tileArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			while((true)){
				HX_STACK_LINE(205)
				bool tmp = (_g < height);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(205)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(205)
				if ((tmp1)){
					HX_STACK_LINE(205)
					break;
				}
				HX_STACK_LINE(205)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(205)
				int y = tmp2;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(206)
				Array< ::Dynamic > row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(207)
					while((true)){
						HX_STACK_LINE(207)
						bool tmp3 = (_g1 < width);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(207)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(207)
						if ((tmp4)){
							HX_STACK_LINE(207)
							break;
						}
						HX_STACK_LINE(207)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(207)
						int x = tmp5;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(208)
						row->push(null());
					}
				}
				HX_STACK_LINE(210)
				this->tileArray->push(row);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Room_obj,initializeTileArray,(void))

Void Room_obj::parseTile( int tileID,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","parseTile",0x5cb3f90e,"Room.parseTile","Room.hx",214,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileID,"tileID")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(216)
		int tmp = (tileID - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		int tmp1 = this->tileSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		int temp = tmp2;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(217)
		int tmp3 = temp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		::openfl::display::Bitmap tmp4 = this->tileSet;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		int y = tmp7;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(218)
		int tmp8 = temp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		::openfl::display::Bitmap tmp9 = this->tileSet;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(218)
		Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(218)
		Float tmp11 = hx::Mod(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(218)
		int tmp12 = this->tileSize;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(218)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(218)
		int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(218)
		int x = tmp14;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(220)
		int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(220)
		int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(220)
		int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(220)
		int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(220)
		int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(220)
		int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(220)
		int tmp21 = this->tileSize;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(220)
		int tmp22 = this->tileSize;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(220)
		::openfl::geom::Rectangle tmp23 = ::openfl::geom::Rectangle_obj::__new(tmp17,tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(220)
		::openfl::geom::Rectangle frame = tmp23;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(221)
		int tmp24 = this->tileSize;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(221)
		int tmp25 = this->tileSize;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(221)
		::openfl::display::BitmapData tmp26 = ::openfl::display::BitmapData_obj::__new(tmp24,tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(221)
		::openfl::display::Bitmap tmp27 = ::openfl::display::Bitmap_obj::__new(tmp26,null(),null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(221)
		::openfl::display::Bitmap tileBmp = tmp27;		HX_STACK_VAR(tileBmp,"tileBmp");
		HX_STACK_LINE(222)
		::openfl::display::Bitmap tmp28 = this->tileSet;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(222)
		::openfl::display::BitmapData tmp29 = tmp28->bitmapData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tmp30 = frame;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(222)
		::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(222)
		tileBmp->bitmapData->copyPixels(tmp29,tmp30,tmp31,null(),null(),null());
		HX_STACK_LINE(224)
		::openfl::display::Bitmap tmp32 = tileBmp;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(224)
		int tmp33 = this->tileTypes->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(224)
		::Tile tmp34 = ::Tile_obj::__new(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(224)
		::Tile newTile = tmp34;		HX_STACK_VAR(newTile,"newTile");
		HX_STACK_LINE(225)
		::Tile tmp35 = newTile;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(225)
		int tmp36 = xCoord;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(225)
		int tmp37 = yCoord;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(225)
		this->addTile(tmp35,tmp36,tmp37);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Room_obj,parseTile,(void))

Void Room_obj::addTile( ::Tile newTile,int xCoord,int yCoord){
{
		HX_STACK_FRAME("Room","addTile",0xf11fdcbc,"Room.addTile","Room.hx",228,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newTile,"newTile")
		HX_STACK_ARG(xCoord,"xCoord")
		HX_STACK_ARG(yCoord,"yCoord")
		HX_STACK_LINE(229)
		::Tile tmp = newTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		this->tileArray->__get(yCoord).StaticCast< Array< ::Dynamic > >()[xCoord] = tmp;
		HX_STACK_LINE(230)
		int tmp1 = xCoord;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		int tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		newTile->set_x(tmp3);
		HX_STACK_LINE(231)
		int tmp4 = yCoord;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		newTile->set_y(tmp6);
		HX_STACK_LINE(232)
		::openfl::display::Sprite tmp7 = this->tileContainer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(232)
		::Tile tmp8 = newTile;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(232)
		tmp7->addChild(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Room_obj,addTile,(void))

Void Room_obj::readDynamicObjects( Array< ::String > fileArray){
{
		HX_STACK_FRAME("Room","readDynamicObjects",0xd460f35e,"Room.readDynamicObjects","Room.hx",238,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_LINE(238)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		while((true)){
			HX_STACK_LINE(238)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(238)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			if ((tmp1)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(238)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(239)
			::String tmp3 = fileArray->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("object id","\x9c","\xa6","\x5b","\x43"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			if ((tmp5)){
				HX_STACK_LINE(240)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				this->parseDynamicObject(fileArray,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,readDynamicObjects,(void))

Void Room_obj::parseDynamicObject( Array< ::String > fileArray,int startIndex){
{
		HX_STACK_FRAME("Room","parseDynamicObject",0x4d34d1be,"Room.parseDynamicObject","Room.hx",244,0xe526ff63)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileArray,"fileArray")
		HX_STACK_ARG(startIndex,"startIndex")
		HX_STACK_LINE(246)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(246)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			tmp = tmp2;
		}
		HX_STACK_LINE(246)
		::haxe::ds::StringMap objectProperties = tmp;		HX_STACK_VAR(objectProperties,"objectProperties");
		HX_STACK_LINE(247)
		::String tmp1 = fileArray->__get(startIndex);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		int tmp2 = this->parseObjectID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		int objectID = tmp2;		HX_STACK_VAR(objectID,"objectID");
		HX_STACK_LINE(248)
		::String tmp3 = fileArray->__get(startIndex);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		::openfl::geom::Point tmp4 = this->parseObjectLocation(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		::openfl::geom::Point objectLocation = tmp4;		HX_STACK_VAR(objectLocation,"objectLocation");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g1 = startIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			int _g = fileArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				if ((tmp6)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(250)
				int j = tmp7;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(251)
				::String tmp8 = fileArray->__get(j);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(251)
				int tmp9 = tmp8.indexOf(HX_HCSTRING("/properties","\xe2","\xac","\xe4","\x09"),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(251)
				bool tmp10 = (tmp9 >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(251)
				if ((tmp10)){
					HX_STACK_LINE(251)
					break;
				}
				HX_STACK_LINE(253)
				::String tmp11 = fileArray->__get(j);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				int tmp12 = tmp11.indexOf(HX_HCSTRING("property name","\xf6","\x65","\xea","\x6c"),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(253)
				bool tmp13 = (tmp12 >= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(253)
				if ((tmp13)){
					HX_STACK_LINE(254)
					::String tmp14 = fileArray->__get(j);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(254)
					::haxe::ds::StringMap tmp15 = objectProperties;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(254)
					::haxe::ds::StringMap tmp16 = this->addObjectProperty(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(254)
					objectProperties = tmp16;
				}
			}
		}
		HX_STACK_LINE(257)
		::String tmp5 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		bool tmp7 = (tmp6 == HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		if ((tmp7)){
			HX_STACK_LINE(259)
			::String tmp8 = objectProperties->get(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(259)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			bool tmp10 = (tmp9 == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			::String tmp11 = objectProperties->get(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(259)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(260)
			Float tmp14 = objectLocation->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(260)
			int tmp15 = this->tileSize;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(260)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(260)
			Float tmp18 = objectLocation->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(260)
			int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(260)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(260)
			int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(258)
			this->createEnemy(tmp10,tmp13,tmp17,tmp21);
		}
		else{
			HX_STACK_LINE(261)
			::String tmp8 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			bool tmp10 = (tmp9 == HX_HCSTRING("Clue","\x59","\xa5","\x9b","\x2c"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			if ((tmp10)){
				HX_STACK_LINE(263)
				::String tmp11 = objectProperties->get(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(263)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(263)
				::String tmp13 = (HX_HCSTRING("assets/","\x4c","\x2a","\xdc","\x36") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(263)
				::openfl::display::BitmapData tmp14 = ::openfl::Assets_obj::getBitmapData(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(263)
				::openfl::display::Bitmap tmp15 = ::openfl::display::Bitmap_obj::__new(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(264)
				::String tmp16 = objectProperties->get(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(264)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(264)
				Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(264)
				::String tmp19 = objectProperties->get(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(264)
				::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(263)
				::ClueObject tmp21 = ::ClueObject_obj::__new(tmp15,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				Float tmp22 = objectLocation->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(265)
				int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(265)
				Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(265)
				int tmp25 = ::Math_obj::floor(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(265)
				Float tmp26 = objectLocation->y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(265)
				int tmp27 = this->tileSize;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(265)
				Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(265)
				int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(262)
				this->addObject(tmp21,tmp25,tmp29);
			}
			else{
				HX_STACK_LINE(266)
				::String tmp11 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(266)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(266)
				bool tmp13 = (tmp12 == HX_HCSTRING("Switch","\x14","\xbe","\x0d","\xfa"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(266)
				if ((tmp13)){
					HX_STACK_LINE(268)
					::String tmp14 = objectProperties->get(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(268)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(268)
					::String tmp16 = (HX_HCSTRING("assets/","\x4c","\x2a","\xdc","\x36") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(268)
					::openfl::display::BitmapData tmp17 = ::openfl::Assets_obj::getBitmapData(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(268)
					::openfl::display::Bitmap tmp18 = ::openfl::display::Bitmap_obj::__new(tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(269)
					::String tmp19 = objectProperties->get(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(269)
					::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(269)
					Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(268)
					::SwitchObject tmp22 = ::SwitchObject_obj::__new(tmp18,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(269)
					Float tmp23 = objectLocation->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(269)
					int tmp24 = this->tileSize;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(269)
					Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(269)
					int tmp26 = ::Math_obj::floor(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(269)
					Float tmp27 = objectLocation->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(269)
					int tmp28 = this->tileSize;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(269)
					Float tmp29 = (Float(tmp27) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(269)
					int tmp30 = ::Math_obj::floor(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(267)
					this->addObject(tmp22,tmp26,tmp30);
				}
				else{
					HX_STACK_LINE(270)
					::String tmp14 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(270)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(270)
					bool tmp16 = (tmp15 == HX_HCSTRING("Goal","\x33","\xb5","\x42","\x2f"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(270)
					if ((tmp16)){
						HX_STACK_LINE(271)
						::Goal tmp17 = ::Goal_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(271)
						Float tmp18 = objectLocation->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(271)
						int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(271)
						Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(271)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(271)
						Float tmp22 = objectLocation->y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(271)
						int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(271)
						Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(271)
						int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(271)
						this->setGoal(tmp17,tmp21,tmp25);
					}
					else{
						HX_STACK_LINE(272)
						::String tmp17 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(272)
						::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(272)
						bool tmp19 = (tmp18 == HX_HCSTRING("Start","\x42","\xe4","\x38","\x17"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(272)
						if ((tmp19)){
							HX_STACK_LINE(273)
							Float tmp20 = objectLocation->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(273)
							int tmp21 = this->tileSize;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(273)
							Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(273)
							int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(273)
							Float tmp24 = objectLocation->y;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(273)
							int tmp25 = this->tileSize;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(273)
							Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(273)
							int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(273)
							::openfl::geom::Point tmp28 = ::openfl::geom::Point_obj::__new(tmp23,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(273)
							this->roomStart = tmp28;
						}
						else{
							HX_STACK_LINE(274)
							::String tmp20 = objectProperties->get(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(274)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(274)
							bool tmp22 = (tmp21 == HX_HCSTRING("Sandwich","\x9b","\x19","\x49","\x2b"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(274)
							if ((tmp22)){
								HX_STACK_LINE(275)
								::openfl::display::BitmapData tmp23 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Subway.png","\xd6","\x9d","\x97","\x2e"),null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(275)
								::openfl::display::Bitmap tmp24 = ::openfl::display::Bitmap_obj::__new(tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(276)
								Float tmp25 = objectLocation->x;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(276)
								int tmp26 = this->tileSize;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(276)
								Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(276)
								int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(276)
								Float tmp29 = objectLocation->y;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(276)
								int tmp30 = this->tileSize;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(276)
								Float tmp31 = (Float(tmp29) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(276)
								int tmp32 = ::Math_obj::round(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(276)
								::openfl::geom::Point tmp33 = ::openfl::geom::Point_obj::__new(tmp28,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(275)
								::SubwaySandwich tmp34 = ::SubwaySandwich_obj::__new(tmp24,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(275)
								::SubwaySandwich sandwich = tmp34;		HX_STACK_VAR(sandwich,"sandwich");
								HX_STACK_LINE(277)
								::SubwaySandwich tmp35 = sandwich;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(277)
								Float tmp36 = objectLocation->x;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(277)
								int tmp37 = this->tileSize;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(277)
								Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(277)
								int tmp39 = ::Math_obj::round(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(277)
								Float tmp40 = objectLocation->y;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(277)
								int tmp41 = this->tileSize;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(277)
								Float tmp42 = (Float(tmp40) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(277)
								int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(277)
								this->addObject(tmp35,tmp39,tmp43);
								HX_STACK_LINE(278)
								::SubwaySandwich tmp44 = sandwich;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(278)
								this->sandwiches->push(tmp44);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Room_obj,parseDynamicObject,(void))

int Room_obj::parseObjectID( ::String idLine){
	HX_STACK_FRAME("Room","parseObjectID",0x3c3fca3a,"Room.parseObjectID","Room.hx",282,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idLine,"idLine")
	HX_STACK_LINE(283)
	Array< ::String > parsedLine = idLine.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(284)
	int objectID = (int)0;		HX_STACK_VAR(objectID,"objectID");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(285)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(285)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		while((true)){
			HX_STACK_LINE(285)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(285)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(285)
			if ((tmp1)){
				HX_STACK_LINE(285)
				break;
			}
			HX_STACK_LINE(285)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(285)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(286)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("gid","\x02","\x84","\x4e","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(286)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(286)
			if ((tmp5)){
				HX_STACK_LINE(287)
				::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				objectID = tmp8;
			}
		}
	}
	HX_STACK_LINE(289)
	int tmp = objectID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,parseObjectID,return )

::openfl::geom::Point Room_obj::parseObjectLocation( ::String idLine){
	HX_STACK_FRAME("Room","parseObjectLocation",0x34f245f4,"Room.parseObjectLocation","Room.hx",291,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idLine,"idLine")
	HX_STACK_LINE(292)
	Array< ::String > parsedLine = idLine.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(293)
	int objectX = (int)0;		HX_STACK_VAR(objectX,"objectX");
	HX_STACK_LINE(294)
	int objectY = (int)0;		HX_STACK_VAR(objectY,"objectY");
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(295)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		while((true)){
			HX_STACK_LINE(295)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(295)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			if ((tmp1)){
				HX_STACK_LINE(295)
				break;
			}
			HX_STACK_LINE(295)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(296)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("x","\x78","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(296)
			if ((tmp5)){
				HX_STACK_LINE(297)
				::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				::String tmp7 = tmp6.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				objectX = tmp8;
			}
			HX_STACK_LINE(298)
			::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(298)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("y","\x79","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(298)
			bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(298)
			if ((tmp8)){
				HX_STACK_LINE(299)
				::String tmp9 = parsedLine->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(299)
				::String tmp10 = tmp9.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(299)
				Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(299)
				objectY = tmp11;
			}
		}
	}
	HX_STACK_LINE(301)
	int tmp = objectX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	int tmp1 = (objectY - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(301)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(301)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Room_obj,parseObjectLocation,return )

::haxe::ds::StringMap Room_obj::addObjectProperty( ::String propertyLine,::haxe::ds::StringMap propertyMap){
	HX_STACK_FRAME("Room","addObjectProperty",0x3456a942,"Room.addObjectProperty","Room.hx",303,0xe526ff63)
	HX_STACK_THIS(this)
	HX_STACK_ARG(propertyLine,"propertyLine")
	HX_STACK_ARG(propertyMap,"propertyMap")
	HX_STACK_LINE(304)
	Array< ::String > parsedLine = propertyLine.split(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(parsedLine,"parsedLine");
	HX_STACK_LINE(305)
	::String name = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(306)
	::String value = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(307)
		int _g = parsedLine->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(307)
		while((true)){
			HX_STACK_LINE(307)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(307)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			if ((tmp1)){
				HX_STACK_LINE(307)
				break;
			}
			HX_STACK_LINE(307)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(308)
			::String tmp3 = parsedLine->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			int tmp4 = tmp3.indexOf(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			bool tmp5 = (tmp4 >= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(308)
			if ((tmp5)){
				HX_STACK_LINE(309)
				int tmp6 = (i + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				::String tmp7 = parsedLine->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				::String tmp8 = tmp7.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				name = tmp8;
			}
			HX_STACK_LINE(311)
			::String tmp6 = parsedLine->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			int tmp7 = tmp6.indexOf(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			if ((tmp8)){
				HX_STACK_LINE(312)
				int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(312)
				::String tmp10 = parsedLine->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(312)
				::String tmp11 = tmp10.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(312)
				value = tmp11;
			}
			else{
				HX_STACK_LINE(313)
				::String tmp9 = parsedLine->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(313)
				int tmp10 = tmp9.indexOf(HX_HCSTRING("</property>","\x76","\x27","\xd4","\x86"),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(313)
				bool tmp11 = (tmp10 >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(313)
				if ((tmp11)){
					HX_STACK_LINE(314)
					::String tmp12 = parsedLine->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(314)
					::String tmp13 = tmp12.split(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(314)
					::String tmp14 = tmp13.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(314)
					value = tmp14;
				}
			}
		}
	}
	HX_STACK_LINE(316)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	{
		HX_STACK_LINE(316)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		propertyMap->set(tmp1,tmp2);
		HX_STACK_LINE(316)
		tmp = value;
	}
	HX_STACK_LINE(316)
	tmp;
	HX_STACK_LINE(317)
	::haxe::ds::StringMap tmp1 = propertyMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Room_obj,addObjectProperty,return )


Room_obj::Room_obj()
{
}

void Room_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Room);
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_MEMBER_NAME(actorArray,"actorArray");
	HX_MARK_MEMBER_NAME(objectArray,"objectArray");
	HX_MARK_MEMBER_NAME(sandwiches,"sandwiches");
	HX_MARK_MEMBER_NAME(roomStart,"roomStart");
	HX_MARK_MEMBER_NAME(roomGoal,"roomGoal");
	HX_MARK_MEMBER_NAME(tileSet,"tileSet");
	HX_MARK_MEMBER_NAME(tileTypes,"tileTypes");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(roomHeight,"roomHeight");
	HX_MARK_MEMBER_NAME(roomWidth,"roomWidth");
	HX_MARK_MEMBER_NAME(tileContainer,"tileContainer");
	HX_MARK_MEMBER_NAME(objectContainer,"objectContainer");
	HX_MARK_MEMBER_NAME(actorContainer,"actorContainer");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Room_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
	HX_VISIT_MEMBER_NAME(actorArray,"actorArray");
	HX_VISIT_MEMBER_NAME(objectArray,"objectArray");
	HX_VISIT_MEMBER_NAME(sandwiches,"sandwiches");
	HX_VISIT_MEMBER_NAME(roomStart,"roomStart");
	HX_VISIT_MEMBER_NAME(roomGoal,"roomGoal");
	HX_VISIT_MEMBER_NAME(tileSet,"tileSet");
	HX_VISIT_MEMBER_NAME(tileTypes,"tileTypes");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(roomHeight,"roomHeight");
	HX_VISIT_MEMBER_NAME(roomWidth,"roomWidth");
	HX_VISIT_MEMBER_NAME(tileContainer,"tileContainer");
	HX_VISIT_MEMBER_NAME(objectContainer,"objectContainer");
	HX_VISIT_MEMBER_NAME(actorContainer,"actorContainer");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Room_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileSet") ) { return tileSet; }
		if (HX_FIELD_EQ(inName,"setGoal") ) { return setGoal_dyn(); }
		if (HX_FIELD_EQ(inName,"addTile") ) { return addTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roomGoal") ) { return roomGoal; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		if (HX_FIELD_EQ(inName,"setLevel") ) { return setLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return tileArray; }
		if (HX_FIELD_EQ(inName,"roomStart") ) { return roomStart; }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { return tileTypes; }
		if (HX_FIELD_EQ(inName,"roomWidth") ) { return roomWidth; }
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
		if (HX_FIELD_EQ(inName,"parseRoom") ) { return parseRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTile") ) { return parseTile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"actorArray") ) { return actorArray; }
		if (HX_FIELD_EQ(inName,"sandwiches") ) { return sandwiches; }
		if (HX_FIELD_EQ(inName,"roomHeight") ) { return roomHeight; }
		if (HX_FIELD_EQ(inName,"updateRoom") ) { return updateRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"resetLevel") ) { return resetLevel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectArray") ) { return objectArray; }
		if (HX_FIELD_EQ(inName,"createEnemy") ) { return createEnemy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileContainer") ) { return tileContainer; }
		if (HX_FIELD_EQ(inName,"getActorTiles") ) { return getActorTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"updateObjects") ) { return updateObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObjectID") ) { return parseObjectID_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actorContainer") ) { return actorContainer; }
		if (HX_FIELD_EQ(inName,"initializeRoom") ) { return initializeRoom_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"objectContainer") ) { return objectContainer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addObjectProperty") ) { return addObjectProperty_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getActorCollisions") ) { return getActorCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"parseRoomDimension") ) { return parseRoomDimension_dyn(); }
		if (HX_FIELD_EQ(inName,"readDynamicObjects") ) { return readDynamicObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"parseDynamicObject") ) { return parseDynamicObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeTileArray") ) { return initializeTileArray_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObjectLocation") ) { return parseObjectLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Room_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileSet") ) { tileSet=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roomGoal") ) { roomGoal=inValue.Cast< ::Goal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roomStart") ) { roomStart=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { tileTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roomWidth") ) { roomWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"actorArray") ) { actorArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sandwiches") ) { sandwiches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roomHeight") ) { roomHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectArray") ) { objectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileContainer") ) { tileContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actorContainer") ) { actorContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"objectContainer") ) { objectContainer=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Room_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Room_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"));
	outFields->push(HX_HCSTRING("actorArray","\x64","\x3a","\xa9","\xaf"));
	outFields->push(HX_HCSTRING("objectArray","\x5a","\x8a","\xbe","\x94"));
	outFields->push(HX_HCSTRING("sandwiches","\xa9","\x4a","\x46","\x6c"));
	outFields->push(HX_HCSTRING("roomStart","\x47","\xf4","\x4d","\x70"));
	outFields->push(HX_HCSTRING("roomGoal","\xce","\x4c","\xd2","\xd3"));
	outFields->push(HX_HCSTRING("tileSet","\x14","\x39","\x7b","\x45"));
	outFields->push(HX_HCSTRING("tileTypes","\x6b","\xce","\x26","\xa6"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	outFields->push(HX_HCSTRING("roomHeight","\x62","\x70","\x39","\xd0"));
	outFields->push(HX_HCSTRING("roomWidth","\xeb","\x35","\xa5","\xb6"));
	outFields->push(HX_HCSTRING("tileContainer","\x33","\xb4","\x39","\x2f"));
	outFields->push(HX_HCSTRING("objectContainer","\x82","\x86","\xb6","\x4a"));
	outFields->push(HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Room_obj,tileArray),HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Room_obj,actorArray),HX_HCSTRING("actorArray","\x64","\x3a","\xa9","\xaf")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Room_obj,objectArray),HX_HCSTRING("objectArray","\x5a","\x8a","\xbe","\x94")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Room_obj,sandwiches),HX_HCSTRING("sandwiches","\xa9","\x4a","\x46","\x6c")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Room_obj,roomStart),HX_HCSTRING("roomStart","\x47","\xf4","\x4d","\x70")},
	{hx::fsObject /*::Goal*/ ,(int)offsetof(Room_obj,roomGoal),HX_HCSTRING("roomGoal","\xce","\x4c","\xd2","\xd3")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Room_obj,tileSet),HX_HCSTRING("tileSet","\x14","\x39","\x7b","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Room_obj,tileTypes),HX_HCSTRING("tileTypes","\x6b","\xce","\x26","\xa6")},
	{hx::fsInt,(int)offsetof(Room_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{hx::fsInt,(int)offsetof(Room_obj,roomHeight),HX_HCSTRING("roomHeight","\x62","\x70","\x39","\xd0")},
	{hx::fsInt,(int)offsetof(Room_obj,roomWidth),HX_HCSTRING("roomWidth","\xeb","\x35","\xa5","\xb6")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Room_obj,tileContainer),HX_HCSTRING("tileContainer","\x33","\xb4","\x39","\x2f")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Room_obj,objectContainer),HX_HCSTRING("objectContainer","\x82","\x86","\xb6","\x4a")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Room_obj,actorContainer),HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"),
	HX_HCSTRING("actorArray","\x64","\x3a","\xa9","\xaf"),
	HX_HCSTRING("objectArray","\x5a","\x8a","\xbe","\x94"),
	HX_HCSTRING("sandwiches","\xa9","\x4a","\x46","\x6c"),
	HX_HCSTRING("roomStart","\x47","\xf4","\x4d","\x70"),
	HX_HCSTRING("roomGoal","\xce","\x4c","\xd2","\xd3"),
	HX_HCSTRING("tileSet","\x14","\x39","\x7b","\x45"),
	HX_HCSTRING("tileTypes","\x6b","\xce","\x26","\xa6"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("roomHeight","\x62","\x70","\x39","\xd0"),
	HX_HCSTRING("roomWidth","\xeb","\x35","\xa5","\xb6"),
	HX_HCSTRING("tileContainer","\x33","\xb4","\x39","\x2f"),
	HX_HCSTRING("objectContainer","\x82","\x86","\xb6","\x4a"),
	HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a"),
	HX_HCSTRING("initializeRoom","\x8b","\x33","\x3e","\x4f"),
	HX_HCSTRING("updateRoom","\xc4","\xd8","\x63","\x04"),
	HX_HCSTRING("getActorCollisions","\x20","\x4f","\x33","\xde"),
	HX_HCSTRING("getActorTiles","\x86","\x26","\xc1","\xf6"),
	HX_HCSTRING("updateObjects","\xcb","\xcd","\xbd","\x4d"),
	HX_HCSTRING("createEnemy","\xac","\x49","\xf6","\x99"),
	HX_HCSTRING("addObject","\xc0","\xb3","\x63","\xcd"),
	HX_HCSTRING("resetLevel","\x35","\x4d","\xff","\x5a"),
	HX_HCSTRING("setLevel","\x82","\x7e","\x97","\x80"),
	HX_HCSTRING("addActor","\x14","\xf1","\x03","\x95"),
	HX_HCSTRING("setGoal","\xd5","\xc9","\xed","\x09"),
	HX_HCSTRING("parseRoom","\xee","\x3f","\x55","\xd3"),
	HX_HCSTRING("parseRoomDimension","\x98","\x6d","\xad","\xe9"),
	HX_HCSTRING("initializeTileArray","\x1b","\xd0","\xd9","\xce"),
	HX_HCSTRING("parseTile","\x01","\x1d","\xa3","\xd4"),
	HX_HCSTRING("addTile","\xef","\x0d","\x3a","\x89"),
	HX_HCSTRING("readDynamicObjects","\x0b","\x39","\xa5","\x1b"),
	HX_HCSTRING("parseDynamicObject","\x6b","\x17","\x79","\x94"),
	HX_HCSTRING("parseObjectID","\xad","\x63","\x5b","\xc8"),
	HX_HCSTRING("parseObjectLocation","\xa7","\xf7","\x6a","\x49"),
	HX_HCSTRING("addObjectProperty","\x35","\x78","\xc7","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Room_obj::__mClass,"__mClass");
};

#endif

hx::Class Room_obj::__mClass;

void Room_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Room_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Room_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

