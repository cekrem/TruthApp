// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class FlipApp_FuseTriggersWhileBool_Value_Property :28
// {
static void FlipApp_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.WhileBool*/], offsetof(::g::FlipApp_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FlipApp_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FlipApp_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FlipApp_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FlipApp_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FlipApp_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FlipApp_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FlipApp_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FlipApp_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :31
void FlipApp_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :33
void FlipApp_FuseTriggersWhileBool_Value_Property__Get1_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FlipApp_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FlipApp_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :31
void FlipApp_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FlipApp_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void FlipApp_FuseTriggersWhileBool_Value_Property__get_Object_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :34
void FlipApp_FuseTriggersWhileBool_Value_Property__Set1_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FlipApp_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FlipApp_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :31
void FlipApp_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FlipApp_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :31
FlipApp_FuseTriggersWhileBool_Value_Property* FlipApp_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FlipApp_FuseTriggersWhileBool_Value_Property* obj1 = (FlipApp_FuseTriggersWhileBool_Value_Property*)uNew(FlipApp_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
