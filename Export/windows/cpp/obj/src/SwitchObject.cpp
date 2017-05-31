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
#ifndef INCLUDED_SwitchObject
#include <SwitchObject.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

Void SwitchObject_obj::__construct(::openfl::display::Bitmap bitmap,int size)
{
HX_STACK_FRAME("SwitchObject","new",0xbe138e65,"SwitchObject.new","SwitchObject.hx",14,0x0c5504ab)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(15)
	::openfl::display::Bitmap tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(16)
	::openfl::media::Sound tmp2 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Brush.mp3","\x90","\x11","\xdf","\x32"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	this->triggerSound = tmp2;
}
;
	return null();
}

//SwitchObject_obj::~SwitchObject_obj() { }

Dynamic SwitchObject_obj::__CreateEmpty() { return  new SwitchObject_obj; }
hx::ObjectPtr< SwitchObject_obj > SwitchObject_obj::__new(::openfl::display::Bitmap bitmap,int size)
{  hx::ObjectPtr< SwitchObject_obj > _result_ = new SwitchObject_obj();
	_result_->__construct(bitmap,size);
	return _result_;}

Dynamic SwitchObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SwitchObject_obj > _result_ = new SwitchObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SwitchObject_obj::updateClue( bool colliding){
{
		HX_STACK_FRAME("SwitchObject","updateClue",0x9147a07d,"SwitchObject.updateClue","SwitchObject.hx",20,0x0c5504ab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(colliding,"colliding")
		HX_STACK_LINE(21)
		bool tmp = colliding;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(21)
			bool tmp2 = this->triggered;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			tmp1 = !(tmp4);
		}
		else{
			HX_STACK_LINE(21)
			tmp1 = false;
		}
		HX_STACK_LINE(21)
		if ((tmp1)){
			HX_STACK_LINE(22)
			this->triggerClue();
		}
		else{
			HX_STACK_LINE(23)
			bool tmp2 = colliding;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(23)
			if ((tmp4)){
				HX_STACK_LINE(23)
				tmp5 = this->triggered;
			}
			else{
				HX_STACK_LINE(23)
				tmp5 = false;
			}
			HX_STACK_LINE(23)
			if ((tmp5)){
				HX_STACK_LINE(24)
				this->triggerClue();
			}
		}
	}
return null();
}


Void SwitchObject_obj::triggerClue( ){
{
		HX_STACK_FRAME("SwitchObject","triggerClue",0xdb1ec196,"SwitchObject.triggerClue","SwitchObject.hx",28,0x0c5504ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		bool tmp = this->triggered;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		this->triggered = tmp1;
		HX_STACK_LINE(30)
		::Animation tmp2 = this->currentAnimation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		::String tmp3 = tmp2->getName();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		bool tmp4 = (tmp3 == HX_HCSTRING("Triggered","\x77","\x4b","\x1c","\x7e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		if ((tmp4)){
			HX_STACK_LINE(31)
			::openfl::media::Sound tmp5 = this->triggerSound;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			tmp5->play(null(),null(),null());
			HX_STACK_LINE(32)
			this->changeAnimation(HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));
		}
		else{
			HX_STACK_LINE(34)
			::Animation tmp5 = this->currentAnimation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			::String tmp6 = tmp5->getName();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			bool tmp7 = (tmp6 == HX_HCSTRING("Idle","\x34","\xd3","\x8c","\x30"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			if ((tmp7)){
				HX_STACK_LINE(35)
				::openfl::media::Sound tmp8 = this->triggerSound;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				tmp8->play(null(),null(),null());
				HX_STACK_LINE(36)
				this->changeAnimation(HX_HCSTRING("Triggered","\x77","\x4b","\x1c","\x7e"));
			}
		}
	}
return null();
}



SwitchObject_obj::SwitchObject_obj()
{
}

Dynamic SwitchObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"updateClue") ) { return updateClue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triggerClue") ) { return triggerClue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateClue","\xe2","\x63","\x77","\xfa"),
	HX_HCSTRING("triggerClue","\x91","\xf6","\xb9","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SwitchObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SwitchObject_obj::__mClass,"__mClass");
};

#endif

hx::Class SwitchObject_obj::__mClass;

void SwitchObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SwitchObject","\xf3","\x77","\x71","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SwitchObject_obj >;
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

