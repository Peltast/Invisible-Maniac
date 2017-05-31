#include <hxcpp.h>

#ifndef INCLUDED_Animation
#include <Animation.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void Animation_obj::__construct(::String name,::openfl::geom::Point startPoint,Array< ::Dynamic > frames,int width,int height,int speed,bool loop)
{
HX_STACK_FRAME("Animation","new",0x6e1eb1d6,"Animation.new","Animation.hx",24,0x7224da5a)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(startPoint,"startPoint")
HX_STACK_ARG(frames,"frames")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(speed,"speed")
HX_STACK_ARG(loop,"loop")
{
	HX_STACK_LINE(25)
	this->animationName = name;
	HX_STACK_LINE(26)
	this->animationWidth = width;
	HX_STACK_LINE(27)
	this->animationHeight = height;
	HX_STACK_LINE(28)
	this->animationSpeed = speed;
	HX_STACK_LINE(29)
	this->loop = loop;
	HX_STACK_LINE(31)
	this->animationFrames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		int _g = frames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(32)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			if ((tmp1)){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(35)
			Float tmp3 = startPoint->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			::openfl::geom::Point tmp4 = frames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			int tmp6 = this->animationWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(35)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(35)
			Float tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			Float tmp9 = startPoint->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			::openfl::geom::Point tmp10 = frames->__get(i).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			int tmp12 = this->animationHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			Float tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			int tmp15 = this->animationWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(36)
			int tmp16 = this->animationHeight;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(35)
			::openfl::geom::Rectangle tmp17 = ::openfl::geom::Rectangle_obj::__new(tmp8,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(34)
			this->animationFrames->push(tmp17);
		}
	}
	HX_STACK_LINE(39)
	this->tickCount = (int)0;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,::openfl::geom::Point startPoint,Array< ::Dynamic > frames,int width,int height,int speed,bool loop)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(name,startPoint,frames,width,height,speed,loop);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::openfl::geom::Rectangle Animation_obj::updateAnimation( ){
	HX_STACK_FRAME("Animation","updateAnimation",0xe491fa31,"Animation.updateAnimation","Animation.hx",42,0x7224da5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	if ((tmp1)){
		HX_STACK_LINE(44)
		::openfl::geom::Rectangle tmp2 = this->animationFrames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		this->currentFrame = tmp2;
		HX_STACK_LINE(45)
		::openfl::geom::Rectangle tmp3 = this->currentFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		return tmp3;
	}
	HX_STACK_LINE(47)
	int tmp2 = this->animationSpeed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	if ((tmp3)){
		HX_STACK_LINE(47)
		::openfl::geom::Rectangle tmp4 = this->currentFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		return tmp4;
	}
	HX_STACK_LINE(49)
	(this->tickCount)++;
	HX_STACK_LINE(50)
	int tmp4 = this->tickCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	int tmp5 = this->animationSpeed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	if ((tmp6)){
		HX_STACK_LINE(51)
		this->tickCount = (int)0;
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			int tmp7 = this->animationFrames->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				if ((tmp9)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				::openfl::geom::Rectangle tmp11 = this->currentFrame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(53)
				::openfl::geom::Rectangle tmp12 = this->animationFrames->__get(i).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(53)
				bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				if ((tmp13)){
					HX_STACK_LINE(55)
					int tmp14 = this->animationFrames->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(55)
					int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(55)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(55)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(55)
					if ((tmp17)){
						HX_STACK_LINE(57)
						bool tmp18 = this->loop;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(57)
						if ((tmp18)){
							HX_STACK_LINE(58)
							::openfl::geom::Rectangle tmp19 = this->animationFrames->__get((int)0).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(58)
							this->currentFrame = tmp19;
						}
					}
					else{
						HX_STACK_LINE(62)
						int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(62)
						::openfl::geom::Rectangle tmp19 = this->animationFrames->__get(tmp18).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(62)
						this->currentFrame = tmp19;
					}
					HX_STACK_LINE(63)
					::openfl::geom::Rectangle tmp18 = this->currentFrame;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(63)
					return tmp18;
				}
			}
		}
		HX_STACK_LINE(67)
		::openfl::errors::Error tmp7 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Somehow, the animation's current frame isn't contained in its array of frames.","\x34","\xb2","\xe6","\x91"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(67)
		HX_STACK_DO_THROW(tmp7);
	}
	HX_STACK_LINE(70)
	::openfl::geom::Rectangle tmp7 = this->currentFrame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,updateAnimation,return )

::openfl::geom::Rectangle Animation_obj::getFrame( ){
	HX_STACK_FRAME("Animation","getFrame",0x369c9a81,"Animation.getFrame","Animation.hx",73,0x7224da5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::openfl::geom::Rectangle tmp = this->currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getFrame,return )

::String Animation_obj::getName( ){
	HX_STACK_FRAME("Animation","getName",0x5019f677,"Animation.getName","Animation.hx",74,0x7224da5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::String tmp = this->animationName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

int Animation_obj::getAnimWidth( ){
	HX_STACK_FRAME("Animation","getAnimWidth",0x2fe4de89,"Animation.getAnimWidth","Animation.hx",76,0x7224da5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	int tmp = this->animationWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimWidth,return )

int Animation_obj::getAnimHeight( ){
	HX_STACK_FRAME("Animation","getAnimHeight",0x6ead5204,"Animation.getAnimHeight","Animation.hx",77,0x7224da5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int tmp = this->animationHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimHeight,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(animationName,"animationName");
	HX_MARK_MEMBER_NAME(animationFrames,"animationFrames");
	HX_MARK_MEMBER_NAME(animationWidth,"animationWidth");
	HX_MARK_MEMBER_NAME(animationHeight,"animationHeight");
	HX_MARK_MEMBER_NAME(animationSpeed,"animationSpeed");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(tickCount,"tickCount");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationName,"animationName");
	HX_VISIT_MEMBER_NAME(animationFrames,"animationFrames");
	HX_VISIT_MEMBER_NAME(animationWidth,"animationWidth");
	HX_VISIT_MEMBER_NAME(animationHeight,"animationHeight");
	HX_VISIT_MEMBER_NAME(animationSpeed,"animationSpeed");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(tickCount,"tickCount");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tickCount") ) { return tickCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		if (HX_FIELD_EQ(inName,"getAnimWidth") ) { return getAnimWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationName") ) { return animationName; }
		if (HX_FIELD_EQ(inName,"getAnimHeight") ) { return getAnimHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationWidth") ) { return animationWidth; }
		if (HX_FIELD_EQ(inName,"animationSpeed") ) { return animationSpeed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationFrames") ) { return animationFrames; }
		if (HX_FIELD_EQ(inName,"animationHeight") ) { return animationHeight; }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tickCount") ) { tickCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationName") ) { animationName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animationWidth") ) { animationWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationSpeed") ) { animationSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationFrames") ) { animationFrames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationHeight") ) { animationHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animationName","\x6f","\x5f","\x4b","\x3b"));
	outFields->push(HX_HCSTRING("animationFrames","\xca","\x2d","\x82","\xbb"));
	outFields->push(HX_HCSTRING("animationWidth","\x62","\x48","\x86","\xda"));
	outFields->push(HX_HCSTRING("animationHeight","\x0b","\x86","\x48","\x11"));
	outFields->push(HX_HCSTRING("animationSpeed","\xe3","\x29","\x8d","\x91"));
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Animation_obj,animationName),HX_HCSTRING("animationName","\x6f","\x5f","\x4b","\x3b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,animationFrames),HX_HCSTRING("animationFrames","\xca","\x2d","\x82","\xbb")},
	{hx::fsInt,(int)offsetof(Animation_obj,animationWidth),HX_HCSTRING("animationWidth","\x62","\x48","\x86","\xda")},
	{hx::fsInt,(int)offsetof(Animation_obj,animationHeight),HX_HCSTRING("animationHeight","\x0b","\x86","\x48","\x11")},
	{hx::fsInt,(int)offsetof(Animation_obj,animationSpeed),HX_HCSTRING("animationSpeed","\xe3","\x29","\x8d","\x91")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Animation_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{hx::fsBool,(int)offsetof(Animation_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsInt,(int)offsetof(Animation_obj,tickCount),HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animationName","\x6f","\x5f","\x4b","\x3b"),
	HX_HCSTRING("animationFrames","\xca","\x2d","\x82","\xbb"),
	HX_HCSTRING("animationWidth","\x62","\x48","\x86","\xda"),
	HX_HCSTRING("animationHeight","\x0b","\x86","\x48","\x11"),
	HX_HCSTRING("animationSpeed","\xe3","\x29","\x8d","\x91"),
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("tickCount","\x32","\xa0","\xa1","\xc5"),
	HX_HCSTRING("updateAnimation","\xbb","\xbf","\xbf","\x9a"),
	HX_HCSTRING("getFrame","\xb7","\x87","\x5a","\x66"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getAnimWidth","\xbf","\x9e","\x40","\x91"),
	HX_HCSTRING("getAnimHeight","\x0e","\xc1","\x99","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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

