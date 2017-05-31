#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_GLShaderParameter
#include <openfl/display/GLShaderParameter.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
namespace openfl{
namespace display{

Void Shader_obj::__construct(Dynamic __o_precision)
{
HX_STACK_FRAME("openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",12,0xae8f5dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_precision,"precision")
Dynamic precision = __o_precision.Default(1);
{
	HX_STACK_LINE(130)
	this->__dirty = true;
	HX_STACK_LINE(118)
	this->repeatY = (int)33071;
	HX_STACK_LINE(113)
	this->repeatX = (int)33071;
	HX_STACK_LINE(104)
	this->precision = (int)1;
	HX_STACK_LINE(136)
	this->precision = precision;
	HX_STACK_LINE(137)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		tmp = tmp2;
	}
	HX_STACK_LINE(137)
	this->data = tmp;
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::openfl::display::GLShaderParameter tmp1 = ::openfl::display::GLShaderParameter_obj::__new(HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		::openfl::display::GLShaderParameter value = tmp1;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(139)
		::haxe::ds::StringMap tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::String tmp3 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::openfl::display::GLShaderParameter tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		tmp2->set(tmp3,tmp4);
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::openfl::display::GLShaderParameter tmp1 = ::openfl::display::GLShaderParameter_obj::__new(HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::openfl::display::GLShaderParameter value = tmp1;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		::String tmp3 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::openfl::display::GLShaderParameter tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		tmp2->set(tmp3,tmp4);
	}
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(Dynamic __o_precision)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(__o_precision);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::__init( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",143,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(144)
		bool tmp = this->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool dirty = tmp;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(145)
		bool tmp1 = dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		if ((tmp1)){
			HX_STACK_LINE(146)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp2 = this->__shader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			if ((tmp3)){
				HX_STACK_LINE(147)
				::openfl::_internal::renderer::opengl::shaders2::Shader tmp4 = this->__shader;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				tmp4->destroy();
			}
			HX_STACK_LINE(149)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp4 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::__new(gl);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			this->__shader = tmp4;
			HX_STACK_LINE(150)
			::String tmp5 = this->__vertexCode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			if ((tmp6)){
				HX_STACK_LINE(150)
				tmp7 = this->__vertexCode;
			}
			else{
				HX_STACK_LINE(150)
				tmp7 = ::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::VERTEX_SRC->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp8 = this->__shader;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			tmp8->vertexString = tmp7;
			HX_STACK_LINE(151)
			::String tmp9 = this->__fragmentCode;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			::openfl::_internal::renderer::opengl::shaders2::Shader tmp10 = this->__shader;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			tmp10->fragmentString = tmp9;
			HX_STACK_LINE(152)
			this->__dirty = false;
		}
		HX_STACK_LINE(155)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp2 = this->__shader;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		bool tmp3 = dirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		tmp2->init(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,__init,(void))

Void Shader_obj::__buildFragmentCode( ::String code){
{
		HX_STACK_FRAME("openfl.display.Shader","__buildFragmentCode",0xc1a3b76c,"openfl.display.Shader.__buildFragmentCode","openfl/display/Shader.hx",158,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(159)
		Array< ::String > output = Array_obj< ::String >::__new();		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(161)
		output->push(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde"));
		HX_STACK_LINE(162)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			int tmp1 = this->precision;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			switch( (int)(tmp2)){
				case (int)2: {
					HX_STACK_LINE(163)
					tmp = HX_HCSTRING("precision highp float;","\x53","\x3e","\x5f","\x7e");
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(164)
					tmp = HX_HCSTRING("precision mediump float;","\xe6","\xf2","\x15","\x86");
				}
				;break;
				default: {
					HX_STACK_LINE(165)
					tmp = HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a");
				}
			}
		}
		HX_STACK_LINE(162)
		output->push(tmp);
		HX_STACK_LINE(167)
		output->push(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e"));
		HX_STACK_LINE(171)
		output = output->concat(::openfl::display::Shader_obj::fragmentHeader);
		HX_STACK_LINE(172)
		::String tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		output->push(tmp1);
		HX_STACK_LINE(174)
		::String tmp2 = output->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		this->__fragmentCode = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,__buildFragmentCode,(void))

Void Shader_obj::__buildVertexCode( ::String code){
{
		HX_STACK_FRAME("openfl.display.Shader","__buildVertexCode",0x0fad0b40,"openfl.display.Shader.__buildVertexCode","openfl/display/Shader.hx",177,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(178)
		Array< ::String > output = Array_obj< ::String >::__new();		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(180)
		output->push(HX_HCSTRING("#ifdef GL_ES","\x2d","\x5e","\x36","\xde"));
		HX_STACK_LINE(181)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int tmp1 = this->precision;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(181)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			switch( (int)(tmp2)){
				case (int)2: {
					HX_STACK_LINE(182)
					tmp = HX_HCSTRING("precision highp float;","\x53","\x3e","\x5f","\x7e");
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(183)
					tmp = HX_HCSTRING("precision mediump float;","\xe6","\xf2","\x15","\x86");
				}
				;break;
				default: {
					HX_STACK_LINE(184)
					tmp = HX_HCSTRING("precision lowp float;","\x81","\x5f","\xad","\x9a");
				}
			}
		}
		HX_STACK_LINE(181)
		output->push(tmp);
		HX_STACK_LINE(186)
		output->push(HX_HCSTRING("#endif","\x75","\xed","\xf7","\x6e"));
		HX_STACK_LINE(188)
		output = output->concat(::openfl::display::Shader_obj::vertexHeader);
		HX_STACK_LINE(189)
		::String tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		output->push(tmp1);
		HX_STACK_LINE(191)
		::String tmp2 = output->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		this->__vertexCode = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,__buildVertexCode,(void))

::EReg Shader_obj::uniformRegex;

::String Shader_obj::aPosition;

::String Shader_obj::aTexCoord;

::String Shader_obj::aColor;

::String Shader_obj::uSampler;

::String Shader_obj::uProjectionMatrix;

::String Shader_obj::uColorMultiplier;

::String Shader_obj::uColorOffset;

::String Shader_obj::uObjectSize;

::String Shader_obj::uTextureSize;

::String Shader_obj::vTexCoord;

::String Shader_obj::vColor;

Array< ::String > Shader_obj::vertexHeader;

Array< ::String > Shader_obj::fragmentHeader;


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(repeatX,"repeatX");
	HX_MARK_MEMBER_NAME(repeatY,"repeatY");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__fragmentCode,"__fragmentCode");
	HX_MARK_MEMBER_NAME(__vertexCode,"__vertexCode");
	HX_MARK_MEMBER_NAME(__shader,"__shader");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(repeatX,"repeatX");
	HX_VISIT_MEMBER_NAME(repeatY,"repeatY");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__fragmentCode,"__fragmentCode");
	HX_VISIT_MEMBER_NAME(__vertexCode,"__vertexCode");
	HX_VISIT_MEMBER_NAME(__shader,"__shader");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"__init") ) { return __init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeatX") ) { return repeatX; }
		if (HX_FIELD_EQ(inName,"repeatY") ) { return repeatY; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { return __shader; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexCode") ) { return __vertexCode; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fragmentCode") ) { return __fragmentCode; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__buildVertexCode") ) { return __buildVertexCode_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__buildFragmentCode") ) { return __buildFragmentCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"aColor") ) { outValue = aColor; return true;  }
		if (HX_FIELD_EQ(inName,"vColor") ) { outValue = vColor; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uSampler") ) { outValue = uSampler; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aPosition") ) { outValue = aPosition; return true;  }
		if (HX_FIELD_EQ(inName,"aTexCoord") ) { outValue = aTexCoord; return true;  }
		if (HX_FIELD_EQ(inName,"vTexCoord") ) { outValue = vTexCoord; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uObjectSize") ) { outValue = uObjectSize; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uniformRegex") ) { outValue = uniformRegex; return true;  }
		if (HX_FIELD_EQ(inName,"uColorOffset") ) { outValue = uColorOffset; return true;  }
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { outValue = uTextureSize; return true;  }
		if (HX_FIELD_EQ(inName,"vertexHeader") ) { outValue = vertexHeader; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentHeader") ) { outValue = fragmentHeader; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uColorMultiplier") ) { outValue = uColorMultiplier; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"uProjectionMatrix") ) { outValue = uProjectionMatrix; return true;  }
	}
	return false;
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeatX") ) { repeatX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeatY") ) { repeatY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { __shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexCode") ) { __vertexCode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__fragmentCode") ) { __fragmentCode=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"aColor") ) { aColor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"vColor") ) { vColor=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uSampler") ) { uSampler=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aPosition") ) { aPosition=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"aTexCoord") ) { aTexCoord=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"vTexCoord") ) { vTexCoord=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uObjectSize") ) { uObjectSize=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uniformRegex") ) { uniformRegex=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"uColorOffset") ) { uColorOffset=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"uTextureSize") ) { uTextureSize=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"vertexHeader") ) { vertexHeader=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentHeader") ) { fragmentHeader=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uColorMultiplier") ) { uColorMultiplier=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"uProjectionMatrix") ) { uProjectionMatrix=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6"));
	outFields->push(HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__fragmentCode","\x3d","\xe8","\x37","\x26"));
	outFields->push(HX_HCSTRING("__vertexCode","\xd1","\xb5","\x14","\x0b"));
	outFields->push(HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Shader_obj,precision),HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(Shader_obj,repeatX),HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6")},
	{hx::fsInt,(int)offsetof(Shader_obj,repeatY),HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(Shader_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsBool,(int)offsetof(Shader_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsString,(int)offsetof(Shader_obj,__fragmentCode),HX_HCSTRING("__fragmentCode","\x3d","\xe8","\x37","\x26")},
	{hx::fsString,(int)offsetof(Shader_obj,__vertexCode),HX_HCSTRING("__vertexCode","\xd1","\xb5","\x14","\x0b")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(Shader_obj,__shader),HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &Shader_obj::uniformRegex,HX_HCSTRING("uniformRegex","\xf3","\x80","\x0b","\xb7")},
	{hx::fsString,(void *) &Shader_obj::aPosition,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92")},
	{hx::fsString,(void *) &Shader_obj::aTexCoord,HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2")},
	{hx::fsString,(void *) &Shader_obj::aColor,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6")},
	{hx::fsString,(void *) &Shader_obj::uSampler,HX_HCSTRING("uSampler","\x13","\x15","\x29","\x75")},
	{hx::fsString,(void *) &Shader_obj::uProjectionMatrix,HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4")},
	{hx::fsString,(void *) &Shader_obj::uColorMultiplier,HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba")},
	{hx::fsString,(void *) &Shader_obj::uColorOffset,HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b")},
	{hx::fsString,(void *) &Shader_obj::uObjectSize,HX_HCSTRING("uObjectSize","\xf5","\x1f","\xe4","\xaa")},
	{hx::fsString,(void *) &Shader_obj::uTextureSize,HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3")},
	{hx::fsString,(void *) &Shader_obj::vTexCoord,HX_HCSTRING("vTexCoord","\xe4","\x29","\x2b","\x40")},
	{hx::fsString,(void *) &Shader_obj::vColor,HX_HCSTRING("vColor","\x0d","\x75","\xa6","\x0b")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Shader_obj::vertexHeader,HX_HCSTRING("vertexHeader","\x11","\xfc","\x14","\x9d")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Shader_obj::fragmentHeader,HX_HCSTRING("fragmentHeader","\x7d","\x99","\xbb","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6"),
	HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__fragmentCode","\x3d","\xe8","\x37","\x26"),
	HX_HCSTRING("__vertexCode","\xd1","\xb5","\x14","\x0b"),
	HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"),
	HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"),
	HX_HCSTRING("__buildFragmentCode","\x4b","\xc2","\x57","\x26"),
	HX_HCSTRING("__buildVertexCode","\x5f","\x50","\xae","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::uniformRegex,"uniformRegex");
	HX_MARK_MEMBER_NAME(Shader_obj::aPosition,"aPosition");
	HX_MARK_MEMBER_NAME(Shader_obj::aTexCoord,"aTexCoord");
	HX_MARK_MEMBER_NAME(Shader_obj::aColor,"aColor");
	HX_MARK_MEMBER_NAME(Shader_obj::uSampler,"uSampler");
	HX_MARK_MEMBER_NAME(Shader_obj::uProjectionMatrix,"uProjectionMatrix");
	HX_MARK_MEMBER_NAME(Shader_obj::uColorMultiplier,"uColorMultiplier");
	HX_MARK_MEMBER_NAME(Shader_obj::uColorOffset,"uColorOffset");
	HX_MARK_MEMBER_NAME(Shader_obj::uObjectSize,"uObjectSize");
	HX_MARK_MEMBER_NAME(Shader_obj::uTextureSize,"uTextureSize");
	HX_MARK_MEMBER_NAME(Shader_obj::vTexCoord,"vTexCoord");
	HX_MARK_MEMBER_NAME(Shader_obj::vColor,"vColor");
	HX_MARK_MEMBER_NAME(Shader_obj::vertexHeader,"vertexHeader");
	HX_MARK_MEMBER_NAME(Shader_obj::fragmentHeader,"fragmentHeader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::uniformRegex,"uniformRegex");
	HX_VISIT_MEMBER_NAME(Shader_obj::aPosition,"aPosition");
	HX_VISIT_MEMBER_NAME(Shader_obj::aTexCoord,"aTexCoord");
	HX_VISIT_MEMBER_NAME(Shader_obj::aColor,"aColor");
	HX_VISIT_MEMBER_NAME(Shader_obj::uSampler,"uSampler");
	HX_VISIT_MEMBER_NAME(Shader_obj::uProjectionMatrix,"uProjectionMatrix");
	HX_VISIT_MEMBER_NAME(Shader_obj::uColorMultiplier,"uColorMultiplier");
	HX_VISIT_MEMBER_NAME(Shader_obj::uColorOffset,"uColorOffset");
	HX_VISIT_MEMBER_NAME(Shader_obj::uObjectSize,"uObjectSize");
	HX_VISIT_MEMBER_NAME(Shader_obj::uTextureSize,"uTextureSize");
	HX_VISIT_MEMBER_NAME(Shader_obj::vTexCoord,"vTexCoord");
	HX_VISIT_MEMBER_NAME(Shader_obj::vColor,"vColor");
	HX_VISIT_MEMBER_NAME(Shader_obj::vertexHeader,"vertexHeader");
	HX_VISIT_MEMBER_NAME(Shader_obj::fragmentHeader,"fragmentHeader");
};

#endif

hx::Class Shader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("uniformRegex","\xf3","\x80","\x0b","\xb7"),
	HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),
	HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"),
	HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),
	HX_HCSTRING("uSampler","\x13","\x15","\x29","\x75"),
	HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"),
	HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"),
	HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"),
	HX_HCSTRING("uObjectSize","\xf5","\x1f","\xe4","\xaa"),
	HX_HCSTRING("uTextureSize","\xc7","\x50","\x82","\xf3"),
	HX_HCSTRING("vTexCoord","\xe4","\x29","\x2b","\x40"),
	HX_HCSTRING("vColor","\x0d","\x75","\xa6","\x0b"),
	HX_HCSTRING("vertexHeader","\x11","\xfc","\x14","\x9d"),
	HX_HCSTRING("fragmentHeader","\x7d","\x99","\xbb","\x19"),
	::String(null()) };

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shader","\x0f","\xdf","\x61","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shader_obj::__GetStatic;
	__mClass->mSetStaticField = &Shader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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

void Shader_obj::__boot()
{
	uniformRegex= ::EReg_obj::__new(HX_HCSTRING("^\\s*uniform\\s+(sampler(?:2D|Cube)|[bi]?vec[234]|float|int|bool|mat[234])\\s+(\\w+)\\s*(?:\\[(\\d+)\\])?\\s*;.*$","\xe1","\x59","\xd3","\xbc"),HX_HCSTRING("gmi","\x83","\x87","\x4e","\x00"));
	aPosition= HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0");
	aTexCoord= HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4");
	aColor= HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc");
	uSampler= HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d");
	uProjectionMatrix= HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93");
	uColorMultiplier= HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28");
	uColorOffset= HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8");
	uObjectSize= HX_HCSTRING("openfl_uObjectSize","\x86","\x49","\x51","\xed");
	uTextureSize= HX_HCSTRING("openfl_uTextureSize","\x16","\x86","\x99","\xd0");
	vTexCoord= HX_HCSTRING("openfl_vTexCoord","\x35","\x1d","\xf8","\x7e");
	vColor= HX_HCSTRING("openfl_vColor","\x1c","\xb5","\x8b","\x21");
struct _Function_0_1{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Shader.hx",66,0xae8f5dcd)
		{
			HX_STACK_LINE(67)
			::String tmp = ::openfl::display::Shader_obj::aPosition;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			::String tmp1 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			::String tmp2 = (tmp1 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			::String tmp3 = ::openfl::display::Shader_obj::aTexCoord;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			::String tmp4 = (HX_HCSTRING("attribute vec2 ","\xfe","\x43","\xff","\xbe") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			::String tmp5 = (tmp4 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			::String tmp6 = ::openfl::display::Shader_obj::aColor;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			::String tmp7 = (HX_HCSTRING("attribute vec4 ","\xbc","\x45","\xff","\xbe") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			::String tmp9 = ::openfl::display::Shader_obj::uProjectionMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			::String tmp10 = (HX_HCSTRING("uniform mat3 ","\x41","\xcb","\x75","\x0c") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			::String tmp11 = (tmp10 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			::String tmp12 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			::String tmp13 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			::String tmp14 = (tmp13 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(74)
			::String tmp15 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(74)
			::String tmp16 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(74)
			::String tmp17 = (tmp16 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			::String tmp18 = ::openfl::display::Shader_obj::vTexCoord;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(76)
			::String tmp19 = (HX_HCSTRING("varying vec2 ","\x52","\x87","\x16","\x2a") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(76)
			::String tmp20 = (tmp19 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			::String tmp21 = ::openfl::display::Shader_obj::vColor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(77)
			::String tmp22 = (HX_HCSTRING("varying vec4 ","\x10","\x89","\x16","\x2a") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(77)
			::String tmp23 = (tmp22 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			return Array_obj< ::String >::__new().Add(tmp2).Add(tmp5).Add(tmp8).Add(tmp11).Add(tmp14).Add(tmp17).Add(tmp20).Add(tmp23);
		}
		return null();
	}
};
	vertexHeader= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Shader.hx",80,0xae8f5dcd)
		{
			HX_STACK_LINE(81)
			::String tmp = ::openfl::display::Shader_obj::uSampler;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			::String tmp1 = (HX_HCSTRING("uniform sampler2D ","\x72","\x47","\xf0","\xca") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			::String tmp2 = (tmp1 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::String tmp3 = ::openfl::display::Shader_obj::uColorMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			::String tmp4 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			::String tmp5 = (tmp4 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::String tmp6 = ::openfl::display::Shader_obj::uColorOffset;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			::String tmp7 = (HX_HCSTRING("uniform vec4 ","\xd4","\xf8","\xa8","\x3d") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			::String tmp8 = (tmp7 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			::String tmp9 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			::String tmp10 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			::String tmp11 = (tmp10 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			::String tmp12 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			::String tmp13 = (HX_HCSTRING("uniform vec2 ","\x16","\xf7","\xa8","\x3d") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			::String tmp14 = (tmp13 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(88)
			::String tmp15 = ::openfl::display::Shader_obj::vTexCoord;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(88)
			::String tmp16 = (HX_HCSTRING("varying vec2 ","\x52","\x87","\x16","\x2a") + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(88)
			::String tmp17 = (tmp16 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(89)
			::String tmp18 = ::openfl::display::Shader_obj::vColor;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(89)
			::String tmp19 = (HX_HCSTRING("varying vec4 ","\x10","\x89","\x16","\x2a") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(89)
			::String tmp20 = (tmp19 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(80)
			return Array_obj< ::String >::__new().Add(tmp2).Add(tmp5).Add(tmp8).Add(tmp11).Add(tmp14).Add(tmp17).Add(tmp20).Add(HX_HCSTRING("vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {","\xa7","\x0a","\xa9","\xf9")).Add(HX_HCSTRING("   vec4 unmultiply = vec4(color.rgb / color.a, color.a);","\x0f","\xf7","\x2c","\xdd")).Add(HX_HCSTRING("   vec4 result = unmultiply * tint * multiplier;","\x32","\x67","\x2e","\x56")).Add(HX_HCSTRING("   result = result + offset;","\xd6","\x2b","\x93","\xf8")).Add(HX_HCSTRING("   result = clamp(result, 0., 1.);","\x65","\x22","\xa3","\xfc")).Add(HX_HCSTRING("   result = vec4(result.rgb * result.a, result.a);","\x1e","\x90","\x43","\x04")).Add(HX_HCSTRING("   return result;","\x6e","\xcd","\x02","\xa1")).Add(HX_HCSTRING("}","\x7d","\x00","\x00","\x00"));
		}
		return null();
	}
};
	fragmentHeader= _Function_0_2::Block();
}

} // end namespace openfl
} // end namespace display
