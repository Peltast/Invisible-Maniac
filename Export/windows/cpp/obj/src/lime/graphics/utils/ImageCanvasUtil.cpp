#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
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
namespace lime{
namespace graphics{
namespace utils{

Void ImageCanvasUtil_obj::__construct()
{
	return null();
}

//ImageCanvasUtil_obj::~ImageCanvasUtil_obj() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return  new ImageCanvasUtil_obj; }
hx::ObjectPtr< ImageCanvasUtil_obj > ImageCanvasUtil_obj::__new()
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageCanvasUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","colorTransform",0x478efac9,"lime.graphics.utils.ImageCanvasUtil.colorTransform","lime/graphics/utils/ImageCanvasUtil.hx",24,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(26)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(27)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(29)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::lime::utils::ArrayBufferView tmp4 = colorMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::lime::graphics::utils::ImageDataUtil_obj::colorTransform(tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

Void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToCanvas",0x7fd81686,"lime.graphics.utils.ImageCanvasUtil.convertToCanvas","lime/graphics/utils/ImageCanvasUtil.hx",34,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(36)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(38)
		bool tmp = (buffer->__srcImage != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(40)
			bool tmp1 = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(42)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,buffer->__srcImage->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),buffer->__srcImage->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
				HX_STACK_LINE(43)
				buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->__srcImage,(int)0,(int)0);
			}
			HX_STACK_LINE(47)
			buffer->__srcImage = null();
		}
		else{
			HX_STACK_LINE(49)
			bool tmp1 = (buffer->data != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(49)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			if ((tmp1)){
				HX_STACK_LINE(49)
				tmp2 = (buffer->__srcCanvas == null());
			}
			else{
				HX_STACK_LINE(49)
				tmp2 = false;
			}
			HX_STACK_LINE(49)
			if ((tmp2)){
				HX_STACK_LINE(51)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				int tmp4 = buffer->width;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				int tmp5 = buffer->height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp3,tmp4,tmp5);
				HX_STACK_LINE(52)
				::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp6);
			}
			else{
				HX_STACK_LINE(54)
				bool tmp3 = (buffer->data == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(54)
				if ((tmp3)){
					HX_STACK_LINE(54)
					tmp4 = (buffer->__srcImageData != null());
				}
				else{
					HX_STACK_LINE(54)
					tmp4 = false;
				}
				HX_STACK_LINE(54)
				if ((tmp4)){
					HX_STACK_LINE(56)
					buffer->data = ((::lime::utils::ArrayBufferView)(buffer->__srcImageData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToCanvas,(void))

Void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToData",0x2b8bb058,"lime.graphics.utils.ImageCanvasUtil.convertToData","lime/graphics/utils/ImageCanvasUtil.hx",63,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToData,(void))

Void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyChannel",0xbd2cd24e,"lime.graphics.utils.ImageCanvasUtil.copyChannel","lime/graphics/utils/ImageCanvasUtil.hx",81,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(83)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(84)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(85)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(86)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(88)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		::lime::graphics::ImageChannel tmp8 = sourceChannel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		::lime::graphics::ImageChannel tmp9 = destChannel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		::lime::graphics::utils::ImageDataUtil_obj::copyChannel(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

Void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyPixels",0xbf1ad802,"lime.graphics.utils.ImageCanvasUtil.copyPixels","lime/graphics/utils/ImageCanvasUtil.hx",93,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(95)
		bool tmp = (destPoint == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp2)){
			HX_STACK_LINE(95)
			tmp3 = (destPoint->x >= image->width);
		}
		else{
			HX_STACK_LINE(95)
			tmp3 = true;
		}
		HX_STACK_LINE(95)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		if ((tmp5)){
			HX_STACK_LINE(95)
			tmp6 = (destPoint->y >= image->height);
		}
		else{
			HX_STACK_LINE(95)
			tmp6 = true;
		}
		HX_STACK_LINE(95)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(95)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(95)
		if ((tmp8)){
			HX_STACK_LINE(95)
			tmp9 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(95)
			tmp9 = true;
		}
		HX_STACK_LINE(95)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(95)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		if ((tmp11)){
			HX_STACK_LINE(95)
			tmp12 = (sourceRect->width < (int)1);
		}
		else{
			HX_STACK_LINE(95)
			tmp12 = true;
		}
		HX_STACK_LINE(95)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(95)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(95)
		if ((tmp13)){
			HX_STACK_LINE(95)
			tmp14 = (sourceRect->height < (int)1);
		}
		else{
			HX_STACK_LINE(95)
			tmp14 = true;
		}
		HX_STACK_LINE(95)
		if ((tmp14)){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(101)
		bool tmp15 = (alphaImage != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(101)
		if ((tmp15)){
			HX_STACK_LINE(101)
			tmp16 = alphaImage->get_transparent();
		}
		else{
			HX_STACK_LINE(101)
			tmp16 = false;
		}
		HX_STACK_LINE(101)
		if ((tmp16)){
			HX_STACK_LINE(103)
			bool tmp17 = (alphaPoint == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			if ((tmp17)){
				HX_STACK_LINE(103)
				::lime::math::Vector2 tmp18 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(103)
				alphaPoint = tmp18;
			}
			HX_STACK_LINE(107)
			::lime::graphics::Image tmp18 = image->clone();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(107)
			::lime::graphics::Image tempData = tmp18;		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(108)
			::lime::graphics::Image tmp19 = alphaImage;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(108)
			::lime::math::Rectangle tmp20 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(108)
			::lime::math::Vector2 tmp21 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(108)
			tempData->copyChannel(tmp19,tmp20,tmp21,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(109)
			sourceImage = tempData;
		}
		HX_STACK_LINE(113)
		::lime::graphics::Image tmp17 = image;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(113)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp17,true);
		HX_STACK_LINE(115)
		bool tmp18 = mergeAlpha;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(115)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(115)
		if ((tmp19)){
			HX_STACK_LINE(117)
			bool tmp20 = image->get_transparent();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(117)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(117)
			if ((tmp20)){
				HX_STACK_LINE(117)
				tmp21 = sourceImage->get_transparent();
			}
			else{
				HX_STACK_LINE(117)
				tmp21 = false;
			}
			HX_STACK_LINE(117)
			if ((tmp21)){
				HX_STACK_LINE(119)
				Dynamic tmp22 = image->buffer->__srcContext;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(119)
				tmp22->__Field(HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"), hx::paccDynamic )((destPoint->x + image->offsetX),(destPoint->y + image->offsetY),(sourceRect->width + image->offsetX),(sourceRect->height + image->offsetY));
			}
		}
		HX_STACK_LINE(125)
		::lime::graphics::Image tmp20 = sourceImage;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(125)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp20,false);
		HX_STACK_LINE(127)
		Dynamic tmp21 = sourceImage->buffer->get_src();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		if ((tmp22)){
			HX_STACK_LINE(129)
			Dynamic tmp23 = image->buffer->__srcContext;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(129)
			Float tmp24 = (sourceRect->x + sourceImage->offsetX);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(129)
			Float tmp25 = (sourceRect->y + sourceImage->offsetY);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(129)
			Float tmp26 = sourceRect->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(129)
			Float tmp27 = sourceRect->height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(129)
			Float tmp28 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(129)
			Float tmp29 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(129)
			Float tmp30 = sourceRect->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(129)
			Float tmp31 = sourceRect->height;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(129)
			tmp23->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceImage->buffer->get_src(),::Std_obj::_int(tmp24),::Std_obj::_int(tmp25),::Std_obj::_int(tmp26),::Std_obj::_int(tmp27),::Std_obj::_int(tmp28),::Std_obj::_int(tmp29),::Std_obj::_int(tmp30),::Std_obj::_int(tmp31));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

Void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createCanvas",0x3ddb6834,"lime.graphics.utils.ImageCanvasUtil.createCanvas","lime/graphics/utils/ImageCanvasUtil.hx",136,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

Void ImageCanvasUtil_obj::createImageData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createImageData",0x307c5949,"lime.graphics.utils.ImageCanvasUtil.createImageData","lime/graphics/utils/ImageCanvasUtil.hx",169,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,createImageData,(void))

Void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","fillRect",0x8e427887,"lime.graphics.utils.ImageCanvasUtil.fillRect","lime/graphics/utils/ImageCanvasUtil.hx",197,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(199)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(200)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1,true);
		HX_STACK_LINE(202)
		bool tmp2 = (rect->x == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		if ((tmp3)){
			HX_STACK_LINE(202)
			tmp4 = (rect->y == (int)0);
		}
		else{
			HX_STACK_LINE(202)
			tmp4 = false;
		}
		HX_STACK_LINE(202)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		if ((tmp5)){
			HX_STACK_LINE(202)
			tmp6 = (rect->width == image->width);
		}
		else{
			HX_STACK_LINE(202)
			tmp6 = false;
		}
		HX_STACK_LINE(202)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		if ((tmp6)){
			HX_STACK_LINE(202)
			tmp7 = (rect->height == image->height);
		}
		else{
			HX_STACK_LINE(202)
			tmp7 = false;
		}
		HX_STACK_LINE(202)
		if ((tmp7)){
			HX_STACK_LINE(204)
			bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			if ((tmp8)){
				HX_STACK_LINE(204)
				int tmp10 = (int(color) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(204)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(204)
				tmp9 = (tmp11 == (int)0);
			}
			else{
				HX_STACK_LINE(204)
				tmp9 = false;
			}
			HX_STACK_LINE(204)
			if ((tmp9)){
				HX_STACK_LINE(206)
				int tmp10 = image->buffer->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(206)
				Dynamic tmp11 = image->buffer->__srcCanvas;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				tmp11->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp10;
				HX_STACK_LINE(207)
				return null();
			}
		}
		HX_STACK_LINE(213)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(213)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(213)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(213)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(215)
		bool tmp8 = (format == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		if ((tmp8)){
			HX_STACK_LINE(217)
			int tmp9 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			r = tmp10;
			HX_STACK_LINE(218)
			int tmp11 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(218)
			g = tmp12;
			HX_STACK_LINE(219)
			int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(219)
			b = tmp13;
			HX_STACK_LINE(220)
			bool tmp14 = image->get_transparent();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(220)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(220)
			if ((tmp14)){
				HX_STACK_LINE(220)
				int tmp16 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(220)
				tmp15 = (int(tmp16) & int((int)255));
			}
			else{
				HX_STACK_LINE(220)
				tmp15 = (int)255;
			}
			HX_STACK_LINE(220)
			a = tmp15;
		}
		else{
			HX_STACK_LINE(224)
			int tmp9 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			r = tmp10;
			HX_STACK_LINE(225)
			int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(225)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(225)
			g = tmp12;
			HX_STACK_LINE(226)
			int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(226)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(226)
			b = tmp14;
			HX_STACK_LINE(227)
			bool tmp15 = image->get_transparent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			if ((tmp15)){
				HX_STACK_LINE(227)
				tmp16 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(227)
				tmp16 = (int)255;
			}
			HX_STACK_LINE(227)
			a = tmp16;
		}
		HX_STACK_LINE(231)
		::String tmp9 = (HX_HCSTRING("rgba(","\xf4","\xcc","\x0d","\xe8") + r);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(231)
		::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(231)
		int tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(231)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(231)
		::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(231)
		int tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(231)
		::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(231)
		Float tmp17 = (Float(a) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(231)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(231)
		::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(231)
		Dynamic tmp20 = image->buffer->__srcContext;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(231)
		tmp20->__FieldRef(HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52")) = tmp19;
		HX_STACK_LINE(232)
		Dynamic tmp21 = image->buffer->__srcContext;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(232)
		tmp21->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,fillRect,(void))

Void ImageCanvasUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","floodFill",0x900e2821,"lime.graphics.utils.ImageCanvasUtil.floodFill","lime/graphics/utils/ImageCanvasUtil.hx",237,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(239)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(240)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(242)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		::lime::graphics::utils::ImageDataUtil_obj::floodFill(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,floodFill,(void))

int ImageCanvasUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel",0x44040950,"lime.graphics.utils.ImageCanvasUtil.getPixel","lime/graphics/utils/ImageCanvasUtil.hx",247,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(249)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(250)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(252)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(252)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(252)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel,return )

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel32",0x541529ef,"lime.graphics.utils.ImageCanvasUtil.getPixel32","lime/graphics/utils/ImageCanvasUtil.hx",257,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(259)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(260)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(262)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(262)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(262)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(262)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageCanvasUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixels",0x3f841d23,"lime.graphics.utils.ImageCanvasUtil.getPixels","lime/graphics/utils/ImageCanvasUtil.hx",267,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(269)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(270)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(272)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	int tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	::lime::utils::ByteArray tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(272)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixels,return )

Void ImageCanvasUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","merge",0x36e8e778,"lime.graphics.utils.ImageCanvasUtil.merge","lime/graphics/utils/ImageCanvasUtil.hx",277,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(279)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(280)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(281)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(282)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(284)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(284)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(284)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(284)
		int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(284)
		::lime::graphics::utils::ImageDataUtil_obj::merge(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageCanvasUtil_obj,merge,(void))

Void ImageCanvasUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","resize",0xd5553d34,"lime.graphics.utils.ImageCanvasUtil.resize","lime/graphics/utils/ImageCanvasUtil.hx",289,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(291)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(293)
		bool tmp = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		if ((tmp)){
			HX_STACK_LINE(295)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			int tmp2 = newWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp1,tmp2,tmp3);
			HX_STACK_LINE(296)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->get_src(),(int)0,(int)0,newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(300)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1,true);
			HX_STACK_LINE(301)
			Dynamic sourceCanvas = buffer->__srcCanvas;		HX_STACK_VAR(sourceCanvas,"sourceCanvas");
			HX_STACK_LINE(302)
			buffer->__srcCanvas = null();
			HX_STACK_LINE(303)
			::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,tmp3,tmp4);
			HX_STACK_LINE(304)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceCanvas,(int)0,(int)0,newWidth,newHeight);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,resize,(void))

Void ImageCanvasUtil_obj::scroll( ::lime::graphics::Image image,int x,int y){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","scroll",0x143ebb4d,"lime.graphics.utils.ImageCanvasUtil.scroll","lime/graphics/utils/ImageCanvasUtil.hx",311,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(313)
		int tmp = hx::Mod(x,image->width);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(313)
			int tmp3 = hx::Mod(y,image->height);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(313)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(313)
			tmp2 = false;
		}
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(313)
			return null();
		}
		HX_STACK_LINE(315)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp3);
		HX_STACK_LINE(316)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp4,true);
		HX_STACK_LINE(318)
		Dynamic tmp5 = image->buffer->__srcContext;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(318)
		tmp5->__Field(HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"), hx::paccDynamic )(x,y,image->width,image->height);
		HX_STACK_LINE(319)
		Dynamic tmp6 = image->buffer->__srcContext;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(319)
		tmp6->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(image->buffer->__srcCanvas,x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,scroll,(void))

Void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel",0xf26162c4,"lime.graphics.utils.ImageCanvasUtil.setPixel","lime/graphics/utils/ImageCanvasUtil.hx",324,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(326)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(327)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(329)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel,(void))

Void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel32",0x5792c863,"lime.graphics.utils.ImageCanvasUtil.setPixel32","lime/graphics/utils/ImageCanvasUtil.hx",334,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(336)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(337)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(339)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(339)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel32(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel32,(void))

Void ImageCanvasUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixels",0x22d5092f,"lime.graphics.utils.ImageCanvasUtil.setPixels","lime/graphics/utils/ImageCanvasUtil.hx",344,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(346)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(347)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(349)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		::lime::utils::ByteArray tmp4 = byteArray;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(349)
		int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(349)
		::lime::graphics::utils::ImageDataUtil_obj::setPixels(tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,setPixels,(void))

Void ImageCanvasUtil_obj::sync( ::lime::graphics::Image image,bool clear){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","sync",0x85fe4d9b,"lime.graphics.utils.ImageCanvasUtil.sync","lime/graphics/utils/ImageCanvasUtil.hx",354,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(clear,"clear")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,sync,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

bool ImageCanvasUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { outValue = sync_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scroll") ) { outValue = scroll_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCanvas") ) { outValue = createCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { outValue = convertToData_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { outValue = convertToCanvas_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createImageData") ) { outValue = createImageData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageCanvasUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("convertToCanvas","\xc6","\x61","\xe8","\x14"),
	HX_HCSTRING("convertToData","\x98","\xab","\x76","\xb3"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createCanvas","\xf4","\x94","\x97","\xda"),
	HX_HCSTRING("createImageData","\x89","\xa4","\x8c","\xc5"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	::String(null()) };

void ImageCanvasUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageCanvasUtil","\x2e","\x95","\x3e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageCanvasUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageCanvasUtil_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace utils
