#ifndef INCLUDED_Animation
#define INCLUDED_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Animation)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::String name,::openfl::geom::Point startPoint,Array< ::Dynamic > frames,int width,int height,int speed,bool loop);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Animation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Animation_obj > __new(::String name,::openfl::geom::Point startPoint,Array< ::Dynamic > frames,int width,int height,int speed,bool loop);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed"); }

		::String animationName;
		Array< ::Dynamic > animationFrames;
		int animationWidth;
		int animationHeight;
		int animationSpeed;
		::openfl::geom::Rectangle currentFrame;
		bool loop;
		int tickCount;
		virtual ::openfl::geom::Rectangle updateAnimation( );
		Dynamic updateAnimation_dyn();

		virtual ::openfl::geom::Rectangle getFrame( );
		Dynamic getFrame_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getAnimWidth( );
		Dynamic getAnimWidth_dyn();

		virtual int getAnimHeight( );
		Dynamic getAnimHeight_dyn();

};


#endif /* INCLUDED_Animation */ 
