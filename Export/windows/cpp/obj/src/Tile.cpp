#include <hxcpp.h>

#ifndef INCLUDED_Collidable
#include <Collidable.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

Void Tile_obj::__construct(::openfl::display::Bitmap tileBmp,int tileType)
{
HX_STACK_FRAME("Tile","new",0x479a5740,"Tile.new","Tile.hx",19,0x12b05030)
HX_STACK_THIS(this)
HX_STACK_ARG(tileBmp,"tileBmp")
HX_STACK_ARG(tileType,"tileType")
{
	HX_STACK_LINE(20)
	bool tmp = (tileType > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::openfl::display::Bitmap tmp1 = tileBmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(21)
	Float tmp2 = tileBmp->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	Float tmp3 = tileBmp->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	this->bounds = tmp4;
	HX_STACK_LINE(23)
	int tmp5 = tileType;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	switch( (int)(tmp5)){
		case (int)1: {
			HX_STACK_LINE(25)
			::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Footstep.mp3","\x68","\xda","\x18","\xb2"),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(25)
			this->tileSound = tmp6;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(27)
			::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Water.mp3","\xad","\x63","\xc0","\xb3"),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			this->tileSound = tmp6;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(29)
			::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Gravel.mp3","\x35","\x7d","\xb3","\x6c"),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			this->tileSound = tmp6;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(31)
			::openfl::media::Sound tmp6 = ::openfl::Assets_obj::getSound(HX_HCSTRING("assets/Metal.mp3","\x9d","\x25","\x47","\x4d"),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			this->tileSound = tmp6;
		}
		;break;
	}
	HX_STACK_LINE(34)
	this->tileType = tileType;
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(::openfl::display::Bitmap tileBmp,int tileType)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(tileBmp,tileType);
	return _result_;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int Tile_obj::getType( ){
	HX_STACK_FRAME("Tile","getType",0x2d4f1950,"Tile.getType","Tile.hx",37,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	int tmp = this->tileType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getType,return )

::openfl::media::Sound Tile_obj::getSound( ){
	HX_STACK_FRAME("Tile","getSound",0xdde82979,"Tile.getSound","Tile.hx",38,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::openfl::media::Sound tmp = this->tileSound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getSound,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(tileType,"tileType");
	HX_MARK_MEMBER_NAME(tileSound,"tileSound");
	::Collidable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileType,"tileType");
	HX_VISIT_MEMBER_NAME(tileSound,"tileSound");
	::Collidable_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileType") ) { return tileType; }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSound") ) { return tileSound; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tileType") ) { tileType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSound") ) { tileSound=inValue.Cast< ::openfl::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileType","\x08","\x19","\x0f","\x87"));
	outFields->push(HX_HCSTRING("tileSound","\xc1","\xea","\x27","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tile_obj,tileType),HX_HCSTRING("tileType","\x08","\x19","\x0f","\x87")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Tile_obj,tileSound),HX_HCSTRING("tileSound","\xc1","\xea","\x27","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileType","\x08","\x19","\x0f","\x87"),
	HX_HCSTRING("tileSound","\xc1","\xea","\x27","\x0c"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Tile_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
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

