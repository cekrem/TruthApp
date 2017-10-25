// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FlipApp_FuseReactiveEach_Limit_Property;}

namespace g{

// internal sealed class FlipApp_FuseReactiveEach_Limit_Property :53
// {
::g::Uno::UX::Property1_type* FlipApp_FuseReactiveEach_Limit_Property_typeof();
void FlipApp_FuseReactiveEach_Limit_Property__ctor_3_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void FlipApp_FuseReactiveEach_Limit_Property__Get1_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void FlipApp_FuseReactiveEach_Limit_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseReactiveEach_Limit_Property** __retval);
void FlipApp_FuseReactiveEach_Limit_Property__get_Object_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FlipApp_FuseReactiveEach_Limit_Property__Set1_fn(FlipApp_FuseReactiveEach_Limit_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);

struct FlipApp_FuseReactiveEach_Limit_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static FlipApp_FuseReactiveEach_Limit_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
