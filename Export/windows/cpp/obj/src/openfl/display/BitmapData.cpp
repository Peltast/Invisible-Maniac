#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
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
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",121,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(167)
	this->__usingPingPongTexture = false;
	HX_STACK_LINE(187)
	this->transparent = transparent;
	HX_STACK_LINE(194)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	if ((tmp)){
		HX_STACK_LINE(194)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(194)
		tmp1 = width;
	}
	HX_STACK_LINE(194)
	width = tmp1;
	HX_STACK_LINE(195)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(195)
	if ((tmp2)){
		HX_STACK_LINE(195)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(195)
		tmp3 = height;
	}
	HX_STACK_LINE(195)
	height = tmp3;
	HX_STACK_LINE(197)
	this->width = width;
	HX_STACK_LINE(198)
	this->height = height;
	HX_STACK_LINE(199)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	this->rect = tmp4;
	HX_STACK_LINE(201)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(201)
	if ((tmp5)){
		HX_STACK_LINE(201)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(201)
		tmp6 = false;
	}
	HX_STACK_LINE(201)
	if ((tmp6)){
		HX_STACK_LINE(203)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		if ((tmp7)){
			HX_STACK_LINE(205)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			if ((tmp10)){
				HX_STACK_LINE(207)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(213)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(213)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(213)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			fillColor = tmp10;
		}
		HX_STACK_LINE(217)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		fillColor = tmp14;
		HX_STACK_LINE(220)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int tmp16 = (width * height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(220)
			int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(220)
			Dynamic elements = tmp17;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(220)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(220)
			bool tmp18 = (elements != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(220)
			if ((tmp18)){
				HX_STACK_LINE(220)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(220)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(220)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(220)
				if ((tmp19)){
					HX_STACK_LINE(220)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(220)
					{
						HX_STACK_LINE(220)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(220)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(220)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(220)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(220)
						_this->length = tmp22;
						HX_STACK_LINE(220)
						int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(220)
						_this->byteLength = tmp23;
						HX_STACK_LINE(220)
						::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(220)
						{
							HX_STACK_LINE(220)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(220)
							int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(220)
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(220)
							this2 = tmp26;
							HX_STACK_LINE(220)
							tmp24 = this2;
						}
						HX_STACK_LINE(220)
						_this->buffer = tmp24;
						HX_STACK_LINE(220)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(220)
						tmp20 = _this;
					}
					HX_STACK_LINE(220)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(220)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(220)
					if ((tmp20)){
						HX_STACK_LINE(220)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(220)
						{
							HX_STACK_LINE(220)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(220)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(220)
							::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(220)
							::haxe::io::Bytes srcData = tmp23;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(220)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(220)
							int srcLength = tmp24;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(220)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(220)
							int srcByteOffset = tmp25;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(220)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(220)
							int srcElementSize = tmp26;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(220)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(220)
							int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(220)
							int tmp28 = _this->type;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(220)
							bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(220)
							if ((tmp29)){
								HX_STACK_LINE(220)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(220)
								int tmp30 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(220)
								int cloneLength = tmp30;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(220)
								::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(220)
								{
									HX_STACK_LINE(220)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(220)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(220)
									::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(220)
									this2 = tmp33;
									HX_STACK_LINE(220)
									tmp31 = this2;
								}
								HX_STACK_LINE(220)
								_this->buffer = tmp31;
								HX_STACK_LINE(220)
								::haxe::io::Bytes tmp32 = srcData;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(220)
								int tmp33 = srcByteOffset;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(220)
								int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(220)
								_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
							}
							else{
								HX_STACK_LINE(220)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(220)
							int tmp30 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(220)
							_this->byteLength = tmp30;
							HX_STACK_LINE(220)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(220)
							_this->length = srcLength;
							HX_STACK_LINE(220)
							tmp21 = _this;
						}
						HX_STACK_LINE(220)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(220)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(220)
						if ((tmp21)){
							HX_STACK_LINE(220)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(220)
							{
								HX_STACK_LINE(220)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(220)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(220)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(220)
								if ((tmp24)){
									HX_STACK_LINE(220)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(220)
								int tmp25 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(220)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(220)
								if ((tmp26)){
									HX_STACK_LINE(220)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(220)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(220)
								int bufferByteLength = tmp27;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(220)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(220)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(220)
								bool tmp28 = true;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(220)
								if ((tmp28)){
									HX_STACK_LINE(220)
									int tmp29 = bufferByteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(220)
									newByteLength = tmp29;
									HX_STACK_LINE(220)
									int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(220)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(220)
									if ((tmp31)){
										HX_STACK_LINE(220)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(220)
									bool tmp32 = (newByteLength < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(220)
									if ((tmp32)){
										HX_STACK_LINE(220)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(220)
									int tmp29 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(220)
									newByteLength = tmp29;
									HX_STACK_LINE(220)
									int tmp30 = newByteLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(220)
									int newRange = tmp30;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(220)
									bool tmp31 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(220)
									if ((tmp31)){
										HX_STACK_LINE(220)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(220)
								_this->buffer = null();
								HX_STACK_LINE(220)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(220)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(220)
								Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(220)
								int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(220)
								_this->length = tmp30;
								HX_STACK_LINE(220)
								tmp22 = _this;
							}
							HX_STACK_LINE(220)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(220)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(220)
			tmp15 = this1;
		}
		HX_STACK_LINE(220)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(220)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(220)
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(220)
		::lime::graphics::ImageBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(221)
		buffer->format = (int)2;
		HX_STACK_LINE(222)
		buffer->premultiplied = true;
		HX_STACK_LINE(224)
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(224)
		this->image = tmp19;
		HX_STACK_LINE(226)
		bool tmp20 = (fillColor != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(226)
		if ((tmp20)){
			HX_STACK_LINE(228)
			::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(228)
			::lime::graphics::Image tmp22 = this->image;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(228)
			::lime::math::Rectangle tmp23 = tmp22->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(228)
			int tmp24 = fillColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(228)
			tmp21->fillRect(tmp23,tmp24,null());
		}
		HX_STACK_LINE(235)
		::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(235)
		bool tmp22 = transparent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(235)
		tmp21->set_transparent(tmp22);
		HX_STACK_LINE(236)
		this->__isValid = true;
	}
	HX_STACK_LINE(240)
	this->__createUVs(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(242)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(242)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(243)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(243)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",273,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(275)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		if ((tmp4)){
			HX_STACK_LINE(275)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(275)
			tmp5 = true;
		}
		HX_STACK_LINE(275)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		if ((tmp6)){
			HX_STACK_LINE(275)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(275)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(275)
			tmp7 = true;
		}
		HX_STACK_LINE(275)
		if ((tmp7)){
			HX_STACK_LINE(275)
			return null();
		}
		HX_STACK_LINE(288)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		tmp8->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",297,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(299)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	if ((tmp1)){
		HX_STACK_LINE(301)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		return tmp5;
	}
	else{
		HX_STACK_LINE(305)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(305)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		return tmp5;
	}
	HX_STACK_LINE(299)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",319,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(321)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(321)
			return null();
		}
		HX_STACK_LINE(323)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		tmp2->colorTransform(tmp3,tmp4);
		HX_STACK_LINE(324)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Dynamic BitmapData_obj::compare( ::openfl::display::BitmapData otherBitmapData){
	HX_STACK_FRAME("openfl.display.BitmapData","compare",0x56d287da,"openfl.display.BitmapData.compare","openfl/display/BitmapData.hx",339,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherBitmapData,"otherBitmapData")
	HX_STACK_LINE(341)
	bool tmp = (otherBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	if ((tmp)){
		HX_STACK_LINE(343)
		return (int)0;
	}
	else{
		HX_STACK_LINE(345)
		bool tmp1 = (otherBitmapData == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(347)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(349)
			bool tmp2 = this->__isValid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(349)
			if ((tmp4)){
				HX_STACK_LINE(349)
				tmp5 = (otherBitmapData->__isValid == false);
			}
			else{
				HX_STACK_LINE(349)
				tmp5 = true;
			}
			HX_STACK_LINE(349)
			if ((tmp5)){
				HX_STACK_LINE(351)
				return (int)-2;
			}
			else{
				HX_STACK_LINE(353)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(353)
				int tmp7 = otherBitmapData->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(353)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(353)
				if ((tmp8)){
					HX_STACK_LINE(355)
					return (int)-3;
				}
				else{
					HX_STACK_LINE(357)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(357)
					int tmp10 = otherBitmapData->height;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(357)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(357)
					if ((tmp11)){
						HX_STACK_LINE(359)
						return (int)-4;
					}
				}
			}
		}
	}
	HX_STACK_LINE(363)
	::lime::graphics::Image tmp1 = this->image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(363)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(363)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(363)
	if ((tmp3)){
		HX_STACK_LINE(363)
		tmp4 = (otherBitmapData->image != null());
	}
	else{
		HX_STACK_LINE(363)
		tmp4 = false;
	}
	HX_STACK_LINE(363)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(363)
	if ((tmp4)){
		HX_STACK_LINE(363)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		::lime::graphics::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(363)
		int tmp8 = tmp7->get_format();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(363)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(363)
		int tmp10 = otherBitmapData->image->get_format();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		tmp5 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(363)
		tmp5 = false;
	}
	HX_STACK_LINE(363)
	if ((tmp5)){
		HX_STACK_LINE(365)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		::lime::utils::ArrayBufferView tmp7 = tmp6->get_data();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(365)
		::lime::utils::ArrayBufferView bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(366)
		::lime::utils::ArrayBufferView tmp8 = otherBitmapData->image->get_data();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(366)
		::lime::utils::ArrayBufferView otherBytes = tmp8;		HX_STACK_VAR(otherBytes,"otherBytes");
		HX_STACK_LINE(367)
		bool equal = true;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(369)
			int tmp9 = bytes->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(369)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(369)
			while((true)){
				HX_STACK_LINE(369)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(369)
				if ((tmp11)){
					HX_STACK_LINE(369)
					break;
				}
				HX_STACK_LINE(369)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(369)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(371)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					int tmp14 = ::__hxcpp_memory_get_byte(bytes->buffer->b,(bytes->byteOffset + i));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(371)
					Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(371)
					int a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(371)
					int tmp16 = ::__hxcpp_memory_get_byte(otherBytes->buffer->b,(otherBytes->byteOffset + i));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(371)
					Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(371)
					Dynamic b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(371)
					tmp13 = (a != b);
				}
				HX_STACK_LINE(371)
				if ((tmp13)){
					HX_STACK_LINE(373)
					equal = false;
					HX_STACK_LINE(374)
					break;
				}
			}
		}
		HX_STACK_LINE(379)
		bool tmp9 = equal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(379)
		if ((tmp9)){
			HX_STACK_LINE(381)
			return (int)0;
		}
	}
	HX_STACK_LINE(387)
	::openfl::display::BitmapData bitmapData = null();		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(388)
	bool foundDifference;		HX_STACK_VAR(foundDifference,"foundDifference");
	HX_STACK_LINE(388)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(388)
	int otherPixel;		HX_STACK_VAR(otherPixel,"otherPixel");
	HX_STACK_LINE(388)
	int comparePixel;		HX_STACK_VAR(comparePixel,"comparePixel");
	HX_STACK_LINE(388)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(388)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(388)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(388)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(390)
	{
		HX_STACK_LINE(390)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(390)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(390)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(390)
		while((true)){
			HX_STACK_LINE(390)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			if ((tmp8)){
				HX_STACK_LINE(390)
				break;
			}
			HX_STACK_LINE(390)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(392)
				int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(392)
				int _g2 = tmp10;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(392)
				while((true)){
					HX_STACK_LINE(392)
					bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					if ((tmp12)){
						HX_STACK_LINE(392)
						break;
					}
					HX_STACK_LINE(392)
					int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(392)
					int x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(394)
					foundDifference = false;
					HX_STACK_LINE(396)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(396)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(396)
					int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(396)
					pixel = tmp16;
					HX_STACK_LINE(397)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(397)
					int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(397)
					int tmp19 = otherBitmapData->getPixel32(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(397)
					otherPixel = tmp19;
					HX_STACK_LINE(398)
					comparePixel = (int)0;
					HX_STACK_LINE(400)
					bool tmp20 = (pixel != otherPixel);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(400)
					if ((tmp20)){
						HX_STACK_LINE(402)
						int tmp21 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(402)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(402)
						int tmp23 = (int(otherPixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(402)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(402)
						int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(402)
						r = tmp25;
						HX_STACK_LINE(403)
						int tmp26 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(403)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(403)
						int tmp28 = (int(otherPixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(403)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(403)
						int tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(403)
						g = tmp30;
						HX_STACK_LINE(404)
						int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(404)
						int tmp32 = (int(otherPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(404)
						int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(404)
						b = tmp33;
						HX_STACK_LINE(406)
						bool tmp34 = (r < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(406)
						if ((tmp34)){
							HX_STACK_LINE(406)
							hx::MultEq(r,(int)-1);
						}
						HX_STACK_LINE(407)
						bool tmp35 = (g < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(407)
						if ((tmp35)){
							HX_STACK_LINE(407)
							hx::MultEq(g,(int)-1);
						}
						HX_STACK_LINE(408)
						bool tmp36 = (b < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(408)
						if ((tmp36)){
							HX_STACK_LINE(408)
							hx::MultEq(b,(int)-1);
						}
						HX_STACK_LINE(410)
						bool tmp37 = (r == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(410)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(410)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(410)
						if ((tmp38)){
							HX_STACK_LINE(410)
							tmp39 = (g == (int)0);
						}
						else{
							HX_STACK_LINE(410)
							tmp39 = false;
						}
						HX_STACK_LINE(410)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(410)
						if ((tmp39)){
							HX_STACK_LINE(410)
							tmp40 = (b == (int)0);
						}
						else{
							HX_STACK_LINE(410)
							tmp40 = false;
						}
						HX_STACK_LINE(410)
						if ((tmp40)){
							HX_STACK_LINE(412)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(412)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(412)
							int tmp43 = (int(otherPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(412)
							int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(412)
							int tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(412)
							a = tmp45;
							HX_STACK_LINE(414)
							bool tmp46 = (a != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(414)
							if ((tmp46)){
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(416)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(416)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(416)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(416)
										int tmp51 = (int)255;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(416)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(416)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(416)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(416)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(416)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(416)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(416)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(416)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(416)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(416)
									(int)255;
								}
								HX_STACK_LINE(417)
								{
									HX_STACK_LINE(417)
									{
										HX_STACK_LINE(417)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(417)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(417)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(417)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(417)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(417)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(417)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(417)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(417)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(417)
										int tmp56 = (int)255;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(417)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(417)
										int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(417)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(417)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(417)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(417)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(417)
									(int)255;
								}
								HX_STACK_LINE(418)
								{
									HX_STACK_LINE(418)
									{
										HX_STACK_LINE(418)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(418)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(418)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(418)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(418)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(418)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(418)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(418)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(418)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(418)
										int tmp56 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(418)
										int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(418)
										int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(418)
										int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(418)
										int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(418)
										int tmp61 = (int)255;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(418)
										int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(418)
										comparePixel = tmp62;
									}
									HX_STACK_LINE(418)
									(int)255;
								}
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(419)
										int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(419)
										int tmp49 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(419)
										int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(419)
										int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(419)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(419)
										int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(419)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(419)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(419)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(419)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(419)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(419)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(419)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(419)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(419)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(419)
									a;
								}
								HX_STACK_LINE(421)
								foundDifference = true;
							}
						}
						else{
							HX_STACK_LINE(427)
							{
								HX_STACK_LINE(427)
								{
									HX_STACK_LINE(427)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(427)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(427)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(427)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(427)
									int tmp45 = (int(r) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(427)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(427)
									int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(427)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(427)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(427)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(427)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(427)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(427)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(427)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(427)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(427)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(427)
								r;
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(428)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(428)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(428)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(428)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(428)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(428)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(428)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(428)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(428)
									int tmp50 = (int(g) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(428)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(428)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(428)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(428)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(428)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(428)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(428)
								g;
							}
							HX_STACK_LINE(429)
							{
								HX_STACK_LINE(429)
								{
									HX_STACK_LINE(429)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(429)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(429)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(429)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(429)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(429)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(429)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(429)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(429)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(429)
									int tmp50 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(429)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(429)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(429)
									int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(429)
									int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(429)
									int tmp55 = (int(b) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(429)
									int tmp56 = (int(tmp54) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(429)
									comparePixel = tmp56;
								}
								HX_STACK_LINE(429)
								b;
							}
							HX_STACK_LINE(430)
							{
								HX_STACK_LINE(430)
								{
									HX_STACK_LINE(430)
									int tmp41 = (int)255;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(430)
									int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(430)
									int tmp43 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(430)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(430)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(430)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(430)
									int tmp47 = (int(tmp42) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(430)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(430)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(430)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(430)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(430)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(430)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(430)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(430)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(430)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(430)
								(int)255;
							}
							HX_STACK_LINE(432)
							foundDifference = true;
						}
					}
					HX_STACK_LINE(438)
					bool tmp21 = foundDifference;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(438)
					if ((tmp21)){
						HX_STACK_LINE(440)
						bool tmp22 = (bitmapData == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(440)
						if ((tmp22)){
							HX_STACK_LINE(442)
							int tmp23 = this->width;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(442)
							int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(442)
							bool tmp25 = this->transparent;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(442)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(442)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(442)
							if ((tmp26)){
								HX_STACK_LINE(442)
								tmp27 = otherBitmapData->transparent;
							}
							else{
								HX_STACK_LINE(442)
								tmp27 = true;
							}
							HX_STACK_LINE(442)
							::openfl::display::BitmapData tmp28 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp24,tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(442)
							bitmapData = tmp28;
						}
						HX_STACK_LINE(446)
						int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(446)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(446)
						int tmp25 = comparePixel;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(446)
						bitmapData->setPixel32(tmp23,tmp24,tmp25);
					}
				}
			}
		}
	}
	HX_STACK_LINE(454)
	bool tmp6 = (bitmapData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(454)
	if ((tmp6)){
		HX_STACK_LINE(456)
		return (int)0;
	}
	HX_STACK_LINE(460)
	::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(460)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,compare,return )

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",508,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(510)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		if ((tmp1)){
			HX_STACK_LINE(510)
			return null();
		}
		HX_STACK_LINE(512)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(514)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(515)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(516)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(517)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(518)
				return null();
			}
		}
		HX_STACK_LINE(512)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(522)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(522)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(522)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(524)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(525)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(526)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(527)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(528)
				return null();
			}
		}
		HX_STACK_LINE(522)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(532)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(532)
		::lime::graphics::Image tmp7 = sourceBitmapData->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(532)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(533)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",577,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(579)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(579)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(579)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		if ((tmp3)){
			HX_STACK_LINE(579)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(579)
			tmp4 = true;
		}
		HX_STACK_LINE(579)
		if ((tmp4)){
			HX_STACK_LINE(579)
			return null();
		}
		HX_STACK_LINE(581)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		::lime::graphics::Image tmp6 = sourceBitmapData->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(581)
		bool tmp9 = (alphaBitmapData != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(581)
		::lime::graphics::Image tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(581)
		if ((tmp9)){
			HX_STACK_LINE(581)
			tmp10 = alphaBitmapData->image;
		}
		else{
			HX_STACK_LINE(581)
			tmp10 = null();
		}
		HX_STACK_LINE(581)
		bool tmp11 = (alphaPoint != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(581)
		::lime::math::Vector2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(581)
		if ((tmp11)){
			HX_STACK_LINE(581)
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(581)
			tmp12 = null();
		}
		HX_STACK_LINE(581)
		bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(581)
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
		HX_STACK_LINE(582)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",606,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(608)
		this->image = null();
		HX_STACK_LINE(610)
		this->width = (int)0;
		HX_STACK_LINE(611)
		this->height = (int)0;
		HX_STACK_LINE(612)
		this->rect = null();
		HX_STACK_LINE(613)
		this->__isValid = false;
		HX_STACK_LINE(615)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(615)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		if ((tmp1)){
			HX_STACK_LINE(617)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(617)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(617)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(619)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(619)
			if ((tmp4)){
				HX_STACK_LINE(621)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(622)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(624)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(624)
				if ((tmp5)){
					HX_STACK_LINE(626)
					{
						HX_STACK_LINE(626)
						::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(626)
						::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(626)
						{
							HX_STACK_LINE(626)
							{
								HX_STACK_LINE(626)
								int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
								HX_STACK_LINE(626)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
							}
							HX_STACK_LINE(626)
							texture->invalidate();
						}
					}
					HX_STACK_LINE(627)
					this->__texture = null();
				}
			}
		}
		HX_STACK_LINE(635)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp2 = this->__pingPongTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(635)
		if ((tmp3)){
			HX_STACK_LINE(637)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp4 = this->__pingPongTexture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			tmp4->destroy();
			HX_STACK_LINE(638)
			this->__pingPongTexture = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",717,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(719)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(719)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		if ((tmp1)){
			HX_STACK_LINE(719)
			return null();
		}
		HX_STACK_LINE(789)
		bool tmp2 = (colorTransform != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(789)
		if ((tmp2)){
			HX_STACK_LINE(791)
			::openfl::display::IBitmapDrawable tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(791)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp3,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(791)
			::openfl::display::IBitmapDrawable tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(791)
			Dynamic tmp6 = ::Reflect_obj::getProperty(tmp5,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(791)
			::openfl::display::BitmapData tmp7 = ::openfl::display::BitmapData_obj::__new(tmp4,tmp6,true,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(791)
			::openfl::display::BitmapData copy = tmp7;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(792)
			::openfl::display::IBitmapDrawable tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(792)
			copy->draw(tmp8,null(),null(),null(),null(),null());
			HX_STACK_LINE(793)
			::openfl::geom::Rectangle tmp9 = copy->rect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(793)
			::openfl::geom::ColorTransform tmp10 = colorTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(793)
			copy->colorTransform(tmp9,tmp10);
			HX_STACK_LINE(794)
			source = copy;
		}
		HX_STACK_LINE(801)
		Dynamic tmp3 = this->getSurface();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(802)
		::lime::graphics::cairo::Cairo tmp4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		::lime::graphics::cairo::Cairo cairo = tmp4;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(804)
		bool tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(804)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(804)
		if ((tmp6)){
			HX_STACK_LINE(806)
			cairo->set_antialias((int)1);
		}
		HX_STACK_LINE(810)
		::openfl::_internal::renderer::RenderSession tmp7 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(810)
		::openfl::_internal::renderer::RenderSession renderSession = tmp7;		HX_STACK_VAR(renderSession,"renderSession");
		HX_STACK_LINE(811)
		renderSession->cairo = cairo;
		HX_STACK_LINE(812)
		renderSession->roundPixels = true;
		HX_STACK_LINE(813)
		::openfl::_internal::renderer::cairo::CairoMaskManager tmp8 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(813)
		renderSession->maskManager = tmp8;
		HX_STACK_LINE(815)
		bool tmp9 = (clipRect != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(815)
		if ((tmp9)){
			HX_STACK_LINE(817)
			::openfl::geom::Rectangle tmp10 = clipRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(817)
			::openfl::geom::Matrix tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(817)
			renderSession->maskManager->pushRect(tmp10,tmp11);
		}
		HX_STACK_LINE(821)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(822)
		bool tmp10 = (matrix != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(822)
		::openfl::geom::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(822)
		if ((tmp10)){
			HX_STACK_LINE(822)
			tmp11 = matrix;
		}
		else{
			HX_STACK_LINE(822)
			tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(822)
		source->__updateTransforms(tmp11);
		HX_STACK_LINE(823)
		source->__updateChildren(false);
		HX_STACK_LINE(824)
		::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(824)
		source->__renderCairo(tmp12);
		HX_STACK_LINE(825)
		::openfl::geom::Matrix tmp13 = matrixCache;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(825)
		source->__updateTransforms(tmp13);
		HX_STACK_LINE(826)
		source->__updateChildren(true);
		HX_STACK_LINE(828)
		bool tmp14 = (clipRect != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(828)
		if ((tmp14)){
			HX_STACK_LINE(830)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(834)
		Dynamic tmp15 = surface;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(834)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp15);
		HX_STACK_LINE(836)
		::lime::graphics::Image tmp16 = this->image;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(836)
		tmp16->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",843,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(847)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(847)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(847)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(847)
	if ((tmp3)){
		HX_STACK_LINE(847)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(847)
		tmp4 = true;
	}
	HX_STACK_LINE(847)
	if ((tmp4)){
		HX_STACK_LINE(847)
		::lime::utils::ByteArray tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(847)
		return tmp5;
	}
	HX_STACK_LINE(849)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(849)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(849)
	if ((tmp6)){
		HX_STACK_LINE(851)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(851)
		::lime::utils::ByteArray tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(851)
		::lime::utils::ByteArray tmp9 = byteArray = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(851)
		return tmp9;
	}
	else{
		HX_STACK_LINE(853)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(853)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(853)
		if ((tmp8)){
			HX_STACK_LINE(855)
			::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(855)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(855)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(855)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(855)
			::lime::utils::ByteArray tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(855)
			::lime::utils::ByteArray tmp13 = byteArray = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(855)
			return tmp13;
		}
	}
	HX_STACK_LINE(859)
	::lime::utils::ByteArray tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(859)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",873,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(875)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(875)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(875)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(875)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(875)
		if ((tmp3)){
			HX_STACK_LINE(875)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(875)
			tmp4 = true;
		}
		HX_STACK_LINE(875)
		if ((tmp4)){
			HX_STACK_LINE(875)
			return null();
		}
		HX_STACK_LINE(877)
		bool tmp5 = this->transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(877)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(877)
		if ((tmp5)){
			HX_STACK_LINE(877)
			int tmp7 = (int(color) & int((int)-16777216));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(877)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(877)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(877)
			tmp6 = false;
		}
		HX_STACK_LINE(877)
		if ((tmp6)){
			HX_STACK_LINE(879)
			color = (int)0;
		}
		HX_STACK_LINE(883)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(883)
		::lime::math::Rectangle tmp8 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(883)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(883)
		tmp7->fillRect(tmp8,tmp9,(int)1);
		HX_STACK_LINE(884)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",900,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(902)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(902)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		if ((tmp1)){
			HX_STACK_LINE(902)
			return null();
		}
		HX_STACK_LINE(903)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(903)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(903)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(903)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(903)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(904)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",989,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(991)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",996,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(998)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	if ((tmp1)){
		HX_STACK_LINE(1002)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1002)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1003)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1004)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1000)
		Array< int > data = Array_obj< int >::__new().Add(tmp2).Add(tmp3).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add((int)1).Add(tmp5).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1009)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		::lime::graphics::opengl::GLBuffer tmp7 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1009)
		this->__buffer = tmp7;
		HX_STACK_LINE(1010)
		{
			HX_STACK_LINE(1010)
			::lime::graphics::opengl::GLBuffer tmp8 = this->__buffer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1010)
			::lime::graphics::opengl::GLBuffer buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1010)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1011)
		{
			HX_STACK_LINE(1011)
			::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1011)
			{
				HX_STACK_LINE(1011)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1011)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1011)
				if ((tmp9)){
					HX_STACK_LINE(1011)
					::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1011)
					{
						HX_STACK_LINE(1011)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1011)
						::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1011)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(1011)
						_this->length = data->length;
						HX_STACK_LINE(1011)
						int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1011)
						_this->byteLength = tmp12;
						HX_STACK_LINE(1011)
						::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1011)
						{
							HX_STACK_LINE(1011)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(1011)
							int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1011)
							::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1011)
							this2 = tmp15;
							HX_STACK_LINE(1011)
							tmp13 = this2;
						}
						HX_STACK_LINE(1011)
						_this->buffer = tmp13;
						HX_STACK_LINE(1011)
						_this->copyFromArray(((Array< Float >)(data)),null());
						HX_STACK_LINE(1011)
						tmp10 = _this;
					}
					HX_STACK_LINE(1011)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(1011)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(1011)
				tmp8 = this1;
			}
			HX_STACK_LINE(1011)
			::lime::utils::ArrayBufferView data1 = tmp8;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(1011)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(data1->buffer),data1->byteOffset,data1->byteLength,gl->STATIC_DRAW);
		}
		HX_STACK_LINE(1012)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(1016)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1016)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",1055,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(1057)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1057)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1057)
		if ((tmp1)){
			HX_STACK_LINE(1057)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1057)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1057)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1057)
			return tmp4;
		}
		HX_STACK_LINE(1059)
		bool tmp2 = this->transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1059)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1059)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1059)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1059)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1059)
		if ((tmp5)){
			HX_STACK_LINE(1059)
			int tmp7 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1059)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1059)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1059)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1059)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(1059)
			tmp6 = true;
		}
		HX_STACK_LINE(1059)
		if ((tmp6)){
			HX_STACK_LINE(1061)
			int color1 = color;		HX_STACK_VAR(color1,"color1");
			HX_STACK_LINE(1062)
			int tmp7 = (int(color1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1062)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1062)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1062)
			if ((tmp9)){
				HX_STACK_LINE(1062)
				color1 = (int)0;
			}
		}
		HX_STACK_LINE(1066)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1066)
		int tmp8 = mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1066)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1066)
		bool tmp10 = findColor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1066)
		::lime::math::Rectangle tmp11 = tmp7->getColorBoundsRect(tmp8,tmp9,tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1066)
		::lime::math::Rectangle rect = tmp11;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1067)
		::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1067)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",1095,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1097)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1097)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1097)
	if ((tmp1)){
		HX_STACK_LINE(1097)
		return (int)0;
	}
	HX_STACK_LINE(1098)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1098)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1098)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1098)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1098)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",1125,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1127)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1127)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1127)
	if ((tmp1)){
		HX_STACK_LINE(1127)
		return (int)0;
	}
	HX_STACK_LINE(1128)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1128)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1128)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1128)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1128)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",1142,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1144)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1144)
	if ((tmp1)){
		HX_STACK_LINE(1144)
		return null();
	}
	HX_STACK_LINE(1145)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1145)
	if ((tmp2)){
		HX_STACK_LINE(1145)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1145)
		rect = tmp3;
	}
	HX_STACK_LINE(1146)
	::lime::graphics::Image tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1146)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1146)
	::lime::utils::ByteArray tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1146)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",1151,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1153)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1153)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1153)
	if ((tmp1)){
		HX_STACK_LINE(1153)
		return null();
	}
	HX_STACK_LINE(1155)
	Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1155)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1155)
	if ((tmp3)){
		HX_STACK_LINE(1157)
		::lime::graphics::Image tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1157)
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1157)
		this->__surface = tmp5;
	}
	HX_STACK_LINE(1161)
	Dynamic tmp4 = this->__surface;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1161)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",1166,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(1168)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1168)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1168)
	if ((tmp1)){
		HX_STACK_LINE(1168)
		return null();
	}
	HX_STACK_LINE(1170)
	bool tmp2 = this->__usingPingPongTexture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1170)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1170)
	if ((tmp2)){
		HX_STACK_LINE(1170)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp4 = this->__pingPongTexture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1170)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1170)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(1170)
		tmp3 = false;
	}
	HX_STACK_LINE(1170)
	if ((tmp3)){
		HX_STACK_LINE(1171)
		::lime::graphics::opengl::GLTexture tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1171)
		{
			HX_STACK_LINE(1171)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp5 = this->__pingPongTexture;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1171)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1171)
			bool tmp6 = _this->useOldTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1171)
			if ((tmp6)){
				HX_STACK_LINE(1171)
				bool tmp7 = _this->__swapped;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1171)
				::openfl::_internal::renderer::opengl::utils::RenderTexture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1171)
				if ((tmp7)){
					HX_STACK_LINE(1171)
					tmp8 = _this->__texture0;
				}
				else{
					HX_STACK_LINE(1171)
					tmp8 = _this->__texture1;
				}
				HX_STACK_LINE(1171)
				tmp4 = tmp8->texture;
			}
			else{
				HX_STACK_LINE(1171)
				bool tmp7 = _this->__swapped;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1171)
				::openfl::_internal::renderer::opengl::utils::RenderTexture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1171)
				if ((tmp7)){
					HX_STACK_LINE(1171)
					tmp8 = _this->__texture1;
				}
				else{
					HX_STACK_LINE(1171)
					tmp8 = _this->__texture0;
				}
				HX_STACK_LINE(1171)
				tmp4 = tmp8->texture;
			}
		}
		HX_STACK_LINE(1171)
		return tmp4;
	}
	HX_STACK_LINE(1174)
	::lime::graphics::opengl::GLTexture tmp4 = this->__texture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1174)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1174)
	if ((tmp5)){
		HX_STACK_LINE(1176)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1176)
		::lime::graphics::opengl::GLTexture tmp7 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1176)
		this->__texture = tmp7;
		HX_STACK_LINE(1177)
		{
			HX_STACK_LINE(1177)
			::lime::graphics::opengl::GLTexture tmp8 = this->__texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1177)
			::lime::graphics::opengl::GLTexture texture = tmp8;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1177)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1178)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(1179)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(1180)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(1181)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(1182)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1182)
		tmp8->dirty = true;
	}
	HX_STACK_LINE(1186)
	::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1186)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1186)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1186)
	if ((tmp7)){
		HX_STACK_LINE(1186)
		::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1186)
		::lime::graphics::Image tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1186)
		tmp8 = tmp10->dirty;
	}
	else{
		HX_STACK_LINE(1186)
		tmp8 = false;
	}
	HX_STACK_LINE(1186)
	if ((tmp8)){
		HX_STACK_LINE(1188)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(1188)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(1190)
		Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1190)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1190)
		if ((tmp10)){
			HX_STACK_LINE(1192)
			Dynamic tmp11 = this->__surface;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1192)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp11);
		}
		HX_STACK_LINE(1196)
		::lime::graphics::Image tmp11 = this->image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1196)
		int tmp12 = tmp11->buffer->bitsPerPixel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1196)
		bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1196)
		if ((tmp13)){
			HX_STACK_LINE(1198)
			internalFormat = gl->ALPHA;
			HX_STACK_LINE(1199)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(1204)
			internalFormat = gl->RGBA;
			HX_STACK_LINE(1205)
			format = gl->BGRA_EXT;
		}
		HX_STACK_LINE(1216)
		{
			HX_STACK_LINE(1216)
			::lime::graphics::opengl::GLTexture tmp14 = this->__texture;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1216)
			::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1216)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1218)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1218)
		::lime::graphics::Image textureImage = tmp14;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(1220)
		bool tmp15 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1220)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1220)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1220)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1220)
		if ((tmp17)){
			HX_STACK_LINE(1220)
			tmp18 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(1220)
			tmp18 = false;
		}
		HX_STACK_LINE(1220)
		if ((tmp18)){
			HX_STACK_LINE(1222)
			::lime::graphics::Image tmp19 = textureImage->clone();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1222)
			textureImage = tmp19;
			HX_STACK_LINE(1226)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(1230)
		{
			HX_STACK_LINE(1230)
			::lime::utils::ArrayBufferView tmp19 = textureImage->get_data();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1230)
			::lime::utils::ArrayBufferView pixels = tmp19;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1230)
			{
				HX_STACK_LINE(1230)
				bool tmp20 = (pixels == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1230)
				::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1230)
				if ((tmp20)){
					HX_STACK_LINE(1230)
					tmp21 = null();
				}
				else{
					HX_STACK_LINE(1230)
					tmp21 = pixels->buffer;
				}
				HX_STACK_LINE(1230)
				::haxe::io::Bytes buffer = tmp21;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1230)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(gl->TEXTURE_2D,(int)0,internalFormat,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
			}
		}
		HX_STACK_LINE(1231)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(1232)
		::lime::graphics::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1232)
		tmp19->dirty = false;
	}
	HX_STACK_LINE(1236)
	::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1236)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",1250,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1252)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1252)
	::lime::utils::ByteArray tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1252)
	::lime::utils::ByteArray pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1253)
	Float tmp2 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1253)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1253)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(1254)
	Array< int > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1254)
	{
		HX_STACK_LINE(1254)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(1254)
		int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1254)
		this1 = Array_obj< int >::__new()->__SetSizeExact(tmp5);
		HX_STACK_LINE(1254)
		tmp4 = this1;
	}
	HX_STACK_LINE(1254)
	Array< int > result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1256)
	{
		HX_STACK_LINE(1256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1256)
		while((true)){
			HX_STACK_LINE(1256)
			bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1256)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1256)
			if ((tmp6)){
				HX_STACK_LINE(1256)
				break;
			}
			HX_STACK_LINE(1256)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1256)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1258)
			{
				HX_STACK_LINE(1258)
				int tmp8 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1258)
				int value = tmp8;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1258)
				int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1258)
				result[i] = tmp9;
			}
		}
	}
	HX_STACK_LINE(1262)
	Array< int > tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1262)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",1267,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(1269)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1269)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1269)
	if ((tmp)){
		HX_STACK_LINE(1269)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(1269)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1269)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1269)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(1269)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1270)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1270)
	::lime::utils::ByteArray tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1270)
	::lime::utils::ByteArray pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1271)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1271)
	{
		HX_STACK_LINE(1271)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1271)
		{
			HX_STACK_LINE(1271)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1271)
			while((true)){
				HX_STACK_LINE(1271)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1271)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1271)
				if ((tmp5)){
					HX_STACK_LINE(1271)
					break;
				}
				HX_STACK_LINE(1271)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1271)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",1271,0xdd12d5b9)
						{
							HX_STACK_LINE(1271)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1271)
							{
								HX_STACK_LINE(1271)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1271)
								while((true)){
									HX_STACK_LINE(1271)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1271)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1271)
									if ((tmp8)){
										HX_STACK_LINE(1271)
										break;
									}
									HX_STACK_LINE(1271)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1271)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1271)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(1271)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(1271)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(1271)
		result = _g;
	}
	HX_STACK_LINE(1273)
	{
		HX_STACK_LINE(1273)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1273)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1273)
		while((true)){
			HX_STACK_LINE(1273)
			bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1273)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1273)
			if ((tmp5)){
				HX_STACK_LINE(1273)
				break;
			}
			HX_STACK_LINE(1273)
			int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1273)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1275)
			int tmp7 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1275)
			bool tmp8 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1275)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1275)
			if ((tmp8)){
				HX_STACK_LINE(1275)
				int tmp10 = (pixels->position)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1275)
				int pos = tmp10;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1275)
				tmp9 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1275)
				tmp9 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(1275)
			++(result->__get(tmp7).StaticCast< Array< int > >()[tmp9]);
		}
	}
	HX_STACK_LINE(1279)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1284,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1286)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1286)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1286)
		if ((tmp1)){
			HX_STACK_LINE(1286)
			return false;
		}
		HX_STACK_LINE(1288)
		Dynamic tmp2 = secondObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1288)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display::Bitmap >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1288)
		if ((tmp3)){
			HX_STACK_LINE(1290)
			::openfl::display::Bitmap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1290)
			tmp4 = hx::TCast< ::openfl::display::Bitmap >::cast(secondObject);
			HX_STACK_LINE(1290)
			secondObject = tmp4->bitmapData;
		}
		HX_STACK_LINE(1294)
		Dynamic tmp4 = secondObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1294)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::geom::Point >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1294)
		if ((tmp5)){
			HX_STACK_LINE(1296)
			::openfl::geom::Point secondPoint = ((::openfl::geom::Point)(secondObject));		HX_STACK_VAR(secondPoint,"secondPoint");
			HX_STACK_LINE(1298)
			Float tmp6 = (secondPoint->x - firstPoint->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1298)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1298)
			int x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1299)
			Float tmp8 = (secondPoint->y - firstPoint->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1299)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1299)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1301)
			::openfl::geom::Rectangle tmp10 = this->rect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1301)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1301)
			int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1301)
			bool tmp13 = tmp10->contains(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1301)
			if ((tmp13)){
				HX_STACK_LINE(1303)
				int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1303)
				int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1303)
				int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1303)
				int pixel = tmp16;		HX_STACK_VAR(pixel,"pixel");
				HX_STACK_LINE(1305)
				int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1305)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1305)
				int tmp19 = firstAlphaThreshold;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1305)
				bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1305)
				if ((tmp20)){
					HX_STACK_LINE(1307)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(1313)
			Dynamic tmp6 = secondObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1313)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::BitmapData >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1313)
			if ((tmp7)){
				HX_STACK_LINE(1315)
				::openfl::display::BitmapData secondBitmapData = ((::openfl::display::BitmapData)(secondObject));		HX_STACK_VAR(secondBitmapData,"secondBitmapData");
				HX_STACK_LINE(1316)
				int x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1316)
				int y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1318)
				bool tmp8 = (secondBitmapDataPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1318)
				if ((tmp8)){
					HX_STACK_LINE(1320)
					x = (int)0;
					HX_STACK_LINE(1321)
					y = (int)0;
				}
				else{
					HX_STACK_LINE(1325)
					Float tmp9 = (secondBitmapDataPoint->x - firstPoint->x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1325)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1325)
					x = tmp10;
					HX_STACK_LINE(1326)
					Float tmp11 = (secondBitmapDataPoint->y - firstPoint->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1326)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1326)
					y = tmp12;
				}
				HX_STACK_LINE(1330)
				::openfl::geom::Rectangle tmp9 = this->rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1330)
				int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1330)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1330)
				bool tmp12 = tmp9->contains(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1330)
				if ((tmp12)){
					HX_STACK_LINE(1332)
					::openfl::geom::Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1332)
					::openfl::geom::Rectangle hitRect = tmp13;		HX_STACK_VAR(hitRect,"hitRect");
					HX_STACK_LINE(1333)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1333)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1333)
					int tmp16 = secondBitmapData->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1333)
					int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1333)
					int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1333)
					int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1333)
					Float tmp20 = ::Math_obj::min(tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1333)
					int tmp21 = secondBitmapData->height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1333)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1333)
					int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1333)
					int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1333)
					Float tmp25 = ::Math_obj::min(tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1333)
					hitRect->setTo(tmp14,tmp15,tmp20,tmp25);
					HX_STACK_LINE(1335)
					::openfl::geom::Rectangle tmp26 = hitRect;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1335)
					::lime::utils::ByteArray tmp27 = this->getPixels(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1335)
					::lime::utils::ByteArray pixels = tmp27;		HX_STACK_VAR(pixels,"pixels");
					HX_STACK_LINE(1337)
					int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1337)
					int tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1337)
					int tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1337)
					int tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1337)
					hitRect->offset(tmp29,tmp31);
					HX_STACK_LINE(1338)
					::openfl::geom::Rectangle tmp32 = hitRect;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1338)
					::lime::utils::ByteArray tmp33 = secondBitmapData->getPixels(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1338)
					::lime::utils::ByteArray testPixels = tmp33;		HX_STACK_VAR(testPixels,"testPixels");
					HX_STACK_LINE(1340)
					Float tmp34 = (hitRect->width * hitRect->height);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1340)
					int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1340)
					int length = tmp35;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(1341)
					int pixel;		HX_STACK_VAR(pixel,"pixel");
					HX_STACK_LINE(1341)
					int testPixel;		HX_STACK_VAR(testPixel,"testPixel");
					HX_STACK_LINE(1343)
					{
						HX_STACK_LINE(1343)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1343)
						while((true)){
							HX_STACK_LINE(1343)
							bool tmp36 = (_g < length);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1343)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1343)
							if ((tmp37)){
								HX_STACK_LINE(1343)
								break;
							}
							HX_STACK_LINE(1343)
							int tmp38 = (_g)++;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1343)
							int i = tmp38;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1345)
							int tmp39 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1345)
							pixel = tmp39;
							HX_STACK_LINE(1346)
							int tmp40 = testPixels->readUnsignedInt();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1346)
							testPixel = tmp40;
							HX_STACK_LINE(1348)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1348)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1348)
							int tmp43 = firstAlphaThreshold;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1348)
							bool tmp44 = (tmp42 >= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1348)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1348)
							if ((tmp44)){
								HX_STACK_LINE(1348)
								int tmp46 = (int(testPixel) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1348)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1348)
								int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1348)
								int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1348)
								int tmp50 = secondAlphaThreshold;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1348)
								tmp45 = (tmp49 >= tmp50);
							}
							else{
								HX_STACK_LINE(1348)
								tmp45 = false;
							}
							HX_STACK_LINE(1348)
							if ((tmp45)){
								HX_STACK_LINE(1350)
								return true;
							}
						}
					}
					HX_STACK_LINE(1356)
					return false;
				}
			}
			else{
				HX_STACK_LINE(1360)
				Dynamic tmp8 = secondObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1360)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::geom::Rectangle >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1360)
				if ((tmp9)){
					HX_STACK_LINE(1362)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1362)
					::openfl::geom::Rectangle secondRectangle = tmp10;		HX_STACK_VAR(secondRectangle,"secondRectangle");
					HX_STACK_LINE(1363)
					::openfl::geom::Rectangle tmp11 = ((::openfl::geom::Rectangle)(secondObject));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1363)
					secondRectangle->copyFrom(tmp11);
					HX_STACK_LINE(1364)
					Float tmp12 = firstPoint->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1364)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1364)
					Float tmp14 = firstPoint->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1364)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1364)
					secondRectangle->offset(tmp13,tmp15);
					HX_STACK_LINE(1365)
					int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1365)
					int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1365)
					secondRectangle->__contract((int)0,(int)0,tmp16,tmp17);
					HX_STACK_LINE(1367)
					bool tmp18 = (secondRectangle->width > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1367)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1367)
					if ((tmp18)){
						HX_STACK_LINE(1367)
						tmp19 = (secondRectangle->height > (int)0);
					}
					else{
						HX_STACK_LINE(1367)
						tmp19 = false;
					}
					HX_STACK_LINE(1367)
					if ((tmp19)){
						HX_STACK_LINE(1369)
						::openfl::geom::Rectangle tmp20 = secondRectangle;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1369)
						::lime::utils::ByteArray tmp21 = this->getPixels(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1369)
						::lime::utils::ByteArray pixels = tmp21;		HX_STACK_VAR(pixels,"pixels");
						HX_STACK_LINE(1370)
						Float tmp22 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1370)
						int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1370)
						int length = tmp23;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1371)
						int pixel;		HX_STACK_VAR(pixel,"pixel");
						HX_STACK_LINE(1373)
						{
							HX_STACK_LINE(1373)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1373)
							while((true)){
								HX_STACK_LINE(1373)
								bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1373)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1373)
								if ((tmp25)){
									HX_STACK_LINE(1373)
									break;
								}
								HX_STACK_LINE(1373)
								int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1373)
								int i = tmp26;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1375)
								int tmp27 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1375)
								pixel = tmp27;
								HX_STACK_LINE(1377)
								int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1377)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1377)
								int tmp30 = firstAlphaThreshold;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1377)
								bool tmp31 = (tmp29 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1377)
								if ((tmp31)){
									HX_STACK_LINE(1379)
									return true;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1389)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1402,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1409,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1411)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1411)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1411)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1411)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1411)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1411)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1411)
		if ((tmp4)){
			HX_STACK_LINE(1411)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(1411)
			tmp5 = true;
		}
		HX_STACK_LINE(1411)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1411)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1411)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1411)
		if ((tmp7)){
			HX_STACK_LINE(1411)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1411)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1411)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1411)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1411)
			tmp8 = true;
		}
		HX_STACK_LINE(1411)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1411)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1411)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1411)
		if ((tmp10)){
			HX_STACK_LINE(1411)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1411)
			tmp11 = true;
		}
		HX_STACK_LINE(1411)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1411)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1411)
		if ((tmp12)){
			HX_STACK_LINE(1411)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1411)
			tmp13 = true;
		}
		HX_STACK_LINE(1411)
		if ((tmp13)){
			HX_STACK_LINE(1411)
			return null();
		}
		HX_STACK_LINE(1412)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1412)
		::lime::graphics::Image tmp15 = sourceBitmapData->image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1412)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1412)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1412)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1412)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1412)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1412)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1412)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(1413)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1446,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1448)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1448)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1448)
		if ((tmp1)){
			HX_STACK_LINE(1448)
			return null();
		}
		HX_STACK_LINE(1450)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.noise","\x45","\x4b","\xe1","\x5b"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1455,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1457)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1457)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1457)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1458)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1458)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1458)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1460)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1460)
		::lime::utils::ByteArray tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1460)
		::lime::utils::ByteArray pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1461)
		pixels->position = (int)0;
		HX_STACK_LINE(1463)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1463)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1463)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1463)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1463)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1463)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1463)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1463)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1463)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1463)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1465)
		{
			HX_STACK_LINE(1465)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1465)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1465)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1465)
			while((true)){
				HX_STACK_LINE(1465)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1465)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1465)
				if ((tmp8)){
					HX_STACK_LINE(1465)
					break;
				}
				HX_STACK_LINE(1465)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1465)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1467)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1467)
				pixelValue = tmp10;
				HX_STACK_LINE(1469)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1469)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1469)
				if ((tmp11)){
					HX_STACK_LINE(1469)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1469)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1469)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1469)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(1469)
				c1 = tmp12;
				HX_STACK_LINE(1470)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1470)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1470)
				if ((tmp13)){
					HX_STACK_LINE(1470)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1470)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1470)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1470)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(1470)
				c2 = tmp14;
				HX_STACK_LINE(1471)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1471)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1471)
				if ((tmp15)){
					HX_STACK_LINE(1471)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1471)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1471)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1471)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(1471)
				c3 = tmp16;
				HX_STACK_LINE(1472)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1472)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1472)
				if ((tmp17)){
					HX_STACK_LINE(1472)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1472)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1472)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(1472)
				c4 = tmp18;
				HX_STACK_LINE(1474)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1474)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1474)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1474)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1474)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1474)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1474)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1474)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1474)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1474)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1474)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1474)
				a = tmp29;
				HX_STACK_LINE(1475)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1475)
				if ((tmp30)){
					HX_STACK_LINE(1475)
					(a == (int)255);
				}
				HX_STACK_LINE(1477)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1477)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1477)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1477)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1477)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1477)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1477)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1477)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1477)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1477)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1477)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1477)
				r = tmp41;
				HX_STACK_LINE(1478)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1478)
				if ((tmp42)){
					HX_STACK_LINE(1478)
					(r == (int)255);
				}
				HX_STACK_LINE(1480)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1480)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1480)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1480)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1480)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1480)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1480)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1480)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1480)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1480)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1480)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1480)
				g = tmp53;
				HX_STACK_LINE(1481)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1481)
				if ((tmp54)){
					HX_STACK_LINE(1481)
					(g == (int)255);
				}
				HX_STACK_LINE(1483)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1483)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1483)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1483)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1483)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1483)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1483)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1483)
				b = tmp61;
				HX_STACK_LINE(1484)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1484)
				if ((tmp62)){
					HX_STACK_LINE(1484)
					(b == (int)255);
				}
				HX_STACK_LINE(1486)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1486)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1486)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1486)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1486)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1486)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1486)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1486)
				color = tmp69;
				HX_STACK_LINE(1488)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1488)
				pixels->position = tmp70;
				HX_STACK_LINE(1489)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1489)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1493)
		pixels->position = (int)0;
		HX_STACK_LINE(1494)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1494)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1495)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1495)
		::lime::utils::ByteArray tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1495)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1568,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1568)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.perlinNoise","\x51","\xd2","\x2b","\x27"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1580,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1582)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1582)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1582)
		if ((tmp1)){
			HX_STACK_LINE(1582)
			return null();
		}
		HX_STACK_LINE(1583)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1583)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1583)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1583)
		tmp2->scroll(tmp3,tmp4);
		HX_STACK_LINE(1584)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1606,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1608)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1608)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1608)
		if ((tmp1)){
			HX_STACK_LINE(1608)
			return null();
		}
		HX_STACK_LINE(1609)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1609)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1609)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1609)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1609)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1610)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1646,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1648)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1648)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1648)
		if ((tmp1)){
			HX_STACK_LINE(1648)
			return null();
		}
		HX_STACK_LINE(1649)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1649)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1649)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1649)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1649)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1650)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1674,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1676)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1676)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1676)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1676)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1676)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1676)
		if ((tmp3)){
			HX_STACK_LINE(1676)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1676)
			tmp4 = true;
		}
		HX_STACK_LINE(1676)
		if ((tmp4)){
			HX_STACK_LINE(1676)
			return null();
		}
		HX_STACK_LINE(1677)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1677)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1677)
		::lime::utils::ByteArray tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1677)
		tmp5->setPixels(tmp6,tmp7,(int)1);
		HX_STACK_LINE(1678)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1692,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1694)
		::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1694)
		::lime::utils::ByteArray byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1699)
		{
			HX_STACK_LINE(1699)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1699)
			while((true)){
				HX_STACK_LINE(1699)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1699)
				int tmp2 = inputVector->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1699)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1699)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1699)
				if ((tmp4)){
					HX_STACK_LINE(1699)
					break;
				}
				HX_STACK_LINE(1699)
				int tmp5 = inputVector->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1699)
				Dynamic color = ((Dynamic)(tmp5));		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1699)
				++(_g);
				HX_STACK_LINE(1701)
				Dynamic tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1701)
				byteArray->writeUnsignedInt(tmp6);
			}
		}
		HX_STACK_LINE(1705)
		byteArray->position = (int)0;
		HX_STACK_LINE(1706)
		::openfl::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1706)
		::lime::utils::ByteArray tmp2 = byteArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1706)
		this->setPixels(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1761,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1763)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1763)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1763)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1763)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1763)
		if ((tmp2)){
			HX_STACK_LINE(1763)
			tmp3 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1763)
			tmp3 = true;
		}
		HX_STACK_LINE(1763)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1763)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1763)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1763)
		if ((tmp5)){
			HX_STACK_LINE(1763)
			tmp6 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1763)
			tmp6 = true;
		}
		HX_STACK_LINE(1763)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1763)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1763)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1763)
		if ((tmp8)){
			HX_STACK_LINE(1763)
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			HX_STACK_LINE(1763)
			tmp9 = true;
		}
		HX_STACK_LINE(1763)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1763)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1763)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1763)
		if ((tmp11)){
			HX_STACK_LINE(1763)
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			HX_STACK_LINE(1763)
			tmp12 = true;
		}
		HX_STACK_LINE(1763)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1763)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1763)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1763)
		if ((tmp14)){
			HX_STACK_LINE(1763)
			Float tmp16 = destPoint->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1763)
			int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1763)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1763)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1763)
			tmp15 = (tmp16 > tmp19);
		}
		else{
			HX_STACK_LINE(1763)
			tmp15 = true;
		}
		HX_STACK_LINE(1763)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1763)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1763)
		if ((tmp16)){
			HX_STACK_LINE(1763)
			Float tmp18 = destPoint->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1763)
			int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1763)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1763)
			tmp17 = (tmp18 > tmp20);
		}
		else{
			HX_STACK_LINE(1763)
			tmp17 = true;
		}
		HX_STACK_LINE(1763)
		if ((tmp17)){
			HX_STACK_LINE(1763)
			return (int)0;
		}
		HX_STACK_LINE(1765)
		bool tmp18 = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1765)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1765)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1765)
		if ((tmp19)){
			HX_STACK_LINE(1765)
			::openfl::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1765)
			::openfl::geom::Rectangle tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1765)
			::openfl::geom::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1765)
			::openfl::geom::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1765)
			::openfl::geom::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1765)
			tmp20 = sourceRect->equals(tmp25);
		}
		else{
			HX_STACK_LINE(1765)
			tmp20 = false;
		}
		HX_STACK_LINE(1765)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1765)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1765)
		if ((tmp21)){
			HX_STACK_LINE(1765)
			tmp22 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1765)
			tmp22 = false;
		}
		HX_STACK_LINE(1765)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1765)
		if ((tmp22)){
			HX_STACK_LINE(1765)
			tmp23 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1765)
			tmp23 = false;
		}
		HX_STACK_LINE(1765)
		if ((tmp23)){
			HX_STACK_LINE(1767)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1773)
			int tmp24 = this->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1773)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1773)
			int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1773)
			int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1773)
			::lime::utils::ByteArray tmp28 = ::lime::utils::ByteArray_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1773)
			::lime::utils::ByteArray memory = tmp28;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1775)
			::openfl::geom::Rectangle tmp29 = this->rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1775)
			::lime::utils::ByteArray tmp30 = this->getPixels(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1775)
			memory = tmp30;
			HX_STACK_LINE(1776)
			memory->position = (int)0;
			HX_STACK_LINE(1777)
			::lime::utils::ByteArray tmp31 = memory;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1777)
			::openfl::Memory_obj::select(tmp31);
			HX_STACK_LINE(1779)
			int tmp32 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1779)
			int thresholdMask = tmp32;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1781)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1781)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1781)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1781)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1781)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1781)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1783)
			{
				HX_STACK_LINE(1783)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1783)
				int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1783)
				int _g = tmp33;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1783)
				while((true)){
					HX_STACK_LINE(1783)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1783)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1783)
					if ((tmp35)){
						HX_STACK_LINE(1783)
						break;
					}
					HX_STACK_LINE(1783)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1783)
					int yy = tmp36;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1785)
					int tmp37 = this->width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1785)
					int tmp38 = yy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1785)
					int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1785)
					width_yy = tmp39;
					HX_STACK_LINE(1787)
					{
						HX_STACK_LINE(1787)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1787)
						int tmp40 = this->width;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1787)
						int _g2 = tmp40;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1787)
						while((true)){
							HX_STACK_LINE(1787)
							bool tmp41 = (_g3 < _g2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1787)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1787)
							if ((tmp42)){
								HX_STACK_LINE(1787)
								break;
							}
							HX_STACK_LINE(1787)
							int tmp43 = (_g3)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1787)
							int xx = tmp43;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1789)
							int tmp44 = (width_yy + xx);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1789)
							int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1789)
							position = tmp45;
							HX_STACK_LINE(1790)
							int tmp46 = position;		HX_STACK_VAR(tmp46,"tmp46");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1790,0xdd12d5b9)
								{
									HX_STACK_LINE(1790)
									::lime::utils::ByteArray tmp47 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1790)
									int tmp48 = tmp47->readInt();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1790)
									return tmp48;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1790)
							int tmp47 = ::openfl::Memory_obj::_setPositionTemporarily(tmp46, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1790)
							pixelValue = tmp47;
							HX_STACK_LINE(1791)
							int tmp48 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1791)
							pixelMask = tmp48;
							HX_STACK_LINE(1793)
							int tmp49 = pixelMask;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1793)
							int tmp50 = thresholdMask;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1793)
							int tmp51 = ::openfl::display::BitmapData_obj::__ucompare(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1793)
							i = tmp51;
							HX_STACK_LINE(1794)
							test = false;
							HX_STACK_LINE(1796)
							bool tmp52 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1796)
							if ((tmp52)){
								HX_STACK_LINE(1796)
								bool tmp53 = (i == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1796)
								test = tmp53;
							}
							else{
								HX_STACK_LINE(1797)
								bool tmp53 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1797)
								if ((tmp53)){
									HX_STACK_LINE(1797)
									bool tmp54 = (i == (int)-1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1797)
									test = tmp54;
								}
								else{
									HX_STACK_LINE(1798)
									bool tmp54 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1798)
									if ((tmp54)){
										HX_STACK_LINE(1798)
										bool tmp55 = (i == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1798)
										test = tmp55;
									}
									else{
										HX_STACK_LINE(1799)
										bool tmp55 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1799)
										if ((tmp55)){
											HX_STACK_LINE(1799)
											bool tmp56 = (i != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1799)
											test = tmp56;
										}
										else{
											HX_STACK_LINE(1800)
											bool tmp56 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1800)
											if ((tmp56)){
												HX_STACK_LINE(1800)
												bool tmp57 = (i == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1800)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1800)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1800)
												if ((tmp58)){
													HX_STACK_LINE(1800)
													tmp59 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1800)
													tmp59 = true;
												}
												HX_STACK_LINE(1800)
												test = tmp59;
											}
											else{
												HX_STACK_LINE(1801)
												bool tmp57 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1801)
												if ((tmp57)){
													HX_STACK_LINE(1801)
													bool tmp58 = (i == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1801)
													bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(1801)
													bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(1801)
													if ((tmp59)){
														HX_STACK_LINE(1801)
														tmp60 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1801)
														tmp60 = true;
													}
													HX_STACK_LINE(1801)
													test = tmp60;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1803)
							bool tmp53 = test;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1803)
							if ((tmp53)){
								HX_STACK_LINE(1805)
								{
									HX_STACK_LINE(1805)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1805)
									int tmp54 = position;		HX_STACK_VAR(tmp54,"tmp54");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1805,0xdd12d5b9)
										{
											HX_STACK_LINE(1805)
											::lime::utils::ByteArray tmp55 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(1805)
											int tmp56 = v;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1805)
											tmp55->writeInt(tmp56);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1805)
									::openfl::Memory_obj::_setPositionTemporarily(tmp54, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1806)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1814)
			memory->position = (int)0;
			HX_STACK_LINE(1815)
			::openfl::geom::Rectangle tmp33 = this->rect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1815)
			::lime::utils::ByteArray tmp34 = memory;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1815)
			this->setPixels(tmp33,tmp34);
			HX_STACK_LINE(1816)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1817)
			int tmp35 = hits;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1817)
			return tmp35;
		}
		else{
			HX_STACK_LINE(1821)
			::openfl::geom::Rectangle tmp24 = sourceRect->clone();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1821)
			sourceRect = tmp24;
			HX_STACK_LINE(1823)
			Float tmp25 = sourceRect->get_right();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1823)
			int tmp26 = sourceBitmapData->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1823)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1823)
			if ((tmp27)){
				HX_STACK_LINE(1825)
				Float tmp28 = (sourceBitmapData->width - sourceRect->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1825)
				sourceRect->width = tmp28;
			}
			HX_STACK_LINE(1829)
			Float tmp28 = sourceRect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1829)
			int tmp29 = sourceBitmapData->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1829)
			bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1829)
			if ((tmp30)){
				HX_STACK_LINE(1831)
				Float tmp31 = (sourceBitmapData->height - sourceRect->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1831)
				sourceRect->height = tmp31;
			}
			HX_STACK_LINE(1835)
			::openfl::geom::Rectangle tmp31 = sourceRect->clone();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1835)
			::openfl::geom::Rectangle targetRect = tmp31;		HX_STACK_VAR(targetRect,"targetRect");
			HX_STACK_LINE(1836)
			::openfl::geom::Point tmp32 = destPoint;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1836)
			targetRect->offsetPoint(tmp32);
			HX_STACK_LINE(1838)
			Float tmp33 = targetRect->get_right();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1838)
			int tmp34 = this->width;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1838)
			bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1838)
			if ((tmp35)){
				HX_STACK_LINE(1840)
				int tmp36 = this->width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1840)
				Float tmp37 = targetRect->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1840)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1840)
				targetRect->width = tmp38;
			}
			HX_STACK_LINE(1844)
			Float tmp36 = targetRect->get_bottom();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1844)
			int tmp37 = this->height;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1844)
			bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1844)
			if ((tmp38)){
				HX_STACK_LINE(1846)
				int tmp39 = this->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1846)
				Float tmp40 = targetRect->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1846)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1846)
				targetRect->height = tmp41;
			}
			HX_STACK_LINE(1850)
			Float tmp39 = sourceRect->width;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1850)
			Float tmp40 = targetRect->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1850)
			Float tmp41 = ::Math_obj::min(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1850)
			sourceRect->width = tmp41;
			HX_STACK_LINE(1851)
			Float tmp42 = sourceRect->height;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1851)
			Float tmp43 = targetRect->height;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1851)
			Float tmp44 = ::Math_obj::min(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1851)
			sourceRect->height = tmp44;
			HX_STACK_LINE(1853)
			Float tmp45 = sourceRect->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1853)
			int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1853)
			int sx = tmp46;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1854)
			Float tmp47 = sourceRect->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1854)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1854)
			int sy = tmp48;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1855)
			Float tmp49 = sourceRect->width;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1855)
			int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1855)
			int sw = tmp50;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1856)
			Float tmp51 = sourceRect->height;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1856)
			int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1856)
			int sh = tmp52;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1858)
			Float tmp53 = destPoint->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1858)
			int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1858)
			int dx = tmp54;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1859)
			Float tmp55 = destPoint->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1859)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1859)
			int dy = tmp56;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1861)
			int tmp57 = this->width;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1861)
			int tmp58 = sw;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1861)
			int tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1861)
			int tmp60 = dx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1861)
			int tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1861)
			int bw = tmp61;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1862)
			int tmp62 = this->height;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1862)
			int tmp63 = sh;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1862)
			int tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1862)
			int tmp65 = dy;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1862)
			int tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1862)
			int bh = tmp66;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1864)
			bool tmp67 = (bw < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1864)
			int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1864)
			if ((tmp67)){
				HX_STACK_LINE(1864)
				int tmp69 = sw;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1864)
				int tmp70 = this->width;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1864)
				int tmp71 = sw;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1864)
				int tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1864)
				int tmp73 = dx;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1864)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1864)
				tmp68 = (tmp69 + tmp74);
			}
			else{
				HX_STACK_LINE(1864)
				tmp68 = sw;
			}
			HX_STACK_LINE(1864)
			int dw = tmp68;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1865)
			bool tmp69 = (bw < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1865)
			int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1865)
			if ((tmp69)){
				HX_STACK_LINE(1865)
				int tmp71 = sh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1865)
				int tmp72 = this->height;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1865)
				int tmp73 = sh;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1865)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1865)
				int tmp75 = dy;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1865)
				int tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1865)
				tmp70 = (tmp71 + tmp76);
			}
			else{
				HX_STACK_LINE(1865)
				tmp70 = sh;
			}
			HX_STACK_LINE(1865)
			int dh = tmp70;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1867)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1869)
			int tmp71 = (sw * sh);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1869)
			int tmp72 = (tmp71 * (int)4);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1869)
			int canvasMemory = tmp72;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1870)
			int tmp73 = (sw * sh);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1870)
			int tmp74 = (tmp73 * (int)4);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1870)
			int sourceMemory = tmp74;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1871)
			int tmp75 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1871)
			int totalMemory = tmp75;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1877)
			::lime::utils::ByteArray tmp76 = ::lime::utils::ByteArray_obj::__new(totalMemory);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1877)
			::lime::utils::ByteArray memory = tmp76;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1880)
			memory->position = (int)0;
			HX_STACK_LINE(1882)
			::openfl::geom::Rectangle tmp77 = sourceRect;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1882)
			::lime::utils::ByteArray tmp78 = sourceBitmapData->getPixels(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1882)
			::lime::utils::ByteArray pixels = tmp78;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1884)
			bool tmp79 = copySource;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1884)
			if ((tmp79)){
				HX_STACK_LINE(1886)
				::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1886)
				memory->writeBytes(tmp80,null(),null());
			}
			else{
				HX_STACK_LINE(1890)
				::openfl::geom::Rectangle tmp80 = targetRect;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1890)
				::lime::utils::ByteArray tmp81 = this->getPixels(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1890)
				memory->writeBytes(tmp81,null(),null());
			}
			HX_STACK_LINE(1894)
			memory->position = canvasMemory;
			HX_STACK_LINE(1895)
			::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1895)
			memory->writeBytes(tmp80,null(),null());
			HX_STACK_LINE(1897)
			memory->position = (int)0;
			HX_STACK_LINE(1898)
			::lime::utils::ByteArray tmp81 = memory;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1898)
			::openfl::Memory_obj::select(tmp81);
			HX_STACK_LINE(1900)
			int tmp82 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1900)
			int thresholdMask = tmp82;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1902)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1902)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1902)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1902)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1902)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1904)
			{
				HX_STACK_LINE(1904)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1904)
				while((true)){
					HX_STACK_LINE(1904)
					bool tmp83 = (_g < dh);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1904)
					bool tmp84 = !(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1904)
					if ((tmp84)){
						HX_STACK_LINE(1904)
						break;
					}
					HX_STACK_LINE(1904)
					int tmp85 = (_g)++;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1904)
					int yy = tmp85;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1906)
					{
						HX_STACK_LINE(1906)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1906)
						while((true)){
							HX_STACK_LINE(1906)
							bool tmp86 = (_g1 < dw);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1906)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(1906)
							if ((tmp87)){
								HX_STACK_LINE(1906)
								break;
							}
							HX_STACK_LINE(1906)
							int tmp88 = (_g1)++;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(1906)
							int xx = tmp88;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1908)
							int tmp89 = (xx + sx);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1908)
							int tmp90 = (yy + sy);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(1908)
							int tmp91 = sw;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(1908)
							int tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(1908)
							int tmp93 = (tmp89 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(1908)
							int tmp94 = (tmp93 * (int)4);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(1908)
							position = tmp94;
							HX_STACK_LINE(1909)
							int tmp95 = (canvasMemory + position);		HX_STACK_VAR(tmp95,"tmp95");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1909,0xdd12d5b9)
								{
									HX_STACK_LINE(1909)
									::lime::utils::ByteArray tmp96 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1909)
									int tmp97 = tmp96->readInt();		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1909)
									return tmp97;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1909)
							int tmp96 = ::openfl::Memory_obj::_setPositionTemporarily(tmp95, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(1909)
							pixelValue = tmp96;
							HX_STACK_LINE(1910)
							int tmp97 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(1910)
							pixelMask = tmp97;
							HX_STACK_LINE(1912)
							int tmp98 = pixelMask;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(1912)
							int tmp99 = thresholdMask;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(1912)
							int tmp100 = ::openfl::display::BitmapData_obj::__ucompare(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(1912)
							i = tmp100;
							HX_STACK_LINE(1913)
							test = false;
							HX_STACK_LINE(1915)
							bool tmp101 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(1915)
							if ((tmp101)){
								HX_STACK_LINE(1915)
								bool tmp102 = (i == (int)0);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1915)
								test = tmp102;
							}
							else{
								HX_STACK_LINE(1916)
								bool tmp102 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1916)
								if ((tmp102)){
									HX_STACK_LINE(1916)
									bool tmp103 = (i == (int)-1);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1916)
									test = tmp103;
								}
								else{
									HX_STACK_LINE(1917)
									bool tmp103 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1917)
									if ((tmp103)){
										HX_STACK_LINE(1917)
										bool tmp104 = (i == (int)1);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1917)
										test = tmp104;
									}
									else{
										HX_STACK_LINE(1918)
										bool tmp104 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1918)
										if ((tmp104)){
											HX_STACK_LINE(1918)
											bool tmp105 = (i != (int)0);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1918)
											test = tmp105;
										}
										else{
											HX_STACK_LINE(1919)
											bool tmp105 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1919)
											if ((tmp105)){
												HX_STACK_LINE(1919)
												bool tmp106 = (i == (int)0);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1919)
												bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1919)
												bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1919)
												if ((tmp107)){
													HX_STACK_LINE(1919)
													tmp108 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1919)
													tmp108 = true;
												}
												HX_STACK_LINE(1919)
												test = tmp108;
											}
											else{
												HX_STACK_LINE(1920)
												bool tmp106 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1920)
												if ((tmp106)){
													HX_STACK_LINE(1920)
													bool tmp107 = (i == (int)0);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(1920)
													bool tmp108 = !(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(1920)
													bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(1920)
													if ((tmp108)){
														HX_STACK_LINE(1920)
														tmp109 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1920)
														tmp109 = true;
													}
													HX_STACK_LINE(1920)
													test = tmp109;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1922)
							bool tmp102 = test;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(1922)
							if ((tmp102)){
								HX_STACK_LINE(1924)
								{
									HX_STACK_LINE(1924)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1924)
									int tmp103 = position;		HX_STACK_VAR(tmp103,"tmp103");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1924,0xdd12d5b9)
										{
											HX_STACK_LINE(1924)
											::lime::utils::ByteArray tmp104 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(1924)
											int tmp105 = v;		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1924)
											tmp104->writeInt(tmp105);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1924)
									::openfl::Memory_obj::_setPositionTemporarily(tmp103, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1925)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1933)
			memory->position = (int)0;
			HX_STACK_LINE(1934)
			::openfl::geom::Rectangle tmp83 = targetRect;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1934)
			::lime::utils::ByteArray tmp84 = memory;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1934)
			this->setPixels(tmp83,tmp84);
			HX_STACK_LINE(1935)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1936)
			int tmp85 = hits;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1936)
			return tmp85;
		}
		HX_STACK_LINE(1765)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1955,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( hx::Null< Float >  __o_x0,hx::Null< Float >  __o_y0,hx::Null< Float >  __o_x1,hx::Null< Float >  __o_y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2,hx::Null< Float >  __o_x3,hx::Null< Float >  __o_y3){
Float x0 = __o_x0.Default(0);
Float y0 = __o_y0.Default(0);
Float x1 = __o_x1.Default(1);
Float y1 = __o_y1.Default(0);
Float x2 = __o_x2.Default(1);
Float y2 = __o_y2.Default(1);
Float x3 = __o_x3.Default(0);
Float y3 = __o_y3.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1965,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
{
		HX_STACK_LINE(1967)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1967)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1967)
		if ((tmp1)){
			HX_STACK_LINE(1967)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1967)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(1969)
		::openfl::display::TextureUvs tmp2 = this->__uvData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1969)
		tmp2->x0 = x0;
		HX_STACK_LINE(1970)
		::openfl::display::TextureUvs tmp3 = this->__uvData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1970)
		tmp3->y0 = y0;
		HX_STACK_LINE(1971)
		::openfl::display::TextureUvs tmp4 = this->__uvData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1971)
		tmp4->x1 = x1;
		HX_STACK_LINE(1972)
		::openfl::display::TextureUvs tmp5 = this->__uvData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1972)
		tmp5->y1 = y1;
		HX_STACK_LINE(1973)
		::openfl::display::TextureUvs tmp6 = this->__uvData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1973)
		tmp6->x2 = x2;
		HX_STACK_LINE(1974)
		::openfl::display::TextureUvs tmp7 = this->__uvData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1974)
		tmp7->y2 = y2;
		HX_STACK_LINE(1975)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1975)
		tmp8->x3 = x3;
		HX_STACK_LINE(1976)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1976)
		tmp9->y3 = y3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,Dynamic __o_smoothing,Dynamic __o_drawSelf,Dynamic __o_clearBuffer,Dynamic __o_readPixels,Dynamic __o_powerOfTwo){
Dynamic smoothing = __o_smoothing.Default(false);
Dynamic drawSelf = __o_drawSelf.Default(false);
Dynamic clearBuffer = __o_clearBuffer.Default(false);
Dynamic readPixels = __o_readPixels.Default(false);
Dynamic powerOfTwo = __o_powerOfTwo.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",2054,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
	HX_STACK_ARG(powerOfTwo,"powerOfTwo")
{
		HX_STACK_LINE(2056)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2056)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp1 = this->__pingPongTexture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2056)
		::openfl::geom::Rectangle tmp2 = this->rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2056)
		Dynamic tmp3 = smoothing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2056)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2056)
		Dynamic tmp5 = clearBuffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2056)
		Dynamic tmp6 = powerOfTwo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2056)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp7 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::pushFramebuffer(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2056)
		this->__pingPongTexture = tmp7;
		HX_STACK_LINE(2057)
		::openfl::_internal::renderer::RenderSession tmp8 = renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2057)
		Dynamic tmp9 = drawSelf;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2057)
		::openfl::display::BitmapData tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2057)
		if ((tmp9)){
			HX_STACK_LINE(2057)
			tmp10 = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(2057)
			tmp10 = null();
		}
		HX_STACK_LINE(2057)
		::openfl::display::IBitmapDrawable tmp11 = source;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2057)
		::openfl::geom::Matrix tmp12 = matrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2057)
		::openfl::geom::ColorTransform tmp13 = colorTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2057)
		::openfl::display::BlendMode tmp14 = blendMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2057)
		::openfl::geom::Rectangle tmp15 = clipRect;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2057)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::drawBitmapDrawable(tmp8,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
		HX_STACK_LINE(2058)
		::openfl::_internal::renderer::RenderSession tmp16 = renderSession;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2058)
		Dynamic tmp17 = readPixels;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2058)
		::lime::graphics::Image tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2058)
		if ((tmp17)){
			HX_STACK_LINE(2058)
			tmp18 = this->image;
		}
		else{
			HX_STACK_LINE(2058)
			tmp18 = null();
		}
		HX_STACK_LINE(2058)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::popFramebuffer(tmp16,tmp18);
		HX_STACK_LINE(2060)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2060)
		{
			HX_STACK_LINE(2060)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp20 = this->__pingPongTexture;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2060)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp20;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(2060)
			bool tmp21 = _this->__swapped;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2060)
			if ((tmp21)){
				HX_STACK_LINE(2060)
				tmp19 = _this->__texture1;
			}
			else{
				HX_STACK_LINE(2060)
				tmp19 = _this->__texture0;
			}
		}
		HX_STACK_LINE(2060)
		::openfl::display::TextureUvs uv = tmp19->__uvData;		HX_STACK_VAR(uv,"uv");
		HX_STACK_LINE(2061)
		Float tmp20 = uv->x0;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2061)
		Float tmp21 = uv->y0;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(2061)
		Float tmp22 = uv->x1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(2061)
		Float tmp23 = uv->y1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(2061)
		Float tmp24 = uv->x2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2061)
		Float tmp25 = uv->y2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2061)
		Float tmp26 = uv->x3;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2061)
		Float tmp27 = uv->y3;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2061)
		this->__createUVs(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27);
		HX_STACK_LINE(2063)
		this->__isValid = true;
		HX_STACK_LINE(2064)
		this->__usingPingPongTexture = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",2069,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(2069)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2071)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2071)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2071,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2073)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2073)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(2075)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2075)
				if ((tmp3)){
					HX_STACK_LINE(2077)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2077)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2071)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",2086,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(2086)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2088)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::lime::utils::ByteArray,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2088,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2090)
				::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2090)
				_g->__fromImage(tmp1);
				HX_STACK_LINE(2092)
				bool tmp2 = (rawAlpha != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2092)
				if ((tmp2)){
					HX_STACK_LINE(2099)
					::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2099)
					::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(2101)
					{
						HX_STACK_LINE(2101)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2101)
						int _g1 = rawAlpha->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2101)
						while((true)){
							HX_STACK_LINE(2101)
							bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(2101)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(2101)
							if ((tmp5)){
								HX_STACK_LINE(2101)
								break;
							}
							HX_STACK_LINE(2101)
							int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(2101)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2103)
							{
								HX_STACK_LINE(2103)
								bool tmp7 = (rawAlpha->position < rawAlpha->length);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2103)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2103)
								if ((tmp7)){
									HX_STACK_LINE(2103)
									int tmp9 = (rawAlpha->position)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(2103)
									int pos = tmp9;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(2103)
									tmp8 = rawAlpha->b->__get(pos);
								}
								else{
									HX_STACK_LINE(2103)
									tmp8 = rawAlpha->ThrowEOFi();
								}
								HX_STACK_LINE(2103)
								int val = tmp8;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2103)
								{
									HX_STACK_LINE(2103)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(2103)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(2107)
					image->dirty = true;
				}
				HX_STACK_LINE(2111)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2111)
				if ((tmp3)){
					HX_STACK_LINE(2113)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2113)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2088)
		::lime::graphics::Image_obj::fromBytes(tmp, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",2122,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(2122)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2124)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2134)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2124,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2126)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2126)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(2128)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2128)
				if ((tmp3)){
					HX_STACK_LINE(2130)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2130)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2124)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",2139,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(2141)
		bool tmp = (image != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2141)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2141)
		if ((tmp)){
			HX_STACK_LINE(2141)
			tmp1 = (image->buffer != null());
		}
		else{
			HX_STACK_LINE(2141)
			tmp1 = false;
		}
		HX_STACK_LINE(2141)
		if ((tmp1)){
			HX_STACK_LINE(2143)
			this->image = image;
			HX_STACK_LINE(2145)
			this->width = image->width;
			HX_STACK_LINE(2146)
			this->height = image->height;
			HX_STACK_LINE(2147)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2147)
			this->rect = tmp2;
			HX_STACK_LINE(2150)
			image->set_format((int)2);
			HX_STACK_LINE(2151)
			image->set_premultiplied(true);
			HX_STACK_LINE(2154)
			this->__isValid = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",2161,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(2163)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2163)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2163)
		if ((tmp1)){
			HX_STACK_LINE(2163)
			return null();
		}
		HX_STACK_LINE(2165)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(2167)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2167)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2167)
		if ((tmp3)){
			HX_STACK_LINE(2167)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2167)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(2170)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2170)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(2172)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2172)
		if ((tmp5)){
			HX_STACK_LINE(2174)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2174)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(2175)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2175)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2175)
			matrix->tx = tmp8;
			HX_STACK_LINE(2176)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2176)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2176)
			matrix->ty = tmp10;
			HX_STACK_LINE(2177)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2177)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(2182)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2182)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(2187)
		Dynamic tmp6 = this->getSurface();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2187)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(2189)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2189)
		if ((tmp7)){
			HX_STACK_LINE(2191)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2191)
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2191)
			Dynamic pattern = tmp9;		HX_STACK_VAR(pattern,"pattern");
			HX_STACK_LINE(2193)
			int tmp10 = cairo->get_antialias();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2193)
			bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2193)
			if ((tmp11)){
				HX_STACK_LINE(2195)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2195)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)3);
			}
			else{
				HX_STACK_LINE(2199)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2199)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)1);
			}
			HX_STACK_LINE(2203)
			Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2203)
			cairo->set_source(tmp12);
			HX_STACK_LINE(2204)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",2211,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",2218,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",2248,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",2255,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(2257)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2257)
		::openfl::geom::ColorTransform tmp1 = this->__worldColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2257)
		::openfl::geom::ColorTransform tmp2 = this->__worldColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2257)
		Float tmp3 = tmp2->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2257)
		::openfl::display::BlendMode tmp4 = this->__blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2257)
		::openfl::display::Shader tmp5 = this->__shader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2257)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,tmp,tmp1,tmp3,tmp4,tmp5,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateTransforms",0xf11196fb,"openfl.display.BitmapData.__updateTransforms","openfl/display/BitmapData.hx",2261,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransform,"overrideTransform")
		HX_STACK_LINE(2263)
		bool tmp = (overrideTransform == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2263)
		if ((tmp)){
			HX_STACK_LINE(2264)
			::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2264)
			tmp1->identity();
		}
		else{
			HX_STACK_LINE(2266)
			this->__worldTransform = overrideTransform;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateTransforms,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",2272,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",2335,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",2342,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Void BitmapData_obj::__resize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__resize",0xd982a43f,"openfl.display.BitmapData.__resize","openfl/display/BitmapData.hx",2348,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(2350)
		this->width = width;
		HX_STACK_LINE(2351)
		this->height = height;
		HX_STACK_LINE(2352)
		::openfl::geom::Rectangle tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2352)
		tmp->width = width;
		HX_STACK_LINE(2353)
		::openfl::geom::Rectangle tmp1 = this->rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2353)
		tmp1->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__resize,(void))

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",909,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(911)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(912)
	{
		HX_STACK_LINE(912)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(912)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(912)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(912)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",912,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(912)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(912)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(912)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(912)
				if ((tmp4)){
					HX_STACK_LINE(912)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(912)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(912)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(913)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(913)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",918,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(920)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(921)
	{
		HX_STACK_LINE(921)
		::lime::utils::ByteArray rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(921)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(921)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(921)
		::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",921,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(921)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(921)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(921)
				bool tmp3 = (rawAlpha1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(921)
				if ((tmp3)){
					HX_STACK_LINE(921)
					::lime::utils::ArrayBufferView tmp4 = image->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(921)
					::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(921)
					{
						HX_STACK_LINE(921)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(921)
						int _g1 = rawAlpha1->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(921)
						while((true)){
							HX_STACK_LINE(921)
							bool tmp5 = (_g2 < _g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(921)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(921)
							if ((tmp6)){
								HX_STACK_LINE(921)
								break;
							}
							HX_STACK_LINE(921)
							int tmp7 = (_g2)++;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(921)
							int i = tmp7;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(921)
							{
								HX_STACK_LINE(921)
								bool tmp8 = (rawAlpha1->position < rawAlpha1->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(921)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(921)
								if ((tmp8)){
									HX_STACK_LINE(921)
									int tmp10 = (rawAlpha1->position)++;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(921)
									int pos = tmp10;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(921)
									tmp9 = rawAlpha1->b->__get(pos);
								}
								else{
									HX_STACK_LINE(921)
									tmp9 = rawAlpha1->ThrowEOFi();
								}
								HX_STACK_LINE(921)
								int val = tmp9;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(921)
								{
									HX_STACK_LINE(921)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(921)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(921)
					image->dirty = true;
				}
				HX_STACK_LINE(921)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(921)
				if ((tmp4)){
					HX_STACK_LINE(921)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(921)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(921)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(922)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",941,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(943)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(943)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(944)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(944)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(944)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(944)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(945)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(945)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",950,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(952)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(952)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(952)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(952)
		if ((tmp1)){
			HX_STACK_LINE(952)
			tmp2 = (image->buffer == null());
		}
		else{
			HX_STACK_LINE(952)
			tmp2 = true;
		}
		HX_STACK_LINE(952)
		if ((tmp2)){
			HX_STACK_LINE(952)
			return null();
		}
		HX_STACK_LINE(954)
		::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(954)
		::openfl::display::BitmapData bitmapData = tmp3;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(955)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(955)
		bitmapData->__fromImage(tmp4);
		HX_STACK_LINE(956)
		bool tmp5 = transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(956)
		bitmapData->image->set_transparent(tmp5);
		HX_STACK_LINE(957)
		::openfl::display::BitmapData tmp6 = bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(957)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",2281,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(2283)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2284)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2286)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2286)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2286)
	tmp1 = tmp3;
	HX_STACK_LINE(2287)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2287)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2287)
	tmp2 = tmp5;
	HX_STACK_LINE(2289)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2289)
	if ((tmp6)){
		HX_STACK_LINE(2291)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2291)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2291)
		if ((tmp7)){
			HX_STACK_LINE(2291)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(2291)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(2291)
		return tmp8;
	}
	else{
		HX_STACK_LINE(2295)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2295)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2295)
		tmp1 = tmp8;
		HX_STACK_LINE(2296)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2296)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2296)
		tmp2 = tmp10;
		HX_STACK_LINE(2298)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2298)
		if ((tmp11)){
			HX_STACK_LINE(2300)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2300)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2300)
			if ((tmp12)){
				HX_STACK_LINE(2300)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(2300)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(2300)
			return tmp13;
		}
		else{
			HX_STACK_LINE(2304)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2304)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2304)
			tmp1 = tmp13;
			HX_STACK_LINE(2305)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2305)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2305)
			tmp2 = tmp15;
			HX_STACK_LINE(2307)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2307)
			if ((tmp16)){
				HX_STACK_LINE(2309)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2309)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2309)
				if ((tmp17)){
					HX_STACK_LINE(2309)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(2309)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(2309)
				return tmp18;
			}
			else{
				HX_STACK_LINE(2313)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2313)
				tmp1 = tmp17;
				HX_STACK_LINE(2314)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2314)
				tmp2 = tmp18;
				HX_STACK_LINE(2316)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2316)
				if ((tmp19)){
					HX_STACK_LINE(2318)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2318)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2318)
					if ((tmp20)){
						HX_STACK_LINE(2318)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(2318)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(2318)
					return tmp21;
				}
				else{
					HX_STACK_LINE(2322)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(2289)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )

::openfl::display::BitmapData BitmapData_obj::__asRenderTexture( Dynamic __o_width,Dynamic __o_height){
Dynamic width = __o_width.Default(0);
Dynamic height = __o_height.Default(0);
	HX_STACK_FRAME("openfl.display.BitmapData","__asRenderTexture",0xfc831c28,"openfl.display.BitmapData.__asRenderTexture","openfl/display/BitmapData.hx",2357,0xdd12d5b9)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(2359)
		::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2359)
		::openfl::display::BitmapData b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(2360)
		Dynamic tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2360)
		Dynamic tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2360)
		b->__resize(tmp1,tmp2);
		HX_STACK_LINE(2362)
		::openfl::display::BitmapData tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2362)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__asRenderTexture,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__shader,"__shader");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__pingPongTexture,"__pingPongTexture");
	HX_MARK_MEMBER_NAME(__usingPingPongTexture,"__usingPingPongTexture");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__shader,"__shader");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__pingPongTexture,"__pingPongTexture");
	HX_VISIT_MEMBER_NAME(__usingPingPongTexture,"__usingPingPongTexture");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { return __shader; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__pingPongTexture") ) { return __pingPongTexture; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__usingPingPongTexture") ) { return __usingPingPongTexture; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__asRenderTexture") ) { outValue = __asRenderTexture_dyn(); return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { __shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__pingPongTexture") ) { __pingPongTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::PingPongTexture >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__usingPingPongTexture") ) { __usingPingPongTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"));
	outFields->push(HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0"));
	outFields->push(HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(BitmapData_obj,__shader),HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::PingPongTexture*/ ,(int)offsetof(BitmapData_obj,__pingPongTexture),HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingPingPongTexture),HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"),
	HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0"),
	HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__createUVs","\x56","\x32","\x13","\x78"),
	HX_HCSTRING("__drawGL","\x49","\xde","\x05","\x88"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	HX_HCSTRING("__asRenderTexture","\xb3","\xb8","\x4c","\x4d"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

} // end namespace openfl
} // end namespace display
