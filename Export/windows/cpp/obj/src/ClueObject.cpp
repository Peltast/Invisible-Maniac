#include <hxcpp.h>

#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_Animation
#include <Animation.h>
#endif
#ifndef INCLUDED_ClueObject
#include <ClueObject.h>
#endif
#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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

Void ClueObject_obj::__construct(::openfl::display::Bitmap bitmap,int size,::String sound)
{
HX_STACK_FRAME("ClueObject","new",0xf19b1dea,"ClueObject.new","ClueObject.hx",18,0xa6648cc6)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(sound,"sound")
{
	HX_STACK_LINE(19)
	::openfl::display::Bitmap tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(true,tmp);
	HX_STACK_LINE(20)
	int tmp1 = (size - (int)12);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	int tmp2 = (size - (int)12);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new((int)6,(int)6,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	this->bounds = tmp3;
	HX_STACK_LINE(22)
	bool tmp4 = (sound != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	if ((tmp4)){
		HX_STACK_LINE(23)
		::String tmp5 = (HX_HCSTRING("assets/","\x4c","\x2a","\xdc","\x36") + sound);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		this->triggerSound = tmp6;
	}
	HX_STACK_LINE(24)
	::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	int tmp7 = size;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	int tmp8 = size;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	::Animation tmp9 = ::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),tmp5,Array_obj< ::Dynamic >::__new().Add(tmp6),tmp7,tmp8,(int)-1,false);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	this->addAnimation(tmp9);
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(size,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(25)
	::openfl::geom::Point tmp11 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(25)
	int tmp12 = size;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(25)
	int tmp13 = size;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(25)
	::Animation tmp14 = ::Animation_obj::__new(HX_HCSTRING("Triggered","\x77","\x4b","\x1c","\x7e"),tmp10,Array_obj< ::Dynamic >::__new().Add(tmp11),tmp12,tmp13,(int)-1,false);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(25)
	this->addAnimation(tmp14);
	HX_STACK_LINE(27)
	this->changeAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
	HX_STACK_LINE(28)
	this->triggered = false;
}
;
	return null();
}

//ClueObject_obj::~ClueObject_obj() { }

Dynamic ClueObject_obj::__CreateEmpty() { return  new ClueObject_obj; }
hx::ObjectPtr< ClueObject_obj > ClueObject_obj::__new(::openfl::display::Bitmap bitmap,int size,::String sound)
{  hx::ObjectPtr< ClueObject_obj > _result_ = new ClueObject_obj();
	_result_->__construct(bitmap,size,sound);
	return _result_;}

Dynamic ClueObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClueObject_obj > _result_ = new ClueObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ClueObject_obj::updateClue( bool colliding){
{
		HX_STACK_FRAME("ClueObject","updateClue",0xd1953b98,"ClueObject.updateClue","ClueObject.hx",31,0xa6648cc6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colliding,"colliding")
		HX_STACK_LINE(32)
		bool tmp = colliding;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(33)
			this->triggerClue();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClueObject_obj,updateClue,(void))

Void ClueObject_obj::triggerClue( ){
{
		HX_STACK_FRAME("ClueObject","triggerClue",0xdeb8de1b,"ClueObject.triggerClue","ClueObject.hx",36,0xa6648cc6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		bool tmp = this->triggered;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		if ((tmp)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(38)
		this->triggered = true;
		HX_STACK_LINE(40)
		this->changeAnimation(HX_HCSTRING("Triggered","\x77","\x4b","\x1c","\x7e"));
		HX_STACK_LINE(41)
		::openfl::media::Sound tmp1 = this->triggerSound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		tmp1->play(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClueObject_obj,triggerClue,(void))

Void ClueObject_obj::resetObject( ){
{
		HX_STACK_FRAME("ClueObject","resetObject",0x1852e978,"ClueObject.resetObject","ClueObject.hx",45,0xa6648cc6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->changeAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		HX_STACK_LINE(47)
		this->triggered = false;
	}
return null();
}



ClueObject_obj::ClueObject_obj()
{
}

void ClueObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClueObject);
	HX_MARK_MEMBER_NAME(triggered,"triggered");
	HX_MARK_MEMBER_NAME(triggerSound,"triggerSound");
	::AnimatedCollidable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClueObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(triggered,"triggered");
	HX_VISIT_MEMBER_NAME(triggerSound,"triggerSound");
	::AnimatedCollidable_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClueObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"triggered") ) { return triggered; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateClue") ) { return updateClue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triggerClue") ) { return triggerClue_dyn(); }
		if (HX_FIELD_EQ(inName,"resetObject") ) { return resetObject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"triggerSound") ) { return triggerSound; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClueObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"triggered") ) { triggered=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"triggerSound") ) { triggerSound=inValue.Cast< ::openfl::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClueObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ClueObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("triggered","\x97","\x6b","\x49","\xdc"));
	outFields->push(HX_HCSTRING("triggerSound","\x77","\xbc","\x62","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ClueObject_obj,triggered),HX_HCSTRING("triggered","\x97","\x6b","\x49","\xdc")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(ClueObject_obj,triggerSound),HX_HCSTRING("triggerSound","\x77","\xbc","\x62","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("triggered","\x97","\x6b","\x49","\xdc"),
	HX_HCSTRING("triggerSound","\x77","\xbc","\x62","\xff"),
	HX_HCSTRING("updateClue","\xe2","\x63","\x77","\xfa"),
	HX_HCSTRING("triggerClue","\x91","\xf6","\xb9","\x7b"),
	HX_HCSTRING("resetObject","\xee","\x01","\x54","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClueObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClueObject_obj::__mClass,"__mClass");
};

#endif

hx::Class ClueObject_obj::__mClass;

void ClueObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ClueObject","\xf8","\xa0","\x2f","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ClueObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClueObject_obj >;
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

