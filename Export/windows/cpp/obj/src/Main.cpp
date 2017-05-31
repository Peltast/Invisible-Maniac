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
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Room
#include <Room.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",21,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	::Main_obj::singleton = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(24)
	this->set_scaleX((int)2);
	HX_STACK_LINE(25)
	this->set_scaleY((int)2);
	HX_STACK_LINE(26)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	tmp->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
	HX_STACK_LINE(28)
	::openfl::display::Shape tmp1 = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	::openfl::display::Shape bg = tmp1;		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(29)
	::openfl::display::Graphics tmp2 = bg->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	tmp2->beginFill((int)8947848,null());
	HX_STACK_LINE(30)
	::openfl::display::Graphics tmp3 = bg->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	int tmp5 = tmp4->stageWidth;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	int tmp7 = tmp6->stageHeight;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	tmp3->drawRect((int)0,(int)0,tmp5,tmp7);
	HX_STACK_LINE(31)
	::openfl::display::Graphics tmp8 = bg->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	tmp8->endFill();
	HX_STACK_LINE(32)
	::openfl::display::Shape tmp9 = bg;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	this->addChild(tmp9);
	HX_STACK_LINE(35)
	Array< ::Dynamic > tileTypes = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)-1).Add((int)-1).Add((int)-1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)2).Add((int)2).Add((int)2).Add((int)4).Add((int)4).Add((int)4).Add((int)1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)2).Add((int)2).Add((int)2).Add((int)4).Add((int)4).Add((int)4).Add((int)1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)2).Add((int)2).Add((int)2).Add((int)4).Add((int)4).Add((int)4).Add((int)1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)3).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)3).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)-1)).Add(Array_obj< int >::__new().Add((int)3).Add((int)3).Add((int)3).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)-1));		HX_STACK_VAR(tileTypes,"tileTypes");
	HX_STACK_LINE(44)
	::Player tmp10 = ::Player_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	this->player = tmp10;
	HX_STACK_LINE(45)
	::LevelManager tmp11 = ::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(45)
	this->levelManager = tmp11;
	HX_STACK_LINE(47)
	::LevelManager tmp12 = this->levelManager;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(47)
	::lime::utils::ByteArray tmp13 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room1.tmx","\x3b","\xbe","\xb4","\xab"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(47)
	::openfl::display::BitmapData tmp14 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(47)
	::openfl::display::Bitmap tmp15 = ::openfl::display::Bitmap_obj::__new(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(47)
	::Room tmp16 = ::Room_obj::__new(tmp13,tmp15,tileTypes,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(47)
	tmp12->addLevel(tmp16);
	HX_STACK_LINE(48)
	::LevelManager tmp17 = this->levelManager;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(48)
	::lime::utils::ByteArray tmp18 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room2.tmx","\xbc","\x52","\x1b","\x3f"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(48)
	::openfl::display::BitmapData tmp19 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(48)
	::openfl::display::Bitmap tmp20 = ::openfl::display::Bitmap_obj::__new(tmp19,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(48)
	::Room tmp21 = ::Room_obj::__new(tmp18,tmp20,tileTypes,null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(48)
	tmp17->addLevel(tmp21);
	HX_STACK_LINE(49)
	::LevelManager tmp22 = this->levelManager;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(49)
	::lime::utils::ByteArray tmp23 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room3.tmx","\x3d","\xe7","\x81","\xd2"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(49)
	::openfl::display::BitmapData tmp24 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(49)
	::openfl::display::Bitmap tmp25 = ::openfl::display::Bitmap_obj::__new(tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(49)
	::Room tmp26 = ::Room_obj::__new(tmp23,tmp25,tileTypes,null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(49)
	tmp22->addLevel(tmp26);
	HX_STACK_LINE(50)
	::LevelManager tmp27 = this->levelManager;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(50)
	::lime::utils::ByteArray tmp28 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room4.tmx","\xbe","\x7b","\xe8","\x65"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(50)
	::openfl::display::BitmapData tmp29 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(50)
	::openfl::display::Bitmap tmp30 = ::openfl::display::Bitmap_obj::__new(tmp29,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(50)
	::Room tmp31 = ::Room_obj::__new(tmp28,tmp30,tileTypes,null());		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(50)
	tmp27->addLevel(tmp31);
	HX_STACK_LINE(51)
	::LevelManager tmp32 = this->levelManager;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(51)
	::lime::utils::ByteArray tmp33 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room4B.tmx","\xc6","\xbb","\x47","\x1b"));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(51)
	::openfl::display::BitmapData tmp34 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(51)
	::openfl::display::Bitmap tmp35 = ::openfl::display::Bitmap_obj::__new(tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(51)
	::Room tmp36 = ::Room_obj::__new(tmp33,tmp35,tileTypes,null());		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(51)
	tmp32->addLevel(tmp36);
	HX_STACK_LINE(52)
	::LevelManager tmp37 = this->levelManager;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(52)
	::lime::utils::ByteArray tmp38 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room5.tmx","\x3f","\x10","\x4f","\xf9"));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(52)
	::openfl::display::BitmapData tmp39 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(52)
	::openfl::display::Bitmap tmp40 = ::openfl::display::Bitmap_obj::__new(tmp39,null(),null());		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(52)
	::Room tmp41 = ::Room_obj::__new(tmp38,tmp40,tileTypes,null());		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(52)
	tmp37->addLevel(tmp41);
	HX_STACK_LINE(53)
	::LevelManager tmp42 = this->levelManager;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(53)
	::lime::utils::ByteArray tmp43 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room6.tmx","\xc0","\xa4","\xb5","\x8c"));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(53)
	::openfl::display::BitmapData tmp44 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(53)
	::openfl::display::Bitmap tmp45 = ::openfl::display::Bitmap_obj::__new(tmp44,null(),null());		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(53)
	::Room tmp46 = ::Room_obj::__new(tmp43,tmp45,tileTypes,null());		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(53)
	tmp42->addLevel(tmp46);
	HX_STACK_LINE(54)
	::LevelManager tmp47 = this->levelManager;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(54)
	::lime::utils::ByteArray tmp48 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room7.tmx","\x41","\x39","\x1c","\x20"));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(54)
	::openfl::display::BitmapData tmp49 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(54)
	::openfl::display::Bitmap tmp50 = ::openfl::display::Bitmap_obj::__new(tmp49,null(),null());		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(54)
	::Room tmp51 = ::Room_obj::__new(tmp48,tmp50,tileTypes,null());		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(54)
	tmp47->addLevel(tmp51);
	HX_STACK_LINE(55)
	::LevelManager tmp52 = this->levelManager;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(55)
	::lime::utils::ByteArray tmp53 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room8.tmx","\xc2","\xcd","\x82","\xb3"));		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(55)
	::openfl::display::BitmapData tmp54 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(55)
	::openfl::display::Bitmap tmp55 = ::openfl::display::Bitmap_obj::__new(tmp54,null(),null());		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(55)
	::Room tmp56 = ::Room_obj::__new(tmp53,tmp55,tileTypes,null());		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(55)
	tmp52->addLevel(tmp56);
	HX_STACK_LINE(56)
	::LevelManager tmp57 = this->levelManager;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(56)
	::lime::utils::ByteArray tmp58 = ::openfl::Assets_obj::getBytes(HX_HCSTRING("assets/Room9.tmx","\x43","\x62","\xe9","\x46"));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(56)
	::openfl::display::BitmapData tmp59 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/Tileset.png","\x83","\x91","\x22","\x5b"),null());		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(56)
	::openfl::display::Bitmap tmp60 = ::openfl::display::Bitmap_obj::__new(tmp59,null(),null());		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(56)
	::Room tmp61 = ::Room_obj::__new(tmp58,tmp60,tileTypes,null());		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(56)
	tmp57->addLevel(tmp61);
	HX_STACK_LINE(57)
	::LevelManager tmp62 = this->levelManager;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(57)
	::Player tmp63 = this->player;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(57)
	tmp62->setLevel((int)0,tmp63);
	HX_STACK_LINE(59)
	::LevelManager tmp64 = this->levelManager;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(59)
	this->addChild(tmp64);
	HX_STACK_LINE(60)
	::String tmp65 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(60)
	Dynamic tmp66 = this->updateGame_dyn();		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(60)
	this->addEventListener(tmp65,tmp66,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::updateGame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","updateGame",0x949b5c90,"Main.updateGame","Main.hx",65,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(66)
		::LevelManager tmp = ::LevelManager_obj::getSingleton();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::Room tmp1 = tmp->getCurrentLevel();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		tmp1->updateRoom();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,updateGame,(void))

::Main Main_obj::singleton;

::Main Main_obj::getSingleton( ){
	HX_STACK_FRAME("Main","getSingleton",0xedb106ca,"Main.getSingleton","Main.hx",63,0x087e5c05)
	HX_STACK_LINE(63)
	::Main tmp = ::Main_obj::singleton;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getSingleton,return )


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(testRoom,"testRoom");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(levelManager,"levelManager");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testRoom,"testRoom");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(levelManager,"levelManager");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testRoom") ) { return testRoom; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateGame") ) { return updateGame_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"levelManager") ) { return levelManager; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testRoom") ) { testRoom=inValue.Cast< ::Room >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"levelManager") ) { levelManager=inValue.Cast< ::LevelManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"singleton") ) { singleton=ioValue.Cast< ::Main >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testRoom","\x8d","\x73","\xe1","\x4e"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Room*/ ,(int)offsetof(Main_obj,testRoom),HX_HCSTRING("testRoom","\x8d","\x73","\xe1","\x4e")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::LevelManager*/ ,(int)offsetof(Main_obj,levelManager),HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Main*/ ,(void *) &Main_obj::singleton,HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testRoom","\x8d","\x73","\xe1","\x4e"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"),
	HX_HCSTRING("updateGame","\x9b","\xde","\x13","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::singleton,"singleton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::singleton,"singleton");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("singleton","\x0b","\xc5","\x7f","\xb7"),
	HX_HCSTRING("getSingleton","\x95","\x61","\xd6","\xc6"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

