// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_FuseReactiveEach_Limit_Property.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class FlipApp_FuseReactiveEach_Limit_Property :53
// {
static void FlipApp_FuseReactiveEach_Limit_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(::g::FlipApp_FuseReactiveEach_Limit_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FlipApp_FuseReactiveEach_Limit_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FlipApp_FuseReactiveEach_Limit_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FlipApp_FuseReactiveEach_Limit_Property", options);
    type->fp_build_ = FlipApp_FuseReactiveEach_Limit_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FlipApp_FuseReactiveEach_Limit_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FlipApp_FuseReactiveEach_Limit_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FlipApp_FuseReactiveEach_Limit_Property__Set1_fn;
    return type;
}

// public FlipApp_FuseReactiveEach_Limit_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :56
void FlipApp_FuseReactiveEach_Limit_Property__ctor_3_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed int Get(Uno.UX.PropertyObject obj) :58
void FlipApp_FuseReactiveEach_Limit_Property__Get1_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    uStackFrame __("FlipApp_FuseReactiveEach_Limit_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Limit1(), void();
}

// public FlipApp_FuseReactiveEach_Limit_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :56
void FlipApp_FuseReactiveEach_Limit_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseReactiveEach_Limit_Property** __retval)
{
    *__retval = FlipApp_FuseReactiveEach_Limit_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :57
void FlipApp_FuseReactiveEach_Limit_Property__get_Object_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, int v, Uno.UX.IPropertyListener origin) :59
void FlipApp_FuseReactiveEach_Limit_Property__Set1_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    uStackFrame __("FlipApp_FuseReactiveEach_Limit_Property", "Set(Uno.UX.PropertyObject,int,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Limit1(v_);
}

// public FlipApp_FuseReactiveEach_Limit_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :56
void FlipApp_FuseReactiveEach_Limit_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FlipApp_FuseReactiveEach_Limit_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :56
FlipApp_FuseReactiveEach_Limit_Property* FlipApp_FuseReactiveEach_Limit_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    FlipApp_FuseReactiveEach_Limit_Property* obj1 = (FlipApp_FuseReactiveEach_Limit_Property*)uNew(FlipApp_FuseReactiveEach_Limit_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
