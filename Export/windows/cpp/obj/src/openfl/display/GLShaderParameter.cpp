#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GLShaderParameter
#include <openfl/display/GLShaderParameter.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace openfl{
namespace display{

Void GLShaderParameter_obj::__construct(::String type,Dynamic arraySize)
{
HX_STACK_FRAME("openfl.display.GLShaderParameter","new",0xc4078907,"openfl.display.GLShaderParameter.new","openfl/display/Shader.hx",196,0xae8f5dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(arraySize,"arraySize")
{
	HX_STACK_LINE(237)
	this->internalType = (int)0;
	HX_STACK_LINE(235)
	this->transpose = false;
	HX_STACK_LINE(231)
	this->repeatY = (int)33071;
	HX_STACK_LINE(227)
	this->repeatX = (int)33071;
	HX_STACK_LINE(223)
	this->smooth = false;
	HX_STACK_LINE(211)
	this->arraySize = (int)0;
	HX_STACK_LINE(206)
	this->size = (int)0;
	HX_STACK_LINE(240)
	this->type = type;
	HX_STACK_LINE(241)
	bool tmp = (arraySize == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	if ((tmp)){
		HX_STACK_LINE(241)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(241)
		tmp1 = arraySize;
	}
	HX_STACK_LINE(241)
	this->arraySize = tmp1;
	HX_STACK_LINE(243)
	this->__init();
}
;
	return null();
}

//GLShaderParameter_obj::~GLShaderParameter_obj() { }

Dynamic GLShaderParameter_obj::__CreateEmpty() { return  new GLShaderParameter_obj; }
hx::ObjectPtr< GLShaderParameter_obj > GLShaderParameter_obj::__new(::String type,Dynamic arraySize)
{  hx::ObjectPtr< GLShaderParameter_obj > _result_ = new GLShaderParameter_obj();
	_result_->__construct(type,arraySize);
	return _result_;}

Dynamic GLShaderParameter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShaderParameter_obj > _result_ = new GLShaderParameter_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void GLShaderParameter_obj::__init( ){
{
		HX_STACK_FRAME("openfl.display.GLShaderParameter","__init",0x508587e9,"openfl.display.GLShaderParameter.__init","openfl/display/Shader.hx",247,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		::String _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			::String v = _g;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(247)
			::String m = _g;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(247)
			::String tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			::String _switch_1 = (tmp1);
			if (  ( _switch_1==HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"))){
				HX_STACK_LINE(249)
				this->internalType = (int)1;
				HX_STACK_LINE(250)
				this->size = (int)1;
				HX_STACK_LINE(252)
				{
					HX_STACK_LINE(252)
					int tmp2 = this->internalType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(252)
					bool tmp3 = (tmp2 == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(252)
					if ((tmp3)){
						HX_STACK_LINE(252)
						HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
					}
					HX_STACK_LINE(252)
					this->value = Array_obj< Float >::__new().Add(((Float)0.0));
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
				HX_STACK_LINE(255)
				this->internalType = (int)1;
				HX_STACK_LINE(256)
				this->size = (int)1;
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					int tmp2 = this->internalType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(258)
					bool tmp3 = (tmp2 == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(258)
					if ((tmp3)){
						HX_STACK_LINE(258)
						HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
					}
					HX_STACK_LINE(258)
					this->value = Array_obj< Float >::__new().Add(((Float)0.0));
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
				HX_STACK_LINE(261)
				this->internalType = (int)2;
				HX_STACK_LINE(262)
				this->size = (int)1;
				HX_STACK_LINE(264)
				{
					HX_STACK_LINE(264)
					int tmp2 = this->internalType;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(264)
					bool tmp3 = (tmp2 == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(264)
					if ((tmp3)){
						HX_STACK_LINE(264)
						HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
					}
					HX_STACK_LINE(264)
					this->value = Array_obj< Float >::__new().Add(((Float)0.0));
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("sampler2D","\xda","\x42","\x8b","\x5d"))){
				HX_STACK_LINE(266)
				int tmp2 = v.indexOf(HX_HCSTRING("vec","\x54","\xe2","\x59","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				bool tmp3 = (tmp2 > (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				if ((tmp3)){
					HX_STACK_LINE(267)
					::String tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(267)
					::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(267)
					bool tmp6 = ::StringTools_obj::startsWith(tmp5,HX_HCSTRING("b","\x62","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(267)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(267)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(267)
					if ((tmp7)){
						HX_STACK_LINE(267)
						::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(267)
						::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(267)
						tmp8 = ::StringTools_obj::startsWith(tmp11,HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(267)
						tmp8 = true;
					}
					HX_STACK_LINE(267)
					if ((tmp8)){
						HX_STACK_LINE(268)
						this->internalType = (int)1;
					}
					else{
						HX_STACK_LINE(270)
						this->internalType = (int)2;
					}
					HX_STACK_LINE(272)
					::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::String tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::String tmp13 = tmp9.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(272)
					Dynamic s = tmp14;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(273)
					this->size = s;
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						Array< Float > v1;		HX_STACK_VAR(v1,"v1");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(275)
								int tmp15 = this->size;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								int _g2 = tmp15;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(275)
								while((true)){
									HX_STACK_LINE(275)
									bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(275)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(275)
									if ((tmp17)){
										HX_STACK_LINE(275)
										break;
									}
									HX_STACK_LINE(275)
									int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(275)
									int i = tmp18;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(275)
									_g1->push(((Float)0.0));
								}
							}
							HX_STACK_LINE(275)
							v1 = _g1;
						}
						HX_STACK_LINE(275)
						int tmp15 = this->internalType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(275)
						bool tmp16 = (tmp15 == (int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(275)
						if ((tmp16)){
							HX_STACK_LINE(275)
							HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
						}
						HX_STACK_LINE(275)
						this->value = v1;
					}
				}
				else{
					HX_STACK_LINE(277)
					int tmp4 = m.indexOf(HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					bool tmp5 = (tmp4 > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					if ((tmp5)){
						HX_STACK_LINE(278)
						this->internalType = (int)3;
						HX_STACK_LINE(279)
						::String tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(279)
						::String tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(279)
						int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(279)
						int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(279)
						::String tmp10 = tmp6.charAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(279)
						Dynamic s = tmp11;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(280)
						this->size = s;
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(282)
							int tmp12 = this->internalType;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(282)
							bool tmp13 = (tmp12 == (int)4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(282)
							if ((tmp13)){
								HX_STACK_LINE(282)
								HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
							}
							HX_STACK_LINE(282)
							{
								HX_STACK_LINE(282)
								int tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(282)
								int _g1 = tmp14;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(282)
								int tmp15 = _g1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(282)
								switch( (int)(tmp15)){
									case (int)2: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)0);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(303)
						this->internalType = (int)4;
						HX_STACK_LINE(304)
						this->size = (int)0;
					}
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("samplerCube","\x1d","\x52","\x67","\x54"))){
				HX_STACK_LINE(266)
				int tmp2 = v.indexOf(HX_HCSTRING("vec","\x54","\xe2","\x59","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				bool tmp3 = (tmp2 > (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				if ((tmp3)){
					HX_STACK_LINE(267)
					::String tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(267)
					::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(267)
					bool tmp6 = ::StringTools_obj::startsWith(tmp5,HX_HCSTRING("b","\x62","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(267)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(267)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(267)
					if ((tmp7)){
						HX_STACK_LINE(267)
						::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(267)
						::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(267)
						tmp8 = ::StringTools_obj::startsWith(tmp11,HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(267)
						tmp8 = true;
					}
					HX_STACK_LINE(267)
					if ((tmp8)){
						HX_STACK_LINE(268)
						this->internalType = (int)1;
					}
					else{
						HX_STACK_LINE(270)
						this->internalType = (int)2;
					}
					HX_STACK_LINE(272)
					::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::String tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::String tmp13 = tmp9.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(272)
					Dynamic s = tmp14;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(273)
					this->size = s;
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						Array< Float > v1;		HX_STACK_VAR(v1,"v1");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(275)
								int tmp15 = this->size;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								int _g2 = tmp15;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(275)
								while((true)){
									HX_STACK_LINE(275)
									bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(275)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(275)
									if ((tmp17)){
										HX_STACK_LINE(275)
										break;
									}
									HX_STACK_LINE(275)
									int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(275)
									int i = tmp18;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(275)
									_g1->push(((Float)0.0));
								}
							}
							HX_STACK_LINE(275)
							v1 = _g1;
						}
						HX_STACK_LINE(275)
						int tmp15 = this->internalType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(275)
						bool tmp16 = (tmp15 == (int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(275)
						if ((tmp16)){
							HX_STACK_LINE(275)
							HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
						}
						HX_STACK_LINE(275)
						this->value = v1;
					}
				}
				else{
					HX_STACK_LINE(277)
					int tmp4 = m.indexOf(HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					bool tmp5 = (tmp4 > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					if ((tmp5)){
						HX_STACK_LINE(278)
						this->internalType = (int)3;
						HX_STACK_LINE(279)
						::String tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(279)
						::String tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(279)
						int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(279)
						int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(279)
						::String tmp10 = tmp6.charAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(279)
						Dynamic s = tmp11;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(280)
						this->size = s;
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(282)
							int tmp12 = this->internalType;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(282)
							bool tmp13 = (tmp12 == (int)4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(282)
							if ((tmp13)){
								HX_STACK_LINE(282)
								HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
							}
							HX_STACK_LINE(282)
							{
								HX_STACK_LINE(282)
								int tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(282)
								int _g1 = tmp14;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(282)
								int tmp15 = _g1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(282)
								switch( (int)(tmp15)){
									case (int)2: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)0);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(303)
						this->internalType = (int)4;
						HX_STACK_LINE(304)
						this->size = (int)0;
					}
				}
			}
			else  {
				HX_STACK_LINE(266)
				int tmp2 = v.indexOf(HX_HCSTRING("vec","\x54","\xe2","\x59","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				bool tmp3 = (tmp2 > (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				if ((tmp3)){
					HX_STACK_LINE(267)
					::String tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(267)
					::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(267)
					bool tmp6 = ::StringTools_obj::startsWith(tmp5,HX_HCSTRING("b","\x62","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(267)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(267)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(267)
					if ((tmp7)){
						HX_STACK_LINE(267)
						::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(267)
						::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(267)
						::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(267)
						tmp8 = ::StringTools_obj::startsWith(tmp11,HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(267)
						tmp8 = true;
					}
					HX_STACK_LINE(267)
					if ((tmp8)){
						HX_STACK_LINE(268)
						this->internalType = (int)1;
					}
					else{
						HX_STACK_LINE(270)
						this->internalType = (int)2;
					}
					HX_STACK_LINE(272)
					::String tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					::String tmp10 = this->type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(272)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(272)
					::String tmp13 = tmp9.charAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(272)
					Dynamic tmp14 = ::Std_obj::parseInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(272)
					Dynamic s = tmp14;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(273)
					this->size = s;
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						Array< Float > v1;		HX_STACK_VAR(v1,"v1");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							Array< Float > _g1 = Array_obj< Float >::__new();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(275)
							{
								HX_STACK_LINE(275)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(275)
								int tmp15 = this->size;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(275)
								int _g2 = tmp15;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(275)
								while((true)){
									HX_STACK_LINE(275)
									bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(275)
									bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(275)
									if ((tmp17)){
										HX_STACK_LINE(275)
										break;
									}
									HX_STACK_LINE(275)
									int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(275)
									int i = tmp18;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(275)
									_g1->push(((Float)0.0));
								}
							}
							HX_STACK_LINE(275)
							v1 = _g1;
						}
						HX_STACK_LINE(275)
						int tmp15 = this->internalType;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(275)
						bool tmp16 = (tmp15 == (int)4);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(275)
						if ((tmp16)){
							HX_STACK_LINE(275)
							HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
						}
						HX_STACK_LINE(275)
						this->value = v1;
					}
				}
				else{
					HX_STACK_LINE(277)
					int tmp4 = m.indexOf(HX_HCSTRING("mat","\xa0","\x0a","\x53","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(277)
					bool tmp5 = (tmp4 > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(277)
					if ((tmp5)){
						HX_STACK_LINE(278)
						this->internalType = (int)3;
						HX_STACK_LINE(279)
						::String tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(279)
						::String tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(279)
						int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(279)
						int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(279)
						::String tmp10 = tmp6.charAt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(279)
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(279)
						Dynamic s = tmp11;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(280)
						this->size = s;
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(282)
							int tmp12 = this->internalType;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(282)
							bool tmp13 = (tmp12 == (int)4);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(282)
							if ((tmp13)){
								HX_STACK_LINE(282)
								HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
							}
							HX_STACK_LINE(282)
							{
								HX_STACK_LINE(282)
								int tmp14 = this->size;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(282)
								int _g1 = tmp14;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(282)
								int tmp15 = _g1;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(282)
								switch( (int)(tmp15)){
									case (int)2: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)1).Add((int)0);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(282)
										this->value = Array_obj< Float >::__new().Add((int)0);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(306)
						this->internalType = (int)0;
						HX_STACK_LINE(307)
						::String tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(307)
						::String tmp7 = (HX_HCSTRING("Can't initialize value for type ","\x73","\x3e","\x80","\xa4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(307)
						Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),307,HX_HCSTRING("openfl.display.GLShaderParameter","\x95","\xf9","\x26","\x89"),HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(307)
						::haxe::Log_obj::trace(tmp7,tmp8);
					}
				}
			}
;
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLShaderParameter_obj,__init,(void))

Array< Float > GLShaderParameter_obj::set_value( Array< Float > v){
	HX_STACK_FRAME("openfl.display.GLShaderParameter","set_value",0xf280f7bb,"openfl.display.GLShaderParameter.set_value","openfl/display/Shader.hx",311,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(312)
	int tmp = this->internalType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	bool tmp1 = (tmp == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	if ((tmp1)){
		HX_STACK_LINE(312)
		HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a value, use bitmap instead","\xef","\xe0","\xbb","\x96"));
	}
	HX_STACK_LINE(313)
	return this->value = v;
}


HX_DEFINE_DYNAMIC_FUNC1(GLShaderParameter_obj,set_value,return )

::openfl::display::BitmapData GLShaderParameter_obj::set_bitmap( ::openfl::display::BitmapData v){
	HX_STACK_FRAME("openfl.display.GLShaderParameter","set_bitmap",0xdfacd865,"openfl.display.GLShaderParameter.set_bitmap","openfl/display/Shader.hx",315,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(316)
	int tmp = this->internalType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	bool tmp1 = (tmp != (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	if ((tmp1)){
		HX_STACK_LINE(316)
		HX_STACK_DO_THROW(HX_HCSTRING("This parameter doesn't accept a bitmap, use value instead","\x37","\x1c","\x84","\xb0"));
	}
	HX_STACK_LINE(317)
	::openfl::display::BitmapData tmp2 = this->bitmap = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(GLShaderParameter_obj,set_bitmap,return )


GLShaderParameter_obj::GLShaderParameter_obj()
{
}

void GLShaderParameter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLShaderParameter);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(arraySize,"arraySize");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(repeatX,"repeatX");
	HX_MARK_MEMBER_NAME(repeatY,"repeatY");
	HX_MARK_MEMBER_NAME(transpose,"transpose");
	HX_MARK_MEMBER_NAME(internalType,"internalType");
	HX_MARK_END_CLASS();
}

void GLShaderParameter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(arraySize,"arraySize");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(repeatX,"repeatX");
	HX_VISIT_MEMBER_NAME(repeatY,"repeatY");
	HX_VISIT_MEMBER_NAME(transpose,"transpose");
	HX_VISIT_MEMBER_NAME(internalType,"internalType");
}

Dynamic GLShaderParameter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"__init") ) { return __init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeatX") ) { return repeatX; }
		if (HX_FIELD_EQ(inName,"repeatY") ) { return repeatY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arraySize") ) { return arraySize; }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose; }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return set_bitmap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalType") ) { return internalType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLShaderParameter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == hx::paccAlways) return set_bitmap(inValue);bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeatX") ) { repeatX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeatY") ) { repeatY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arraySize") ) { arraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transpose") ) { transpose=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalType") ) { internalType=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLShaderParameter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLShaderParameter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("arraySize","\xfa","\x7a","\xc5","\x95"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6"));
	outFields->push(HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6"));
	outFields->push(HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"));
	outFields->push(HX_HCSTRING("internalType","\x97","\x68","\x89","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(GLShaderParameter_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(GLShaderParameter_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(GLShaderParameter_obj,arraySize),HX_HCSTRING("arraySize","\xfa","\x7a","\xc5","\x95")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLShaderParameter_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLShaderParameter_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsBool,(int)offsetof(GLShaderParameter_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsInt,(int)offsetof(GLShaderParameter_obj,repeatX),HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6")},
	{hx::fsInt,(int)offsetof(GLShaderParameter_obj,repeatY),HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6")},
	{hx::fsBool,(int)offsetof(GLShaderParameter_obj,transpose),HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c")},
	{hx::fsInt,(int)offsetof(GLShaderParameter_obj,internalType),HX_HCSTRING("internalType","\x97","\x68","\x89","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("arraySize","\xfa","\x7a","\xc5","\x95"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("repeatX","\x9d","\xd8","\x87","\xa6"),
	HX_HCSTRING("repeatY","\x9e","\xd8","\x87","\xa6"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("internalType","\x97","\x68","\x89","\x38"),
	HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_bitmap","\x2c","\x1e","\x11","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShaderParameter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShaderParameter_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShaderParameter_obj::__mClass;

void GLShaderParameter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GLShaderParameter","\x95","\xf9","\x26","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLShaderParameter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShaderParameter_obj >;
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
