#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Goal
#include <Goal.h>
#endif
#ifndef INCLUDED_LevelManager
#include <LevelManager.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",27,0xa27fc9dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Player.png","\x88","\x62","\xd3","\x2e"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	super::__construct(tmp1);
	HX_STACK_LINE(30)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)2,(int)20,(int)12,(int)12);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->bounds = tmp2;
	HX_STACK_LINE(31)
	::Main tmp3 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Dynamic tmp5 = this->keyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	tmp3->stage->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(32)
	::Main tmp6 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	::String tmp7 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	Dynamic tmp8 = this->keyUp_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	tmp6->stage->addEventListener(tmp7,tmp8,null(),null(),null());
	HX_STACK_LINE(34)
	this->hasSubwaySandwich = false;
	HX_STACK_LINE(35)
	::openfl::media::Sound tmp9 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Grunt.mp3","\xc6","\x46","\x9c","\x3a"),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(35)
	this->obstacleSound = tmp9;
	HX_STACK_LINE(36)
	this->soundCount = (int)0;
	HX_STACK_LINE(37)
	this->tileSoundFreq = (int)12;
	HX_STACK_LINE(38)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	this->lastSoundLocation = tmp10;
	HX_STACK_LINE(39)
	this->lastSoundTime = (int)0;
	HX_STACK_LINE(43)
	this->maxSpeed = (int)2;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct();
	return _result_;}

Void Player_obj::updateActor( ){
{
		HX_STACK_FRAME("Player","updateActor",0x920403bf,"Player.updateActor","Player.hx",47,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::openfl::display::Bitmap tmp = this->objectBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Float tmp1 = tmp->get_alpha();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		if ((tmp2)){
			HX_STACK_LINE(50)
			::openfl::display::Bitmap tmp3 = this->objectBitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::openfl::display::Bitmap tmp4 = this->objectBitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			Float tmp5 = tmp4->get_alpha();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			Float tmp6 = (tmp5 - ((Float).01));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			tmp3->set_alpha(tmp6);
		}
		HX_STACK_LINE(53)
		int tmp3 = this->soundCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		if ((tmp4)){
			HX_STACK_LINE(54)
			hx::SubEq(this->soundCount,(int)1);
		}
		HX_STACK_LINE(55)
		int tmp5 = this->lastSoundTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		if ((tmp6)){
			HX_STACK_LINE(56)
			hx::SubEq(this->lastSoundTime,(int)1);
		}
		HX_STACK_LINE(58)
		this->super::updateActor();
		HX_STACK_LINE(60)
		::SubwaySandwich tmp7 = this->sandwich;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		if ((tmp8)){
			HX_STACK_LINE(61)
			::SubwaySandwich tmp9 = this->sandwich;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			bool tmp10 = this->contains(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			if ((tmp10)){
				HX_STACK_LINE(62)
				::SubwaySandwich tmp11 = this->sandwich;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				tmp11->updateSandwich();
			}
		}
	}
return null();
}


Void Player_obj::setRoom( ::Room homeRoom){
{
		HX_STACK_FRAME("Player","setRoom",0x3b2df8f0,"Player.setRoom","Player.hx",66,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(homeRoom,"homeRoom")
		HX_STACK_LINE(67)
		::Room tmp = homeRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		this->super::setRoom(tmp);
		HX_STACK_LINE(68)
		::openfl::display::Bitmap tmp1 = this->objectBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		tmp1->set_alpha((int)1);
	}
return null();
}


Void Player_obj::moveX( ){
{
		HX_STACK_FRAME("Player","moveX",0x003fdb7a,"Player.moveX","Player.hx",71,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			Float tmp1 = this->xVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(74)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(75)
		int tmp1 = this->getCollisionLargestDistance(collisions,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(77)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		if ((tmp2)){
			HX_STACK_LINE(78)
			this->playObstacleSound();
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				_g->set_x(tmp5);
			}
		}
	}
return null();
}


Void Player_obj::moveY( ){
{
		HX_STACK_FRAME("Player","moveY",0x003fdb7b,"Player.moveY","Player.hx",82,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			Float tmp1 = this->yVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(85)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(86)
		int tmp1 = this->getCollisionLargestDistance(collisions,false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(88)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		if ((tmp2)){
			HX_STACK_LINE(89)
			this->playObstacleSound();
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::Player _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(90)
				Float tmp3 = _g->get_y();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				_g->set_y(tmp5);
			}
		}
		HX_STACK_LINE(92)
		this->playTileSound();
		HX_STACK_LINE(93)
		this->checkPlayerInteractions(collisions);
	}
return null();
}


Void Player_obj::playTileSound( ){
{
		HX_STACK_FRAME("Player","playTileSound",0x8db35880,"Player.playTileSound","Player.hx",96,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		Array< ::Dynamic > collisions = tmp->getActorTiles(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			int _g = collisions->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				if ((tmp2)){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(99)
				::Tile tmp4 = collisions->__get(i).StaticCast< ::Tile >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				::openfl::media::Sound tmp5 = tmp4->getSound();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(99)
				if ((tmp6)){
					HX_STACK_LINE(99)
					int tmp8 = this->getDistanceFromLastTileSound();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(99)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(99)
					int tmp10 = this->tileSoundFreq;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(99)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(99)
					bool tmp12 = (tmp9 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(99)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(99)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(99)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(99)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(99)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(99)
					if ((tmp17)){
						HX_STACK_LINE(99)
						int tmp18 = this->lastSoundTime;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(99)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(99)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(99)
						bool tmp21 = (tmp20 == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(99)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(99)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(99)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(99)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(99)
						if ((tmp25)){
							HX_STACK_LINE(99)
							tmp7 = this->isMoving();
						}
						else{
							HX_STACK_LINE(99)
							tmp7 = false;
						}
					}
					else{
						HX_STACK_LINE(99)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(99)
					tmp7 = false;
				}
				HX_STACK_LINE(99)
				if ((tmp7)){
					HX_STACK_LINE(100)
					::Tile tmp8 = collisions->__get(i).StaticCast< ::Tile >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(100)
					::openfl::media::Sound tmp9 = tmp8->getSound();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(100)
					tmp9->play(null(),null(),null());
					HX_STACK_LINE(101)
					Float tmp10 = this->get_x();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(101)
					Float tmp11 = this->get_y();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(101)
					::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					this->lastSoundLocation = tmp12;
					HX_STACK_LINE(102)
					this->lastSoundTime = (int)30;
					HX_STACK_LINE(103)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,playTileSound,(void))

int Player_obj::getDistanceFromLastTileSound( ){
	HX_STACK_FRAME("Player","getDistanceFromLastTileSound",0x85196263,"Player.getDistanceFromLastTileSound","Player.hx",107,0xa27fc9dd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	::openfl::geom::Point tmp1 = this->lastSoundLocation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	Float yDiff = tmp4;		HX_STACK_VAR(yDiff,"yDiff");
	HX_STACK_LINE(109)
	Float tmp5 = this->get_x();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	::openfl::geom::Point tmp6 = this->lastSoundLocation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(109)
	Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(109)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(109)
	Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	Float xDiff = tmp9;		HX_STACK_VAR(xDiff,"xDiff");
	HX_STACK_LINE(110)
	Float tmp10 = (yDiff + xDiff);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(110)
	int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(110)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getDistanceFromLastTileSound,return )

Void Player_obj::playObstacleSound( ){
{
		HX_STACK_FRAME("Player","playObstacleSound",0xc6440d3f,"Player.playObstacleSound","Player.hx",113,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		int tmp = this->soundCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(115)
			this->soundCount = (int)20;
			HX_STACK_LINE(116)
			::openfl::media::Sound tmp2 = this->obstacleSound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			tmp2->play(null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,playObstacleSound,(void))

Void Player_obj::checkPlayerInteractions( Array< ::Dynamic > collisions){
{
		HX_STACK_FRAME("Player","checkPlayerInteractions",0x1564d45d,"Player.checkPlayerInteractions","Player.hx",121,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collisions,"collisions")
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			int _g = collisions->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(124)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				if ((tmp1)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(125)
				::Collidable tmp3 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(125)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::Enemy >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				if ((tmp4)){
					HX_STACK_LINE(126)
					::Collidable tmp5 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					::Enemy tmp6 = ((::Enemy)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(126)
					this->lose(tmp6);
				}
				else{
					HX_STACK_LINE(128)
					::Collidable tmp5 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(128)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::Goal >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(128)
					if ((tmp6)){
						HX_STACK_LINE(129)
						::LevelManager tmp7 = ::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(129)
						::Room tmp8 = this->currentRoom;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(129)
						tmp7->goToNextLevel(tmp8,hx::ObjectPtr<OBJ_>(this));
						HX_STACK_LINE(130)
						this->dropSandwich();
					}
					else{
						HX_STACK_LINE(132)
						::Collidable tmp7 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(132)
						bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::SubwaySandwich >());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(132)
						if ((tmp8)){
							HX_STACK_LINE(133)
							bool tmp9 = this->hasSubwaySandwich;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(133)
							if ((tmp9)){
								HX_STACK_LINE(133)
								return null();
							}
							HX_STACK_LINE(134)
							::Collidable tmp10 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(134)
							::SubwaySandwich tmp11 = ((::SubwaySandwich)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(134)
							this->pickUpSandwich(tmp11);
						}
					}
				}
			}
		}
		HX_STACK_LINE(138)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		tmp->updateObjects(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,checkPlayerInteractions,(void))

Void Player_obj::keyDown( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("Player","keyDown",0xc64233b4,"Player.keyDown","Player.hx",141,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(143)
		bool tmp = (key->keyCode == (int)87);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(143)
			tmp2 = (key->keyCode == (int)38);
		}
		else{
			HX_STACK_LINE(143)
			tmp2 = true;
		}
		HX_STACK_LINE(143)
		if ((tmp2)){
			HX_STACK_LINE(144)
			this->goUp();
		}
		HX_STACK_LINE(145)
		bool tmp3 = (key->keyCode == (int)65);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp4)){
			HX_STACK_LINE(145)
			tmp5 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(145)
			tmp5 = true;
		}
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(146)
			this->goLeft();
		}
		HX_STACK_LINE(147)
		bool tmp6 = (key->keyCode == (int)83);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		if ((tmp7)){
			HX_STACK_LINE(147)
			tmp8 = (key->keyCode == (int)40);
		}
		else{
			HX_STACK_LINE(147)
			tmp8 = true;
		}
		HX_STACK_LINE(147)
		if ((tmp8)){
			HX_STACK_LINE(148)
			this->goDown();
		}
		HX_STACK_LINE(149)
		bool tmp9 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(149)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(149)
		if ((tmp10)){
			HX_STACK_LINE(149)
			tmp11 = (key->keyCode == (int)39);
		}
		else{
			HX_STACK_LINE(149)
			tmp11 = true;
		}
		HX_STACK_LINE(149)
		if ((tmp11)){
			HX_STACK_LINE(150)
			this->goRight();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,keyDown,(void))

Void Player_obj::keyUp( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("Player","keyUp",0xd2d8c92d,"Player.keyUp","Player.hx",152,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(154)
		bool tmp = (key->keyCode == (int)87);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		if ((tmp1)){
			HX_STACK_LINE(154)
			tmp2 = (key->keyCode == (int)38);
		}
		else{
			HX_STACK_LINE(154)
			tmp2 = true;
		}
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(155)
			this->stopUp();
		}
		HX_STACK_LINE(156)
		bool tmp3 = (key->keyCode == (int)83);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		if ((tmp4)){
			HX_STACK_LINE(156)
			tmp5 = (key->keyCode == (int)40);
		}
		else{
			HX_STACK_LINE(156)
			tmp5 = true;
		}
		HX_STACK_LINE(156)
		if ((tmp5)){
			HX_STACK_LINE(157)
			this->stopDown();
		}
		HX_STACK_LINE(158)
		bool tmp6 = (key->keyCode == (int)65);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		if ((tmp7)){
			HX_STACK_LINE(158)
			tmp8 = (key->keyCode == (int)37);
		}
		else{
			HX_STACK_LINE(158)
			tmp8 = true;
		}
		HX_STACK_LINE(158)
		if ((tmp8)){
			HX_STACK_LINE(159)
			this->stopLeft();
		}
		HX_STACK_LINE(160)
		bool tmp9 = (key->keyCode == (int)68);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(160)
		if ((tmp10)){
			HX_STACK_LINE(160)
			tmp11 = (key->keyCode == (int)39);
		}
		else{
			HX_STACK_LINE(160)
			tmp11 = true;
		}
		HX_STACK_LINE(160)
		if ((tmp11)){
			HX_STACK_LINE(161)
			this->stopRight();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,keyUp,(void))

Void Player_obj::pickUpSandwich( ::SubwaySandwich sandwich){
{
		HX_STACK_FRAME("Player","pickUpSandwich",0xd577f184,"Player.pickUpSandwich","Player.hx",164,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sandwich,"sandwich")
		HX_STACK_LINE(165)
		sandwich->set_x((int)0);
		HX_STACK_LINE(166)
		sandwich->set_y((int)0);
		HX_STACK_LINE(167)
		::SubwaySandwich tmp = sandwich;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		this->addChild(tmp);
		HX_STACK_LINE(168)
		this->hasSubwaySandwich = true;
		HX_STACK_LINE(169)
		this->sandwich = sandwich;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,pickUpSandwich,(void))

Void Player_obj::dropSandwich( ){
{
		HX_STACK_FRAME("Player","dropSandwich",0x027469d7,"Player.dropSandwich","Player.hx",171,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		::SubwaySandwich tmp = this->sandwich;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(174)
		::SubwaySandwich tmp2 = this->sandwich;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		bool tmp3 = this->contains(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		if ((tmp3)){
			HX_STACK_LINE(175)
			::SubwaySandwich tmp4 = this->sandwich;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			this->removeChild(tmp4);
		}
		HX_STACK_LINE(176)
		this->sandwich = null();
		HX_STACK_LINE(177)
		this->hasSubwaySandwich = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,dropSandwich,(void))

Void Player_obj::lose( ::Enemy enemy){
{
		HX_STACK_FRAME("Player","lose",0x1c0a25e2,"Player.lose","Player.hx",180,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(181)
		bool tmp = enemy->isEnemyDead();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		if ((tmp)){
			HX_STACK_LINE(182)
			return null();
		}
		else{
			HX_STACK_LINE(183)
			bool tmp1 = this->hasSubwaySandwich;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			if ((tmp1)){
				HX_STACK_LINE(184)
				enemy->killEnemy();
				HX_STACK_LINE(185)
				this->dropSandwich();
			}
			else{
				HX_STACK_LINE(188)
				::openfl::display::Bitmap tmp2 = this->objectBitmap;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(188)
				tmp2->set_alpha((int)1);
				HX_STACK_LINE(189)
				this->stopAll();
				HX_STACK_LINE(190)
				::openfl::media::Sound tmp3 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Fail.mp3","\x4c","\xfb","\xa8","\x5c"),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(190)
				::openfl::media::Sound fail = tmp3;		HX_STACK_VAR(fail,"fail");
				HX_STACK_LINE(191)
				fail->play(null(),null(),null());
				HX_STACK_LINE(192)
				::Main tmp4 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(192)
				::String tmp5 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(192)
				Dynamic tmp6 = this->keyDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(192)
				tmp4->stage->removeEventListener(tmp5,tmp6,null());
				HX_STACK_LINE(193)
				::Main tmp7 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(193)
				::String tmp8 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(193)
				Dynamic tmp9 = this->keyUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(193)
				tmp7->stage->removeEventListener(tmp8,tmp9,null());
				HX_STACK_LINE(194)
				::Main tmp10 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				::String tmp11 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(194)
				Dynamic tmp12 = this->reset_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				tmp10->stage->addEventListener(tmp11,tmp12,null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,lose,(void))

Void Player_obj::reset( ::openfl::events::KeyboardEvent key){
{
		HX_STACK_FRAME("Player","reset",0xdaa25922,"Player.reset","Player.hx",198,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(199)
		bool tmp = (key->keyCode == (int)32);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(199)
			tmp2 = (key->keyCode == (int)82);
		}
		else{
			HX_STACK_LINE(199)
			tmp2 = true;
		}
		HX_STACK_LINE(199)
		if ((tmp2)){
			HX_STACK_LINE(200)
			::openfl::display::Bitmap tmp3 = this->objectBitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			tmp3->set_alpha((int)0);
			HX_STACK_LINE(201)
			::LevelManager tmp4 = ::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp4->resetLevel(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(202)
			::Main tmp5 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			::String tmp6 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			Dynamic tmp7 = this->keyDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			tmp5->stage->addEventListener(tmp6,tmp7,null(),null(),null());
			HX_STACK_LINE(203)
			::Main tmp8 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			::String tmp9 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			Dynamic tmp10 = this->keyUp_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			tmp8->stage->addEventListener(tmp9,tmp10,null(),null(),null());
			HX_STACK_LINE(204)
			::Main tmp11 = ::Main_obj::getSingleton();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(204)
			::String tmp12 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(204)
			Dynamic tmp13 = this->reset_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(204)
			tmp11->stage->removeEventListener(tmp12,tmp13,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,reset,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(obstacleSound,"obstacleSound");
	HX_MARK_MEMBER_NAME(soundCount,"soundCount");
	HX_MARK_MEMBER_NAME(tileSoundFreq,"tileSoundFreq");
	HX_MARK_MEMBER_NAME(lastSoundLocation,"lastSoundLocation");
	HX_MARK_MEMBER_NAME(lastSoundTime,"lastSoundTime");
	HX_MARK_MEMBER_NAME(hasSubwaySandwich,"hasSubwaySandwich");
	HX_MARK_MEMBER_NAME(sandwich,"sandwich");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(obstacleSound,"obstacleSound");
	HX_VISIT_MEMBER_NAME(soundCount,"soundCount");
	HX_VISIT_MEMBER_NAME(tileSoundFreq,"tileSoundFreq");
	HX_VISIT_MEMBER_NAME(lastSoundLocation,"lastSoundLocation");
	HX_VISIT_MEMBER_NAME(lastSoundTime,"lastSoundTime");
	HX_VISIT_MEMBER_NAME(hasSubwaySandwich,"hasSubwaySandwich");
	HX_VISIT_MEMBER_NAME(sandwich,"sandwich");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lose") ) { return lose_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setRoom") ) { return setRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sandwich") ) { return sandwich; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"soundCount") ) { return soundCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateActor") ) { return updateActor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dropSandwich") ) { return dropSandwich_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"obstacleSound") ) { return obstacleSound; }
		if (HX_FIELD_EQ(inName,"tileSoundFreq") ) { return tileSoundFreq; }
		if (HX_FIELD_EQ(inName,"lastSoundTime") ) { return lastSoundTime; }
		if (HX_FIELD_EQ(inName,"playTileSound") ) { return playTileSound_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pickUpSandwich") ) { return pickUpSandwich_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastSoundLocation") ) { return lastSoundLocation; }
		if (HX_FIELD_EQ(inName,"hasSubwaySandwich") ) { return hasSubwaySandwich; }
		if (HX_FIELD_EQ(inName,"playObstacleSound") ) { return playObstacleSound_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"checkPlayerInteractions") ) { return checkPlayerInteractions_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getDistanceFromLastTileSound") ) { return getDistanceFromLastTileSound_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sandwich") ) { sandwich=inValue.Cast< ::SubwaySandwich >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"soundCount") ) { soundCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"obstacleSound") ) { obstacleSound=inValue.Cast< ::openfl::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSoundFreq") ) { tileSoundFreq=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSoundTime") ) { lastSoundTime=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastSoundLocation") ) { lastSoundLocation=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasSubwaySandwich") ) { hasSubwaySandwich=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Player_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("obstacleSound","\x00","\x54","\x75","\x7c"));
	outFields->push(HX_HCSTRING("soundCount","\x80","\x59","\xa8","\xb3"));
	outFields->push(HX_HCSTRING("tileSoundFreq","\x19","\xa8","\x56","\xbe"));
	outFields->push(HX_HCSTRING("lastSoundLocation","\xee","\xa5","\x03","\xa6"));
	outFields->push(HX_HCSTRING("lastSoundTime","\x46","\x73","\x03","\x56"));
	outFields->push(HX_HCSTRING("hasSubwaySandwich","\x44","\x05","\xc8","\x66"));
	outFields->push(HX_HCSTRING("sandwich","\x7b","\x5d","\x97","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Player_obj,obstacleSound),HX_HCSTRING("obstacleSound","\x00","\x54","\x75","\x7c")},
	{hx::fsInt,(int)offsetof(Player_obj,soundCount),HX_HCSTRING("soundCount","\x80","\x59","\xa8","\xb3")},
	{hx::fsInt,(int)offsetof(Player_obj,tileSoundFreq),HX_HCSTRING("tileSoundFreq","\x19","\xa8","\x56","\xbe")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Player_obj,lastSoundLocation),HX_HCSTRING("lastSoundLocation","\xee","\xa5","\x03","\xa6")},
	{hx::fsInt,(int)offsetof(Player_obj,lastSoundTime),HX_HCSTRING("lastSoundTime","\x46","\x73","\x03","\x56")},
	{hx::fsBool,(int)offsetof(Player_obj,hasSubwaySandwich),HX_HCSTRING("hasSubwaySandwich","\x44","\x05","\xc8","\x66")},
	{hx::fsObject /*::SubwaySandwich*/ ,(int)offsetof(Player_obj,sandwich),HX_HCSTRING("sandwich","\x7b","\x5d","\x97","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("obstacleSound","\x00","\x54","\x75","\x7c"),
	HX_HCSTRING("soundCount","\x80","\x59","\xa8","\xb3"),
	HX_HCSTRING("tileSoundFreq","\x19","\xa8","\x56","\xbe"),
	HX_HCSTRING("lastSoundLocation","\xee","\xa5","\x03","\xa6"),
	HX_HCSTRING("lastSoundTime","\x46","\x73","\x03","\x56"),
	HX_HCSTRING("hasSubwaySandwich","\x44","\x05","\xc8","\x66"),
	HX_HCSTRING("sandwich","\x7b","\x5d","\x97","\x51"),
	HX_HCSTRING("updateActor","\x2c","\x34","\x3f","\x01"),
	HX_HCSTRING("setRoom","\xdd","\x2e","\x33","\x11"),
	HX_HCSTRING("moveX","\x27","\xcc","\x65","\x0c"),
	HX_HCSTRING("moveY","\x28","\xcc","\x65","\x0c"),
	HX_HCSTRING("playTileSound","\x2d","\x3e","\x6d","\xa6"),
	HX_HCSTRING("getDistanceFromLastTileSound","\x56","\xe7","\xd4","\xd4"),
	HX_HCSTRING("playObstacleSound","\x6c","\xcd","\xa6","\x8e"),
	HX_HCSTRING("checkPlayerInteractions","\x4a","\x74","\x9d","\xbb"),
	HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),
	HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),
	HX_HCSTRING("pickUpSandwich","\x37","\x03","\x67","\x5f"),
	HX_HCSTRING("dropSandwich","\xca","\x98","\x03","\xe7"),
	HX_HCSTRING("lose","\xd5","\xa9","\xb7","\x47"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Player_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

