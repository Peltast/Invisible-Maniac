#include <hxcpp.h>

#ifndef INCLUDED_AnimatedCollidable
#include <AnimatedCollidable.h>
#endif
#ifndef INCLUDED_Animation
#include <Animation.h>
#endif
#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_SubwaySandwich
#include <SubwaySandwich.h>
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

Void SubwaySandwich_obj::__construct(::openfl::display::Bitmap bitmap,::openfl::geom::Point origin)
{
HX_STACK_FRAME("SubwaySandwich","new",0x73057a5c,"SubwaySandwich.new","SubwaySandwich.hx",15,0xbba30494)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(16)
	::openfl::display::Bitmap tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	super::__construct(true,tmp);
	HX_STACK_LINE(17)
	this->origin = origin;
	HX_STACK_LINE(18)
	::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	::Animation tmp4 = ::Animation_obj::__new(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"),tmp1,Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp3),(int)32,(int)16,(int)10,true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	this->addAnimation(tmp4);
	HX_STACK_LINE(19)
	this->changeAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
}
;
	return null();
}

//SubwaySandwich_obj::~SubwaySandwich_obj() { }

Dynamic SubwaySandwich_obj::__CreateEmpty() { return  new SubwaySandwich_obj; }
hx::ObjectPtr< SubwaySandwich_obj > SubwaySandwich_obj::__new(::openfl::display::Bitmap bitmap,::openfl::geom::Point origin)
{  hx::ObjectPtr< SubwaySandwich_obj > _result_ = new SubwaySandwich_obj();
	_result_->__construct(bitmap,origin);
	return _result_;}

Dynamic SubwaySandwich_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubwaySandwich_obj > _result_ = new SubwaySandwich_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SubwaySandwich_obj::updateSandwich( ){
{
		HX_STACK_FRAME("SubwaySandwich","updateSandwich",0x377e3028,"SubwaySandwich.updateSandwich","SubwaySandwich.hx",23,0xbba30494)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->updateAnimation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubwaySandwich_obj,updateSandwich,(void))

::openfl::geom::Point SubwaySandwich_obj::originalLocation( ){
	HX_STACK_FRAME("SubwaySandwich","originalLocation",0x90ed602a,"SubwaySandwich.originalLocation","SubwaySandwich.hx",26,0xbba30494)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::openfl::geom::Point tmp = this->origin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SubwaySandwich_obj,originalLocation,return )


SubwaySandwich_obj::SubwaySandwich_obj()
{
}

void SubwaySandwich_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubwaySandwich);
	HX_MARK_MEMBER_NAME(origin,"origin");
	::AnimatedCollidable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SubwaySandwich_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	::AnimatedCollidable_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SubwaySandwich_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateSandwich") ) { return updateSandwich_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"originalLocation") ) { return originalLocation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubwaySandwich_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SubwaySandwich_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SubwaySandwich_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(SubwaySandwich_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("updateSandwich","\xa4","\x50","\xc1","\x86"),
	HX_HCSTRING("originalLocation","\xa6","\x97","\x96","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubwaySandwich_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubwaySandwich_obj::__mClass,"__mClass");
};

#endif

hx::Class SubwaySandwich_obj::__mClass;

void SubwaySandwich_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SubwaySandwich","\x6a","\x5c","\x72","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SubwaySandwich_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SubwaySandwich_obj >;
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

