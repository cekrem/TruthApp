// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FlipApp_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class FlipApp_FuseElementsElement_Opacity_Property :10
// {
::g::Uno::UX::Property1_type* FlipApp_FuseElementsElement_Opacity_Property_typeof();
void FlipApp_FuseElementsElement_Opacity_Property__ctor_3_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FlipApp_FuseElementsElement_Opacity_Property__Get1_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FlipApp_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseElementsElement_Opacity_Property** __retval);
void FlipApp_FuseElementsElement_Opacity_Property__get_Object_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FlipApp_FuseElementsElement_Opacity_Property__Set1_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void FlipApp_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FlipApp_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct FlipApp_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FlipApp_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
