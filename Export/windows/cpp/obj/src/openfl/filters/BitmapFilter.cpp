#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
namespace filters{

Void BitmapFilter_obj::__construct()
{
HX_STACK_FRAME("openfl.filters.BitmapFilter","new",0x22686a4a,"openfl.filters.BitmapFilter.new","openfl/filters/BitmapFilter.hx",30,0x1697f5a4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	this->__saveLastFilter = false;
	HX_STACK_LINE(33)
	this->__passes = (int)0;
	HX_STACK_LINE(32)
	this->__dirty = true;
}
;
	return null();
}

//BitmapFilter_obj::~BitmapFilter_obj() { }

Dynamic BitmapFilter_obj::__CreateEmpty() { return  new BitmapFilter_obj; }
hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new()
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct();
	return _result_;}

::openfl::filters::BitmapFilter BitmapFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.BitmapFilter","clone",0x8c417bc7,"openfl.filters.BitmapFilter.clone","openfl/filters/BitmapFilter.hx",51,0x1697f5a4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::openfl::filters::BitmapFilter tmp = ::openfl::filters::BitmapFilter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )

Void BitmapFilter_obj::__growBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.filters.BitmapFilter","__growBounds",0x8337fade,"openfl.filters.BitmapFilter.__growBounds","openfl/filters/BitmapFilter.hx",66,0x1697f5a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,__growBounds,(void))

::openfl::display::Shader BitmapFilter_obj::__preparePass( int pass){
	HX_STACK_FRAME("openfl.filters.BitmapFilter","__preparePass",0xf9b19542,"openfl.filters.BitmapFilter.__preparePass","openfl/filters/BitmapFilter.hx",73,0x1697f5a4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,__preparePass,return )

bool BitmapFilter_obj::__useLastFilter( int pass){
	HX_STACK_FRAME("openfl.filters.BitmapFilter","__useLastFilter",0xcd33fb9f,"openfl.filters.BitmapFilter.__useLastFilter","openfl/filters/BitmapFilter.hx",77,0x1697f5a4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(77)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFilter_obj,__useLastFilter,return )

::openfl::_internal::renderer::opengl::utils::RenderTexture BitmapFilter_obj::__tmpRenderTexture;

Void BitmapFilter_obj::__expandBounds( Array< ::Dynamic > filters,::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.filters.BitmapFilter","__expandBounds",0x2441e5e5,"openfl.filters.BitmapFilter.__expandBounds","openfl/filters/BitmapFilter.hx",80,0x1697f5a4)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(82)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::openfl::geom::Rectangle r = tmp;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(83)
		r->setEmpty();
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp1 = (_g < filters->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(84)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				if ((tmp2)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				::openfl::filters::BitmapFilter tmp3 = filters->__get(_g).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				::openfl::filters::BitmapFilter filter = tmp3;		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(84)
				++(_g);
				HX_STACK_LINE(85)
				::openfl::geom::Rectangle tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				filter->__growBounds(tmp4);
			}
		}
		HX_STACK_LINE(88)
		::openfl::geom::Rectangle tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		::openfl::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		r->__transform(tmp1,tmp2);
		HX_STACK_LINE(89)
		Float tmp3 = r->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		Float tmp4 = r->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		Float tmp5 = r->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Float tmp6 = r->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		rect->__expand(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapFilter_obj,__expandBounds,(void))

Void BitmapFilter_obj::__applyFilters( Array< ::Dynamic > filters,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::BitmapData source,::openfl::display::BitmapData target,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint){
{
		HX_STACK_FRAME("openfl.filters.BitmapFilter","__applyFilters",0x995eab63,"openfl.filters.BitmapFilter.__applyFilters","openfl/filters/BitmapFilter.hx",92,0x1697f5a4)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_LINE(94)
		bool tmp = (target == source);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp)){
			HX_STACK_LINE(94)
			tmp1 = target->__usingPingPongTexture;
		}
		else{
			HX_STACK_LINE(94)
			tmp1 = false;
		}
		HX_STACK_LINE(94)
		bool same = tmp1;		HX_STACK_VAR(same,"same");
		HX_STACK_LINE(95)
		bool tmp2 = same;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		if ((tmp2)){
			HX_STACK_LINE(95)
			target->__pingPongTexture->useOldTexture = true;
		}
		HX_STACK_LINE(97)
		bool tmp3 = (sourceRect == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(97)
			sourceRect = source->rect;
		}
		HX_STACK_LINE(99)
		::openfl::_internal::renderer::opengl::utils::RenderTexture lastFilterOutput = null();		HX_STACK_VAR(lastFilterOutput,"lastFilterOutput");
		HX_STACK_LINE(100)
		bool useLastFilter = false;		HX_STACK_VAR(useLastFilter,"useLastFilter");
		HX_STACK_LINE(102)
		::openfl::display::Shader srcShader = source->__shader;		HX_STACK_VAR(srcShader,"srcShader");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp4 = (_g < filters->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				if ((tmp5)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				::openfl::filters::BitmapFilter tmp6 = filters->__get(_g).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				::openfl::filters::BitmapFilter filter = tmp6;		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(105)
				useLastFilter = false;
				HX_STACK_LINE(108)
				bool tmp7 = filter->__saveLastFilter;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				if ((tmp7)){
					HX_STACK_LINE(109)
					target->__pingPongTexture->swap();
					HX_STACK_LINE(110)
					::openfl::_internal::renderer::RenderSession tmp8 = renderSession;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(110)
					::openfl::display::BitmapData tmp9 = source;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					::openfl::geom::Rectangle tmp10 = sourceRect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					bool tmp11 = target->__usingPingPongTexture;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					target->__drawGL(tmp8,tmp9,null(),null(),null(),tmp10,true,tmp12,true,null(),null());
					HX_STACK_LINE(111)
					::openfl::_internal::renderer::opengl::utils::RenderTexture tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = target->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(111)
						bool tmp14 = _this->__swapped;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(111)
						if ((tmp14)){
							HX_STACK_LINE(111)
							tmp13 = _this->__texture0;
						}
						else{
							HX_STACK_LINE(111)
							tmp13 = _this->__texture1;
						}
					}
					HX_STACK_LINE(111)
					lastFilterOutput = tmp13;
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = target->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(112)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp14 = ::openfl::filters::BitmapFilter_obj::__tmpRenderTexture;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(112)
						::openfl::_internal::renderer::opengl::utils::RenderTexture v = tmp14;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(112)
						{
							HX_STACK_LINE(112)
							bool tmp15 = _this->__swapped;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(112)
							if ((tmp15)){
								HX_STACK_LINE(112)
								_this->__texture0 = v;
							}
							else{
								HX_STACK_LINE(112)
								_this->__texture1 = v;
							}
						}
					}
				}
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(115)
					int _g1 = filter->__passes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(115)
					while((true)){
						HX_STACK_LINE(115)
						bool tmp8 = (_g2 < _g1);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(115)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(115)
						if ((tmp9)){
							HX_STACK_LINE(115)
							break;
						}
						HX_STACK_LINE(115)
						int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(115)
						int pass = tmp10;		HX_STACK_VAR(pass,"pass");
						HX_STACK_LINE(117)
						bool tmp11 = filter->__saveLastFilter;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(117)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(117)
						if ((tmp11)){
							HX_STACK_LINE(117)
							int tmp13 = pass;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(117)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(117)
							tmp12 = filter->__useLastFilter(tmp14);
						}
						else{
							HX_STACK_LINE(117)
							tmp12 = false;
						}
						HX_STACK_LINE(117)
						useLastFilter = tmp12;
						HX_STACK_LINE(119)
						bool tmp13 = same;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(119)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(119)
						if ((tmp13)){
							HX_STACK_LINE(119)
							bool tmp15 = useLastFilter;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(119)
							bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(119)
							tmp14 = !(tmp16);
						}
						else{
							HX_STACK_LINE(119)
							tmp14 = false;
						}
						HX_STACK_LINE(119)
						if ((tmp14)){
							HX_STACK_LINE(119)
							target->__pingPongTexture->swap();
						}
						HX_STACK_LINE(121)
						bool tmp15 = useLastFilter;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(121)
						if ((tmp15)){
							HX_STACK_LINE(122)
							::openfl::_internal::renderer::opengl::utils::RenderTexture tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = target->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(122)
								bool tmp17 = _this->__swapped;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(122)
								if ((tmp17)){
									HX_STACK_LINE(122)
									tmp16 = _this->__texture0;
								}
								else{
									HX_STACK_LINE(122)
									tmp16 = _this->__texture1;
								}
							}
							HX_STACK_LINE(122)
							::openfl::filters::BitmapFilter_obj::__tmpRenderTexture = tmp16;
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = target->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(123)
								{
									HX_STACK_LINE(123)
									bool tmp17 = _this->__swapped;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(123)
									if ((tmp17)){
										HX_STACK_LINE(123)
										_this->__texture0 = lastFilterOutput;
									}
									else{
										HX_STACK_LINE(123)
										_this->__texture1 = lastFilterOutput;
									}
								}
							}
						}
						HX_STACK_LINE(126)
						int tmp16 = pass;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(126)
						::openfl::display::Shader tmp17 = filter->__preparePass(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(126)
						source->__shader = tmp17;
						HX_STACK_LINE(127)
						::openfl::_internal::renderer::RenderSession tmp18 = renderSession;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(127)
						::openfl::display::BitmapData tmp19 = source;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(127)
						::openfl::geom::Rectangle tmp20 = sourceRect;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						bool tmp21 = target->__usingPingPongTexture;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(127)
						bool tmp23 = useLastFilter;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(127)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(127)
						target->__drawGL(tmp18,tmp19,null(),null(),null(),tmp20,true,tmp22,tmp24,null(),null());
					}
				}
			}
		}
		HX_STACK_LINE(132)
		source->__shader = srcShader;
		HX_STACK_LINE(134)
		bool tmp4 = same;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		if ((tmp4)){
			HX_STACK_LINE(134)
			target->__pingPongTexture->useOldTexture = false;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(BitmapFilter_obj,__applyFilters,(void))


BitmapFilter_obj::BitmapFilter_obj()
{
}

Dynamic BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__passes") ) { return __passes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__growBounds") ) { return __growBounds_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__preparePass") ) { return __preparePass_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__useLastFilter") ) { return __useLastFilter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__saveLastFilter") ) { return __saveLastFilter; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__expandBounds") ) { outValue = __expandBounds_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__applyFilters") ) { outValue = __applyFilters_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tmpRenderTexture") ) { outValue = __tmpRenderTexture; return true;  }
	}
	return false;
}

Dynamic BitmapFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__passes") ) { __passes=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__saveLastFilter") ) { __saveLastFilter=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__tmpRenderTexture") ) { __tmpRenderTexture=ioValue.Cast< ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return true; }
	}
	return false;
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96"));
	outFields->push(HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,__passes),HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96")},
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,__saveLastFilter),HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(void *) &BitmapFilter_obj::__tmpRenderTexture,HX_HCSTRING("__tmpRenderTexture","\xee","\x3f","\x19","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__passes","\x9f","\x3e","\x61","\x96"),
	HX_HCSTRING("__saveLastFilter","\x6b","\x6b","\xc9","\x82"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__growBounds","\x08","\x22","\x16","\x42"),
	HX_HCSTRING("__preparePass","\xd8","\xb2","\x35","\x3d"),
	HX_HCSTRING("__useLastFilter","\xb5","\x2a","\x2b","\x10"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__tmpRenderTexture,"__tmpRenderTexture");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__tmpRenderTexture,"__tmpRenderTexture");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__tmpRenderTexture","\xee","\x3f","\x19","\x2b"),
	HX_HCSTRING("__expandBounds","\x8f","\xab","\x57","\xf4"),
	HX_HCSTRING("__applyFilters","\x0d","\x71","\x74","\x69"),
	::String(null()) };

void BitmapFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilter","\x58","\x3d","\x87","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapFilter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
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
} // end namespace filters
