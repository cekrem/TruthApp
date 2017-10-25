// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_FuseControlsPageControl_ActiveIndex_Property.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class FlipApp_FuseControlsPageControl_ActiveIndex_Property :36
// {
static void FlipApp_FuseControlsPageControl_ActiveIndex_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::PageControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.PageControl*/], offsetof(::g::FlipApp_FuseControlsPageControl_ActiveIndex_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FlipApp_FuseControlsPageControl_ActiveIndex_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FlipApp_FuseControlsPageControl_ActiveIndex_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FlipApp_FuseControlsPageControl_ActiveIndex_Property", options);
    type->fp_build_ = FlipApp_FuseControlsPageControl_ActiveIndex_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FlipApp_FuseControlsPageControl_ActiveIndex_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FlipApp_FuseControlsPageControl_ActiveIndex_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FlipApp_FuseControlsPageControl_ActiveIndex_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FlipApp_FuseControlsPageControl_ActiveIndex_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FlipApp_FuseControlsPageControl_ActiveIndex_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :39
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__ctor_3_fn(FlipApp_FuseControlsPageControl_ActiveIndex_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed int Get(Uno.UX.PropertyObject obj) :41
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__Get1_fn(FlipApp_FuseControlsPageControl_ActiveIndex_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    uStackFrame __("FlipApp_FuseControlsPageControl_ActiveIndex_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::PageControl*>(obj, ::TYPES[0/*Fuse.Controls.PageControl*/]))->ActiveIndex(), void();
}

// public FlipApp_FuseControlsPageControl_ActiveIndex_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :39
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseControlsPageControl_ActiveIndex_Property** __retval)
{
    *__retval = FlipApp_FuseControlsPageControl_ActiveIndex_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :40
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__get_Object_fn(FlipApp_FuseControlsPageControl_ActiveIndex_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, int v, Uno.UX.IPropertyListener origin) :42
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__Set1_fn(FlipApp_FuseControlsPageControl_ActiveIndex_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    uStackFrame __("FlipApp_FuseControlsPageControl_ActiveIndex_Property", "Set(Uno.UX.PropertyObject,int,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::PageControl*>(obj, ::TYPES[0/*Fuse.Controls.PageControl*/]))->SetActiveIndex(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :43
void FlipApp_FuseControlsPageControl_ActiveIndex_Property__get_SupportsOriginSetter_fn(FlipApp_FuseControlsPageControl_ActiveIndex_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FlipApp_FuseControlsPageControl_ActiveIndex_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [instance] :39
void FlipApp_FuseControlsPageControl_ActiveIndex_Property::ctor_3(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FlipApp_FuseControlsPageControl_ActiveIndex_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [static] :39
FlipApp_FuseControlsPageControl_ActiveIndex_Property* FlipApp_FuseControlsPageControl_ActiveIndex_Property::New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    FlipApp_FuseControlsPageControl_ActiveIndex_Property* obj1 = (FlipApp_FuseControlsPageControl_ActiveIndex_Property*)uNew(FlipApp_FuseControlsPageControl_ActiveIndex_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
