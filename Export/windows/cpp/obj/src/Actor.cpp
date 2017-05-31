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
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Actor_obj::__construct(::openfl::display::Bitmap actorBmp)
{
HX_STACK_FRAME("Actor","new",0xa98e6a47,"Actor.new","Actor.hx",27,0x30f9bb09)
HX_STACK_THIS(this)
HX_STACK_ARG(actorBmp,"actorBmp")
{
	HX_STACK_LINE(28)
	::openfl::display::Bitmap tmp = actorBmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	super::__construct(false,tmp);
	HX_STACK_LINE(30)
	this->actorWidth = (int)16;
	HX_STACK_LINE(31)
	this->actorHeight = (int)16;
	HX_STACK_LINE(33)
	int tmp1 = this->actorWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	int tmp2 = (tmp1 - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = this->actorHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	int tmp4 = (tmp3 - (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	::openfl::geom::Rectangle tmp5 = ::openfl::geom::Rectangle_obj::__new((int)2,(int)2,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	this->bounds = tmp5;
	HX_STACK_LINE(35)
	this->yVel = (int)0;
	HX_STACK_LINE(36)
	this->xVel = (int)0;
	HX_STACK_LINE(37)
	this->targetXVel = (int)0;
	HX_STACK_LINE(38)
	this->targetYVel = (int)0;
	HX_STACK_LINE(39)
	this->maxSpeed = (int)3;
	HX_STACK_LINE(40)
	this->acc = ((Float).5);
}
;
	return null();
}

//Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new(::openfl::display::Bitmap actorBmp)
{  hx::ObjectPtr< Actor_obj > _result_ = new Actor_obj();
	_result_->__construct(actorBmp);
	return _result_;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > _result_ = new Actor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Actor_obj::updateActor( ){
{
		HX_STACK_FRAME("Actor","updateActor",0x14108d13,"Actor.updateActor","Actor.hx",44,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->updateSpeed();
		HX_STACK_LINE(47)
		this->updatePosition();
		HX_STACK_LINE(48)
		this->updateAnimation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateActor,(void))

Void Actor_obj::setRoom( ::Room homeRoom){
{
		HX_STACK_FRAME("Actor","setRoom",0x2fbe4844,"Actor.setRoom","Actor.hx",52,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(homeRoom,"homeRoom")
		HX_STACK_LINE(52)
		this->currentRoom = homeRoom;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setRoom,(void))

::Room Actor_obj::getCurrentRoom( ){
	HX_STACK_FRAME("Actor","getCurrentRoom",0x95250b77,"Actor.getCurrentRoom","Actor.hx",54,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentRoom,return )

Void Actor_obj::updateSpeed( ){
{
		HX_STACK_FRAME("Actor","updateSpeed",0x79d359a5,"Actor.updateSpeed","Actor.hx",56,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		Float tmp1 = this->acc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = this->acc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		Float tmp5 = this->xVel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		this->xVel = tmp7;
		HX_STACK_LINE(59)
		Float tmp8 = this->xVel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		int tmp9 = this->maxSpeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		if ((tmp10)){
			HX_STACK_LINE(60)
			int tmp11 = this->maxSpeed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(60)
			this->xVel = tmp11;
		}
		else{
			HX_STACK_LINE(61)
			Float tmp11 = this->xVel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			int tmp12 = this->maxSpeed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(61)
			bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(61)
			if ((tmp14)){
				HX_STACK_LINE(62)
				int tmp15 = this->maxSpeed;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				this->xVel = tmp16;
			}
		}
		HX_STACK_LINE(64)
		int tmp11 = this->targetYVel;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		Float tmp12 = this->acc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		Float tmp14 = this->acc;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(64)
		Float tmp15 = ((int)1 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(64)
		Float tmp16 = this->yVel;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(64)
		Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		this->yVel = tmp18;
		HX_STACK_LINE(65)
		Float tmp19 = this->yVel;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(65)
		int tmp20 = this->maxSpeed;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(65)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(65)
		if ((tmp21)){
			HX_STACK_LINE(66)
			int tmp22 = this->maxSpeed;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			this->yVel = tmp22;
		}
		else{
			HX_STACK_LINE(67)
			Float tmp22 = this->yVel;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			int tmp23 = this->maxSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(67)
			int tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(67)
			bool tmp25 = (tmp22 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(67)
			if ((tmp25)){
				HX_STACK_LINE(68)
				int tmp26 = this->maxSpeed;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(68)
				int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(68)
				this->yVel = tmp27;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateSpeed,(void))

Void Actor_obj::updatePosition( ){
{
		HX_STACK_FRAME("Actor","updatePosition",0x896a854b,"Actor.updatePosition","Actor.hx",72,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(74)
		this->moveX();
		HX_STACK_LINE(75)
		this->moveY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updatePosition,(void))

Void Actor_obj::moveX( ){
{
		HX_STACK_FRAME("Actor","moveX",0x6ce7edce,"Actor.moveX","Actor.hx",77,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			Float tmp = _g->get_x();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			Float tmp1 = this->xVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(80)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(81)
		int tmp1 = this->getCollisionLargestDistance(collisions,true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(83)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp2)){
			HX_STACK_LINE(84)
			::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			_g->set_x(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveX,(void))

Void Actor_obj::moveY( ){
{
		HX_STACK_FRAME("Actor","moveY",0x6ce7edcf,"Actor.moveY","Actor.hx",86,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			Float tmp = _g->get_y();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(87)
			Float tmp1 = this->yVel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(89)
		::Room tmp = this->currentRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Array< ::Dynamic > collisions = tmp->getActorCollisions(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(collisions,"collisions");
		HX_STACK_LINE(90)
		int tmp1 = this->getCollisionLargestDistance(collisions,false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		int largestDistance = tmp1;		HX_STACK_VAR(largestDistance,"largestDistance");
		HX_STACK_LINE(92)
		bool tmp2 = (largestDistance != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		if ((tmp2)){
			HX_STACK_LINE(93)
			::Actor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			Float tmp3 = _g->get_y();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			int tmp4 = largestDistance;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			_g->set_y(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveY,(void))

int Actor_obj::getCollisionLargestDistance( Array< ::Dynamic > collisionList,bool xAxis){
	HX_STACK_FRAME("Actor","getCollisionLargestDistance",0x94479dbc,"Actor.getCollisionLargestDistance","Actor.hx",95,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collisionList,"collisionList")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(96)
	int largestDistance = (int)0;		HX_STACK_VAR(largestDistance,"largestDistance");
	HX_STACK_LINE(97)
	int largestIndex = (int)-1;		HX_STACK_VAR(largestIndex,"largestIndex");
	HX_STACK_LINE(98)
	int tempDistance;		HX_STACK_VAR(tempDistance,"tempDistance");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		int _g = collisionList->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(100)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			if ((tmp1)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(101)
			::Collidable tmp3 = collisionList->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			bool tmp4 = tmp3->isPassable();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			if ((tmp4)){
				HX_STACK_LINE(101)
				continue;
			}
			HX_STACK_LINE(103)
			::Collidable tmp5 = collisionList->__get(i).StaticCast< ::Collidable >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			bool tmp6 = xAxis;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			int tmp7 = this->getCollisionDistance(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			tempDistance = tmp7;
			HX_STACK_LINE(104)
			int tmp8 = tempDistance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			int tmp10 = largestDistance;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			bool tmp12 = (tmp9 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			if ((tmp12)){
				HX_STACK_LINE(105)
				largestDistance = tempDistance;
				HX_STACK_LINE(106)
				largestIndex = i;
			}
		}
	}
	HX_STACK_LINE(110)
	int tmp = largestDistance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getCollisionLargestDistance,return )

Float Actor_obj::getXVel( ){
	HX_STACK_FRAME("Actor","getXVel",0x40a0fde2,"Actor.getXVel","Actor.hx",113,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	Float tmp = this->xVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXVel,return )

Float Actor_obj::getYVel( ){
	HX_STACK_FRAME("Actor","getYVel",0x414a3481,"Actor.getYVel","Actor.hx",114,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->yVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYVel,return )

Void Actor_obj::goUp( ){
{
		HX_STACK_FRAME("Actor","goUp",0xae758edc,"Actor.goUp","Actor.hx",116,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		int tmp = this->maxSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		this->targetYVel = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goUp,(void))

Void Actor_obj::goDown( ){
{
		HX_STACK_FRAME("Actor","goDown",0x56df0323,"Actor.goDown","Actor.hx",119,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		int tmp = this->maxSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		this->targetYVel = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goDown,(void))

Void Actor_obj::goLeft( ){
{
		HX_STACK_FRAME("Actor","goLeft",0x5c2112c8,"Actor.goLeft","Actor.hx",122,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		int tmp = this->maxSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		this->targetXVel = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goLeft,(void))

Void Actor_obj::goRight( ){
{
		HX_STACK_FRAME("Actor","goRight",0xb7dc69fb,"Actor.goRight","Actor.hx",125,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		int tmp = this->maxSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		this->targetXVel = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,goRight,(void))

Void Actor_obj::stopUp( ){
{
		HX_STACK_FRAME("Actor","stopUp",0x20950f76,"Actor.stopUp","Actor.hx",129,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		int tmp = this->targetYVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(131)
			this->targetYVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopUp,(void))

Void Actor_obj::stopDown( ){
{
		HX_STACK_FRAME("Actor","stopDown",0x30535e3d,"Actor.stopDown","Actor.hx",133,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		int tmp = this->targetYVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		if ((tmp1)){
			HX_STACK_LINE(135)
			this->targetYVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopDown,(void))

Void Actor_obj::stopLeft( ){
{
		HX_STACK_FRAME("Actor","stopLeft",0x35956de2,"Actor.stopLeft","Actor.hx",137,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(139)
			this->targetXVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopLeft,(void))

Void Actor_obj::stopRight( ){
{
		HX_STACK_FRAME("Actor","stopRight",0x2437c5a1,"Actor.stopRight","Actor.hx",141,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		int tmp = this->targetXVel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(143)
			this->targetXVel = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopRight,(void))

Void Actor_obj::stopAll( ){
{
		HX_STACK_FRAME("Actor","stopAll",0x61c947a6,"Actor.stopAll","Actor.hx",146,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		this->targetXVel = (int)0;
		HX_STACK_LINE(148)
		this->targetYVel = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,stopAll,(void))

Void Actor_obj::freeze( ){
{
		HX_STACK_FRAME("Actor","freeze",0xc07fdad0,"Actor.freeze","Actor.hx",150,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		this->xVel = (int)0;
		HX_STACK_LINE(152)
		this->yVel = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,freeze,(void))

bool Actor_obj::isMoving( ){
	HX_STACK_FRAME("Actor","isMoving",0xc044aed1,"Actor.isMoving","Actor.hx",154,0x30f9bb09)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	Float tmp = this->xVel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	bool tmp2 = (tmp1 > ((Float)0.01));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	if ((tmp3)){
		HX_STACK_LINE(155)
		Float tmp5 = this->yVel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		tmp4 = (tmp9 > ((Float)0.01));
	}
	else{
		HX_STACK_LINE(155)
		tmp4 = true;
	}
	HX_STACK_LINE(155)
	if ((tmp4)){
		HX_STACK_LINE(155)
		return true;
	}
	HX_STACK_LINE(156)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMoving,return )

Void Actor_obj::resetActor( ){
{
		HX_STACK_FRAME("Actor","resetActor",0x1902839f,"Actor.resetActor","Actor.hx",159,0x30f9bb09)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,resetActor,(void))


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(yVel,"yVel");
	HX_MARK_MEMBER_NAME(xVel,"xVel");
	HX_MARK_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(targetXVel,"targetXVel");
	HX_MARK_MEMBER_NAME(targetYVel,"targetYVel");
	HX_MARK_MEMBER_NAME(actorBmp,"actorBmp");
	HX_MARK_MEMBER_NAME(actorWidth,"actorWidth");
	HX_MARK_MEMBER_NAME(actorHeight,"actorHeight");
	HX_MARK_MEMBER_NAME(currentRoom,"currentRoom");
	::AnimatedCollidable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(yVel,"yVel");
	HX_VISIT_MEMBER_NAME(xVel,"xVel");
	HX_VISIT_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(targetXVel,"targetXVel");
	HX_VISIT_MEMBER_NAME(targetYVel,"targetYVel");
	HX_VISIT_MEMBER_NAME(actorBmp,"actorBmp");
	HX_VISIT_MEMBER_NAME(actorWidth,"actorWidth");
	HX_VISIT_MEMBER_NAME(actorHeight,"actorHeight");
	HX_VISIT_MEMBER_NAME(currentRoom,"currentRoom");
	::AnimatedCollidable_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { return acc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yVel") ) { return yVel; }
		if (HX_FIELD_EQ(inName,"xVel") ) { return xVel; }
		if (HX_FIELD_EQ(inName,"goUp") ) { return goUp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moveX") ) { return moveX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveY") ) { return moveY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"goDown") ) { return goDown_dyn(); }
		if (HX_FIELD_EQ(inName,"goLeft") ) { return goLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"stopUp") ) { return stopUp_dyn(); }
		if (HX_FIELD_EQ(inName,"freeze") ) { return freeze_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setRoom") ) { return setRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"getXVel") ) { return getXVel_dyn(); }
		if (HX_FIELD_EQ(inName,"getYVel") ) { return getYVel_dyn(); }
		if (HX_FIELD_EQ(inName,"goRight") ) { return goRight_dyn(); }
		if (HX_FIELD_EQ(inName,"stopAll") ) { return stopAll_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { return maxSpeed; }
		if (HX_FIELD_EQ(inName,"actorBmp") ) { return actorBmp; }
		if (HX_FIELD_EQ(inName,"stopDown") ) { return stopDown_dyn(); }
		if (HX_FIELD_EQ(inName,"stopLeft") ) { return stopLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"isMoving") ) { return isMoving_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopRight") ) { return stopRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetXVel") ) { return targetXVel; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { return targetYVel; }
		if (HX_FIELD_EQ(inName,"actorWidth") ) { return actorWidth; }
		if (HX_FIELD_EQ(inName,"resetActor") ) { return resetActor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actorHeight") ) { return actorHeight; }
		if (HX_FIELD_EQ(inName,"currentRoom") ) { return currentRoom; }
		if (HX_FIELD_EQ(inName,"updateActor") ) { return updateActor_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSpeed") ) { return updateSpeed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentRoom") ) { return getCurrentRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return updatePosition_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getCollisionLargestDistance") ) { return getCollisionLargestDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"yVel") ) { yVel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVel") ) { xVel=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { maxSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorBmp") ) { actorBmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetXVel") ) { targetXVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetYVel") ) { targetYVel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorWidth") ) { actorWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actorHeight") ) { actorHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentRoom") ) { currentRoom=inValue.Cast< ::Room >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Actor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"));
	outFields->push(HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"));
	outFields->push(HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b"));
	outFields->push(HX_HCSTRING("acc","\x41","\xf1","\x49","\x00"));
	outFields->push(HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"));
	outFields->push(HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"));
	outFields->push(HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57"));
	outFields->push(HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54"));
	outFields->push(HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e"));
	outFields->push(HX_HCSTRING("currentRoom","\xf4","\xc6","\x40","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Actor_obj,yVel),HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50")},
	{hx::fsFloat,(int)offsetof(Actor_obj,xVel),HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f")},
	{hx::fsInt,(int)offsetof(Actor_obj,maxSpeed),HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b")},
	{hx::fsFloat,(int)offsetof(Actor_obj,acc),HX_HCSTRING("acc","\x41","\xf1","\x49","\x00")},
	{hx::fsInt,(int)offsetof(Actor_obj,targetXVel),HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9")},
	{hx::fsInt,(int)offsetof(Actor_obj,targetYVel),HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Actor_obj,actorBmp),HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57")},
	{hx::fsInt,(int)offsetof(Actor_obj,actorWidth),HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54")},
	{hx::fsInt,(int)offsetof(Actor_obj,actorHeight),HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e")},
	{hx::fsObject /*::Room*/ ,(int)offsetof(Actor_obj,currentRoom),HX_HCSTRING("currentRoom","\xf4","\xc6","\x40","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("yVel","\x64","\x6b","\x3c","\x50"),
	HX_HCSTRING("xVel","\xc5","\x34","\x93","\x4f"),
	HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b"),
	HX_HCSTRING("acc","\x41","\xf1","\x49","\x00"),
	HX_HCSTRING("targetXVel","\xb6","\xd0","\xc3","\xa9"),
	HX_HCSTRING("targetYVel","\x55","\x07","\x6d","\xaa"),
	HX_HCSTRING("actorBmp","\x50","\x30","\x57","\x57"),
	HX_HCSTRING("actorWidth","\xd1","\x82","\x7c","\x54"),
	HX_HCSTRING("actorHeight","\xbc","\x6c","\xc5","\x4e"),
	HX_HCSTRING("currentRoom","\xf4","\xc6","\x40","\x84"),
	HX_HCSTRING("updateActor","\x2c","\x34","\x3f","\x01"),
	HX_HCSTRING("setRoom","\xdd","\x2e","\x33","\x11"),
	HX_HCSTRING("getCurrentRoom","\xfe","\x19","\xdf","\x0b"),
	HX_HCSTRING("updateSpeed","\xbe","\x00","\x02","\x67"),
	HX_HCSTRING("updatePosition","\xd2","\x93","\x24","\x00"),
	HX_HCSTRING("moveX","\x27","\xcc","\x65","\x0c"),
	HX_HCSTRING("moveY","\x28","\xcc","\x65","\x0c"),
	HX_HCSTRING("getCollisionLargestDistance","\xd5","\xc6","\x43","\x15"),
	HX_HCSTRING("getXVel","\x7b","\xe4","\x15","\x22"),
	HX_HCSTRING("getYVel","\x1a","\x1b","\xbf","\x22"),
	HX_HCSTRING("goUp","\xa3","\x7e","\x69","\x44"),
	HX_HCSTRING("goDown","\xaa","\xb2","\x83","\x45"),
	HX_HCSTRING("goLeft","\x4f","\xc2","\xc5","\x4a"),
	HX_HCSTRING("goRight","\x94","\x50","\x51","\x99"),
	HX_HCSTRING("stopUp","\xfd","\xbe","\x39","\x0f"),
	HX_HCSTRING("stopDown","\x84","\x3d","\x28","\x95"),
	HX_HCSTRING("stopLeft","\x29","\x4d","\x6a","\x9a"),
	HX_HCSTRING("stopRight","\x7a","\x44","\xa6","\xf9"),
	HX_HCSTRING("stopAll","\x3f","\x2e","\x3e","\x43"),
	HX_HCSTRING("freeze","\x57","\x8a","\x24","\xaf"),
	HX_HCSTRING("isMoving","\x18","\x8e","\x19","\x25"),
	HX_HCSTRING("resetActor","\xa6","\x02","\x43","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#endif

hx::Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Actor","\xd5","\x3a","\xd4","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Actor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Actor_obj >;
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

