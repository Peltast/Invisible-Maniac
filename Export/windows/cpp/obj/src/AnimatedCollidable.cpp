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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void AnimatedCollidable_obj::__construct(bool passable,::openfl::display::Bitmap animBitmap)
{
HX_STACK_FRAME("AnimatedCollidable","new",0x895a2bb6,"AnimatedCollidable.new","AnimatedCollidable.hx",18,0xb5ff3c7a)
HX_STACK_THIS(this)
HX_STACK_ARG(passable,"passable")
HX_STACK_ARG(animBitmap,"animBitmap")
{
	HX_STACK_LINE(19)
	bool tmp = passable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::openfl::display::Bitmap tmp1 = animBitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(20)
	this->spriteSheet = animBitmap;
	HX_STACK_LINE(22)
	::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	this->animationLibrary = tmp2;
}
;
	return null();
}

//AnimatedCollidable_obj::~AnimatedCollidable_obj() { }

Dynamic AnimatedCollidable_obj::__CreateEmpty() { return  new AnimatedCollidable_obj; }
hx::ObjectPtr< AnimatedCollidable_obj > AnimatedCollidable_obj::__new(bool passable,::openfl::display::Bitmap animBitmap)
{  hx::ObjectPtr< AnimatedCollidable_obj > _result_ = new AnimatedCollidable_obj();
	_result_->__construct(passable,animBitmap);
	return _result_;}

Dynamic AnimatedCollidable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimatedCollidable_obj > _result_ = new AnimatedCollidable_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void AnimatedCollidable_obj::addAnimation( ::Animation newAnimation){
{
		HX_STACK_FRAME("AnimatedCollidable","addAnimation",0x82639a8d,"AnimatedCollidable.addAnimation","AnimatedCollidable.hx",26,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newAnimation,"newAnimation")
		HX_STACK_LINE(26)
		::String tmp = newAnimation->getName();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::String k = tmp;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp1 = this->animationLibrary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::String tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::Animation tmp3 = newAnimation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp1->set(tmp2,tmp3);
		HX_STACK_LINE(26)
		newAnimation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedCollidable_obj,addAnimation,(void))

Void AnimatedCollidable_obj::updateAnimation( ){
{
		HX_STACK_FRAME("AnimatedCollidable","updateAnimation",0x700cc411,"AnimatedCollidable.updateAnimation","AnimatedCollidable.hx",29,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		if ((tmp1)){
			HX_STACK_LINE(30)
			return null();
		}
		HX_STACK_LINE(32)
		::Animation tmp2 = this->currentAnimation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp2->updateAnimation();
		HX_STACK_LINE(33)
		this->removeBmp();
		HX_STACK_LINE(34)
		::Animation tmp3 = this->currentAnimation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		this->addAnimationBmp(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimatedCollidable_obj,updateAnimation,(void))

Void AnimatedCollidable_obj::setAnimation( ::Animation animation){
{
		HX_STACK_FRAME("AnimatedCollidable","setAnimation",0xa75f38ec,"AnimatedCollidable.setAnimation","AnimatedCollidable.hx",36,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(37)
		this->currentAnimation = animation;
		HX_STACK_LINE(38)
		this->updateAnimation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedCollidable_obj,setAnimation,(void))

Void AnimatedCollidable_obj::changeAnimation( ::String animationName){
{
		HX_STACK_FRAME("AnimatedCollidable","changeAnimation",0xdb1c93ca,"AnimatedCollidable.changeAnimation","AnimatedCollidable.hx",41,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animationName,"animationName")
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp = this->animationLibrary;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::String tmp1 = animationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		::Animation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		if ((tmp4)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp5 = this->animationLibrary;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::String tmp6 = animationName;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		::Animation tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		::Animation tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		this->setAnimation(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedCollidable_obj,changeAnimation,(void))

Void AnimatedCollidable_obj::removeBmp( ){
{
		HX_STACK_FRAME("AnimatedCollidable","removeBmp",0xf5d85a37,"AnimatedCollidable.removeBmp","AnimatedCollidable.hx",47,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::openfl::display::Bitmap tmp = this->objectBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::openfl::display::Bitmap tmp2 = this->objectBitmap;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			this->removeChild(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimatedCollidable_obj,removeBmp,(void))

Void AnimatedCollidable_obj::addAnimationBmp( ::Animation animation){
{
		HX_STACK_FRAME("AnimatedCollidable","addAnimationBmp",0x05be2fb8,"AnimatedCollidable.addAnimationBmp","AnimatedCollidable.hx",51,0xb5ff3c7a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animation,"animation")
		HX_STACK_LINE(53)
		::Animation tmp = this->currentAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::openfl::display::Bitmap tmp1 = this->spriteSheet;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::openfl::display::Bitmap tmp2 = this->getAnimationBmp(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		this->objectBitmap = tmp2;
		HX_STACK_LINE(54)
		::openfl::display::Bitmap tmp3 = this->objectBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		this->addChild(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedCollidable_obj,addAnimationBmp,(void))

::openfl::display::Bitmap AnimatedCollidable_obj::getAnimationBmp( ::Animation animation,::openfl::display::Bitmap bitmap){
	HX_STACK_FRAME("AnimatedCollidable","getAnimationBmp",0xa25919ad,"AnimatedCollidable.getAnimationBmp","AnimatedCollidable.hx",56,0xb5ff3c7a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(animation,"animation")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(57)
	::openfl::geom::Rectangle tmp = animation->getFrame();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::openfl::geom::Rectangle frame = tmp;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(58)
	int tmp1 = animation->getAnimWidth();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = animation->getAnimHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::openfl::display::Bitmap tmp4 = ::openfl::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	::openfl::display::Bitmap animationBmp = tmp4;		HX_STACK_VAR(animationBmp,"animationBmp");
	HX_STACK_LINE(59)
	::openfl::display::BitmapData tmp5 = bitmap->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	::openfl::geom::Rectangle tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(59)
	::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(59)
	animationBmp->bitmapData->copyPixels(tmp5,tmp6,tmp7,null(),null(),null());
	HX_STACK_LINE(60)
	::openfl::display::Bitmap tmp8 = animationBmp;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedCollidable_obj,getAnimationBmp,return )


AnimatedCollidable_obj::AnimatedCollidable_obj()
{
}

void AnimatedCollidable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedCollidable);
	HX_MARK_MEMBER_NAME(animationLibrary,"animationLibrary");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(spriteSheet,"spriteSheet");
	::Collidable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatedCollidable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationLibrary,"animationLibrary");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(spriteSheet,"spriteSheet");
	::Collidable_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AnimatedCollidable_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"removeBmp") ) { return removeBmp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spriteSheet") ) { return spriteSheet; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"changeAnimation") ) { return changeAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimationBmp") ) { return addAnimationBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimationBmp") ) { return getAnimationBmp_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationLibrary") ) { return animationLibrary; }
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return currentAnimation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimatedCollidable_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"spriteSheet") ) { spriteSheet=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationLibrary") ) { animationLibrary=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast< ::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimatedCollidable_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AnimatedCollidable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animationLibrary","\x57","\x08","\x62","\x4d"));
	outFields->push(HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"));
	outFields->push(HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AnimatedCollidable_obj,animationLibrary),HX_HCSTRING("animationLibrary","\x57","\x08","\x62","\x4d")},
	{hx::fsObject /*::Animation*/ ,(int)offsetof(AnimatedCollidable_obj,currentAnimation),HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(AnimatedCollidable_obj,spriteSheet),HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animationLibrary","\x57","\x08","\x62","\x4d"),
	HX_HCSTRING("currentAnimation","\x8b","\x63","\x65","\x3e"),
	HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2"),
	HX_HCSTRING("addAnimation","\xa3","\x10","\x89","\x4a"),
	HX_HCSTRING("updateAnimation","\xbb","\xbf","\xbf","\x9a"),
	HX_HCSTRING("setAnimation","\x02","\xaf","\x84","\x6f"),
	HX_HCSTRING("changeAnimation","\x74","\x8f","\xcf","\x05"),
	HX_HCSTRING("removeBmp","\x61","\xda","\xe5","\xca"),
	HX_HCSTRING("addAnimationBmp","\x62","\x2b","\x71","\x30"),
	HX_HCSTRING("getAnimationBmp","\x57","\x15","\x0c","\xcd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatedCollidable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatedCollidable_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimatedCollidable_obj::__mClass;

void AnimatedCollidable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AnimatedCollidable","\xc4","\xd8","\xc8","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AnimatedCollidable_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimatedCollidable_obj >;
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

