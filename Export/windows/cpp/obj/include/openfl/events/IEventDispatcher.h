#ifndef INCLUDED_openfl_events_IEventDispatcher
#define INCLUDED_openfl_events_IEventDispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  IEventDispatcher_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEventDispatcher_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference)=0;
		virtual Dynamic addEventListener_dyn()=0;
		virtual bool dispatchEvent( ::openfl::events::Event event)=0;
		virtual Dynamic dispatchEvent_dyn()=0;
		virtual bool hasEventListener( ::String type)=0;
		virtual Dynamic hasEventListener_dyn()=0;
		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture)=0;
		virtual Dynamic removeEventListener_dyn()=0;
		virtual bool willTrigger( ::String type)=0;
		virtual Dynamic willTrigger_dyn()=0;
};

#define DELEGATE_openfl_events_IEventDispatcher \
virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference) { return mDelegate->addEventListener(type,listener,useCapture,priority,useWeakReference);}  \
virtual Dynamic addEventListener_dyn() { return mDelegate->addEventListener_dyn();}  \
virtual bool dispatchEvent( ::openfl::events::Event event) { return mDelegate->dispatchEvent(event);}  \
virtual Dynamic dispatchEvent_dyn() { return mDelegate->dispatchEvent_dyn();}  \
virtual bool hasEventListener( ::String type) { return mDelegate->hasEventListener(type);}  \
virtual Dynamic hasEventListener_dyn() { return mDelegate->hasEventListener_dyn();}  \
virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture) { return mDelegate->removeEventListener(type,listener,useCapture);}  \
virtual Dynamic removeEventListener_dyn() { return mDelegate->removeEventListener_dyn();}  \
virtual bool willTrigger( ::String type) { return mDelegate->willTrigger(type);}  \
virtual Dynamic willTrigger_dyn() { return mDelegate->willTrigger_dyn();}  \


template<typename IMPL>
class IEventDispatcher_delegate_ : public IEventDispatcher_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEventDispatcher_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_events_IEventDispatcher
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_IEventDispatcher */ 
