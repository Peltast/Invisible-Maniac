#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Collidable
#include <Collidable.h>
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

Void Collidable_obj::__construct(bool passable,::openfl::display::Bitmap objBitmap)
{
HX_STACK_FRAME("Collidable","new",0x9d56cdb3,"Collidable.new","Collidable.hx",23,0x8021a91d)
HX_STACK_THIS(this)
HX_STACK_ARG(passable,"passable")
HX_STACK_ARG(objBitmap,"objBitmap")
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	Float tmp = objBitmap->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	Float tmp1 = objBitmap->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	this->bounds = tmp2;
	HX_STACK_LINE(26)
	this->objectBitmap = objBitmap;
	HX_STACK_LINE(27)
	this->passable = passable;
	HX_STACK_LINE(29)
	bool tmp3 = (objBitmap != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	if ((tmp3)){
		HX_STACK_LINE(30)
		::openfl::display::Bitmap tmp4 = this->objectBitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		this->addChild(tmp4);
	}
}
;
	return null();
}

//Collidable_obj::~Collidable_obj() { }

Dynamic Collidable_obj::__CreateEmpty() { return  new Collidable_obj; }
hx::ObjectPtr< Collidable_obj > Collidable_obj::__new(bool passable,::openfl::display::Bitmap objBitmap)
{  hx::ObjectPtr< Collidable_obj > _result_ = new Collidable_obj();
	_result_->__construct(passable,objBitmap);
	return _result_;}

Dynamic Collidable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Collidable_obj > _result_ = new Collidable_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::geom::Rectangle Collidable_obj::getCollideBounds( ){
	HX_STACK_FRAME("Collidable","getCollideBounds",0x9588f0ea,"Collidable.getCollideBounds","Collidable.hx",33,0x8021a91d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::openfl::geom::Rectangle tmp1 = this->bounds;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	::openfl::geom::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	::openfl::geom::Rectangle tmp8 = this->bounds;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	Float tmp9 = tmp8->width;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::openfl::geom::Rectangle tmp10 = this->bounds;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(34)
	Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(tmp3,tmp7,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(Collidable_obj,getCollideBounds,return )

bool Collidable_obj::isPassable( ){
	HX_STACK_FRAME("Collidable","isPassable",0x024c4402,"Collidable.isPassable","Collidable.hx",36,0x8021a91d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	bool tmp = this->passable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Collidable_obj,isPassable,return )

bool Collidable_obj::isColliding( ::Collidable otherObject){
	HX_STACK_FRAME("Collidable","isColliding",0x17de3344,"Collidable.isColliding","Collidable.hx",39,0x8021a91d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherObject,"otherObject")
	HX_STACK_LINE(41)
	::openfl::geom::Rectangle tmp = this->getCollideBounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	this->tempObjectBounds = tmp;
	HX_STACK_LINE(42)
	::openfl::geom::Rectangle tmp1 = otherObject->getCollideBounds();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->tempCollideBounds = tmp1;
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp2 = this->tempObjectBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::openfl::geom::Rectangle tmp3 = this->tempCollideBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	bool tmp4 = tmp2->intersects(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	if ((tmp4)){
		HX_STACK_LINE(45)
		return true;
	}
	else{
		HX_STACK_LINE(47)
		return false;
	}
	HX_STACK_LINE(44)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Collidable_obj,isColliding,return )

int Collidable_obj::getCollisionDistance( ::Collidable otherCollidable,bool xAxis){
	HX_STACK_FRAME("Collidable","getCollisionDistance",0xc8fac59e,"Collidable.getCollisionDistance","Collidable.hx",50,0x8021a91d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherCollidable,"otherCollidable")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_LINE(52)
	::openfl::geom::Rectangle tmp = this->getCollideBounds();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	this->tempObjectBounds = tmp;
	HX_STACK_LINE(53)
	::openfl::geom::Rectangle tmp1 = otherCollidable->getCollideBounds();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	this->tempCollideBounds = tmp1;
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp2 = this->tempObjectBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp4 = this->tempObjectBounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp8 = this->tempObjectBounds;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	::openfl::geom::Rectangle tmp10 = this->tempObjectBounds;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(55)
	Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(55)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(tmp7,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(55)
	this->thisCenter = tmp14;
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp15 = this->tempCollideBounds;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(56)
	Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp17 = this->tempCollideBounds;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(56)
	Float tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(56)
	Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(56)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp21 = this->tempCollideBounds;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(56)
	Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(56)
	::openfl::geom::Rectangle tmp23 = this->tempCollideBounds;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(56)
	Float tmp24 = tmp23->height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(56)
	Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(56)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(56)
	::openfl::geom::Point tmp27 = ::openfl::geom::Point_obj::__new(tmp20,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(56)
	this->otherCenter = tmp27;
	HX_STACK_LINE(58)
	Float distance = (int)0;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(60)
	bool tmp28 = xAxis;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(60)
	if ((tmp28)){
		HX_STACK_LINE(61)
		::openfl::geom::Point tmp29 = this->thisCenter;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(61)
		::openfl::geom::Point tmp31 = this->otherCenter;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(61)
		Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(61)
		Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(61)
		bool tmp34 = (tmp33 >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(61)
		if ((tmp34)){
			HX_STACK_LINE(62)
			::openfl::geom::Rectangle tmp35 = this->tempObjectBounds;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(62)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(62)
			::openfl::geom::Rectangle tmp37 = this->tempCollideBounds;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(62)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(62)
			::openfl::geom::Rectangle tmp39 = this->tempCollideBounds;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(62)
			Float tmp40 = tmp39->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(62)
			Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(62)
			Float tmp42 = (tmp36 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(62)
			distance = tmp42;
		}
		else{
			HX_STACK_LINE(63)
			::openfl::geom::Point tmp35 = this->thisCenter;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(63)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(63)
			::openfl::geom::Point tmp37 = this->otherCenter;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(63)
			Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(63)
			Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(63)
			bool tmp40 = (tmp39 < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(63)
			if ((tmp40)){
				HX_STACK_LINE(64)
				::openfl::geom::Rectangle tmp41 = this->tempObjectBounds;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(64)
				Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(64)
				::openfl::geom::Rectangle tmp43 = this->tempObjectBounds;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(64)
				Float tmp44 = tmp43->width;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(64)
				Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(64)
				::openfl::geom::Rectangle tmp46 = this->tempCollideBounds;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(64)
				Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(64)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(64)
				distance = tmp48;
			}
		}
	}
	else{
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp29 = this->thisCenter;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(67)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp31 = this->otherCenter;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(67)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(67)
		Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(67)
		bool tmp34 = (tmp33 >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(67)
		if ((tmp34)){
			HX_STACK_LINE(68)
			::openfl::geom::Rectangle tmp35 = this->tempObjectBounds;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(68)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(68)
			::openfl::geom::Rectangle tmp37 = this->tempCollideBounds;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(68)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(68)
			::openfl::geom::Rectangle tmp39 = this->tempCollideBounds;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(68)
			Float tmp40 = tmp39->height;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(68)
			Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(68)
			Float tmp42 = (tmp36 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(68)
			distance = tmp42;
		}
		else{
			HX_STACK_LINE(69)
			::openfl::geom::Point tmp35 = this->thisCenter;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(69)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(69)
			::openfl::geom::Point tmp37 = this->otherCenter;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(69)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(69)
			Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(69)
			bool tmp40 = (tmp39 < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(69)
			if ((tmp40)){
				HX_STACK_LINE(70)
				::openfl::geom::Rectangle tmp41 = this->tempObjectBounds;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(70)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(70)
				::openfl::geom::Rectangle tmp43 = this->tempObjectBounds;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(70)
				Float tmp44 = tmp43->height;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(70)
				Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(70)
				::openfl::geom::Rectangle tmp46 = this->tempCollideBounds;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(70)
				Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(70)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(70)
				distance = tmp48;
			}
		}
	}
	HX_STACK_LINE(73)
	Float tmp29 = distance;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(73)
	int tmp30 = ::Math_obj::round(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(73)
	return tmp30;
}


HX_DEFINE_DYNAMIC_FUNC2(Collidable_obj,getCollisionDistance,return )

Void Collidable_obj::resetObject( ){
{
		HX_STACK_FRAME("Collidable","resetObject",0x1d610a41,"Collidable.resetObject","Collidable.hx",76,0x8021a91d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Collidable_obj,resetObject,(void))


Collidable_obj::Collidable_obj()
{
}

void Collidable_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Collidable);
	HX_MARK_MEMBER_NAME(objectBitmap,"objectBitmap");
	HX_MARK_MEMBER_NAME(passable,"passable");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(tempObjectBounds,"tempObjectBounds");
	HX_MARK_MEMBER_NAME(tempCollideBounds,"tempCollideBounds");
	HX_MARK_MEMBER_NAME(thisCenter,"thisCenter");
	HX_MARK_MEMBER_NAME(otherCenter,"otherCenter");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Collidable_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectBitmap,"objectBitmap");
	HX_VISIT_MEMBER_NAME(passable,"passable");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(tempObjectBounds,"tempObjectBounds");
	HX_VISIT_MEMBER_NAME(tempCollideBounds,"tempCollideBounds");
	HX_VISIT_MEMBER_NAME(thisCenter,"thisCenter");
	HX_VISIT_MEMBER_NAME(otherCenter,"otherCenter");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Collidable_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"passable") ) { return passable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"thisCenter") ) { return thisCenter; }
		if (HX_FIELD_EQ(inName,"isPassable") ) { return isPassable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"otherCenter") ) { return otherCenter; }
		if (HX_FIELD_EQ(inName,"isColliding") ) { return isColliding_dyn(); }
		if (HX_FIELD_EQ(inName,"resetObject") ) { return resetObject_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBitmap") ) { return objectBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempObjectBounds") ) { return tempObjectBounds; }
		if (HX_FIELD_EQ(inName,"getCollideBounds") ) { return getCollideBounds_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tempCollideBounds") ) { return tempCollideBounds; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getCollisionDistance") ) { return getCollisionDistance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Collidable_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"passable") ) { passable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"thisCenter") ) { thisCenter=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"otherCenter") ) { otherCenter=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBitmap") ) { objectBitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"tempObjectBounds") ) { tempObjectBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tempCollideBounds") ) { tempCollideBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Collidable_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Collidable_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectBitmap","\x0e","\x1c","\x16","\xcb"));
	outFields->push(HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79"));
	outFields->push(HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7"));
	outFields->push(HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"));
	outFields->push(HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Collidable_obj,objectBitmap),HX_HCSTRING("objectBitmap","\x0e","\x1c","\x16","\xcb")},
	{hx::fsBool,(int)offsetof(Collidable_obj,passable),HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Collidable_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Collidable_obj,tempObjectBounds),HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Collidable_obj,tempCollideBounds),HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Collidable_obj,thisCenter),HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Collidable_obj,otherCenter),HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectBitmap","\x0e","\x1c","\x16","\xcb"),
	HX_HCSTRING("passable","\xeb","\x8e","\x3b","\x3a"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("tempObjectBounds","\xc8","\xef","\x55","\x79"),
	HX_HCSTRING("tempCollideBounds","\xdf","\x8c","\x76","\xa7"),
	HX_HCSTRING("thisCenter","\xd3","\xba","\x15","\x32"),
	HX_HCSTRING("otherCenter","\xc5","\xfc","\x26","\x04"),
	HX_HCSTRING("getCollideBounds","\x1d","\x06","\x34","\x42"),
	HX_HCSTRING("isPassable","\xf5","\xa0","\xea","\xb4"),
	HX_HCSTRING("isColliding","\xf1","\x2a","\xd1","\xaf"),
	HX_HCSTRING("getCollisionDistance","\x51","\xf0","\xc3","\x6e"),
	HX_HCSTRING("resetObject","\xee","\x01","\x54","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Collidable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Collidable_obj::__mClass,"__mClass");
};

#endif

hx::Class Collidable_obj::__mClass;

void Collidable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Collidable","\x41","\x78","\x73","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Collidable_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Collidable_obj >;
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

