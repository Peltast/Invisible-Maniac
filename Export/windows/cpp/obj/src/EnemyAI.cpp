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
#ifndef INCLUDED_EnemyAI
#include <EnemyAI.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

Void EnemyAI_obj::__construct(bool horizontal,int distance,::openfl::geom::Point startPoint)
{
HX_STACK_FRAME("EnemyAI","new",0xbb7efe02,"EnemyAI.new","EnemyAI.hx",15,0xbbf637ae)
HX_STACK_THIS(this)
HX_STACK_ARG(horizontal,"horizontal")
HX_STACK_ARG(distance,"distance")
HX_STACK_ARG(startPoint,"startPoint")
{
	HX_STACK_LINE(16)
	this->horizontal = horizontal;
	HX_STACK_LINE(17)
	this->distance = distance;
	HX_STACK_LINE(18)
	this->startPoint = startPoint;
}
;
	return null();
}

//EnemyAI_obj::~EnemyAI_obj() { }

Dynamic EnemyAI_obj::__CreateEmpty() { return  new EnemyAI_obj; }
hx::ObjectPtr< EnemyAI_obj > EnemyAI_obj::__new(bool horizontal,int distance,::openfl::geom::Point startPoint)
{  hx::ObjectPtr< EnemyAI_obj > _result_ = new EnemyAI_obj();
	_result_->__construct(horizontal,distance,startPoint);
	return _result_;}

Dynamic EnemyAI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyAI_obj > _result_ = new EnemyAI_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void EnemyAI_obj::updateAI( ::Actor host){
{
		HX_STACK_FRAME("EnemyAI","updateAI",0x35fc3a4f,"EnemyAI.updateAI","EnemyAI.hx",21,0xbbf637ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_LINE(23)
		Float distanceTraveled;		HX_STACK_VAR(distanceTraveled,"distanceTraveled");
		HX_STACK_LINE(25)
		bool tmp = this->horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(26)
			Float tmp1 = host->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			::openfl::geom::Point tmp2 = this->startPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			distanceTraveled = tmp5;
		}
		else{
			HX_STACK_LINE(28)
			Float tmp1 = host->get_y();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			::openfl::geom::Point tmp2 = this->startPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			distanceTraveled = tmp5;
		}
		HX_STACK_LINE(30)
		Float tmp1 = distanceTraveled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		int tmp2 = this->distance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp3)){
			HX_STACK_LINE(31)
			::Actor tmp4 = host;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			this->switchDirections(tmp4);
			HX_STACK_LINE(32)
			Float tmp5 = host->get_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			Float tmp6 = host->get_y();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			this->startPoint = tmp7;
		}
		HX_STACK_LINE(35)
		bool tmp4 = this->horizontal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		if ((tmp4)){
			HX_STACK_LINE(35)
			Float tmp6 = host->getXVel();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			tmp5 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(35)
			tmp5 = false;
		}
		HX_STACK_LINE(35)
		if ((tmp5)){
			HX_STACK_LINE(36)
			::Actor tmp6 = host;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			this->switchDirections(tmp6);
		}
		else{
			HX_STACK_LINE(37)
			bool tmp6 = this->horizontal;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			if ((tmp8)){
				HX_STACK_LINE(37)
				Float tmp10 = host->getYVel();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(37)
				tmp9 = (tmp11 == (int)0);
			}
			else{
				HX_STACK_LINE(37)
				tmp9 = false;
			}
			HX_STACK_LINE(37)
			if ((tmp9)){
				HX_STACK_LINE(38)
				::Actor tmp10 = host;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				this->switchDirections(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnemyAI_obj,updateAI,(void))

Void EnemyAI_obj::handleCollision( ::Actor host){
{
		HX_STACK_FRAME("EnemyAI","handleCollision",0xf330684c,"EnemyAI.handleCollision","EnemyAI.hx",41,0xbbf637ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_LINE(43)
		::Actor tmp = host;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		this->switchDirections(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnemyAI_obj,handleCollision,(void))

Void EnemyAI_obj::switchDirections( ::Actor host){
{
		HX_STACK_FRAME("EnemyAI","switchDirections",0x255ed186,"EnemyAI.switchDirections","EnemyAI.hx",46,0xbbf637ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_LINE(48)
		bool tmp = this->horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		if ((tmp)){
			HX_STACK_LINE(49)
			Float tmp1 = host->getXVel();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			if ((tmp2)){
				HX_STACK_LINE(50)
				host->stopLeft();
				HX_STACK_LINE(51)
				host->goRight();
			}
			else{
				HX_STACK_LINE(54)
				host->stopRight();
				HX_STACK_LINE(55)
				host->goLeft();
			}
		}
		else{
			HX_STACK_LINE(59)
			Float tmp1 = host->getYVel();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			if ((tmp2)){
				HX_STACK_LINE(60)
				host->stopUp();
				HX_STACK_LINE(61)
				host->goDown();
			}
			else{
				HX_STACK_LINE(64)
				host->stopDown();
				HX_STACK_LINE(65)
				host->goUp();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnemyAI_obj,switchDirections,(void))


EnemyAI_obj::EnemyAI_obj()
{
}

void EnemyAI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyAI);
	HX_MARK_MEMBER_NAME(horizontal,"horizontal");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_END_CLASS();
}

void EnemyAI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(horizontal,"horizontal");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
}

Dynamic EnemyAI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"updateAI") ) { return updateAI_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"switchDirections") ) { return switchDirections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyAI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EnemyAI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EnemyAI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(EnemyAI_obj,horizontal),HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15")},
	{hx::fsInt,(int)offsetof(EnemyAI_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(EnemyAI_obj,startPoint),HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("startPoint","\x8e","\x8c","\xa6","\xe2"),
	HX_HCSTRING("updateAI","\x31","\x13","\xfa","\x77"),
	HX_HCSTRING("handleCollision","\xaa","\x4f","\xa6","\xa9"),
	HX_HCSTRING("switchDirections","\x68","\x5c","\x13","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyAI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyAI_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyAI_obj::__mClass;

void EnemyAI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EnemyAI","\x10","\x95","\x6b","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EnemyAI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyAI_obj >;
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

