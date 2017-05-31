#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_LevelManager
#include <LevelManager.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
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

Void LevelManager_obj::__construct()
{
HX_STACK_FRAME("LevelManager","new",0xb5b872db,"LevelManager.new","LevelManager.hx",22,0x3910e0f5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->levelList = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//LevelManager_obj::~LevelManager_obj() { }

Dynamic LevelManager_obj::__CreateEmpty() { return  new LevelManager_obj; }
hx::ObjectPtr< LevelManager_obj > LevelManager_obj::__new()
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

::Room LevelManager_obj::getCurrentLevel( ){
	HX_STACK_FRAME("LevelManager","getCurrentLevel",0x6aa53f3c,"LevelManager.getCurrentLevel","LevelManager.hx",27,0x3910e0f5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::Room tmp = this->currentLevel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(LevelManager_obj,getCurrentLevel,return )

Void LevelManager_obj::addLevel( ::Room newRoom){
{
		HX_STACK_FRAME("LevelManager","addLevel",0x2a35bb48,"LevelManager.addLevel","LevelManager.hx",29,0x3910e0f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newRoom,"newRoom")
		HX_STACK_LINE(30)
		::Room tmp = newRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->levelList->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LevelManager_obj,addLevel,(void))

Void LevelManager_obj::resetLevel( ::Player player){
{
		HX_STACK_FRAME("LevelManager","resetLevel",0x418fc01a,"LevelManager.resetLevel","LevelManager.hx",33,0x3910e0f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(34)
		::Room tmp = this->currentLevel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		tmp->resetLevel(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LevelManager_obj,resetLevel,(void))

Void LevelManager_obj::setLevel( int startRoom,::Player player){
{
		HX_STACK_FRAME("LevelManager","setLevel",0xbf0cfe27,"LevelManager.setLevel","LevelManager.hx",37,0x3910e0f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(startRoom,"startRoom")
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(38)
		bool tmp = (startRoom < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(38)
			int tmp3 = startRoom;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			int tmp4 = this->levelList->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			tmp2 = (tmp3 > tmp7);
		}
		else{
			HX_STACK_LINE(38)
			tmp2 = true;
		}
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(38)
			return null();
		}
		HX_STACK_LINE(40)
		::Room tmp3 = this->levelList->__get(startRoom).StaticCast< ::Room >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		this->currentLevel = tmp3;
		HX_STACK_LINE(41)
		::Room tmp4 = this->currentLevel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::Player tmp5 = player;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		tmp4->setLevel(tmp5);
		HX_STACK_LINE(42)
		::Room tmp6 = this->currentLevel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		player->setRoom(tmp6);
		HX_STACK_LINE(43)
		::Room tmp7 = this->currentLevel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		this->addChild(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LevelManager_obj,setLevel,(void))

Void LevelManager_obj::goToNextLevel( ::Room oldRoom,::Player player){
{
		HX_STACK_FRAME("LevelManager","goToNextLevel",0x7c53eb89,"LevelManager.goToNextLevel","LevelManager.hx",45,0x3910e0f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(oldRoom,"oldRoom")
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(46)
		::Room tmp = oldRoom;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::Room tmp1 = this->getNextLevel(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::Room nextRoom = tmp1;		HX_STACK_VAR(nextRoom,"nextRoom");
		HX_STACK_LINE(48)
		bool tmp2 = (nextRoom != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		if ((tmp2)){
			HX_STACK_LINE(49)
			::Room tmp3 = oldRoom;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			this->removeChild(tmp3);
			HX_STACK_LINE(50)
			::Player tmp4 = player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			nextRoom->setLevel(tmp4);
			HX_STACK_LINE(51)
			::Room tmp5 = nextRoom;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			player->setRoom(tmp5);
			HX_STACK_LINE(52)
			::Room tmp6 = nextRoom;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			this->addChild(tmp6);
			HX_STACK_LINE(53)
			this->currentLevel = nextRoom;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LevelManager_obj,goToNextLevel,(void))

::Room LevelManager_obj::getNextLevel( ::Room oldRoom){
	HX_STACK_FRAME("LevelManager","getNextLevel",0x2abd8240,"LevelManager.getNextLevel","LevelManager.hx",56,0x3910e0f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(oldRoom,"oldRoom")
	HX_STACK_LINE(57)
	::Room tmp = oldRoom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	int tmp1 = this->levelList->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	int oldIndex = tmp1;		HX_STACK_VAR(oldIndex,"oldIndex");
	HX_STACK_LINE(58)
	int tmp2 = oldIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	int tmp3 = this->levelList->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	if ((tmp5)){
		HX_STACK_LINE(59)
		int tmp6 = (oldIndex + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		::Room tmp7 = this->levelList->__get(tmp6).StaticCast< ::Room >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		return tmp7;
	}
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LevelManager_obj,getNextLevel,return )

::LevelManager LevelManager_obj::singleton;

::LevelManager LevelManager_obj::getSingleton( ){
	HX_STACK_FRAME("LevelManager","getSingleton",0xc89517ba,"LevelManager.getSingleton","LevelManager.hx",15,0x3910e0f5)
	HX_STACK_LINE(16)
	::LevelManager tmp = ::LevelManager_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	if ((tmp1)){
		HX_STACK_LINE(17)
		::LevelManager tmp2 = ::LevelManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		::LevelManager_obj::singleton = tmp2;
	}
	HX_STACK_LINE(18)
	::LevelManager tmp2 = ::LevelManager_obj::singleton;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LevelManager_obj,getSingleton,return )


LevelManager_obj::LevelManager_obj()
{
}

void LevelManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelManager);
	HX_MARK_MEMBER_NAME(currentLevel,"currentLevel");
	HX_MARK_MEMBER_NAME(levelList,"levelList");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LevelManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentLevel,"currentLevel");
	HX_VISIT_MEMBER_NAME(levelList,"levelList");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LevelManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addLevel") ) { return addLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"setLevel") ) { return setLevel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"levelList") ) { return levelList; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetLevel") ) { return resetLevel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { return currentLevel; }
		if (HX_FIELD_EQ(inName,"getNextLevel") ) { return getNextLevel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"goToNextLevel") ) { return goToNextLevel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurrentLevel") ) { return getCurrentLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LevelManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { outValue = singleton; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSingleton") ) { outValue = getSingleton_dyn(); return true;  }
	}
	return false;
}

Dynamic LevelManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"levelList") ) { levelList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=inValue.Cast< ::Room >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LevelManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { singleton=ioValue.Cast< ::LevelManager >(); return true; }
	}
	return false;
}

void LevelManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"));
	outFields->push(HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Room*/ ,(int)offsetof(LevelManager_obj,currentLevel),HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LevelManager_obj,levelList),HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::LevelManager*/ ,(void *) &LevelManager_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentLevel","\x8b","\xfa","\x6e","\xb9"),
	HX_HCSTRING("levelList","\x02","\x70","\x82","\x7d"),
	HX_HCSTRING("getCurrentLevel","\x41","\x50","\x59","\xdc"),
	HX_HCSTRING("addLevel","\xa3","\x3b","\xc0","\xeb"),
	HX_HCSTRING("resetLevel","\x35","\x4d","\xff","\x5a"),
	HX_HCSTRING("setLevel","\x82","\x7e","\x97","\x80"),
	HX_HCSTRING("goToNextLevel","\x4e","\x41","\x33","\xf7"),
	HX_HCSTRING("getNextLevel","\x1b","\xcc","\xfe","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelManager_obj::singleton,"singleton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelManager_obj::singleton,"singleton");
};

#endif

hx::Class LevelManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	::String(null()) };

void LevelManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("LevelManager","\x69","\x69","\x81","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelManager_obj::__GetStatic;
	__mClass->mSetStaticField = &LevelManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelManager_obj >;
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

