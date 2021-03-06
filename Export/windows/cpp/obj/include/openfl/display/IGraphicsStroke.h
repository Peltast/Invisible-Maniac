#ifndef INCLUDED_openfl_display_IGraphicsStroke
#define INCLUDED_openfl_display_IGraphicsStroke

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,IGraphicsStroke)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsStroke_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGraphicsStroke_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};

#define DELEGATE_openfl_display_IGraphicsStroke \


template<typename IMPL>
class IGraphicsStroke_delegate_ : public IGraphicsStroke_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGraphicsStroke_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_display_IGraphicsStroke
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IGraphicsStroke */ 
