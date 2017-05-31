#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_GLShaderParameter
#include <openfl/display/GLShaderParameter.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void Shader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","new",0xad7101bd,"openfl._internal.renderer.opengl.shaders2.Shader.new","openfl/_internal/renderer/opengl/shaders2/Shader.hx",20,0x6ac2be14)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(36)
	this->wrapT = (int)33071;
	HX_STACK_LINE(35)
	this->wrapS = (int)33071;
	HX_STACK_LINE(30)
	this->compiled = false;
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",29,0x6ac2be14)
			{
				HX_STACK_LINE(29)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(29)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(29)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(29)
	this->uniforms = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",28,0x6ac2be14)
			{
				HX_STACK_LINE(28)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(28)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(28)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	this->attributes = _Function_1_2::Block();
	HX_STACK_LINE(44)
	int tmp = (::openfl::_internal::renderer::opengl::shaders2::Shader_obj::UID)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	this->ID = tmp;
	HX_STACK_LINE(45)
	this->gl = gl;
	HX_STACK_LINE(47)
	this->program = null();
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::init( hx::Null< bool >  __o_force){
bool force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","init",0x12293b13,"openfl._internal.renderer.opengl.shaders2.Shader.init","openfl/_internal/renderer/opengl/shaders2/Shader.hx",50,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(52)
		bool tmp = this->compiled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp)){
			HX_STACK_LINE(52)
			bool tmp2 = force;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			tmp1 = !(tmp3);
		}
		else{
			HX_STACK_LINE(52)
			tmp1 = false;
		}
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(52)
			return null();
		}
		HX_STACK_LINE(54)
		bool tmp2 = (this->vertexSrc != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		if ((tmp2)){
			HX_STACK_LINE(55)
			::String tmp3 = this->vertexSrc->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			this->vertexString = tmp3;
		}
		HX_STACK_LINE(57)
		bool tmp3 = (this->fragmentSrc != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		if ((tmp3)){
			HX_STACK_LINE(58)
			::String tmp4 = this->fragmentSrc->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			this->fragmentString = tmp4;
		}
		HX_STACK_LINE(61)
		::String tmp4 = this->vertexString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		if ((tmp6)){
			HX_STACK_LINE(61)
			::String tmp8 = this->fragmentString;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			tmp7 = (tmp9 == null());
		}
		else{
			HX_STACK_LINE(61)
			tmp7 = true;
		}
		HX_STACK_LINE(61)
		if ((tmp7)){
			HX_STACK_LINE(62)
			HX_STACK_DO_THROW(HX_HCSTRING("No vertex or fragment source provided","\xf8","\xcc","\xdc","\x61"));
		}
		HX_STACK_LINE(65)
		::lime::graphics::GLRenderContext tmp8 = this->gl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		::String tmp9 = this->vertexString;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		::String tmp10 = this->fragmentString;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		::lime::graphics::opengl::GLProgram tmp11 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileProgram(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		this->program = tmp11;
		HX_STACK_LINE(66)
		::lime::graphics::opengl::GLProgram tmp12 = this->program;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		if ((tmp13)){
			HX_STACK_LINE(67)
			this->compiled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,init,(void))

Void Shader_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","destroy",0x52d3d0d7,"openfl._internal.renderer.opengl.shaders2.Shader.destroy","openfl/_internal/renderer/opengl/shaders2/Shader.hx",71,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GLProgram tmp2 = this->program;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GLProgram program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					int program1 = program->id;		HX_STACK_VAR(program1,"program1");
					HX_STACK_LINE(73)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_program.call(program1);
				}
				HX_STACK_LINE(73)
				program->invalidate();
			}
		}
		HX_STACK_LINE(75)
		this->compiled = false;
		HX_STACK_LINE(76)
		this->attributes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,destroy,(void))

Void Shader_obj::applyData( ::haxe::ds::StringMap shaderData,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","applyData",0xc4166bd5,"openfl._internal.renderer.opengl.shaders2.Shader.applyData","openfl/_internal/renderer/opengl/shaders2/Shader.hx",79,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shaderData,"shaderData")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(80)
		bool tmp = (shaderData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		if ((tmp)){
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(82)
		::openfl::display::GLShaderParameter param;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(83)
		int u;		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(84)
		Array< Float > v;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(85)
		::openfl::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(86)
		Dynamic tmp1 = shaderData->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(87)
				::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				int tmp3 = this->getUniformLocation(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				u = tmp3;
				HX_STACK_LINE(88)
				::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(88)
				::openfl::display::GLShaderParameter tmp5 = shaderData->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				param = tmp5;
				HX_STACK_LINE(89)
				bool tmp6 = (param == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				if ((tmp6)){
					HX_STACK_LINE(89)
					continue;
				}
				HX_STACK_LINE(90)
				v = param->value;
				HX_STACK_LINE(91)
				bd = param->bitmap;
				HX_STACK_LINE(92)
				bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				if ((tmp7)){
					HX_STACK_LINE(92)
					tmp8 = (bd == null());
				}
				else{
					HX_STACK_LINE(92)
					tmp8 = false;
				}
				HX_STACK_LINE(92)
				if ((tmp8)){
					HX_STACK_LINE(92)
					continue;
				}
				HX_STACK_LINE(94)
				{
					HX_STACK_LINE(94)
					int _g = param->internalType;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(94)
					int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					switch( (int)(tmp9)){
						case (int)1: {
							HX_STACK_LINE(96)
							int _g1 = param->size;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(96)
							int tmp10 = _g1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							switch( (int)(tmp10)){
								case (int)1: {
									HX_STACK_LINE(97)
									Float tmp11 = v->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(97)
									int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(97)
									int x = tmp12;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(97)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(u,x);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(98)
									Float tmp11 = v->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(98)
									int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(98)
									int x = tmp12;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(98)
									Float tmp13 = v->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(98)
									int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(98)
									int y = tmp14;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(98)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2i.call(u,x,y);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(99)
									Float tmp11 = v->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(99)
									int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(99)
									int x = tmp12;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(99)
									Float tmp13 = v->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(99)
									int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(99)
									int y = tmp14;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(99)
									Float tmp15 = v->__get((int)2);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(99)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(99)
									int z = tmp16;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(99)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3i.call(u,x,y,z);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(100)
									Float tmp11 = v->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(100)
									int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(100)
									int x = tmp12;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(100)
									Float tmp13 = v->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(100)
									int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									int y = tmp14;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(100)
									Float tmp15 = v->__get((int)2);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(100)
									int z = tmp16;		HX_STACK_VAR(z,"z");
									HX_STACK_LINE(100)
									Float tmp17 = v->__get((int)3);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(100)
									int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(100)
									int w = tmp18;		HX_STACK_VAR(w,"w");
									HX_STACK_LINE(100)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4i.call(u,x,y,z,w);
								}
								;break;
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(103)
							int _g1 = param->size;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(103)
							int tmp10 = _g1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							switch( (int)(tmp10)){
								case (int)1: {
									HX_STACK_LINE(104)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(u,v->__get((int)0));
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(105)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2f.call(u,v->__get((int)0),v->__get((int)1));
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(106)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3f.call(u,v->__get((int)0),v->__get((int)1),v->__get((int)2));
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(107)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(u,v->__get((int)0),v->__get((int)1),v->__get((int)2),v->__get((int)3));
								}
								;break;
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(110)
							int _g1 = param->size;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(110)
							int tmp10 = _g1;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(110)
							switch( (int)(tmp10)){
								case (int)2: {
									HX_STACK_LINE(111)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(111)
									{
										HX_STACK_LINE(111)
										cpp::ArrayBase array = param->value;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(111)
										::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(111)
										bool tmp12 = (array != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(111)
										if ((tmp12)){
											HX_STACK_LINE(111)
											::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(111)
											{
												HX_STACK_LINE(111)
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(111)
												::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(111)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(111)
												_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(111)
												int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(111)
												_this->byteLength = tmp15;
												HX_STACK_LINE(111)
												::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(111)
												{
													HX_STACK_LINE(111)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(111)
													int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(111)
													::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(111)
													this2 = tmp18;
													HX_STACK_LINE(111)
													tmp16 = this2;
												}
												HX_STACK_LINE(111)
												_this->buffer = tmp16;
												HX_STACK_LINE(111)
												_this->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(111)
												tmp13 = _this;
											}
											HX_STACK_LINE(111)
											this1 = tmp13;
										}
										else{
											HX_STACK_LINE(111)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
										HX_STACK_LINE(111)
										tmp11 = this1;
									}
									HX_STACK_LINE(111)
									::lime::utils::ArrayBufferView v1 = tmp11;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(111)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(u,param->transpose,hx::DynamicPtr(v1->buffer),(int)2);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(112)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(112)
									{
										HX_STACK_LINE(112)
										cpp::ArrayBase array = param->value;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(112)
										::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(112)
										bool tmp12 = (array != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(112)
										if ((tmp12)){
											HX_STACK_LINE(112)
											::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(112)
											{
												HX_STACK_LINE(112)
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(112)
												::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(112)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(112)
												_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(112)
												int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(112)
												_this->byteLength = tmp15;
												HX_STACK_LINE(112)
												::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(112)
												{
													HX_STACK_LINE(112)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(112)
													int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(112)
													::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(112)
													this2 = tmp18;
													HX_STACK_LINE(112)
													tmp16 = this2;
												}
												HX_STACK_LINE(112)
												_this->buffer = tmp16;
												HX_STACK_LINE(112)
												_this->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(112)
												tmp13 = _this;
											}
											HX_STACK_LINE(112)
											this1 = tmp13;
										}
										else{
											HX_STACK_LINE(112)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
										HX_STACK_LINE(112)
										tmp11 = this1;
									}
									HX_STACK_LINE(112)
									::lime::utils::ArrayBufferView v1 = tmp11;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(112)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(u,param->transpose,hx::DynamicPtr(v1->buffer),(int)3);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(113)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(113)
									{
										HX_STACK_LINE(113)
										cpp::ArrayBase array = param->value;		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(113)
										::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(113)
										bool tmp12 = (array != null());		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(113)
										if ((tmp12)){
											HX_STACK_LINE(113)
											::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(113)
											{
												HX_STACK_LINE(113)
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(113)
												::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(113)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(113)
												_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
												HX_STACK_LINE(113)
												int tmp15 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(113)
												_this->byteLength = tmp15;
												HX_STACK_LINE(113)
												::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(113)
												{
													HX_STACK_LINE(113)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(113)
													int tmp17 = _this->byteLength;		HX_STACK_VAR(tmp17,"tmp17");
													HX_STACK_LINE(113)
													::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
													HX_STACK_LINE(113)
													this2 = tmp18;
													HX_STACK_LINE(113)
													tmp16 = this2;
												}
												HX_STACK_LINE(113)
												_this->buffer = tmp16;
												HX_STACK_LINE(113)
												_this->copyFromArray(((Array< Float >)(array)),null());
												HX_STACK_LINE(113)
												tmp13 = _this;
											}
											HX_STACK_LINE(113)
											this1 = tmp13;
										}
										else{
											HX_STACK_LINE(113)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
										HX_STACK_LINE(113)
										tmp11 = this1;
									}
									HX_STACK_LINE(113)
									::lime::utils::ArrayBufferView v1 = tmp11;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(113)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(u,param->transpose,hx::DynamicPtr(v1->buffer),(int)4);
								}
								;break;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(116)
							bool tmp10 = (bd == null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(116)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(116)
							bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(116)
							if ((tmp11)){
								HX_STACK_LINE(116)
								bool tmp13 = bd->__isValid;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(116)
								bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(116)
								tmp12 = !(tmp14);
							}
							else{
								HX_STACK_LINE(116)
								tmp12 = true;
							}
							HX_STACK_LINE(116)
							if ((tmp12)){
								HX_STACK_LINE(116)
								continue;
							}
							HX_STACK_LINE(117)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((this->gl->TEXTURE0 + renderSession->activeTextures));
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								::lime::graphics::GLRenderContext tmp13 = this->gl;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(118)
								::lime::graphics::opengl::GLTexture tmp14 = bd->getTexture(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(118)
								::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
								HX_STACK_LINE(118)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
							}
							HX_STACK_LINE(119)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(u,renderSession->activeTextures);
							HX_STACK_LINE(120)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,(  ((param->smooth)) ? int(this->gl->LINEAR) : int(this->gl->NEAREST) ));
							HX_STACK_LINE(121)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,(  ((param->smooth)) ? int(this->gl->LINEAR) : int(this->gl->NEAREST) ));
							HX_STACK_LINE(123)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,param->repeatX);
							HX_STACK_LINE(124)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,param->repeatY);
							HX_STACK_LINE(126)
							(renderSession->activeTextures)++;
						}
						;break;
						default: {
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,applyData,(void))

int Shader_obj::getAttribLocation( ::String attribute){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getAttribLocation",0x2bea14f2,"openfl._internal.renderer.opengl.shaders2.Shader.getAttribLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",132,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_LINE(133)
	::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(134)
		HX_STACK_DO_THROW(HX_HCSTRING("Shader isn't initialized","\x8a","\xbf","\x62","\x0e"));
	}
	HX_STACK_LINE(136)
	::haxe::ds::StringMap tmp2 = this->attributes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::String tmp3 = attribute;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	if ((tmp4)){
		HX_STACK_LINE(137)
		::haxe::ds::StringMap tmp5 = this->attributes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		::String tmp6 = attribute;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		return tmp8;
	}
	else{
		HX_STACK_LINE(139)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::lime::graphics::opengl::GLProgram tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			int program = tmp6->id;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(139)
			tmp5 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(program,attribute);
		}
		HX_STACK_LINE(139)
		int location = tmp5;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(140)
		::haxe::ds::StringMap tmp6 = this->attributes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		::String tmp7 = attribute;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		int tmp8 = location;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(141)
		int tmp9 = location;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		return tmp9;
	}
	HX_STACK_LINE(136)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getAttribLocation,return )

int Shader_obj::getUniformLocation( ::String uniform){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getUniformLocation",0x7fb53ed6,"openfl._internal.renderer.opengl.shaders2.Shader.getUniformLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",145,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_LINE(146)
	::lime::graphics::opengl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(147)
		HX_STACK_DO_THROW(HX_HCSTRING("Shader isn't initialized","\x8a","\xbf","\x62","\x0e"));
	}
	HX_STACK_LINE(149)
	::haxe::ds::StringMap tmp2 = this->uniforms;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	::String tmp3 = uniform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	if ((tmp4)){
		HX_STACK_LINE(150)
		::haxe::ds::StringMap tmp5 = this->uniforms;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		::String tmp6 = uniform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		return tmp8;
	}
	else{
		HX_STACK_LINE(152)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::lime::graphics::opengl::GLProgram tmp6 = this->program;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			int program = tmp6->id;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(152)
			tmp5 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,uniform);
		}
		HX_STACK_LINE(152)
		int location = tmp5;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(153)
		::haxe::ds::StringMap tmp6 = this->uniforms;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::String tmp7 = uniform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		int tmp8 = location;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(154)
		int tmp9 = location;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		return tmp9;
	}
	HX_STACK_LINE(149)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getUniformLocation,return )

Void Shader_obj::enableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,int stride,int offset){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","enableVertexAttribute",0x3cb9d972,"openfl._internal.renderer.opengl.shaders2.Shader.enableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",158,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attribute,"attribute")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(159)
		::String tmp = attribute->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		int tmp1 = this->getAttribLocation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		int location = tmp1;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(160)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(location);
		HX_STACK_LINE(161)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(location,attribute->components,attribute->type,attribute->normalized,stride,(offset * (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,enableVertexAttribute,(void))

Void Shader_obj::disableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,hx::Null< bool >  __o_setDefault){
bool setDefault = __o_setDefault.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","disableVertexAttribute",0xb20b27d3,"openfl._internal.renderer.opengl.shaders2.Shader.disableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",164,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_ARG(setDefault,"setDefault")
{
		HX_STACK_LINE(165)
		::String tmp = attribute->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int tmp1 = this->getAttribLocation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int location = tmp1;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(166)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(location);
		HX_STACK_LINE(167)
		bool tmp2 = setDefault;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(168)
			int _g = attribute->components;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			switch( (int)(tmp3)){
				case (int)1: {
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView this1 = attribute->defaultValue;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(170)
						int len = (int)1;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(170)
						int tmp5 = this1->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(170)
						int tmp6 = ((int)0 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(170)
						int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							int tmp8 = this1->type;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(170)
							int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(170)
							int tmp9 = _g1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(170)
							switch( (int)(tmp9)){
								case (int)1: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(170)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(170)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(170)
									if ((tmp11)){
										HX_STACK_LINE(170)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(170)
										{
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(170)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(170)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(170)
											if ((tmp14)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(170)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(170)
											if ((tmp16)){
												HX_STACK_LINE(170)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(170)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(170)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(170)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(170)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(170)
											if ((tmp17)){
												HX_STACK_LINE(170)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(170)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(170)
												if ((tmp21)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(170)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(170)
												newByteLength = tmp18;
												HX_STACK_LINE(170)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(170)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(170)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(170)
												if ((tmp20)){
													HX_STACK_LINE(170)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(170)
											_this->buffer = buffer;
											HX_STACK_LINE(170)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(170)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(170)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(170)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(170)
											_this->length = tmp19;
											HX_STACK_LINE(170)
											tmp12 = _this;
										}
										HX_STACK_LINE(170)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
									}
									HX_STACK_LINE(170)
									tmp7 = this2;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
								}
								;break;
							}
						}
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(170)
						tmp4 = view;
					}
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(170)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib1fv.call(location,hx::DynamicPtr(values->buffer));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(172)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(172)
					{
						HX_STACK_LINE(172)
						::lime::utils::ArrayBufferView this1 = attribute->defaultValue;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(172)
						int len = (int)2;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(172)
						int tmp5 = this1->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(172)
						int tmp6 = ((int)0 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(172)
						int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
						HX_STACK_LINE(172)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(172)
						{
							HX_STACK_LINE(172)
							int tmp8 = this1->type;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(172)
							int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(172)
							int tmp9 = _g1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(172)
							switch( (int)(tmp9)){
								case (int)1: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(172)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(172)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(172)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(172)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(172)
									if ((tmp11)){
										HX_STACK_LINE(172)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(172)
										{
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(172)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(172)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(172)
											if ((tmp14)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(172)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(172)
											if ((tmp16)){
												HX_STACK_LINE(172)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(172)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(172)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(172)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(172)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(172)
											if ((tmp17)){
												HX_STACK_LINE(172)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(172)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(172)
												if ((tmp21)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(172)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(172)
												newByteLength = tmp18;
												HX_STACK_LINE(172)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(172)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(172)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(172)
												if ((tmp20)){
													HX_STACK_LINE(172)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(172)
											_this->buffer = buffer;
											HX_STACK_LINE(172)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(172)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(172)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(172)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(172)
											_this->length = tmp19;
											HX_STACK_LINE(172)
											tmp12 = _this;
										}
										HX_STACK_LINE(172)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(172)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
									}
									HX_STACK_LINE(172)
									tmp7 = this2;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(172)
									HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
								}
								;break;
							}
						}
						HX_STACK_LINE(172)
						::lime::utils::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(172)
						tmp4 = view;
					}
					HX_STACK_LINE(172)
					::lime::utils::ArrayBufferView values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(172)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib2fv.call(location,hx::DynamicPtr(values->buffer));
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(174)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView this1 = attribute->defaultValue;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(174)
						int len = (int)3;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(174)
						int tmp5 = this1->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(174)
						int tmp6 = ((int)0 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							int tmp8 = this1->type;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(174)
							int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(174)
							int tmp9 = _g1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(174)
							switch( (int)(tmp9)){
								case (int)1: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(174)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									if ((tmp11)){
										HX_STACK_LINE(174)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(174)
										{
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(174)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(174)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(174)
											if ((tmp14)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(174)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(174)
											if ((tmp16)){
												HX_STACK_LINE(174)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(174)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(174)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(174)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(174)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(174)
											if ((tmp17)){
												HX_STACK_LINE(174)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(174)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(174)
												if ((tmp21)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(174)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(174)
												newByteLength = tmp18;
												HX_STACK_LINE(174)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(174)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(174)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(174)
												if ((tmp20)){
													HX_STACK_LINE(174)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(174)
											_this->buffer = buffer;
											HX_STACK_LINE(174)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(174)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(174)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(174)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(174)
											_this->length = tmp19;
											HX_STACK_LINE(174)
											tmp12 = _this;
										}
										HX_STACK_LINE(174)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
									}
									HX_STACK_LINE(174)
									tmp7 = this2;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(174)
									HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
								}
								;break;
							}
						}
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(174)
						tmp4 = view;
					}
					HX_STACK_LINE(174)
					::lime::utils::ArrayBufferView values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(174)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib3fv.call(location,hx::DynamicPtr(values->buffer));
				}
				;break;
				default: {
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView this1 = attribute->defaultValue;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(176)
						int len = (int)4;		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(176)
						int tmp5 = this1->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(176)
						int tmp6 = ((int)0 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(176)
						int byte_offset = tmp6;		HX_STACK_VAR(byte_offset,"byte_offset");
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							int tmp8 = this1->type;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(176)
							int _g1 = tmp8;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(176)
							int tmp9 = _g1;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(176)
							switch( (int)(tmp9)){
								case (int)1: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp10 = this1->buffer;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(176)
									::haxe::io::Bytes buffer = tmp10;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(176)
									bool tmp11 = (buffer != null());		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(176)
									if ((tmp11)){
										HX_STACK_LINE(176)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(176)
										{
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(176)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(176)
											bool tmp14 = (byte_offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(176)
											if ((tmp14)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int tmp15 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(176)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(176)
											if ((tmp16)){
												HX_STACK_LINE(176)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(176)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(176)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(176)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(176)
											bool tmp17 = (len == null());		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(176)
											if ((tmp17)){
												HX_STACK_LINE(176)
												int tmp18 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(176)
												bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(176)
												if ((tmp21)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(176)
												int tmp18 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(176)
												newByteLength = tmp18;
												HX_STACK_LINE(176)
												int tmp19 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(176)
												int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(176)
												bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(176)
												if ((tmp20)){
													HX_STACK_LINE(176)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(176)
											_this->buffer = buffer;
											HX_STACK_LINE(176)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(176)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(176)
											Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(176)
											int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(176)
											_this->length = tmp19;
											HX_STACK_LINE(176)
											tmp12 = _this;
										}
										HX_STACK_LINE(176)
										this2 = tmp12;
									}
									else{
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
									}
									HX_STACK_LINE(176)
									tmp7 = this2;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
								}
								;break;
							}
						}
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView view = tmp7;		HX_STACK_VAR(view,"view");
						HX_STACK_LINE(176)
						tmp4 = view;
					}
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView values = tmp4;		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(176)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib4fv.call(location,hx::DynamicPtr(values->buffer));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,disableVertexAttribute,(void))

Void Shader_obj::bindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","bindVertexArray",0x3a7531b5,"openfl._internal.renderer.opengl.shaders2.Shader.bindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",181,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(182)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(183)
		int tmp = va->get_stride();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		int stride = tmp;		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			while((true)){
				HX_STACK_LINE(185)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(185)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(185)
				if ((tmp2)){
					HX_STACK_LINE(185)
					break;
				}
				HX_STACK_LINE(185)
				::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(185)
				::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = tmp3;		HX_STACK_VAR(attribute,"attribute");
				HX_STACK_LINE(185)
				++(_g);
				HX_STACK_LINE(186)
				bool tmp4 = attribute->enabled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				if ((tmp4)){
					HX_STACK_LINE(187)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = attribute;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(187)
					int tmp6 = stride;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(187)
					int tmp7 = offset;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					this->enableVertexAttribute(tmp5,tmp6,tmp7);
					HX_STACK_LINE(188)
					int tmp8 = attribute->components;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(188)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						int _g2 = attribute->type;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(188)
						int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(188)
						switch( (int)(tmp10)){
							case (int)5120: case (int)5121: {
								HX_STACK_LINE(188)
								tmp9 = (int)1;
							}
							;break;
							case (int)5122: case (int)5123: {
								HX_STACK_LINE(188)
								tmp9 = (int)2;
							}
							;break;
							default: {
								HX_STACK_LINE(188)
								tmp9 = (int)4;
							}
						}
					}
					HX_STACK_LINE(188)
					int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(188)
					int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(188)
					hx::AddEq(offset,tmp12);
				}
				else{
					HX_STACK_LINE(190)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = attribute;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(190)
					this->disableVertexAttribute(tmp5,true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,bindVertexArray,(void))

Void Shader_obj::unbindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","unbindVertexArray",0xe5df88bc,"openfl._internal.renderer.opengl.shaders2.Shader.unbindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",196,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(196)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(196)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(196)
			if ((tmp1)){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(196)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = tmp2;		HX_STACK_VAR(attribute,"attribute");
			HX_STACK_LINE(196)
			++(_g);
			HX_STACK_LINE(197)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp3 = attribute;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			this->disableVertexAttribute(tmp3,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,unbindVertexArray,(void))

int Shader_obj::UID;

::lime::graphics::opengl::GLProgram Shader_obj::compileProgram( ::lime::graphics::GLRenderContext gl,::String vertexSrc,::String fragmentSrc){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileProgram",0x7a6c7314,"openfl._internal.renderer.opengl.shaders2.Shader.compileProgram","openfl/_internal/renderer/opengl/shaders2/Shader.hx",202,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(vertexSrc,"vertexSrc")
	HX_STACK_ARG(fragmentSrc,"fragmentSrc")
	HX_STACK_LINE(204)
	::haxe::ds::StringMap tmp = ::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::compiledShadersCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::haxe::ds::StringMap cache = tmp;		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(205)
	::String tmp1 = (vertexSrc + fragmentSrc);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	::String tmp2 = ::haxe::crypto::Md5_obj::encode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	::String key = tmp2;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(207)
	::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	bool tmp4 = cache->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	if ((tmp4)){
		HX_STACK_LINE(209)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		::lime::graphics::opengl::GLProgram tmp6 = cache->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		::lime::graphics::opengl::GLProgram tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		return tmp7;
	}
	HX_STACK_LINE(213)
	::lime::graphics::GLRenderContext tmp5 = gl;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(213)
	::String tmp6 = vertexSrc;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(213)
	int tmp7 = gl->VERTEX_SHADER;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	::lime::graphics::opengl::GLShader tmp8 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(213)
	::lime::graphics::opengl::GLShader vertexShader = tmp8;		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(214)
	::lime::graphics::GLRenderContext tmp9 = gl;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(214)
	::String tmp10 = fragmentSrc;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(214)
	int tmp11 = gl->FRAGMENT_SHADER;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(214)
	::lime::graphics::opengl::GLShader tmp12 = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(214)
	::lime::graphics::opengl::GLShader fragmentShader = tmp12;		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(215)
	int tmp13 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(215)
	::lime::graphics::opengl::GLProgram tmp14 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp13,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program.call());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(215)
	::lime::graphics::opengl::GLProgram program = tmp14;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(217)
	bool tmp15 = (vertexShader != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(217)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(217)
	if ((tmp15)){
		HX_STACK_LINE(217)
		tmp16 = (fragmentShader != null());
	}
	else{
		HX_STACK_LINE(217)
		tmp16 = false;
	}
	HX_STACK_LINE(217)
	if ((tmp16)){
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::lime::graphics::opengl::GLShader tmp17 = vertexShader;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(218)
			program->attach(tmp17);
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				int program1 = program->id;		HX_STACK_VAR(program1,"program1");
				HX_STACK_LINE(218)
				int shader = vertexShader->id;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(218)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(program1,shader);
			}
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::lime::graphics::opengl::GLShader tmp17 = fragmentShader;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(219)
			program->attach(tmp17);
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				int program1 = program->id;		HX_STACK_VAR(program1,"program1");
				HX_STACK_LINE(219)
				int shader = fragmentShader->id;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(219)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(program1,shader);
			}
		}
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int program1 = program->id;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(220)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_link_program.call(program1);
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				int shader = vertexShader->id;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(222)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_shader.call(shader);
			}
			HX_STACK_LINE(222)
			vertexShader->invalidate();
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				int shader = fragmentShader->id;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(223)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_shader.call(shader);
			}
			HX_STACK_LINE(223)
			fragmentShader->invalidate();
		}
		HX_STACK_LINE(225)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			int program1 = program->id;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(225)
			tmp17 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_parameter.call(program1,gl->LINK_STATUS);
		}
		HX_STACK_LINE(225)
		bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(225)
		if ((tmp18)){
			HX_STACK_LINE(226)
			::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				int program1 = program->id;		HX_STACK_VAR(program1,"program1");
				HX_STACK_LINE(226)
				tmp19 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_info_log.call(program1);
			}
			HX_STACK_LINE(226)
			::String tmp20 = (HX_HCSTRING("Could not compile the program:\n\t","\x1d","\xc1","\x60","\x7e") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(226)
			Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),226,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileProgram","\x51","\x31","\xe3","\x15"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(226)
			::haxe::Log_obj::trace(tmp20,tmp21);
			HX_STACK_LINE(227)
			::String tmp22 = (HX_HCSTRING("VERTEX:\n","\xf4","\x5a","\x06","\xc1") + vertexSrc);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(227)
			::String tmp23 = (tmp22 + HX_HCSTRING("\nFRAGMENT:\n","\xea","\xe6","\x92","\xf4"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(227)
			::String tmp24 = fragmentSrc;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(227)
			::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),227,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileProgram","\x51","\x31","\xe3","\x15"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(227)
			::haxe::Log_obj::trace(tmp25,tmp26);
			HX_STACK_LINE(228)
			return null();
		}
	}
	HX_STACK_LINE(232)
	::String tmp17 = key;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(232)
	::lime::graphics::opengl::GLProgram tmp18 = program;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(232)
	cache->set(tmp17,tmp18);
	HX_STACK_LINE(234)
	::lime::graphics::opengl::GLProgram tmp19 = program;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(234)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileProgram,return )

::lime::graphics::opengl::GLShader Shader_obj::compileShader( ::lime::graphics::GLRenderContext gl,::String shaderSrc,int type){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileShader",0x5163d895,"openfl._internal.renderer.opengl.shaders2.Shader.compileShader","openfl/_internal/renderer/opengl/shaders2/Shader.hx",237,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(shaderSrc,"shaderSrc")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(238)
	::String src = shaderSrc;		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(239)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::lime::graphics::opengl::GLShader tmp1 = ::lime::graphics::opengl::GLShader_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader.call(type));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	::lime::graphics::opengl::GLShader shader = tmp1;		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(240)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source.call(shader1,src);
	}
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(241)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader.call(shader1);
	}
	HX_STACK_LINE(243)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
		HX_STACK_LINE(243)
		tmp2 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter.call(shader1,gl->COMPILE_STATUS);
	}
	HX_STACK_LINE(243)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	if ((tmp3)){
		HX_STACK_LINE(244)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int shader1 = shader->id;		HX_STACK_VAR(shader1,"shader1");
			HX_STACK_LINE(244)
			tmp4 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_info_log.call(shader1);
		}
		HX_STACK_LINE(244)
		::String tmp5 = (HX_HCSTRING("Could not compile the shader:\n\t","\xcc","\x68","\x7a","\xf1") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),244,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(245)
		::String tmp7 = shaderSrc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),245,HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18"),HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		::haxe::Log_obj::trace(tmp7,tmp8);
		HX_STACK_LINE(246)
		return null();
	}
	HX_STACK_LINE(249)
	::lime::graphics::opengl::GLShader tmp4 = shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileShader,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_MARK_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(compiled,"compiled");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(wrapS,"wrapS");
	HX_MARK_MEMBER_NAME(wrapT,"wrapT");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(vertexString,"vertexString");
	HX_MARK_MEMBER_NAME(fragmentString,"fragmentString");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_VISIT_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(compiled,"compiled");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(wrapS,"wrapS");
	HX_VISIT_MEMBER_NAME(wrapT,"wrapT");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(vertexString,"vertexString");
	HX_VISIT_MEMBER_NAME(fragmentString,"fragmentString");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wrapS") ) { return wrapS; }
		if (HX_FIELD_EQ(inName,"wrapT") ) { return wrapT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"compiled") ) { return compiled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { return vertexSrc; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"applyData") ) { return applyData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { return fragmentSrc; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexString") ) { return vertexString; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentString") ) { return fragmentString; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { return bindVertexArray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"unbindVertexArray") ) { return unbindVertexArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableVertexAttribute") ) { return enableVertexAttribute_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disableVertexAttribute") ) { return disableVertexAttribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Shader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { outValue = UID; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compileProgram") ) { outValue = compileProgram_dyn(); return true;  }
	}
	return false;
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"wrapS") ) { wrapS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapT") ) { wrapT=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compiled") ) { compiled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { vertexSrc=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { fragmentSrc=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexString") ) { vertexString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentString") ) { fragmentString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29"));
	outFields->push(HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	outFields->push(HX_HCSTRING("compiled","\x91","\x9f","\xd1","\x7d"));
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	outFields->push(HX_HCSTRING("wrapS","\x49","\x57","\x53","\xd0"));
	outFields->push(HX_HCSTRING("wrapT","\x4a","\x57","\x53","\xd0"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("vertexString","\x55","\x1b","\x45","\xb1"));
	outFields->push(HX_HCSTRING("fragmentString","\xc1","\xb8","\xeb","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,vertexSrc),HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,fragmentSrc),HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{hx::fsBool,(int)offsetof(Shader_obj,compiled),HX_HCSTRING("compiled","\x91","\x9f","\xd1","\x7d")},
	{hx::fsInt,(int)offsetof(Shader_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{hx::fsInt,(int)offsetof(Shader_obj,wrapS),HX_HCSTRING("wrapS","\x49","\x57","\x53","\xd0")},
	{hx::fsInt,(int)offsetof(Shader_obj,wrapT),HX_HCSTRING("wrapT","\x4a","\x57","\x53","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(Shader_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsString,(int)offsetof(Shader_obj,vertexString),HX_HCSTRING("vertexString","\x55","\x1b","\x45","\xb1")},
	{hx::fsString,(int)offsetof(Shader_obj,fragmentString),HX_HCSTRING("fragmentString","\xc1","\xb8","\xeb","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Shader_obj::UID,HX_HCSTRING("UID","\x70","\xbf","\x40","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("vertexSrc","\xe0","\xb9","\x2b","\x29"),
	HX_HCSTRING("fragmentSrc","\xf4","\xc0","\x3b","\xa4"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	HX_HCSTRING("compiled","\x91","\x9f","\xd1","\x7d"),
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("wrapS","\x49","\x57","\x53","\xd0"),
	HX_HCSTRING("wrapT","\x4a","\x57","\x53","\xd0"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("vertexString","\x55","\x1b","\x45","\xb1"),
	HX_HCSTRING("fragmentString","\xc1","\xb8","\xeb","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("applyData","\xb8","\x56","\x32","\x2c"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("enableVertexAttribute","\xd5","\x0c","\xbc","\xad"),
	HX_HCSTRING("disableVertexAttribute","\x10","\xeb","\xf5","\x22"),
	HX_HCSTRING("bindVertexArray","\xd8","\xe8","\xe4","\xa6"),
	HX_HCSTRING("unbindVertexArray","\x9f","\x8e","\x05","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::UID,"UID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::UID,"UID");
};

#endif

hx::Class Shader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UID","\x70","\xbf","\x40","\x00"),
	HX_HCSTRING("compileProgram","\x51","\x31","\xe3","\x15"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	::String(null()) };

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.shaders2.Shader","\x4b","\x5f","\x8c","\x18");
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
	UID= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
