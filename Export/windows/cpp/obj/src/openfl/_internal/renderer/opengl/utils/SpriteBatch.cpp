#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_GLShaderParameter
#include <openfl/display/GLShaderParameter.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",31,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(70)
	this->uvs = ::openfl::display::TextureUvs_obj::__new();
	HX_STACK_LINE(69)
	this->matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(67)
	this->lastEnableColor = true;
	HX_STACK_LINE(65)
	this->enableColor = true;
	HX_STACK_LINE(63)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(49)
	this->drawing = false;
	HX_STACK_LINE(48)
	this->dirty = true;
	HX_STACK_LINE(38)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(74)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(76)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->attributes->push(tmp);
	HX_STACK_LINE(77)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	this->attributes->push(tmp1);
	HX_STACK_LINE(78)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	this->attributes->push(tmp2);
	HX_STACK_LINE(80)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		cpp::ArrayBase array = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(80)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(80)
		bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(80)
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			this1 = tmp5;
		}
		else{
			HX_STACK_LINE(80)
			bool tmp5 = (array != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			if ((tmp5)){
				HX_STACK_LINE(80)
				::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(80)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(80)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(80)
					int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					_this->byteLength = tmp8;
					HX_STACK_LINE(80)
					::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(80)
						int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						this2 = tmp11;
						HX_STACK_LINE(80)
						tmp9 = this2;
					}
					HX_STACK_LINE(80)
					_this->buffer = tmp9;
					HX_STACK_LINE(80)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(80)
					tmp6 = _this;
				}
				HX_STACK_LINE(80)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(80)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				if ((tmp6)){
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(80)
						::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(80)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(80)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(80)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(80)
						int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(80)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(80)
						int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(80)
						int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(80)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(80)
						if ((tmp15)){
							HX_STACK_LINE(80)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(80)
							int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(80)
							int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(80)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(80)
							{
								HX_STACK_LINE(80)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(80)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(80)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(80)
								this2 = tmp19;
								HX_STACK_LINE(80)
								tmp17 = this2;
							}
							HX_STACK_LINE(80)
							_this->buffer = tmp17;
							HX_STACK_LINE(80)
							::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(80)
							int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(80)
							int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(80)
							_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
						}
						else{
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(80)
						int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(80)
						_this->byteLength = tmp16;
						HX_STACK_LINE(80)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(80)
						_this->length = srcLength;
						HX_STACK_LINE(80)
						tmp7 = _this;
					}
					HX_STACK_LINE(80)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(80)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					if ((tmp7)){
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(80)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(80)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(80)
							if ((tmp10)){
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(80)
							int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(80)
							bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(80)
							if ((tmp12)){
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(80)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(80)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(80)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(80)
							bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(80)
							if ((tmp14)){
								HX_STACK_LINE(80)
								int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								newByteLength = tmp15;
								HX_STACK_LINE(80)
								int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								if ((tmp17)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(80)
								bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(80)
								if ((tmp18)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(80)
								int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								newByteLength = tmp15;
								HX_STACK_LINE(80)
								int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(80)
								bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								if ((tmp17)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(80)
							_this->buffer = null();
							HX_STACK_LINE(80)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(80)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(80)
							Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(80)
							int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(80)
							_this->length = tmp16;
							HX_STACK_LINE(80)
							tmp8 = _this;
						}
						HX_STACK_LINE(80)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(80)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(80)
		tmp3 = this1;
	}
	HX_STACK_LINE(80)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp4 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	tmp4->defaultValue = tmp3;
	HX_STACK_LINE(82)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			if ((tmp6)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp7;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(85)
			int tmp8 = a->components;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				switch( (int)(tmp10)){
					case (int)5120: case (int)5121: {
						HX_STACK_LINE(85)
						tmp9 = (int)1;
					}
					;break;
					case (int)5122: case (int)5123: {
						HX_STACK_LINE(85)
						tmp9 = (int)2;
					}
					;break;
					default: {
						HX_STACK_LINE(85)
						tmp9 = (int)4;
					}
				}
			}
			HX_STACK_LINE(85)
			int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(85)
			hx::AddEq(this->maxElementsPerVertex,tmp12);
		}
	}
	HX_STACK_LINE(88)
	int tmp5 = maxSprites;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	int tmp6 = this->maxElementsPerVertex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	this->vertexArraySize = tmp9;
	HX_STACK_LINE(89)
	int tmp10 = (maxSprites * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	this->indexArraySize = tmp10;
	HX_STACK_LINE(91)
	int tmp11 = this->vertexArraySize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp12 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,tmp11,false);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	this->vertexArray = tmp12;
	HX_STACK_LINE(92)
	::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp14 = this->vertexArray;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(92)
		::haxe::io::Bytes buffer = tmp14->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(92)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(92)
		bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(92)
		if ((tmp15)){
			HX_STACK_LINE(92)
			::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			this1 = tmp16;
		}
		else{
			HX_STACK_LINE(92)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			if ((tmp16)){
				HX_STACK_LINE(92)
				::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(92)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(92)
					int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(92)
					_this->length = tmp19;
					HX_STACK_LINE(92)
					int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(92)
					_this->byteLength = tmp20;
					HX_STACK_LINE(92)
					::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(92)
						int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(92)
						this2 = tmp23;
						HX_STACK_LINE(92)
						tmp21 = this2;
					}
					HX_STACK_LINE(92)
					_this->buffer = tmp21;
					HX_STACK_LINE(92)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(92)
					tmp17 = _this;
				}
				HX_STACK_LINE(92)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(92)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				if ((tmp17)){
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(92)
						::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(92)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(92)
						int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(92)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(92)
						int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(92)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(92)
						int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(92)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(92)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(92)
						int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(92)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(92)
						if ((tmp26)){
							HX_STACK_LINE(92)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(92)
							int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(92)
							int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(92)
							{
								HX_STACK_LINE(92)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(92)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(92)
								::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(92)
								this2 = tmp30;
								HX_STACK_LINE(92)
								tmp28 = this2;
							}
							HX_STACK_LINE(92)
							_this->buffer = tmp28;
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(92)
							int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(92)
							int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(92)
							_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
						}
						else{
							HX_STACK_LINE(92)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(92)
						int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(92)
						_this->byteLength = tmp27;
						HX_STACK_LINE(92)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(92)
						_this->length = srcLength;
						HX_STACK_LINE(92)
						tmp18 = _this;
					}
					HX_STACK_LINE(92)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp18 = (buffer != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					if ((tmp18)){
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(92)
							bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(92)
							if ((tmp21)){
								HX_STACK_LINE(92)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(92)
							int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(92)
							bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(92)
							if ((tmp23)){
								HX_STACK_LINE(92)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(92)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(92)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(92)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(92)
							bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(92)
							if ((tmp24)){
								HX_STACK_LINE(92)
								int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(92)
								newByteLength = tmp25;
								HX_STACK_LINE(92)
								int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(92)
								bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(92)
								if ((tmp27)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(92)
								bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(92)
								if ((tmp28)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(92)
								int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(92)
								newByteLength = tmp25;
								HX_STACK_LINE(92)
								int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(92)
								int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(92)
								bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(92)
								if ((tmp27)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(92)
							_this->buffer = buffer;
							HX_STACK_LINE(92)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(92)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(92)
							Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(92)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(92)
							_this->length = tmp26;
							HX_STACK_LINE(92)
							tmp19 = _this;
						}
						HX_STACK_LINE(92)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(92)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(92)
		tmp13 = this1;
	}
	HX_STACK_LINE(92)
	this->positions = tmp13;
	HX_STACK_LINE(93)
	::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(93)
		::haxe::io::Bytes buffer = tmp15->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(93)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(93)
		bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(93)
		if ((tmp16)){
			HX_STACK_LINE(93)
			::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			this1 = tmp17;
		}
		else{
			HX_STACK_LINE(93)
			bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			if ((tmp17)){
				HX_STACK_LINE(93)
				::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(93)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(93)
					int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(93)
					_this->length = tmp20;
					HX_STACK_LINE(93)
					int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(93)
					_this->byteLength = tmp21;
					HX_STACK_LINE(93)
					::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(93)
						int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(93)
						::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(93)
						this2 = tmp24;
						HX_STACK_LINE(93)
						tmp22 = this2;
					}
					HX_STACK_LINE(93)
					_this->buffer = tmp22;
					HX_STACK_LINE(93)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(93)
					tmp18 = _this;
				}
				HX_STACK_LINE(93)
				this1 = tmp18;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				if ((tmp18)){
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(93)
						::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(93)
						::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(93)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(93)
						int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(93)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(93)
						int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(93)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(93)
						int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(93)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(93)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(93)
						int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(93)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(93)
						if ((tmp27)){
							HX_STACK_LINE(93)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(93)
							int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(93)
							int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(93)
							::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(93)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(93)
								this2 = tmp31;
								HX_STACK_LINE(93)
								tmp29 = this2;
							}
							HX_STACK_LINE(93)
							_this->buffer = tmp29;
							HX_STACK_LINE(93)
							::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(93)
							int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(93)
							int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(93)
							_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(93)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(93)
						int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(93)
						_this->byteLength = tmp28;
						HX_STACK_LINE(93)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(93)
						_this->length = srcLength;
						HX_STACK_LINE(93)
						tmp19 = _this;
					}
					HX_STACK_LINE(93)
					this1 = tmp19;
				}
				else{
					HX_STACK_LINE(93)
					bool tmp19 = (buffer != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					if ((tmp19)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(93)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(93)
							if ((tmp22)){
								HX_STACK_LINE(93)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(93)
							int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(93)
							bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(93)
							if ((tmp24)){
								HX_STACK_LINE(93)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(93)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(93)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(93)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(93)
							bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(93)
							if ((tmp25)){
								HX_STACK_LINE(93)
								int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(93)
								newByteLength = tmp26;
								HX_STACK_LINE(93)
								int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(93)
								bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(93)
								if ((tmp28)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(93)
								bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(93)
								if ((tmp29)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(93)
								int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(93)
								newByteLength = tmp26;
								HX_STACK_LINE(93)
								int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(93)
								int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(93)
								bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(93)
								if ((tmp28)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(93)
							_this->buffer = buffer;
							HX_STACK_LINE(93)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(93)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(93)
							Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(93)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(93)
							_this->length = tmp27;
							HX_STACK_LINE(93)
							tmp20 = _this;
						}
						HX_STACK_LINE(93)
						this1 = tmp20;
					}
					else{
						HX_STACK_LINE(93)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
					}
				}
			}
		}
		HX_STACK_LINE(93)
		tmp14 = this1;
	}
	HX_STACK_LINE(93)
	this->colors = tmp14;
	HX_STACK_LINE(95)
	::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		int tmp16 = this->indexArraySize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		Dynamic elements = tmp16;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(95)
		bool tmp17 = (elements != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(95)
		if ((tmp17)){
			HX_STACK_LINE(95)
			::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)6);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			this1 = tmp18;
		}
		else{
			HX_STACK_LINE(95)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			if ((tmp18)){
				HX_STACK_LINE(95)
				::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(95)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(95)
					int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(95)
					_this->length = tmp21;
					HX_STACK_LINE(95)
					int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(95)
					_this->byteLength = tmp22;
					HX_STACK_LINE(95)
					::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(95)
						int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(95)
						this2 = tmp25;
						HX_STACK_LINE(95)
						tmp23 = this2;
					}
					HX_STACK_LINE(95)
					_this->buffer = tmp23;
					HX_STACK_LINE(95)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(95)
					tmp19 = _this;
				}
				HX_STACK_LINE(95)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(95)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				if ((tmp19)){
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(95)
						::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(95)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(95)
						int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(95)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(95)
						int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(95)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(95)
						int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(95)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(95)
						int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(95)
						int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(95)
						if ((tmp28)){
							HX_STACK_LINE(95)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(95)
							int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(95)
							int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(95)
								int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(95)
								this2 = tmp32;
								HX_STACK_LINE(95)
								tmp30 = this2;
							}
							HX_STACK_LINE(95)
							_this->buffer = tmp30;
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(95)
							int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(95)
							int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(95)
							_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
						}
						else{
							HX_STACK_LINE(95)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(95)
						int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(95)
						_this->byteLength = tmp29;
						HX_STACK_LINE(95)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(95)
						_this->length = srcLength;
						HX_STACK_LINE(95)
						tmp20 = _this;
					}
					HX_STACK_LINE(95)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(95)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					if ((tmp20)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(95)
							bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(95)
							if ((tmp23)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(95)
							bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(95)
							if ((tmp25)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(95)
							int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(95)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(95)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(95)
							bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(95)
							if ((tmp27)){
								HX_STACK_LINE(95)
								int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(95)
								newByteLength = tmp28;
								HX_STACK_LINE(95)
								int tmp29 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(95)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(95)
								if ((tmp30)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(95)
								bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(95)
								if ((tmp31)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(95)
								int tmp28 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(95)
								newByteLength = tmp28;
								HX_STACK_LINE(95)
								int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(95)
								int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(95)
								bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(95)
								if ((tmp30)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(95)
							_this->buffer = null();
							HX_STACK_LINE(95)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(95)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(95)
							Float tmp28 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(95)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(95)
							_this->length = tmp29;
							HX_STACK_LINE(95)
							tmp21 = _this;
						}
						HX_STACK_LINE(95)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(95)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
					}
				}
			}
		}
		HX_STACK_LINE(95)
		tmp15 = this1;
	}
	HX_STACK_LINE(95)
	this->indices = tmp15;
	HX_STACK_LINE(97)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(97)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(98)
	while((true)){
		HX_STACK_LINE(98)
		int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(98)
		int tmp17 = this->indexArraySize;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(98)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		if ((tmp19)){
			HX_STACK_LINE(98)
			break;
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(99)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (i * (int)2)),j);
				HX_STACK_LINE(99)
				j;
			}
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			int tmp21 = (j + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(100)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(100)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)1)) * (int)2)),val);
				HX_STACK_LINE(100)
				val;
			}
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(101)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)2)) * (int)2)),val);
				HX_STACK_LINE(101)
				val;
			}
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(102)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(102)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)3)) * (int)2)),j);
				HX_STACK_LINE(102)
				j;
			}
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(103)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(103)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)4)) * (int)2)),val);
				HX_STACK_LINE(103)
				val;
			}
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			int tmp21 = (j + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(104)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(104)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)5)) * (int)2)),val);
				HX_STACK_LINE(104)
				val;
			}
		}
		HX_STACK_LINE(105)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(106)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(109)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(109)
	this->currentState = tmp16;
	HX_STACK_LINE(110)
	this->dirty = true;
	HX_STACK_LINE(111)
	this->drawing = false;
	HX_STACK_LINE(112)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(114)
	::lime::graphics::GLRenderContext tmp17 = gl;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(114)
	this->setContext(tmp17);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(gl,__o_maxSprites);
	return _result_;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",118,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		tmp->destroy();
		HX_STACK_LINE(120)
		this->vertexArray = null();
		HX_STACK_LINE(122)
		this->indices = null();
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					int buffer1 = buffer->id;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(123)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(buffer1);
				}
				HX_STACK_LINE(123)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(125)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp1 = this->currentState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		tmp1->destroy();
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				if ((tmp3)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(126)
				++(_g);
				HX_STACK_LINE(127)
				state->destroy();
			}
		}
		HX_STACK_LINE(130)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",133,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(135)
		this->renderSession = renderSession;
		HX_STACK_LINE(136)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		this->shader = tmp;
		HX_STACK_LINE(137)
		this->drawing = true;
		HX_STACK_LINE(138)
		::openfl::geom::Rectangle tmp1 = clipRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		this->start(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",142,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		this->stop();
		HX_STACK_LINE(144)
		this->clipRect = null();
		HX_STACK_LINE(145)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",148,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(149)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		if ((tmp1)){
			HX_STACK_LINE(150)
			this->stop();
		}
		HX_STACK_LINE(152)
		this->dirty = true;
		HX_STACK_LINE(153)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",157,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,::openfl::display::BlendMode blendMode,::openfl::display::Shader flashShader,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_bgra){
Dynamic alpha = __o_alpha.Default(1);
bool bgra = __o_bgra.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",160,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(flashShader,"flashShader")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
	HX_STACK_ARG(bgra,"bgra")
{
		HX_STACK_LINE(161)
		bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(161)
			return null();
		}
		HX_STACK_LINE(162)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		::lime::graphics::opengl::GLTexture tmp2 = bitmapData->getTexture(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(164)
		int tmp3 = this->batchedSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		int tmp4 = this->maxSprites;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		if ((tmp5)){
			HX_STACK_LINE(165)
			this->flush();
		}
		HX_STACK_LINE(168)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(169)
		bool tmp6 = (uvs == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		if ((tmp6)){
			HX_STACK_LINE(169)
			return null();
		}
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			bool tmp7 = (flashShader != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			if ((tmp7)){
				HX_STACK_LINE(171)
				::lime::graphics::GLRenderContext tmp8 = this->gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(171)
				flashShader->__init(tmp8);
				HX_STACK_LINE(171)
				flashShader->__shader->wrapS = flashShader->repeatX;
				HX_STACK_LINE(171)
				flashShader->__shader->wrapT = flashShader->repeatY;
				HX_STACK_LINE(171)
				flashShader->__shader->smooth = flashShader->smooth;
				HX_STACK_LINE(171)
				flashShader->__shader->blendMode = flashShader->blendMode;
				HX_STACK_LINE(171)
				::String tmp9 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(171)
				::openfl::display::GLShaderParameter tmp10 = flashShader->data->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(171)
				::openfl::display::GLShaderParameter objSize = tmp10;		HX_STACK_VAR(objSize,"objSize");
				HX_STACK_LINE(171)
				::String tmp11 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(171)
				::openfl::display::GLShaderParameter tmp12 = flashShader->data->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(171)
				::openfl::display::GLShaderParameter texSize = tmp12;		HX_STACK_VAR(texSize,"texSize");
				HX_STACK_LINE(171)
				bool tmp13 = (bitmapData != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(171)
				if ((tmp13)){
					HX_STACK_LINE(171)
					int tmp14 = bitmapData->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(171)
					objSize->value[(int)0] = tmp14;
					HX_STACK_LINE(171)
					int tmp15 = bitmapData->height;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(171)
					objSize->value[(int)1] = tmp15;
					HX_STACK_LINE(171)
					bool tmp16 = (bitmapData->__pingPongTexture != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(171)
					if ((tmp16)){
						HX_STACK_LINE(171)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(171)
						{
							HX_STACK_LINE(171)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bitmapData->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(171)
							bool tmp18 = _this->__swapped;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(171)
							if ((tmp18)){
								HX_STACK_LINE(171)
								tmp17 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(171)
								tmp17 = _this->__texture0;
							}
						}
						HX_STACK_LINE(171)
						int tmp18 = tmp17->__width;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(171)
						texSize->value[(int)0] = tmp18;
						HX_STACK_LINE(171)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(171)
						{
							HX_STACK_LINE(171)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bitmapData->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(171)
							bool tmp20 = _this->__swapped;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(171)
							if ((tmp20)){
								HX_STACK_LINE(171)
								tmp19 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(171)
								tmp19 = _this->__texture0;
							}
						}
						HX_STACK_LINE(171)
						int tmp20 = tmp19->__height;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(171)
						texSize->value[(int)1] = tmp20;
					}
					else{
						HX_STACK_LINE(171)
						int tmp17 = bitmapData->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(171)
						texSize->value[(int)0] = tmp17;
						HX_STACK_LINE(171)
						int tmp18 = bitmapData->height;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(171)
						texSize->value[(int)1] = tmp18;
					}
				}
				else{
					HX_STACK_LINE(171)
					objSize->value[(int)0] = (int)0;
					HX_STACK_LINE(171)
					objSize->value[(int)1] = (int)0;
					HX_STACK_LINE(171)
					texSize->value[(int)0] = (int)0;
					HX_STACK_LINE(171)
					texSize->value[(int)1] = (int)0;
				}
			}
		}
		HX_STACK_LINE(173)
		Float tmp7 = (alpha * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		int tmp11 = (int(tmp10) | int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(173)
		int color = tmp11;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			this->enableColor = tmp12;
			HX_STACK_LINE(176)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(176)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(176)
			if ((tmp15)){
				HX_STACK_LINE(176)
				this->flush();
				HX_STACK_LINE(176)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(176)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(176)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(176)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(176)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(176)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(176)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(176)
						if ((tmp20)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(176)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(176)
						++(_g);
						HX_STACK_LINE(176)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(176)
						if ((tmp22)){
							HX_STACK_LINE(176)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(176)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(176)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(176)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(176)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(176)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(176)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(176)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(176)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(176)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(176)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(176)
				tmp18 = r;
			}
			HX_STACK_LINE(176)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(178)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(178)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(178)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(178)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(178)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(179)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(179)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(179)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(179)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(179)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(179)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(179)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(179)
			bool tmp16 = (pixelSnapping == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(179)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(179)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(179)
			if ((tmp17)){
				HX_STACK_LINE(179)
				tmp18 = (pixelSnapping == ::openfl::display::PixelSnapping_obj::NEVER);
			}
			else{
				HX_STACK_LINE(179)
				tmp18 = true;
			}
			HX_STACK_LINE(179)
			if ((tmp18)){
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),tx);
						HX_STACK_LINE(179)
						tx;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),ty);
						HX_STACK_LINE(179)
						ty;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (b * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = (c * height);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = tx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					Float val = tmp24;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = (b * width);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ty;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					Float val = tmp24;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (c * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = tx;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float val = tmp21;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = ty;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float val = tmp21;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (b * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = (c * height);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = tx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					Float tmp25 = ::Math_obj::fround(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(179)
					Float val = tmp25;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = (b * width);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ty;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					Float tmp25 = ::Math_obj::fround(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(179)
					Float val = tmp25;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (c * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(179)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(179)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(179)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
						HX_STACK_LINE(179)
						val;
					}
				}
			}
			HX_STACK_LINE(179)
			bool tmp19 = this->enableColor;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(179)
			if ((tmp19)){
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->colors;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp22 = this->colors;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView this2 = tmp22;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(179)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp24 = this->colors;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView this3 = tmp24;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(179)
						int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp26 = this->colors;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView this4 = tmp26;		HX_STACK_VAR(this4,"this4");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(179)
								::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((index + (int)19)) * (int)4)),color);
								HX_STACK_LINE(179)
								tmp25 = color;
							}
						}
						HX_STACK_LINE(179)
						int val = tmp25;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(179)
							::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((index + (int)14)) * (int)4)),val);
							HX_STACK_LINE(179)
							tmp23 = val;
						}
					}
					HX_STACK_LINE(179)
					int val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(179)
						::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((index + (int)9)) * (int)4)),val);
						HX_STACK_LINE(179)
						tmp21 = val;
					}
				}
				HX_STACK_LINE(179)
				int val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((index + (int)4)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->x0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)2)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->y0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)3)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->x1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)7)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->y1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)8)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->x2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)12)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->y2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)13)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->x3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)17)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			{
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				Float val = uvs->y3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(179)
				{
					HX_STACK_LINE(179)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(179)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)18)) * (int)4)),val);
					HX_STACK_LINE(179)
					val;
				}
			}
			HX_STACK_LINE(179)
			int tmp20 = (index + (int)20);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(179)
			this->writtenVertexBytes = tmp20;
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(181)
			int index1 = tmp16;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(181)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->states->__get(index1).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(181)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp17;		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(181)
			bool tmp18 = (state == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(181)
			if ((tmp18)){
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp19 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(181)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp20 = this->states[index1] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				state = tmp20;
			}
			HX_STACK_LINE(181)
			state->texture = texture;
			HX_STACK_LINE(181)
			state->textureSmooth = smoothing;
			HX_STACK_LINE(181)
			state->blendMode = blendMode;
			HX_STACK_LINE(181)
			bool tmp19 = (ct != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(181)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(181)
			if ((tmp19)){
				HX_STACK_LINE(181)
				tmp20 = ct->__isDefault();
			}
			else{
				HX_STACK_LINE(181)
				tmp20 = false;
			}
			HX_STACK_LINE(181)
			::openfl::geom::ColorTransform tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(181)
			if ((tmp20)){
				HX_STACK_LINE(181)
				tmp21 = null();
			}
			else{
				HX_STACK_LINE(181)
				tmp21 = ct;
			}
			HX_STACK_LINE(181)
			state->colorTransform = tmp21;
			HX_STACK_LINE(181)
			state->skipColorTransformAlpha = true;
			HX_STACK_LINE(181)
			bool tmp22 = (flashShader == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(181)
			if ((tmp22)){
				HX_STACK_LINE(181)
				state->shader = null();
				HX_STACK_LINE(181)
				state->shaderData = null();
			}
			else{
				HX_STACK_LINE(181)
				state->shader = flashShader->__shader;
				HX_STACK_LINE(181)
				state->shaderData = flashShader->data;
			}
		}
		HX_STACK_LINE(183)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,::openfl::display::Shader flashShader,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",186,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(flashShader,"flashShader")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(188)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		::lime::graphics::opengl::GLTexture tmp1 = sheet->__bitmap->getTexture(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		::lime::graphics::opengl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(189)
		bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(189)
			return null();
		}
		HX_STACK_LINE(191)
		int tmp3 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		bool useScale = tmp4;		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(192)
		int tmp5 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		bool useRotation = tmp6;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(193)
		int tmp7 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		bool useTransform = tmp8;		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(194)
		int tmp9 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(194)
		bool useRGB = tmp10;		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(195)
		int tmp11 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		bool useAlpha = tmp12;		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(196)
		int tmp13 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(196)
		bool useRect = tmp14;		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(197)
		int tmp15 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(197)
		bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(197)
		bool useOrigin = tmp16;		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(199)
		::openfl::display::BlendMode tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int tmp18 = (int(flags) & int((int)983040));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(199)
			int _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(199)
			int tmp19 = _g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(199)
			switch( (int)(tmp19)){
				case (int)65536: {
					HX_STACK_LINE(200)
					tmp17 = ::openfl::display::BlendMode_obj::ADD;
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(201)
					tmp17 = ::openfl::display::BlendMode_obj::MULTIPLY;
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(202)
					tmp17 = ::openfl::display::BlendMode_obj::SCREEN;
				}
				;break;
				case (int)524288: {
					HX_STACK_LINE(203)
					tmp17 = ::openfl::display::BlendMode_obj::SUBTRACT;
				}
				;break;
				default: {
					HX_STACK_LINE(204)
					int tmp20 = (int(flags) & int((int)15728640));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(204)
					int _g1 = tmp20;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(204)
					int tmp21 = _g1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(204)
					switch( (int)(tmp21)){
						case (int)1048576: {
							HX_STACK_LINE(205)
							tmp17 = ::openfl::display::BlendMode_obj::DARKEN;
						}
						;break;
						case (int)2097152: {
							HX_STACK_LINE(206)
							tmp17 = ::openfl::display::BlendMode_obj::LIGHTEN;
						}
						;break;
						case (int)4194304: {
							HX_STACK_LINE(207)
							tmp17 = ::openfl::display::BlendMode_obj::OVERLAY;
						}
						;break;
						case (int)8388608: {
							HX_STACK_LINE(208)
							tmp17 = ::openfl::display::BlendMode_obj::HARDLIGHT;
						}
						;break;
						default: {
							HX_STACK_LINE(209)
							int tmp22 = (int(flags) & int((int)251658240));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(209)
							int _g2 = tmp22;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(209)
							int tmp23 = _g2;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(209)
							switch( (int)(tmp23)){
								case (int)16777216: {
									HX_STACK_LINE(210)
									tmp17 = ::openfl::display::BlendMode_obj::DIFFERENCE;
								}
								;break;
								case (int)33554432: {
									HX_STACK_LINE(211)
									tmp17 = ::openfl::display::BlendMode_obj::INVERT;
								}
								;break;
								default: {
									HX_STACK_LINE(212)
									tmp17 = ::openfl::display::BlendMode_obj::NORMAL;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(199)
		::openfl::display::BlendMode blendMode = tmp17;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(217)
		bool tmp18 = useTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(217)
		if ((tmp18)){
			HX_STACK_LINE(217)
			useScale = false;
			HX_STACK_LINE(217)
			useRotation = false;
		}
		HX_STACK_LINE(219)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(220)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(221)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(222)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(223)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(225)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(227)
		bool tmp19 = useRect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(227)
		if ((tmp19)){
			HX_STACK_LINE(227)
			bool tmp20 = useOrigin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(227)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(227)
			if ((tmp20)){
				HX_STACK_LINE(227)
				tmp21 = (int)8;
			}
			else{
				HX_STACK_LINE(227)
				tmp21 = (int)6;
			}
			HX_STACK_LINE(227)
			numValues = tmp21;
		}
		HX_STACK_LINE(228)
		bool tmp20 = useScale;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(228)
		if ((tmp20)){
			HX_STACK_LINE(228)
			scaleIndex = numValues;
			HX_STACK_LINE(228)
			(numValues)++;
		}
		HX_STACK_LINE(229)
		bool tmp21 = useRotation;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(229)
		if ((tmp21)){
			HX_STACK_LINE(229)
			rotationIndex = numValues;
			HX_STACK_LINE(229)
			(numValues)++;
		}
		HX_STACK_LINE(230)
		bool tmp22 = useTransform;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(230)
		if ((tmp22)){
			HX_STACK_LINE(230)
			transformIndex = numValues;
			HX_STACK_LINE(230)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(231)
		bool tmp23 = useRGB;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(231)
		if ((tmp23)){
			HX_STACK_LINE(231)
			rgbIndex = numValues;
			HX_STACK_LINE(231)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(232)
		bool tmp24 = useAlpha;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(232)
		if ((tmp24)){
			HX_STACK_LINE(232)
			alphaIndex = numValues;
			HX_STACK_LINE(232)
			(numValues)++;
		}
		HX_STACK_LINE(234)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(235)
		bool tmp25 = (count >= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(235)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(235)
		if ((tmp25)){
			HX_STACK_LINE(235)
			tmp26 = (totalCount > count);
		}
		else{
			HX_STACK_LINE(235)
			tmp26 = false;
		}
		HX_STACK_LINE(235)
		if ((tmp26)){
			HX_STACK_LINE(235)
			totalCount = count;
		}
		HX_STACK_LINE(236)
		Float tmp27 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(236)
		int tmp28 = ::Math_obj::ceil(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(236)
		int itemCount = tmp28;		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(237)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(239)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(240)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(241)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(242)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(243)
		Float x = ((Float)0.0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(243)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(244)
		Float alpha = ((Float)1.0);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(244)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(244)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(245)
		Float scale = ((Float)1.0);		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(245)
		Float rotation = ((Float)0.0);		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(246)
		Float cosTheta = ((Float)1.0);		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(246)
		Float sinTheta = ((Float)0.0);		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(247)
		Float a = ((Float)0.0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(247)
		Float b = ((Float)0.0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(247)
		Float c = ((Float)0.0);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(247)
		Float d = ((Float)0.0);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(247)
		Float tx = ((Float)0.0);		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(247)
		Float ty = ((Float)0.0);		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(248)
		Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(248)
		Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(250)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(252)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(253)
		Float tMa = ((Float)1.0);		HX_STACK_VAR(tMa,"tMa");
		HX_STACK_LINE(253)
		Float tMb = ((Float)0.0);		HX_STACK_VAR(tMb,"tMb");
		HX_STACK_LINE(254)
		Float tMc = ((Float)0.0);		HX_STACK_VAR(tMc,"tMc");
		HX_STACK_LINE(254)
		Float tMd = ((Float)1.0);		HX_STACK_VAR(tMd,"tMd");
		HX_STACK_LINE(255)
		Float tMtx = ((Float)0.0);		HX_STACK_VAR(tMtx,"tMtx");
		HX_STACK_LINE(255)
		Float tMty = ((Float)0.0);		HX_STACK_VAR(tMty,"tMty");
		HX_STACK_LINE(257)
		Float oMa = oMatrix->a;		HX_STACK_VAR(oMa,"oMa");
		HX_STACK_LINE(258)
		Float oMb = oMatrix->b;		HX_STACK_VAR(oMb,"oMb");
		HX_STACK_LINE(259)
		Float oMc = oMatrix->c;		HX_STACK_VAR(oMc,"oMc");
		HX_STACK_LINE(260)
		Float oMd = oMatrix->d;		HX_STACK_VAR(oMd,"oMd");
		HX_STACK_LINE(261)
		Float oMtx = oMatrix->tx;		HX_STACK_VAR(oMtx,"oMtx");
		HX_STACK_LINE(262)
		Float oMty = oMatrix->ty;		HX_STACK_VAR(oMty,"oMty");
		HX_STACK_LINE(264)
		Float rx = ((Float)0.0);		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(264)
		Float ry = ((Float)0.0);		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(264)
		Float rw = ((Float)0.0);		HX_STACK_VAR(rw,"rw");
		HX_STACK_LINE(264)
		Float rh = ((Float)0.0);		HX_STACK_VAR(rh,"rh");
		HX_STACK_LINE(265)
		Float tuvx = ((Float)0.0);		HX_STACK_VAR(tuvx,"tuvx");
		HX_STACK_LINE(265)
		Float tuvy = ((Float)0.0);		HX_STACK_VAR(tuvy,"tuvy");
		HX_STACK_LINE(265)
		Float tuvw = ((Float)0.0);		HX_STACK_VAR(tuvw,"tuvw");
		HX_STACK_LINE(265)
		Float tuvh = ((Float)0.0);		HX_STACK_VAR(tuvh,"tuvh");
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(268)
			this->enableColor = tmp29;
			HX_STACK_LINE(268)
			bool tmp30 = this->enableColor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(268)
			bool tmp31 = this->lastEnableColor;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(268)
			bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(268)
			if ((tmp32)){
				HX_STACK_LINE(268)
				this->flush();
				HX_STACK_LINE(268)
				bool tmp33 = this->enableColor;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(268)
				this->lastEnableColor = tmp33;
			}
			HX_STACK_LINE(268)
			bool tmp33 = this->lastEnableColor;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(268)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp34 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(268)
			tmp34->enabled = tmp33;
			HX_STACK_LINE(268)
			int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(268)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(268)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(268)
					while((true)){
						HX_STACK_LINE(268)
						bool tmp36 = (_g < _g1->length);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(268)
						bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(268)
						if ((tmp37)){
							HX_STACK_LINE(268)
							break;
						}
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp38 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = tmp38;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(268)
						++(_g);
						HX_STACK_LINE(268)
						bool tmp39 = a1->enabled;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(268)
						if ((tmp39)){
							HX_STACK_LINE(268)
							int tmp40 = a1->components;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(268)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(268)
								int tmp42 = _g2;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(268)
								switch( (int)(tmp42)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(268)
										tmp41 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(268)
										tmp41 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(268)
										tmp41 = (int)4;
									}
								}
							}
							HX_STACK_LINE(268)
							int tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(268)
							Float tmp43 = (Float(tmp42) / Float((int)4));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(268)
							int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(268)
							hx::AddEq(r,tmp44);
						}
					}
				}
				HX_STACK_LINE(268)
				tmp35 = r;
			}
			HX_STACK_LINE(268)
			this->elementsPerVertex = tmp35;
		}
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			bool tmp29 = (flashShader != null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(270)
			if ((tmp29)){
				HX_STACK_LINE(270)
				::lime::graphics::GLRenderContext tmp30 = this->gl;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(270)
				flashShader->__init(tmp30);
				HX_STACK_LINE(270)
				flashShader->__shader->wrapS = flashShader->repeatX;
				HX_STACK_LINE(270)
				flashShader->__shader->wrapT = flashShader->repeatY;
				HX_STACK_LINE(270)
				flashShader->__shader->smooth = flashShader->smooth;
				HX_STACK_LINE(270)
				flashShader->__shader->blendMode = flashShader->blendMode;
				HX_STACK_LINE(270)
				::String tmp31 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(270)
				::openfl::display::GLShaderParameter tmp32 = flashShader->data->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(270)
				::openfl::display::GLShaderParameter objSize = tmp32;		HX_STACK_VAR(objSize,"objSize");
				HX_STACK_LINE(270)
				::String tmp33 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(270)
				::openfl::display::GLShaderParameter tmp34 = flashShader->data->get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(270)
				::openfl::display::GLShaderParameter texSize = tmp34;		HX_STACK_VAR(texSize,"texSize");
				HX_STACK_LINE(270)
				bool tmp35 = false;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(270)
				if ((tmp35)){
					HX_STACK_LINE(270)
					int tmp36 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(270)
					objSize->value[(int)0] = tmp36;
					HX_STACK_LINE(270)
					int tmp37 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(270)
					objSize->value[(int)1] = tmp37;
					HX_STACK_LINE(270)
					::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp38 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(270)
					bool tmp39 = (tmp38 != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(270)
					if ((tmp39)){
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(270)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp41;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(270)
							bool tmp42 = _this->__swapped;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(270)
							if ((tmp42)){
								HX_STACK_LINE(270)
								tmp40 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(270)
								tmp40 = _this->__texture0;
							}
						}
						HX_STACK_LINE(270)
						int tmp41 = tmp40->__width;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(270)
						texSize->value[(int)0] = tmp41;
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp43 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(270)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp43;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(270)
							bool tmp44 = _this->__swapped;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(270)
							if ((tmp44)){
								HX_STACK_LINE(270)
								tmp42 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(270)
								tmp42 = _this->__texture0;
							}
						}
						HX_STACK_LINE(270)
						int tmp43 = tmp42->__height;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(270)
						texSize->value[(int)1] = tmp43;
					}
					else{
						HX_STACK_LINE(270)
						int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(270)
						texSize->value[(int)0] = tmp40;
						HX_STACK_LINE(270)
						int tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(270)
						texSize->value[(int)1] = tmp41;
					}
				}
				else{
					HX_STACK_LINE(270)
					objSize->value[(int)0] = (int)0;
					HX_STACK_LINE(270)
					objSize->value[(int)1] = (int)0;
					HX_STACK_LINE(270)
					texSize->value[(int)0] = (int)0;
					HX_STACK_LINE(270)
					texSize->value[(int)1] = (int)0;
				}
			}
		}
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			bool tmp29 = (iIndex < totalCount);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(272)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(272)
			if ((tmp30)){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(274)
			int tmp31 = this->batchedSprites;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(274)
			int tmp32 = this->maxSprites;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(274)
			bool tmp33 = (tmp31 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(274)
			if ((tmp33)){
				HX_STACK_LINE(275)
				this->flush();
			}
			HX_STACK_LINE(278)
			int tmp34 = iIndex;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(278)
			Float tmp35 = tileData->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(278)
			x = tmp35;
			HX_STACK_LINE(279)
			int tmp36 = (iIndex + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(279)
			Float tmp37 = tileData->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(279)
			y = tmp37;
			HX_STACK_LINE(281)
			bool tmp38 = useRect;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(281)
			if ((tmp38)){
				HX_STACK_LINE(282)
				tileID = (int)-1;
				HX_STACK_LINE(284)
				int tmp39 = (iIndex + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(284)
				Float tmp40 = tileData->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(284)
				rect->x = tmp40;
				HX_STACK_LINE(285)
				int tmp41 = (iIndex + (int)3);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(285)
				Float tmp42 = tileData->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(285)
				rect->y = tmp42;
				HX_STACK_LINE(286)
				int tmp43 = (iIndex + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(286)
				Float tmp44 = tileData->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(286)
				rect->width = tmp44;
				HX_STACK_LINE(287)
				int tmp45 = (iIndex + (int)5);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(287)
				Float tmp46 = tileData->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(287)
				rect->height = tmp46;
				HX_STACK_LINE(289)
				bool tmp47 = useOrigin;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(289)
				if ((tmp47)){
					HX_STACK_LINE(290)
					int tmp48 = (iIndex + (int)6);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(290)
					Float tmp49 = tileData->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(290)
					center->x = tmp49;
					HX_STACK_LINE(291)
					int tmp50 = (iIndex + (int)7);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(291)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(291)
					center->y = tmp51;
				}
				else{
					HX_STACK_LINE(293)
					center->x = (int)0;
					HX_STACK_LINE(293)
					center->y = (int)0;
				}
				HX_STACK_LINE(296)
				rw = rect->width;
				HX_STACK_LINE(296)
				rh = rect->height;
				HX_STACK_LINE(297)
				Float tmp48 = rect->get_left();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(297)
				int tmp49 = sheet->__bitmap->width;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(297)
				Float tmp50 = (Float(tmp48) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(297)
				tuvx = tmp50;
				HX_STACK_LINE(298)
				Float tmp51 = rect->get_top();		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(298)
				int tmp52 = sheet->__bitmap->height;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(298)
				Float tmp53 = (Float(tmp51) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(298)
				tuvy = tmp53;
				HX_STACK_LINE(299)
				Float tmp54 = rect->get_right();		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(299)
				int tmp55 = sheet->__bitmap->width;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(299)
				Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(299)
				tuvw = tmp56;
				HX_STACK_LINE(300)
				Float tmp57 = rect->get_bottom();		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(300)
				int tmp58 = sheet->__bitmap->height;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(300)
				Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(300)
				tuvh = tmp59;
			}
			else{
				HX_STACK_LINE(302)
				int tmp39 = (iIndex + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(302)
				Float tmp40 = tileData->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(302)
				int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(302)
				tileID = tmp41;
				HX_STACK_LINE(303)
				::openfl::geom::Rectangle tmp42 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(303)
				rect = tmp42;
				HX_STACK_LINE(304)
				::openfl::geom::Point tmp43 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(304)
				center = tmp43;
				HX_STACK_LINE(305)
				::openfl::geom::Rectangle tmp44 = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(305)
				tileUV = tmp44;
				HX_STACK_LINE(307)
				bool tmp45 = (rect != null());		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(307)
				if ((tmp45)){
					HX_STACK_LINE(308)
					rw = rect->width;
					HX_STACK_LINE(308)
					rh = rect->height;
					HX_STACK_LINE(309)
					tuvx = tileUV->x;
					HX_STACK_LINE(309)
					tuvy = tileUV->y;
					HX_STACK_LINE(309)
					tuvw = tileUV->width;
					HX_STACK_LINE(309)
					tuvh = tileUV->height;
				}
			}
			HX_STACK_LINE(313)
			bool tmp39 = (rect != null());		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(313)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(313)
			bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(313)
			if ((tmp40)){
				HX_STACK_LINE(313)
				tmp41 = (rect->width > (int)0);
			}
			else{
				HX_STACK_LINE(313)
				tmp41 = false;
			}
			HX_STACK_LINE(313)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(313)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(313)
			if ((tmp42)){
				HX_STACK_LINE(313)
				tmp43 = (rect->height > (int)0);
			}
			else{
				HX_STACK_LINE(313)
				tmp43 = false;
			}
			HX_STACK_LINE(313)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(313)
			if ((tmp43)){
				HX_STACK_LINE(313)
				tmp44 = (center != null());
			}
			else{
				HX_STACK_LINE(313)
				tmp44 = false;
			}
			HX_STACK_LINE(313)
			if ((tmp44)){
				HX_STACK_LINE(315)
				alpha = (int)1;
				HX_STACK_LINE(316)
				tint = (int)16777215;
				HX_STACK_LINE(317)
				scale = ((Float)1.0);
				HX_STACK_LINE(318)
				rotation = ((Float)0.0);
				HX_STACK_LINE(319)
				cosTheta = ((Float)1.0);
				HX_STACK_LINE(320)
				sinTheta = ((Float)0.0);
				HX_STACK_LINE(322)
				bool tmp45 = useAlpha;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(322)
				if ((tmp45)){
					HX_STACK_LINE(323)
					int tmp46 = (iIndex + alphaIndex);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(323)
					Float tmp47 = tileData->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(323)
					Float tmp48 = object->__worldAlpha;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(323)
					Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(323)
					alpha = tmp49;
				}
				else{
					HX_STACK_LINE(325)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(328)
				bool tmp46 = useRGB;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(328)
				if ((tmp46)){
					HX_STACK_LINE(329)
					int tmp47 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(329)
					Float tmp48 = tileData->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(329)
					Float tmp49 = (tmp48 * (int)255);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(329)
					int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(329)
					int tmp51 = (int(tmp50) << int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(329)
					int tmp52 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(329)
					int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(329)
					Float tmp54 = tileData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(329)
					Float tmp55 = (tmp54 * (int)255);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(329)
					int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(329)
					int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(329)
					int tmp58 = (int(tmp51) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(329)
					int tmp59 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(329)
					int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(329)
					Float tmp61 = tileData->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(329)
					Float tmp62 = (tmp61 * (int)255);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(329)
					int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(329)
					int tmp64 = (int(tmp58) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(329)
					tint = tmp64;
				}
				HX_STACK_LINE(332)
				bool tmp47 = useScale;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(332)
				if ((tmp47)){
					HX_STACK_LINE(333)
					int tmp48 = (iIndex + scaleIndex);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(333)
					Float tmp49 = tileData->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(333)
					scale = tmp49;
				}
				HX_STACK_LINE(336)
				bool tmp48 = useRotation;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(336)
				if ((tmp48)){
					HX_STACK_LINE(337)
					int tmp49 = (iIndex + rotationIndex);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(337)
					Float tmp50 = tileData->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(337)
					rotation = tmp50;
					HX_STACK_LINE(338)
					Float tmp51 = rotation;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(338)
					Float tmp52 = ::Math_obj::cos(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(338)
					cosTheta = tmp52;
					HX_STACK_LINE(339)
					Float tmp53 = rotation;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(339)
					Float tmp54 = ::Math_obj::sin(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(339)
					sinTheta = tmp54;
				}
				HX_STACK_LINE(342)
				bool tmp49 = useTransform;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(342)
				if ((tmp49)){
					HX_STACK_LINE(343)
					int tmp50 = (iIndex + transformIndex);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(343)
					int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(343)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(343)
					a = tmp52;
					HX_STACK_LINE(344)
					int tmp53 = (iIndex + transformIndex);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(344)
					int tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(344)
					Float tmp55 = tileData->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(344)
					b = tmp55;
					HX_STACK_LINE(345)
					int tmp56 = (iIndex + transformIndex);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(345)
					int tmp57 = (tmp56 + (int)2);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(345)
					Float tmp58 = tileData->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(345)
					c = tmp58;
					HX_STACK_LINE(346)
					int tmp59 = (iIndex + transformIndex);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(346)
					int tmp60 = (tmp59 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(346)
					Float tmp61 = tileData->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(346)
					d = tmp61;
				}
				else{
					HX_STACK_LINE(348)
					Float tmp50 = (scale * cosTheta);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(348)
					a = tmp50;
					HX_STACK_LINE(349)
					Float tmp51 = (scale * sinTheta);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(349)
					b = tmp51;
					HX_STACK_LINE(350)
					Float tmp52 = b;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(350)
					Float tmp53 = -(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(350)
					c = tmp53;
					HX_STACK_LINE(351)
					d = a;
				}
				HX_STACK_LINE(354)
				Float tmp50 = (center->x * a);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(354)
				Float tmp51 = (center->y * c);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(354)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(354)
				ox = tmp52;
				HX_STACK_LINE(355)
				Float tmp53 = (center->x * b);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(355)
				Float tmp54 = (center->y * d);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(355)
				Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(355)
				oy = tmp55;
				HX_STACK_LINE(357)
				Float tmp56 = (x - ox);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(357)
				tx = tmp56;
				HX_STACK_LINE(358)
				Float tmp57 = (y - oy);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(358)
				ty = tmp57;
				HX_STACK_LINE(362)
				Float tmp58 = (a * oMa);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(362)
				Float tmp59 = (b * oMc);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(362)
				Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(362)
				Float tmp61 = rw;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(362)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(362)
				tMa = tmp62;
				HX_STACK_LINE(363)
				Float tmp63 = (a * oMb);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(363)
				Float tmp64 = (b * oMd);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(363)
				Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(363)
				Float tmp66 = rw;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(363)
				Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(363)
				tMb = tmp67;
				HX_STACK_LINE(364)
				Float tmp68 = (c * oMa);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(364)
				Float tmp69 = (d * oMc);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(364)
				Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(364)
				Float tmp71 = rh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(364)
				Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(364)
				tMc = tmp72;
				HX_STACK_LINE(365)
				Float tmp73 = (c * oMb);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(365)
				Float tmp74 = (d * oMd);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(365)
				Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(365)
				Float tmp76 = rh;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(365)
				Float tmp77 = (tmp75 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(365)
				tMd = tmp77;
				HX_STACK_LINE(366)
				Float tmp78 = (tx * oMa);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(366)
				Float tmp79 = (ty * oMc);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(366)
				Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(366)
				Float tmp81 = oMtx;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(366)
				Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(366)
				tMtx = tmp82;
				HX_STACK_LINE(367)
				Float tmp83 = (tx * oMb);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(367)
				Float tmp84 = (ty * oMd);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(367)
				Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(367)
				Float tmp86 = oMty;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(367)
				Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(367)
				tMty = tmp87;
				HX_STACK_LINE(369)
				int tmp88 = this->batchedSprites;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(369)
				int tmp89 = (tmp88 * (int)4);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(369)
				int tmp90 = this->elementsPerVertex;		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(369)
				int tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(369)
				bIndex = tmp91;
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(371)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(371)
					{
						HX_STACK_LINE(371)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(371)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (bIndex * (int)4)),tMtx);
						HX_STACK_LINE(371)
						tMtx;
					}
				}
				HX_STACK_LINE(372)
				{
					HX_STACK_LINE(372)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(372)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(372)
					{
						HX_STACK_LINE(372)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(372)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)1)) * (int)4)),tMty);
						HX_STACK_LINE(372)
						tMty;
					}
				}
				HX_STACK_LINE(373)
				{
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(373)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(373)
					Float tmp93 = (tMa + tMtx);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(373)
					Float val = tmp93;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(373)
					{
						HX_STACK_LINE(373)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(373)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)5)) * (int)4)),val);
						HX_STACK_LINE(373)
						val;
					}
				}
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(374)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(374)
					Float tmp93 = (tMb + tMty);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(374)
					Float val = tmp93;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(374)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)6)) * (int)4)),val);
						HX_STACK_LINE(374)
						val;
					}
				}
				HX_STACK_LINE(375)
				{
					HX_STACK_LINE(375)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(375)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(375)
					Float tmp93 = (tMa + tMc);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(375)
					Float tmp94 = tMtx;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(375)
					Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(375)
					Float val = tmp95;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(375)
					{
						HX_STACK_LINE(375)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(375)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)10)) * (int)4)),val);
						HX_STACK_LINE(375)
						val;
					}
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(376)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(376)
					Float tmp93 = (tMd + tMb);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(376)
					Float tmp94 = tMty;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(376)
					Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(376)
					Float val = tmp95;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(376)
					{
						HX_STACK_LINE(376)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(376)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)11)) * (int)4)),val);
						HX_STACK_LINE(376)
						val;
					}
				}
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(377)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(377)
					Float tmp93 = (tMc + tMtx);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(377)
					Float val = tmp93;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(377)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)15)) * (int)4)),val);
						HX_STACK_LINE(377)
						val;
					}
				}
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(378)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(378)
					Float tmp93 = (tMd + tMty);		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(378)
					Float val = tmp93;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(378)
					{
						HX_STACK_LINE(378)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(378)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)16)) * (int)4)),val);
						HX_STACK_LINE(378)
						val;
					}
				}
				HX_STACK_LINE(380)
				{
					HX_STACK_LINE(380)
					::lime::utils::ArrayBufferView tmp92 = this->colors;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(380)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(380)
					int tmp93;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(380)
					{
						HX_STACK_LINE(380)
						::lime::utils::ArrayBufferView tmp94 = this->colors;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(380)
						::lime::utils::ArrayBufferView this2 = tmp94;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(380)
						int tmp95;		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(380)
						{
							HX_STACK_LINE(380)
							::lime::utils::ArrayBufferView tmp96 = this->colors;		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(380)
							::lime::utils::ArrayBufferView this3 = tmp96;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(380)
							int tmp97;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(380)
							{
								HX_STACK_LINE(380)
								::lime::utils::ArrayBufferView tmp98 = this->colors;		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(380)
								::lime::utils::ArrayBufferView this4 = tmp98;		HX_STACK_VAR(this4,"this4");
								HX_STACK_LINE(380)
								Float tmp99 = (alpha * (int)255);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(380)
								int tmp100 = ::Std_obj::_int(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(380)
								int tmp101 = (int(tmp100) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(380)
								int tmp102 = (int(tmp101) << int((int)24));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(380)
								int tmp103 = tint;		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(380)
								int tmp104 = (int(tmp102) | int(tmp103));		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(380)
								int val = tmp104;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(380)
								{
									HX_STACK_LINE(380)
									bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
									HX_STACK_LINE(380)
									::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((bIndex + (int)19)) * (int)4)),val);
									HX_STACK_LINE(380)
									tmp97 = val;
								}
							}
							HX_STACK_LINE(380)
							int val = tmp97;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(380)
							{
								HX_STACK_LINE(380)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(380)
								::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((bIndex + (int)14)) * (int)4)),val);
								HX_STACK_LINE(380)
								tmp95 = val;
							}
						}
						HX_STACK_LINE(380)
						int val = tmp95;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(380)
						{
							HX_STACK_LINE(380)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(380)
							::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((bIndex + (int)9)) * (int)4)),val);
							HX_STACK_LINE(380)
							tmp93 = val;
						}
					}
					HX_STACK_LINE(380)
					int val = tmp93;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(380)
					{
						HX_STACK_LINE(380)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(380)
						::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)4)) * (int)4)),val);
						HX_STACK_LINE(380)
						val;
					}
				}
				HX_STACK_LINE(382)
				{
					HX_STACK_LINE(382)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(382)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(382)
					{
						HX_STACK_LINE(382)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(382)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)2)) * (int)4)),tuvx);
						HX_STACK_LINE(382)
						tuvx;
					}
				}
				HX_STACK_LINE(383)
				{
					HX_STACK_LINE(383)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(383)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(383)
					{
						HX_STACK_LINE(383)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(383)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)3)) * (int)4)),tuvy);
						HX_STACK_LINE(383)
						tuvy;
					}
				}
				HX_STACK_LINE(384)
				{
					HX_STACK_LINE(384)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(384)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(384)
					{
						HX_STACK_LINE(384)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(384)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)7)) * (int)4)),tuvw);
						HX_STACK_LINE(384)
						tuvw;
					}
				}
				HX_STACK_LINE(385)
				{
					HX_STACK_LINE(385)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(385)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(385)
					{
						HX_STACK_LINE(385)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(385)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)8)) * (int)4)),tuvy);
						HX_STACK_LINE(385)
						tuvy;
					}
				}
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(386)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(386)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)12)) * (int)4)),tuvw);
						HX_STACK_LINE(386)
						tuvw;
					}
				}
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(387)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(387)
					{
						HX_STACK_LINE(387)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(387)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)13)) * (int)4)),tuvh);
						HX_STACK_LINE(387)
						tuvh;
					}
				}
				HX_STACK_LINE(388)
				{
					HX_STACK_LINE(388)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(388)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(388)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(388)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)17)) * (int)4)),tuvx);
						HX_STACK_LINE(388)
						tuvx;
					}
				}
				HX_STACK_LINE(389)
				{
					HX_STACK_LINE(389)
					::lime::utils::ArrayBufferView tmp92 = this->positions;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(389)
					::lime::utils::ArrayBufferView this1 = tmp92;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(389)
					{
						HX_STACK_LINE(389)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(389)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)18)) * (int)4)),tuvh);
						HX_STACK_LINE(389)
						tuvh;
					}
				}
				HX_STACK_LINE(391)
				int tmp92 = (bIndex + (int)20);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(391)
				this->writtenVertexBytes = tmp92;
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					int tmp93 = this->batchedSprites;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(393)
					int index = tmp93;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(393)
					::openfl::geom::ColorTransform colorTransform = object->__worldColorTransform;		HX_STACK_VAR(colorTransform,"colorTransform");
					HX_STACK_LINE(393)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp94 = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(393)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp94;		HX_STACK_VAR(state,"state");
					HX_STACK_LINE(393)
					bool tmp95 = (state == null());		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(393)
					if ((tmp95)){
						HX_STACK_LINE(393)
						::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp96 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(393)
						::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp97 = this->states[index] = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(393)
						state = tmp97;
					}
					HX_STACK_LINE(393)
					state->texture = texture;
					HX_STACK_LINE(393)
					state->textureSmooth = smooth;
					HX_STACK_LINE(393)
					state->blendMode = blendMode;
					HX_STACK_LINE(393)
					bool tmp96 = (colorTransform != null());		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(393)
					bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(393)
					if ((tmp96)){
						HX_STACK_LINE(393)
						tmp97 = colorTransform->__isDefault();
					}
					else{
						HX_STACK_LINE(393)
						tmp97 = false;
					}
					HX_STACK_LINE(393)
					::openfl::geom::ColorTransform tmp98;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(393)
					if ((tmp97)){
						HX_STACK_LINE(393)
						tmp98 = null();
					}
					else{
						HX_STACK_LINE(393)
						tmp98 = colorTransform;
					}
					HX_STACK_LINE(393)
					state->colorTransform = tmp98;
					HX_STACK_LINE(393)
					state->skipColorTransformAlpha = false;
					HX_STACK_LINE(393)
					bool tmp99 = (flashShader == null());		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(393)
					if ((tmp99)){
						HX_STACK_LINE(393)
						state->shader = null();
						HX_STACK_LINE(393)
						state->shaderData = null();
					}
					else{
						HX_STACK_LINE(393)
						state->shader = flashShader->__shader;
						HX_STACK_LINE(393)
						state->shaderData = flashShader->data;
					}
				}
				HX_STACK_LINE(395)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(398)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,hx::Null< int >  __o_color,::openfl::display::PixelSnapping pixelSnapping){
int color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",404,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(406)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(407)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(408)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(409)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(410)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(411)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(414)
		bool tmp = (pixelSnapping == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(414)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(414)
		if ((tmp1)){
			HX_STACK_LINE(414)
			tmp2 = (pixelSnapping == ::openfl::display::PixelSnapping_obj::NEVER);
		}
		else{
			HX_STACK_LINE(414)
			tmp2 = true;
		}
		HX_STACK_LINE(414)
		if ((tmp2)){
			HX_STACK_LINE(415)
			{
				HX_STACK_LINE(415)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(415)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(415)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),tx);
					HX_STACK_LINE(415)
					tx;
				}
			}
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(416)
				{
					HX_STACK_LINE(416)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(416)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),ty);
					HX_STACK_LINE(416)
					ty;
				}
			}
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(417)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(417)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(417)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(417)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(417)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
					HX_STACK_LINE(417)
					val;
				}
			}
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(418)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(418)
				Float tmp4 = (b * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(418)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(418)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(418)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
					HX_STACK_LINE(418)
					val;
				}
			}
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(419)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(419)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				Float tmp5 = (c * height);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(419)
				Float tmp7 = tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(419)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(419)
				Float val = tmp8;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(419)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
					HX_STACK_LINE(419)
					val;
				}
			}
			HX_STACK_LINE(420)
			{
				HX_STACK_LINE(420)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(420)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(420)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(420)
				Float tmp5 = (b * width);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(420)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(420)
				Float tmp7 = ty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(420)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(420)
				Float val = tmp8;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(420)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
					HX_STACK_LINE(420)
					val;
				}
			}
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(421)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(421)
				Float tmp4 = (c * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(421)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(421)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(421)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(421)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
					HX_STACK_LINE(421)
					val;
				}
			}
			HX_STACK_LINE(422)
			{
				HX_STACK_LINE(422)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(422)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(422)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(422)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
					HX_STACK_LINE(422)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(424)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(424)
				Float tmp4 = tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(424)
				Float tmp5 = ::Math_obj::fround(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(424)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(424)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),val);
					HX_STACK_LINE(424)
					val;
				}
			}
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(425)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(425)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(425)
				Float tmp4 = ty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(425)
				Float tmp5 = ::Math_obj::fround(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(425)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(425)
				{
					HX_STACK_LINE(425)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(425)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),val);
					HX_STACK_LINE(425)
					val;
				}
			}
			HX_STACK_LINE(426)
			{
				HX_STACK_LINE(426)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(426)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(426)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(426)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(426)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(426)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(426)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(426)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
					HX_STACK_LINE(426)
					val;
				}
			}
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(427)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(427)
				Float tmp4 = (b * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(427)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(427)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(427)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(427)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(427)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
					HX_STACK_LINE(427)
					val;
				}
			}
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(428)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(428)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(428)
				Float tmp5 = (c * height);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(428)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(428)
				Float tmp7 = tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(428)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(428)
				Float tmp9 = ::Math_obj::fround(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(428)
				Float val = tmp9;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(428)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
					HX_STACK_LINE(428)
					val;
				}
			}
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(429)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(429)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(429)
				Float tmp5 = (b * width);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(429)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(429)
				Float tmp7 = ty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(429)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(429)
				Float tmp9 = ::Math_obj::fround(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(429)
				Float val = tmp9;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(429)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
					HX_STACK_LINE(429)
					val;
				}
			}
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(430)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(430)
				Float tmp4 = (c * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(430)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(430)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
					HX_STACK_LINE(430)
					val;
				}
			}
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(431)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(431)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(431)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(431)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(431)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
					HX_STACK_LINE(431)
					val;
				}
			}
		}
		HX_STACK_LINE(435)
		bool tmp3 = this->enableColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(435)
		if ((tmp3)){
			HX_STACK_LINE(436)
			::lime::utils::ArrayBufferView tmp4 = this->colors;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(436)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(436)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				::lime::utils::ArrayBufferView tmp6 = this->colors;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(436)
				::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(436)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					::lime::utils::ArrayBufferView tmp8 = this->colors;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(436)
					::lime::utils::ArrayBufferView this3 = tmp8;		HX_STACK_VAR(this3,"this3");
					HX_STACK_LINE(436)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(436)
						::lime::utils::ArrayBufferView tmp10 = this->colors;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(436)
						::lime::utils::ArrayBufferView this4 = tmp10;		HX_STACK_VAR(this4,"this4");
						HX_STACK_LINE(436)
						{
							HX_STACK_LINE(436)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(436)
							::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((index + (int)19)) * (int)4)),color);
							HX_STACK_LINE(436)
							tmp9 = color;
						}
					}
					HX_STACK_LINE(436)
					int val = tmp9;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(436)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(436)
						::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((index + (int)14)) * (int)4)),val);
						HX_STACK_LINE(436)
						tmp7 = val;
					}
				}
				HX_STACK_LINE(436)
				int val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(436)
				{
					HX_STACK_LINE(436)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(436)
					::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((index + (int)9)) * (int)4)),val);
					HX_STACK_LINE(436)
					tmp5 = val;
				}
			}
			HX_STACK_LINE(436)
			int val = tmp5;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(436)
			{
				HX_STACK_LINE(436)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(436)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((index + (int)4)) * (int)4)),val);
				HX_STACK_LINE(436)
				val;
			}
		}
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(440)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(440)
			Float val = uvs->x0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(440)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)2)) * (int)4)),val);
				HX_STACK_LINE(440)
				val;
			}
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(441)
			Float val = uvs->y0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(441)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)3)) * (int)4)),val);
				HX_STACK_LINE(441)
				val;
			}
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(442)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(442)
			Float val = uvs->x1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(442)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)7)) * (int)4)),val);
				HX_STACK_LINE(442)
				val;
			}
		}
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(443)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(443)
			Float val = uvs->y1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(443)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)8)) * (int)4)),val);
				HX_STACK_LINE(443)
				val;
			}
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(444)
			Float val = uvs->x2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(444)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)12)) * (int)4)),val);
				HX_STACK_LINE(444)
				val;
			}
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(445)
			Float val = uvs->y2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(445)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)13)) * (int)4)),val);
				HX_STACK_LINE(445)
				val;
			}
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(446)
			Float val = uvs->x3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(446)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)17)) * (int)4)),val);
				HX_STACK_LINE(446)
				val;
			}
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(447)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(447)
			Float val = uvs->y3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(447)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)18)) * (int)4)),val);
				HX_STACK_LINE(447)
				val;
			}
		}
		HX_STACK_LINE(449)
		int tmp4 = (index + (int)20);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		this->writtenVertexBytes = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",452,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(453)
		bool tmp = (color != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		this->enableColor = tmp;
		HX_STACK_LINE(455)
		bool tmp1 = this->enableColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(455)
		bool tmp2 = this->lastEnableColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(455)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		if ((tmp3)){
			HX_STACK_LINE(456)
			this->flush();
			HX_STACK_LINE(457)
			bool tmp4 = this->enableColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(457)
			this->lastEnableColor = tmp4;
		}
		HX_STACK_LINE(460)
		bool tmp4 = this->lastEnableColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(460)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(460)
		tmp5->enabled = tmp4;
		HX_STACK_LINE(462)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(462)
			{
				HX_STACK_LINE(462)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(462)
				Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(462)
				while((true)){
					HX_STACK_LINE(462)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(462)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(462)
					if ((tmp8)){
						HX_STACK_LINE(462)
						break;
					}
					HX_STACK_LINE(462)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp9 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(462)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(462)
					++(_g);
					HX_STACK_LINE(462)
					bool tmp10 = a->enabled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(462)
					if ((tmp10)){
						HX_STACK_LINE(462)
						int tmp11 = a->components;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(462)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(462)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(462)
							switch( (int)(tmp13)){
								case (int)5120: case (int)5121: {
									HX_STACK_LINE(462)
									tmp12 = (int)1;
								}
								;break;
								case (int)5122: case (int)5123: {
									HX_STACK_LINE(462)
									tmp12 = (int)2;
								}
								;break;
								default: {
									HX_STACK_LINE(462)
									tmp12 = (int)4;
								}
							}
						}
						HX_STACK_LINE(462)
						int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(462)
						Float tmp14 = (Float(tmp13) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(462)
						int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(462)
						hx::AddEq(r,tmp15);
					}
				}
			}
			HX_STACK_LINE(462)
			tmp6 = r;
		}
		HX_STACK_LINE(462)
		this->elementsPerVertex = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",465,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		int tmp = this->batchedSprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(466)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		if ((tmp1)){
			HX_STACK_LINE(466)
			return null();
		}
		HX_STACK_LINE(468)
		::openfl::geom::Rectangle tmp2 = this->clipRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(468)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(468)
		if ((tmp3)){
			HX_STACK_LINE(469)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				::openfl::geom::Rectangle tmp4 = this->clipRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(470)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(470)
				int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(470)
				int x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(471)
				::openfl::geom::Rectangle tmp7 = this->clipRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(471)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(471)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(472)
				::openfl::geom::Rectangle tmp10 = this->clipRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(472)
				Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(472)
				int tmp12 = ::Math_obj::ceil(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(472)
				int width = tmp12;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(473)
				::openfl::geom::Rectangle tmp13 = this->clipRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(473)
				Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(473)
				int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(473)
				int height = tmp15;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(470)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
			}
		}
		HX_STACK_LINE(477)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		if ((tmp4)){
			HX_STACK_LINE(478)
			this->dirty = false;
			HX_STACK_LINE(480)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(480)
			tmp5->activeTextures = (int)1;
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp6 = this->vertexArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(481)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(481)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
				}
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::lime::graphics::opengl::GLBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(482)
				::lime::graphics::opengl::GLBuffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(482)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
		}
		HX_STACK_LINE(485)
		int tmp5 = this->writtenVertexBytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		int tmp6 = this->vertexArraySize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(485)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(485)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(485)
		if ((tmp8)){
			HX_STACK_LINE(486)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp9 = this->vertexArray;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(486)
			::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(486)
			tmp9->upload(tmp10);
		}
		else{
			HX_STACK_LINE(488)
			::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(488)
			{
				HX_STACK_LINE(488)
				::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(488)
				::lime::utils::ArrayBufferView this1 = tmp10;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(488)
				int tmp11 = this->writtenVertexBytes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(488)
				Dynamic end = tmp11;		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(488)
				bool tmp12 = (end == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(488)
				if ((tmp12)){
					HX_STACK_LINE(488)
					Dynamic tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(488)
					int tmp14 = this1->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(488)
					(tmp13 == tmp14);
				}
				HX_STACK_LINE(488)
				int tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(488)
				int len = tmp13;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(488)
				int tmp14 = this1->bytesPerElement;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(488)
				int tmp15 = ((int)0 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(488)
				int byte_offset = tmp15;		HX_STACK_VAR(byte_offset,"byte_offset");
				HX_STACK_LINE(488)
				::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(488)
				{
					HX_STACK_LINE(488)
					int tmp17 = this1->type;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(488)
					int _g = tmp17;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(488)
					int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(488)
					switch( (int)(tmp18)){
						case (int)1: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(488)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(488)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(488)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(488)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(488)
							if ((tmp20)){
								HX_STACK_LINE(488)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(488)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(488)
								if ((tmp21)){
									HX_STACK_LINE(488)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									{
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(488)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(488)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(488)
										_this->length = tmp24;
										HX_STACK_LINE(488)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(488)
										_this->byteLength = tmp25;
										HX_STACK_LINE(488)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(488)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											this3 = tmp28;
											HX_STACK_LINE(488)
											tmp26 = this3;
										}
										HX_STACK_LINE(488)
										_this->buffer = tmp26;
										HX_STACK_LINE(488)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(488)
										tmp22 = _this;
									}
									HX_STACK_LINE(488)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(488)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(488)
									if ((tmp22)){
										HX_STACK_LINE(488)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										{
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(488)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(488)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(488)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(488)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(488)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(488)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(488)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(488)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(488)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(488)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(488)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(488)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(488)
											if ((tmp31)){
												HX_STACK_LINE(488)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(488)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(488)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(488)
												{
													HX_STACK_LINE(488)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(488)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(488)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(488)
													this3 = tmp35;
													HX_STACK_LINE(488)
													tmp33 = this3;
												}
												HX_STACK_LINE(488)
												_this->buffer = tmp33;
												HX_STACK_LINE(488)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(488)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(488)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(488)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(488)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(488)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(488)
											_this->byteLength = tmp32;
											HX_STACK_LINE(488)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(488)
											_this->length = srcLength;
											HX_STACK_LINE(488)
											tmp23 = _this;
										}
										HX_STACK_LINE(488)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(488)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(488)
										if ((tmp23)){
											HX_STACK_LINE(488)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(488)
											{
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(488)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(488)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(488)
												if ((tmp26)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(488)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(488)
												if ((tmp28)){
													HX_STACK_LINE(488)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(488)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(488)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(488)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(488)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(488)
												if ((tmp29)){
													HX_STACK_LINE(488)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(488)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(488)
													if ((tmp33)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(488)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(488)
													newByteLength = tmp30;
													HX_STACK_LINE(488)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(488)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(488)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(488)
													if ((tmp32)){
														HX_STACK_LINE(488)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(488)
												_this->buffer = buffer;
												HX_STACK_LINE(488)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(488)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(488)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(488)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(488)
												_this->length = tmp31;
												HX_STACK_LINE(488)
												tmp24 = _this;
											}
											HX_STACK_LINE(488)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(488)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
										}
									}
								}
							}
							HX_STACK_LINE(488)
							tmp16 = this2;
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(488)
							HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
						}
						;break;
					}
				}
				HX_STACK_LINE(488)
				::lime::utils::ArrayBufferView view = tmp16;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(488)
				tmp9 = view;
			}
			HX_STACK_LINE(488)
			::lime::utils::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(489)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp10 = this->vertexArray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			::lime::utils::ArrayBufferView tmp11 = view;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(489)
			tmp10->upload(tmp11);
		}
		HX_STACK_LINE(492)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(493)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(494)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(496)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp9 = this->currentState;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		tmp9->shader = null();
		HX_STACK_LINE(497)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp10 = this->currentState;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		tmp10->shaderData = null();
		HX_STACK_LINE(498)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp11 = this->currentState;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		tmp11->texture = null();
		HX_STACK_LINE(499)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp12 = this->currentState;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(499)
		tmp12->textureSmooth = false;
		HX_STACK_LINE(500)
		::openfl::_internal::renderer::RenderSession tmp13 = this->renderSession;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(500)
		::openfl::display::BlendMode tmp14 = tmp13->blendModeManager->currentBlendMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(500)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp15 = this->currentState;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(500)
		tmp15->blendMode = tmp14;
		HX_STACK_LINE(501)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = this->currentState;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(501)
		tmp16->colorTransform = null();
		HX_STACK_LINE(502)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->currentState;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(502)
		tmp17->skipColorTransformAlpha = false;
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(504)
			int tmp18 = this->batchedSprites;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(504)
			int _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(504)
			while((true)){
				HX_STACK_LINE(504)
				bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(504)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(504)
				if ((tmp20)){
					HX_STACK_LINE(504)
					break;
				}
				HX_STACK_LINE(504)
				int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(504)
				int i = tmp21;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(506)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp22 = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(506)
				nextState = tmp22;
				HX_STACK_LINE(508)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp23 = this->currentState;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(508)
				tmp23->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				HX_STACK_LINE(510)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp25 = this->currentState;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = tmp25;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(510)
					bool tmp26 = (nextState->shader == null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(510)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(510)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(510)
					if ((tmp27)){
						HX_STACK_LINE(510)
						tmp28 = (other->shader == null());
					}
					else{
						HX_STACK_LINE(510)
						tmp28 = false;
					}
					HX_STACK_LINE(510)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(510)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(510)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(510)
					if ((tmp30)){
						HX_STACK_LINE(510)
						bool tmp32 = (nextState->shader != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(510)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(510)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(510)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(510)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(510)
						bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(510)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(510)
						if ((tmp38)){
							HX_STACK_LINE(510)
							bool tmp39 = (other->shader != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(510)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(510)
							tmp36 = tmp40;
						}
						else{
							HX_STACK_LINE(510)
							tmp36 = false;
						}
						HX_STACK_LINE(510)
						bool tmp39 = tmp36;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(510)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(510)
						if ((tmp40)){
							HX_STACK_LINE(510)
							int tmp41 = nextState->shader->ID;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(510)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(510)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(510)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(510)
							int tmp45 = other->shader->ID;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(510)
							int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(510)
							int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(510)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(510)
							tmp31 = (tmp44 == tmp48);
						}
						else{
							HX_STACK_LINE(510)
							tmp31 = false;
						}
					}
					else{
						HX_STACK_LINE(510)
						tmp31 = true;
					}
					HX_STACK_LINE(510)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(510)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(510)
					if ((tmp32)){
						HX_STACK_LINE(510)
						tmp33 = (nextState->texture == other->texture);
					}
					else{
						HX_STACK_LINE(510)
						tmp33 = false;
					}
					HX_STACK_LINE(510)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(510)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(510)
					if ((tmp34)){
						HX_STACK_LINE(510)
						tmp35 = (nextState->textureSmooth == other->textureSmooth);
					}
					else{
						HX_STACK_LINE(510)
						tmp35 = false;
					}
					HX_STACK_LINE(510)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(510)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(510)
					if ((tmp36)){
						HX_STACK_LINE(510)
						tmp37 = (nextState->blendMode == other->blendMode);
					}
					else{
						HX_STACK_LINE(510)
						tmp37 = false;
					}
					HX_STACK_LINE(510)
					if ((tmp37)){
						HX_STACK_LINE(510)
						bool tmp38 = (nextState->colorTransform == null());		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(510)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(510)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(510)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(510)
						bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(510)
						if ((tmp42)){
							HX_STACK_LINE(510)
							bool tmp43 = (other->colorTransform == null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(510)
							tmp41 = tmp43;
						}
						else{
							HX_STACK_LINE(510)
							tmp41 = false;
						}
						HX_STACK_LINE(510)
						bool tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(510)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(510)
						bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(510)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(510)
						if ((tmp46)){
							HX_STACK_LINE(510)
							bool tmp47 = (nextState->colorTransform != null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(510)
							bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(510)
							bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(510)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(510)
							bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(510)
							bool tmp52 = tmp50;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(510)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(510)
							if ((tmp53)){
								HX_STACK_LINE(510)
								bool tmp54 = (other->colorTransform != null());		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(510)
								bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(510)
								tmp51 = tmp55;
							}
							else{
								HX_STACK_LINE(510)
								tmp51 = false;
							}
							HX_STACK_LINE(510)
							bool tmp54 = tmp51;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(510)
							bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(510)
							if ((tmp55)){
								HX_STACK_LINE(510)
								::openfl::geom::ColorTransform tmp56 = other->colorTransform;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(510)
								bool tmp57 = nextState->skipColorTransformAlpha;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(510)
								::openfl::geom::ColorTransform tmp58 = tmp56;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(510)
								bool tmp59 = tmp57;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(510)
								::openfl::geom::ColorTransform tmp60 = tmp58;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(510)
								bool tmp61 = tmp59;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(510)
								::openfl::geom::ColorTransform tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(510)
								bool tmp63 = tmp61;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(510)
								tmp24 = nextState->colorTransform->__equals(tmp62,tmp63);
							}
							else{
								HX_STACK_LINE(510)
								tmp24 = false;
							}
						}
						else{
							HX_STACK_LINE(510)
							tmp24 = true;
						}
					}
					else{
						HX_STACK_LINE(510)
						tmp24 = false;
					}
				}
				HX_STACK_LINE(510)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(510)
				if ((tmp25)){
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp26 = this->currentState;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(512)
					int tmp27 = batchSize;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(512)
					int tmp28 = start;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(512)
					this->renderBatch(tmp26,tmp27,tmp28);
					HX_STACK_LINE(514)
					start = i;
					HX_STACK_LINE(515)
					batchSize = (int)0;
					HX_STACK_LINE(517)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp29 = this->currentState;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(517)
					tmp29->shader = nextState->shader;
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp30 = this->currentState;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(518)
					tmp30->shaderData = nextState->shaderData;
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp31 = this->currentState;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(519)
					tmp31->texture = nextState->texture;
					HX_STACK_LINE(520)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp32 = this->currentState;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(520)
					tmp32->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp33 = this->currentState;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(521)
					tmp33->blendMode = nextState->blendMode;
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp34 = this->currentState;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(522)
					tmp34->colorTransform = nextState->colorTransform;
				}
				HX_STACK_LINE(526)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(529)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp18 = this->currentState;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(529)
		int tmp19 = batchSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(529)
		int tmp20 = start;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(529)
		this->renderBatch(tmp18,tmp19,tmp20);
		HX_STACK_LINE(530)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(531)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(533)
		::openfl::geom::Rectangle tmp21 = this->clipRect;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(533)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(533)
		if ((tmp22)){
			HX_STACK_LINE(534)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",540,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(541)
		bool tmp = (size == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		if ((tmp1)){
			HX_STACK_LINE(541)
			tmp2 = (state->texture == null());
		}
		else{
			HX_STACK_LINE(541)
			tmp2 = true;
		}
		HX_STACK_LINE(541)
		if ((tmp2)){
			HX_STACK_LINE(541)
			return null();
		}
		HX_STACK_LINE(543)
		bool tmp3 = (state->shader == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(543)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		if ((tmp3)){
			HX_STACK_LINE(543)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(543)
			tmp4 = tmp5->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(543)
			tmp4 = state->shader;
		}
		HX_STACK_LINE(543)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp4;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(544)
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp6 = shader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		tmp5->shaderManager->setShader(tmp6,null());
		HX_STACK_LINE(547)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp7 = this->vertexArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(547)
		shader->bindVertexArray(tmp7);
		HX_STACK_LINE(549)
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		bool tmp9 = (shader->blendMode != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		::openfl::display::BlendMode tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		if ((tmp9)){
			HX_STACK_LINE(549)
			tmp10 = shader->blendMode;
		}
		else{
			HX_STACK_LINE(549)
			tmp10 = state->blendMode;
		}
		HX_STACK_LINE(549)
		tmp8->blendModeManager->setBlendMode(tmp10,null());
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			int tmp11 = shader->getUniformLocation(HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(551)
			int location = tmp11;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(551)
			::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(551)
			::lime::utils::ArrayBufferView tmp13 = tmp12->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(551)
			::lime::utils::ArrayBufferView v = tmp13;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(551)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
		}
		HX_STACK_LINE(553)
		bool tmp11 = (state->colorTransform != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(553)
		if ((tmp11)){
			HX_STACK_LINE(554)
			{
				HX_STACK_LINE(554)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(554)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(554)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)1);
			}
			HX_STACK_LINE(555)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(556)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(556)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,(  ((state->skipColorTransformAlpha)) ? Float((int)1) : Float(ct->alphaMultiplier) ));
			}
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(558)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(558)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(Float(ct->redOffset) / Float(((Float)255.))),(Float(ct->greenOffset) / Float(((Float)255.))),(Float(ct->blueOffset) / Float(((Float)255.))),(Float(ct->alphaOffset) / Float(((Float)255.))));
			}
		}
		else{
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(561)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(561)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)0);
			}
			HX_STACK_LINE(562)
			{
				HX_STACK_LINE(562)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(562)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(562)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(int)1,(int)1,(int)1,(int)1);
			}
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(563)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(563)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(int)0,(int)0,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(566)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call(this->gl->TEXTURE0);
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(567)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			int location = tmp12;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(568)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)0);
		}
		HX_STACK_LINE(570)
		bool tmp12 = (shader->smooth != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(570)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(570)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(570)
		if ((tmp13)){
			HX_STACK_LINE(570)
			tmp14 = shader->smooth;
		}
		else{
			HX_STACK_LINE(570)
			tmp14 = false;
		}
		HX_STACK_LINE(570)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(570)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(570)
		if ((tmp15)){
			HX_STACK_LINE(570)
			tmp16 = state->textureSmooth;
		}
		else{
			HX_STACK_LINE(570)
			tmp16 = true;
		}
		HX_STACK_LINE(570)
		if ((tmp16)){
			HX_STACK_LINE(571)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->LINEAR);
			HX_STACK_LINE(572)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->LINEAR);
		}
		else{
			HX_STACK_LINE(574)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->NEAREST);
			HX_STACK_LINE(575)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->NEAREST);
		}
		HX_STACK_LINE(578)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,shader->wrapS);
		HX_STACK_LINE(579)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,shader->wrapT);
		HX_STACK_LINE(581)
		::haxe::ds::StringMap tmp17 = state->shaderData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(581)
		::openfl::_internal::renderer::RenderSession tmp18 = this->renderSession;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(581)
		shader->applyData(tmp17,tmp18);
		HX_STACK_LINE(583)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call(this->gl->TRIANGLES,(size * (int)6),this->gl->UNSIGNED_SHORT,((start * (int)6) * (int)2));
		HX_STACK_LINE(585)
		::openfl::_internal::renderer::RenderSession tmp19 = this->renderSession;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(585)
		(tmp19->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,::openfl::display::Shader shader,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",589,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(590)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(590)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(591)
		bool tmp1 = (state == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		if ((tmp1)){
			HX_STACK_LINE(592)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp2 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(592)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp3 = this->states[index] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(592)
			state = tmp3;
		}
		HX_STACK_LINE(594)
		state->texture = texture;
		HX_STACK_LINE(595)
		state->textureSmooth = smooth;
		HX_STACK_LINE(596)
		state->blendMode = blendMode;
		HX_STACK_LINE(598)
		bool tmp2 = (colorTransform != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(598)
		if ((tmp2)){
			HX_STACK_LINE(598)
			tmp3 = colorTransform->__isDefault();
		}
		else{
			HX_STACK_LINE(598)
			tmp3 = false;
		}
		HX_STACK_LINE(598)
		::openfl::geom::ColorTransform tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(598)
		if ((tmp3)){
			HX_STACK_LINE(598)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(598)
			tmp4 = colorTransform;
		}
		HX_STACK_LINE(598)
		state->colorTransform = tmp4;
		HX_STACK_LINE(599)
		state->skipColorTransformAlpha = skipAlpha;
		HX_STACK_LINE(600)
		bool tmp5 = (shader == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(600)
		if ((tmp5)){
			HX_STACK_LINE(601)
			state->shader = null();
			HX_STACK_LINE(602)
			state->shaderData = null();
		}
		else{
			HX_STACK_LINE(604)
			state->shader = shader->__shader;
			HX_STACK_LINE(605)
			state->shaderData = shader->data;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",609,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(610)
		this->gl = gl;
		HX_STACK_LINE(612)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(612)
		::lime::graphics::GLRenderContext tmp1 = gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(612)
		::lime::utils::ArrayBufferView tmp2 = this->positions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(612)
		tmp->setContext(tmp1,tmp2);
		HX_STACK_LINE(614)
		int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		::lime::graphics::opengl::GLBuffer tmp4 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		this->indexBuffer = tmp4;
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			::lime::graphics::opengl::GLBuffer tmp5 = this->indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(615)
			::lime::graphics::opengl::GLBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(615)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(616)
		{
			HX_STACK_LINE(616)
			::lime::utils::ArrayBufferView tmp5 = this->indices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(616)
			::lime::utils::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(616)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ELEMENT_ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,gl->STATIC_DRAW);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

Void SpriteBatch_obj::prepareShader( ::openfl::display::Shader flashShader,::openfl::display::BitmapData bd){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","prepareShader",0x0c5ca052,"openfl._internal.renderer.opengl.utils.SpriteBatch.prepareShader","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",620,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flashShader,"flashShader")
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(621)
		bool tmp = (flashShader != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		if ((tmp)){
			HX_STACK_LINE(622)
			::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(622)
			flashShader->__init(tmp1);
			HX_STACK_LINE(623)
			flashShader->__shader->wrapS = flashShader->repeatX;
			HX_STACK_LINE(624)
			flashShader->__shader->wrapT = flashShader->repeatY;
			HX_STACK_LINE(625)
			flashShader->__shader->smooth = flashShader->smooth;
			HX_STACK_LINE(626)
			flashShader->__shader->blendMode = flashShader->blendMode;
			HX_STACK_LINE(628)
			::String tmp2 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(628)
			::openfl::display::GLShaderParameter tmp3 = flashShader->data->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(628)
			::openfl::display::GLShaderParameter objSize = tmp3;		HX_STACK_VAR(objSize,"objSize");
			HX_STACK_LINE(629)
			::String tmp4 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(629)
			::openfl::display::GLShaderParameter tmp5 = flashShader->data->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(629)
			::openfl::display::GLShaderParameter texSize = tmp5;		HX_STACK_VAR(texSize,"texSize");
			HX_STACK_LINE(630)
			bool tmp6 = (bd != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			if ((tmp6)){
				HX_STACK_LINE(631)
				int tmp7 = bd->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(631)
				objSize->value[(int)0] = tmp7;
				HX_STACK_LINE(632)
				int tmp8 = bd->height;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(632)
				objSize->value[(int)1] = tmp8;
				HX_STACK_LINE(633)
				bool tmp9 = (bd->__pingPongTexture != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(633)
				if ((tmp9)){
					HX_STACK_LINE(634)
					::openfl::_internal::renderer::opengl::utils::RenderTexture tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(634)
					{
						HX_STACK_LINE(634)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bd->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(634)
						bool tmp11 = _this->__swapped;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(634)
						if ((tmp11)){
							HX_STACK_LINE(634)
							tmp10 = _this->__texture1;
						}
						else{
							HX_STACK_LINE(634)
							tmp10 = _this->__texture0;
						}
					}
					HX_STACK_LINE(634)
					int tmp11 = tmp10->__width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(634)
					texSize->value[(int)0] = tmp11;
					HX_STACK_LINE(635)
					::openfl::_internal::renderer::opengl::utils::RenderTexture tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bd->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(635)
						bool tmp13 = _this->__swapped;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(635)
						if ((tmp13)){
							HX_STACK_LINE(635)
							tmp12 = _this->__texture1;
						}
						else{
							HX_STACK_LINE(635)
							tmp12 = _this->__texture0;
						}
					}
					HX_STACK_LINE(635)
					int tmp13 = tmp12->__height;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(635)
					texSize->value[(int)1] = tmp13;
				}
				else{
					HX_STACK_LINE(637)
					int tmp10 = bd->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(637)
					texSize->value[(int)0] = tmp10;
					HX_STACK_LINE(638)
					int tmp11 = bd->height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(638)
					texSize->value[(int)1] = tmp11;
				}
			}
			else{
				HX_STACK_LINE(641)
				objSize->value[(int)0] = (int)0;
				HX_STACK_LINE(642)
				objSize->value[(int)1] = (int)0;
				HX_STACK_LINE(643)
				texSize->value[(int)0] = (int)0;
				HX_STACK_LINE(644)
				texSize->value[(int)1] = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,prepareShader,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",649,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(650)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(652)
	{
		HX_STACK_LINE(652)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(652)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(652)
		while((true)){
			HX_STACK_LINE(652)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(652)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(652)
			if ((tmp1)){
				HX_STACK_LINE(652)
				break;
			}
			HX_STACK_LINE(652)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(652)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(652)
			++(_g);
			HX_STACK_LINE(653)
			bool tmp3 = a->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(653)
			if ((tmp3)){
				HX_STACK_LINE(653)
				int tmp4 = a->components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(653)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(653)
				{
					HX_STACK_LINE(653)
					int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(653)
					int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					switch( (int)(tmp6)){
						case (int)5120: case (int)5121: {
							HX_STACK_LINE(653)
							tmp5 = (int)1;
						}
						;break;
						case (int)5122: case (int)5123: {
							HX_STACK_LINE(653)
							tmp5 = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(653)
							tmp5 = (int)4;
						}
					}
				}
				HX_STACK_LINE(653)
				int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(653)
				hx::AddEq(r,tmp8);
			}
		}
	}
	HX_STACK_LINE(656)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return uvs; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { return prepareShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteBatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"));
	outFields->push(HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"));
	outFields->push(HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"));
	outFields->push(HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"));
	outFields->push(HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"));
	outFields->push(HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"));
	outFields->push(HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"));
	outFields->push(HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(SpriteBatch_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(SpriteBatch_obj,uvs),HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SpriteBatch_obj::VERTS_PER_SPRITE,HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"),
	HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"),
	HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"),
	HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"),
	HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"),
	HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"),
	HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("renderBitmapData","\xaf","\xec","\x66","\xde"),
	HX_HCSTRING("renderTiles","\x4f","\x2a","\xe6","\xdb"),
	HX_HCSTRING("fillVertices","\x9c","\x05","\x8a","\x6e"),
	HX_HCSTRING("enableAttributes","\x3a","\xbd","\x20","\x34"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("renderBatch","\x84","\x14","\x6c","\x79"),
	HX_HCSTRING("setState","\x0f","\xdf","\x3f","\x92"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("prepareShader","\x0c","\x24","\x67","\xe3"),
	HX_HCSTRING("getElementsPerVertex","\x74","\x09","\x3d","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

hx::Class SpriteBatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d"),
	::String(null()) };

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch","\x34","\x8e","\xd7","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SpriteBatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteBatch_obj >;
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
