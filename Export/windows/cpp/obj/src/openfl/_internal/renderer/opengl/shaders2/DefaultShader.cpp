#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void DefaultShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DefaultShader","new",0x163fb452,"openfl._internal.renderer.opengl.shaders2.DefaultShader.new","openfl/_internal/renderer/opengl/shaders2/DefaultShader.hx",33,0xc5ee6bbd)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(34)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	super::__construct(tmp);
	HX_STACK_LINE(36)
	this->vertexSrc = ::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::VERTEX_SRC;
	HX_STACK_LINE(43)
	::String tmp1 = (HX_HCSTRING("uniform sampler2D ","\x72","\x47","\xf0","\xca") + HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::String tmp2 = (tmp1 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	::String tmp3 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::String tmp4 = (tmp3 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	::String tmp5 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	::String tmp6 = (tmp5 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	::String tmp7 = (HX_HCSTRING("uniform bool ","\xca","\xcc","\x4a","\xc0") + HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	::String tmp9 = (HX_HCSTRING("varying vec2 ","\x52","\x87","\x16","\x2a") + HX_HCSTRING("openfl_vTexCoord","\x35","\x1d","\xf8","\x7e"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	::String tmp10 = (tmp9 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	::String tmp11 = (HX_HCSTRING("varying vec4 ","\x10","\x89","\x16","\x2a") + HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(49)
	::String tmp12 = (tmp11 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	::String tmp13 = (HX_HCSTRING("\tif(!","\x9f","\x28","\x50","\x74") + HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(52)
	::String tmp14 = (tmp13 + HX_HCSTRING(") {","\xc4","\x38","\x1f","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(70)
	::String tmp15 = (HX_HCSTRING("   vec4 tc = texture2D(","\xcf","\x35","\x87","\x8c") + HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(70)
	::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(70)
	::String tmp17 = (tmp16 + HX_HCSTRING("openfl_vTexCoord","\x35","\x1d","\xf8","\x7e"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(70)
	::String tmp18 = (tmp17 + HX_HCSTRING(");","\xf2","\x23","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(71)
	::String tmp19 = (HX_HCSTRING("   gl_FragColor = colorTransform(tc, ","\x56","\xec","\xdc","\x67") + HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(71)
	::String tmp20 = (tmp19 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(71)
	::String tmp21 = (tmp20 + HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(71)
	::String tmp22 = (tmp21 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(71)
	::String tmp23 = (tmp22 + HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(71)
	::String tmp24 = (tmp23 + HX_HCSTRING(");","\xf2","\x23","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(38)
	this->fragmentSrc = Array_obj< ::String >::__new().Add(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde")).Add(HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a")).Add(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e")).Add(tmp2).Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10).Add(tmp12).Add(HX_HCSTRING("vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {","\xa7","\x0a","\xa9","\xf9")).Add(tmp14).Add(HX_HCSTRING("\t\treturn color * tint;","\x1d","\x03","\x3b","\xf6")).Add(HX_HCSTRING("\t}","\x54","\x08","\x00","\x00")).Add(HX_HCSTRING("\tvec4 unmultiply;","\x67","\x51","\x79","\x04")).Add(HX_HCSTRING("\tif (color.a == 0.0) {","\xda","\x6c","\x38","\xfb")).Add(HX_HCSTRING("\t\tunmultiply = vec4(0.0, 0.0, 0.0, 0.0);","\xe0","\x9d","\xd0","\x58")).Add(HX_HCSTRING("\t} else {","\xa0","\xa3","\x6f","\x68")).Add(HX_HCSTRING("   \tunmultiply = vec4(color.rgb / color.a, color.a);","\x58","\xe0","\x4f","\xfe")).Add(HX_HCSTRING("\t}","\x54","\x08","\x00","\x00")).Add(HX_HCSTRING("   vec4 result = unmultiply * tint * multiplier;","\x32","\x67","\x2e","\x56")).Add(HX_HCSTRING("   result = result + offset;","\xd6","\x2b","\x93","\xf8")).Add(HX_HCSTRING("   result = clamp(result, 0., 1.);","\x65","\x22","\xa3","\xfc")).Add(HX_HCSTRING("   result = vec4(result.rgb * result.a, result.a);","\x1e","\x90","\x43","\x04")).Add(HX_HCSTRING("   return result;","\x6e","\xcd","\x02","\xa1")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00")).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp18).Add(tmp24).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
	HX_STACK_LINE(76)
	this->init(null());
}
;
	return null();
}

//DefaultShader_obj::~DefaultShader_obj() { }

Dynamic DefaultShader_obj::__CreateEmpty() { return  new DefaultShader_obj; }
hx::ObjectPtr< DefaultShader_obj > DefaultShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< DefaultShader_obj > _result_ = new DefaultShader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic DefaultShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultShader_obj > _result_ = new DefaultShader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DefaultShader_obj::init( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DefaultShader","init",0x5e36cade,"openfl._internal.renderer.opengl.shaders2.DefaultShader.init","openfl/_internal/renderer/opengl/shaders2/DefaultShader.hx",80,0xc5ee6bbd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(81)
		bool tmp = force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		this->super::init(tmp);
		HX_STACK_LINE(83)
		this->getAttribLocation(HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0"));
		HX_STACK_LINE(84)
		this->getAttribLocation(HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4"));
		HX_STACK_LINE(85)
		this->getAttribLocation(HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));
		HX_STACK_LINE(86)
		this->getUniformLocation(HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93"));
		HX_STACK_LINE(87)
		this->getUniformLocation(HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d"));
		HX_STACK_LINE(88)
		this->getUniformLocation(HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));
		HX_STACK_LINE(89)
		this->getUniformLocation(HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));
		HX_STACK_LINE(90)
		this->getUniformLocation(HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));
	}
return null();
}


Array< ::String > DefaultShader_obj::VERTEX_SRC;


DefaultShader_obj::DefaultShader_obj()
{
}

Dynamic DefaultShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"VERTEX_SRC") ) { outValue = VERTEX_SRC; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &DefaultShader_obj::VERTEX_SRC,HX_HCSTRING("VERTEX_SRC","\x29","\x91","\x36","\xec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultShader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultShader_obj::VERTEX_SRC,"VERTEX_SRC");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultShader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultShader_obj::VERTEX_SRC,"VERTEX_SRC");
};

#endif

hx::Class DefaultShader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTEX_SRC","\x29","\x91","\x36","\xec"),
	::String(null()) };

void DefaultShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.DefaultShader","\x60","\xe3","\x5e","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultShader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultShader_obj >;
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

void DefaultShader_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/DefaultShader.hx",8,0xc5ee6bbd)
		{
			HX_STACK_LINE(9)
			::String tmp = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(9)
			::String tmp1 = (tmp + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10)
			::String tmp2 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(10)
			::String tmp3 = (tmp2 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11)
			::String tmp4 = (HX_HCSTRING("attribute vec4 ","\xbc","\x45","\xff","\xbe") + HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(11)
			::String tmp5 = (tmp4 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(13)
			::String tmp6 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(13)
			::String tmp7 = (tmp6 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(14)
			::String tmp8 = (HX_HCSTRING("uniform bool ","\xca","\xcc","\x4a","\xc0") + HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(14)
			::String tmp9 = (tmp8 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(16)
			::String tmp10 = (HX_HCSTRING("varying vec2 ","\x52","\x87","\x16","\x2a") + HX_HCSTRING("openfl_vTexCoord","\x35","\x1d","\xf8","\x7e"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(16)
			::String tmp11 = (tmp10 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(17)
			::String tmp12 = (HX_HCSTRING("varying vec4 ","\x10","\x89","\x16","\x2a") + HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(17)
			::String tmp13 = (tmp12 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			::String tmp14 = (HX_HCSTRING("   gl_Position = vec4((","\x60","\xee","\x15","\xd9") + HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			::String tmp15 = (tmp14 + HX_HCSTRING(" * vec3(","\x53","\x97","\x95","\xf8"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(20)
			::String tmp16 = (tmp15 + HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(20)
			::String tmp17 = (tmp16 + HX_HCSTRING(", 1.0)).xy, 0.0, 1.0);","\x63","\x9b","\x3b","\x23"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(21)
			::String tmp18 = (HX_HCSTRING("   ","\x20","\x64","\x18","\x00") + HX_HCSTRING("openfl_vTexCoord","\x35","\x1d","\xf8","\x7e"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(21)
			::String tmp19 = (tmp18 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(21)
			::String tmp20 = (tmp19 + HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(21)
			::String tmp21 = (tmp20 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(22)
			::String tmp22 = (HX_HCSTRING("   if(","\x8b","\xf5","\xb4","\x4d") + HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(22)
			::String tmp23 = (tmp22 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(23)
			::String tmp24 = (HX_HCSTRING("   \t","\xe9","\x37","\x3f","\x15") + HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(23)
			::String tmp25 = (tmp24 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(23)
			::String tmp26 = (tmp25 + HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(23)
			::String tmp27 = (tmp26 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(28)
			::String tmp28 = (HX_HCSTRING("   \t","\xe9","\x37","\x3f","\x15") + HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(28)
			::String tmp29 = (tmp28 + HX_HCSTRING(" = vec4(","\x85","\x68","\xad","\x0e"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(28)
			::String tmp30 = (tmp29 + HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(28)
			::String tmp31 = (tmp30 + HX_HCSTRING(".bgr * ","\x97","\x32","\x8d","\x41"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(28)
			::String tmp32 = (tmp31 + HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(28)
			::String tmp33 = (tmp32 + HX_HCSTRING(".a, ","\xa7","\x91","\xb1","\x1e"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(28)
			::String tmp34 = (tmp33 + HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(28)
			::String tmp35 = (tmp34 + HX_HCSTRING(".a);","\x25","\x8f","\xb1","\x1e"));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(8)
			return Array_obj< ::String >::__new().Add(tmp1).Add(tmp3).Add(tmp5).Add(tmp7).Add(tmp9).Add(tmp11).Add(tmp13).Add(HX_HCSTRING("void main(void) {","\x4d","\x18","\xfb","\x21")).Add(tmp17).Add(tmp21).Add(tmp23).Add(tmp27).Add(HX_HCSTRING("   else","\xd9","\xd8","\x01","\xae")).Add(tmp35).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
		}
		return null();
	}
};
	VERTEX_SRC= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
