#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_Animation
#include <Animation.h>
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
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

Void Enemy_obj::__construct(::EnemyAI ai)
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",20,0xbda88996)
HX_STACK_THIS(this)
HX_STACK_ARG(ai,"ai")
{
	HX_STACK_LINE(21)
	::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Enemy.png","\x97","\x0f","\x40","\x91"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	super::__construct(tmp1);
	HX_STACK_LINE(22)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)2,(int)20,(int)12,(int)12);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	this->bounds = tmp2;
	HX_STACK_LINE(24)
	this->actorWidth = (int)16;
	HX_STACK_LINE(25)
	this->actorHeight = (int)32;
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	int tmp8 = this->actorWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	int tmp9 = this->actorHeight;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	::Animation tmp10 = ::Animation_obj::__new(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),tmp3,Array_obj< ::Dynamic >::__new().Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7),tmp8,tmp9,(int)1,true);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	this->addAnimation(tmp10);
	HX_STACK_LINE(30)
	int tmp11 = this->actorHeight;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new((int)0,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp15 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(30)
	::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(30)
	int tmp17 = this->actorWidth;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(30)
	int tmp18 = this->actorHeight;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(29)
	::Animation tmp19 = ::Animation_obj::__new(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),tmp12,Array_obj< ::Dynamic >::__new().Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16),tmp17,tmp18,(int)1,true);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(29)
	this->addAnimation(tmp19);
	HX_STACK_LINE(32)
	int tmp20 = this->actorHeight;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(32)
	int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp22 = ::openfl::geom::Point_obj::__new((int)0,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp23 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp24 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp25 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(32)
	::openfl::geom::Point tmp26 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(32)
	int tmp27 = this->actorWidth;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(32)
	int tmp28 = this->actorHeight;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(31)
	::Animation tmp29 = ::Animation_obj::__new(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"),tmp22,Array_obj< ::Dynamic >::__new().Add(tmp23).Add(tmp24).Add(tmp25).Add(tmp26),tmp27,tmp28,(int)1,true);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(31)
	this->addAnimation(tmp29);
	HX_STACK_LINE(34)
	int tmp30 = this->actorHeight;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(34)
	int tmp31 = (tmp30 * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp32 = ::openfl::geom::Point_obj::__new((int)0,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp33 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp34 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp35 = ::openfl::geom::Point_obj::__new((int)2,null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(34)
	::openfl::geom::Point tmp36 = ::openfl::geom::Point_obj::__new((int)3,null());		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(34)
	int tmp37 = this->actorWidth;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(34)
	int tmp38 = this->actorHeight;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(33)
	::Animation tmp39 = ::Animation_obj::__new(HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00"),tmp32,Array_obj< ::Dynamic >::__new().Add(tmp33).Add(tmp34).Add(tmp35).Add(tmp36),tmp37,tmp38,(int)1,true);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(33)
	this->addAnimation(tmp39);
	HX_STACK_LINE(36)
	int tmp40 = this->actorHeight;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(36)
	int tmp41 = (tmp40 * (int)4);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp42 = ::openfl::geom::Point_obj::__new((int)0,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp43 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(36)
	::openfl::geom::Point tmp44 = ::openfl::geom::Point_obj::__new((int)1,null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(35)
	::Animation tmp45 = ::Animation_obj::__new(HX_HCSTRING("Death","\x14","\xff","\x4b","\x6a"),tmp42,Array_obj< ::Dynamic >::__new().Add(tmp43).Add(tmp44),(int)32,(int)16,(int)1,true);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(35)
	this->addAnimation(tmp45);
	HX_STACK_LINE(38)
	this->changeAnimation(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"));
	HX_STACK_LINE(40)
	this->enemyAI = ai;
	HX_STACK_LINE(41)
	this->maxSpeed = (int)1;
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(::EnemyAI ai)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(ai);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Enemy_obj::updateActor( ){
{
		HX_STACK_FRAME("Enemy","updateActor",0x571c04e6,"Enemy.updateActor","Enemy.hx",45,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::updateActor();
		HX_STACK_LINE(48)
		::openfl::geom::Point tmp = this->startLocation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			this->startLocation = tmp4;
		}
		HX_STACK_LINE(50)
		bool tmp2 = this->isDead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(50)
			return null();
		}
		HX_STACK_LINE(52)
		::EnemyAI tmp3 = this->enemyAI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp3->updateAI(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Enemy_obj::moveX( ){
{
		HX_STACK_FRAME("Enemy","moveX",0x0820f561,"Enemy.moveX","Enemy.hx",55,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(56)
			Float tmp1 = this->xVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(58)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(59)
		int tmp1 = this->getCollisionLargestDistance(collisions,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(61)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		if ((tmp2)){
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(62)
				int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				_g->set_x(tmp5);
			}
			HX_STACK_LINE(63)
			::EnemyAI tmp3 = this->enemyAI;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			tmp3->handleCollision(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(65)
			this->checkPlayerContact(collisions);
		}
	}
return null();
}


Void Enemy_obj::moveY( ){
{
		HX_STACK_FRAME("Enemy","moveY",0x0820f562,"Enemy.moveY","Enemy.hx",68,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			Float tmp1 = this->yVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(71)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(72)
		int tmp1 = this->getCollisionLargestDistance(collisions,false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(74)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				Float tmp3 = _g->get_y();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(75)
				_g->set_y(tmp5);
			}
			HX_STACK_LINE(76)
			::EnemyAI tmp3 = this->enemyAI;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			tmp3->handleCollision(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(78)
			this->checkPlayerContact(collisions);
		}
	}
return null();
}


Void Enemy_obj::checkPlayerContact( Array< ::Dynamic > collisions){
{
		HX_STACK_FRAME("Enemy","checkPlayerContact",0xa35549dd,"Enemy.checkPlayerContact","Enemy.hx",82,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collisions,"collisions")
		HX_STACK_LINE(83)
		bool tmp = this->isDead;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(83)
			return null();
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			int _g = collisions->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(84)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				if ((tmp2)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(85)
				::Collidable tmp4 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::Player >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(85)
				if ((tmp5)){
					HX_STACK_LINE(86)
					::Collidable tmp6 = collisions->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					::Player player = ((::Player)(tmp6));		HX_STACK_VAR(player,"player");
					HX_STACK_LINE(87)
					player->lose(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,checkPlayerContact,(void))

Void Enemy_obj::goLeft( ){
{
		HX_STACK_FRAME("Enemy","goLeft",0x92ceabd5,"Enemy.goLeft","Enemy.hx",93,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::goLeft();
		HX_STACK_LINE(95)
		this->changeAnimation(HX_HCSTRING("Left","\x27","\x34","\x89","\x32"));
	}
return null();
}


Void Enemy_obj::goRight( ){
{
		HX_STACK_FRAME("Enemy","goRight",0x5914bc4e,"Enemy.goRight","Enemy.hx",98,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		this->super::goRight();
		HX_STACK_LINE(100)
		this->changeAnimation(HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"));
	}
return null();
}


Void Enemy_obj::goUp( ){
{
		HX_STACK_FRAME("Enemy","goUp",0xdf5edaa9,"Enemy.goUp","Enemy.hx",103,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->super::goUp();
		HX_STACK_LINE(105)
		this->changeAnimation(HX_HCSTRING("Up","\x7b","\x4a","\x00","\x00"));
	}
return null();
}


Void Enemy_obj::goDown( ){
{
		HX_STACK_FRAME("Enemy","goDown",0x8d8c9c30,"Enemy.goDown","Enemy.hx",108,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		this->super::goDown();
		HX_STACK_LINE(110)
		this->changeAnimation(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"));
	}
return null();
}


Void Enemy_obj::killEnemy( ){
{
		HX_STACK_FRAME("Enemy","killEnemy",0x261a9404,"Enemy.killEnemy","Enemy.hx",113,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		::openfl::media::Sound tmp = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Scream.mp3","\xdd","\xc8","\x71","\x17"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::openfl::media::Sound scream = tmp;		HX_STACK_VAR(scream,"scream");
		HX_STACK_LINE(115)
		scream->play(null(),null(),null());
		HX_STACK_LINE(117)
		this->changeAnimation(HX_HCSTRING("Death","\x14","\xff","\x4b","\x6a"));
		HX_STACK_LINE(118)
		this->isDead = true;
		HX_STACK_LINE(119)
		this->stopAll();
		HX_STACK_LINE(120)
		this->freeze();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,killEnemy,(void))

bool Enemy_obj::isEnemyDead( ){
	HX_STACK_FRAME("Enemy","isEnemyDead",0xd6e2d87c,"Enemy.isEnemyDead","Enemy.hx",122,0xbda88996)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	bool tmp = this->isDead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,isEnemyDead,return )

Void Enemy_obj::resetActor( ){
{
		HX_STACK_FRAME("Enemy","resetActor",0x7526272c,"Enemy.resetActor","Enemy.hx",127,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		this->super::resetActor();
		HX_STACK_LINE(129)
		this->isDead = false;
		HX_STACK_LINE(130)
		this->changeAnimation(HX_HCSTRING("Down","\x82","\x24","\x47","\x2d"));
		HX_STACK_LINE(131)
		this->freeze();
		HX_STACK_LINE(132)
		::openfl::geom::Point tmp = this->startLocation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		this->set_x(tmp1);
		HX_STACK_LINE(133)
		::openfl::geom::Point tmp2 = this->startLocation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		this->set_y(tmp3);
		HX_STACK_LINE(134)
		::EnemyAI tmp4 = this->enemyAI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		tmp4->updateAI(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(enemyAI,"enemyAI");
	HX_MARK_MEMBER_NAME(isDead,"isDead");
	HX_MARK_MEMBER_NAME(startLocation,"startLocation");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enemyAI,"enemyAI");
	HX_VISIT_MEMBER_NAME(isDead,"isDead");
	HX_VISIT_MEMBER_NAME(startLocation,"startLocation");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goUp") ) { return goUp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isDead") ) { return isDead; }
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"goDown") ) { return goDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemyAI") ) { return enemyAI; }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"killEnemy") ) { return killEnemy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetActor") ) { return resetActor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateActor") ) { return updateActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnemyDead") ) { return isEnemyDead_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startLocation") ) { return startLocation; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkPlayerContact") ) { return checkPlayerContact_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isDead") ) { isDead=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemyAI") ) { enemyAI=inValue.Cast< ::EnemyAI >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startLocation") ) { startLocation=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Enemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3"));
	outFields->push(HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f"));
	outFields->push(HX_HCSTRING("startLocation","\xb7","\xd0","\x01","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EnemyAI*/ ,(int)offsetof(Enemy_obj,enemyAI),HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3")},
	{hx::fsBool,(int)offsetof(Enemy_obj,isDead),HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Enemy_obj,startLocation),HX_HCSTRING("startLocation","\xb7","\xd0","\x01","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("enemyAI","\x30","\x6d","\x1a","\xd3"),
	HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f"),
	HX_HCSTRING("startLocation","\xb7","\xd0","\x01","\xea"),
	HX_HCSTRING("updateActor","\x2c","\x34","\x3f","\x01"),
	HX_HCSTRING("moveX","\x27","\xcc","\x65","\x0c"),
	HX_HCSTRING("moveY","\x28","\xcc","\x65","\x0c"),
	HX_HCSTRING("checkPlayerContact","\x57","\x2f","\x51","\xba"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("goUp","\xa3","\x7e","\x69","\x44"),
	HX_HCSTRING("goDown","\xaa","\xb2","\x83","\x45"),
	HX_HCSTRING("killEnemy","\xca","\x45","\xd9","\x5d"),
	HX_HCSTRING("isEnemyDead","\xc2","\x07","\x06","\x81"),
	HX_HCSTRING("resetActor","\xa6","\x02","\x43","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Enemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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

