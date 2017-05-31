#include <hxcpp.h>

#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_Goal
#include <Goal.h>
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

Void Goal_obj::__construct()
{
HX_STACK_FRAME("Goal","new",0xfb6c6ba5,"Goal.new","Goal.hx",14,0x0b758f6b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Marker.png","\x61","\x8d","\xc1","\x63"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::openfl::display::Bitmap tmp1 = ::openfl::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(true,tmp1);
}
;
	return null();
}

//Goal_obj::~Goal_obj() { }

Dynamic Goal_obj::__CreateEmpty() { return  new Goal_obj; }
hx::ObjectPtr< Goal_obj > Goal_obj::__new()
{  hx::ObjectPtr< Goal_obj > _result_ = new Goal_obj();
	_result_->__construct();
	return _result_;}

Dynamic Goal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Goal_obj > _result_ = new Goal_obj();
	_result_->__construct();
	return _result_;}


Goal_obj::Goal_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Goal_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Goal_obj::__mClass,"__mClass");
};

#endif

hx::Class Goal_obj::__mClass;

void Goal_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Goal","\x33","\xb5","\x42","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Goal_obj >;
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

