// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_FuseElementsElement_Opacity_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class FlipApp_FuseElementsElement_Opacity_Property :10
// {
static void FlipApp_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::FlipApp_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FlipApp_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FlipApp_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FlipApp_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FlipApp_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FlipApp_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FlipApp_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FlipApp_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FlipApp_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FlipApp_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :13
void FlipApp_FuseElementsElement_Opacity_Property__ctor_3_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :15
void FlipApp_FuseElementsElement_Opacity_Property__Get1_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FlipApp_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FlipApp_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :13
void FlipApp_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FlipApp_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FlipApp_FuseElementsElement_Opacity_Property__get_Object_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :16
void FlipApp_FuseElementsElement_Opacity_Property__Set1_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FlipApp_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void FlipApp_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FlipApp_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :13
void FlipApp_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FlipApp_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :13
FlipApp_FuseElementsElement_Opacity_Property* FlipApp_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FlipApp_FuseElementsElement_Opacity_Property* obj1 = (FlipApp_FuseElementsElement_Opacity_Property*)uNew(FlipApp_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
