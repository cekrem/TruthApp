// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/FlipApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FlipApp_FuseTriggersWhileBool_Value_Property;}

namespace g{

// internal sealed class FlipApp_FuseTriggersWhileBool_Value_Property :28
// {
::g::Uno::UX::Property1_type* FlipApp_FuseTriggersWhileBool_Value_Property_typeof();
void FlipApp_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name);
void FlipApp_FuseTriggersWhileBool_Value_Property__Get1_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FlipApp_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FlipApp_FuseTriggersWhileBool_Value_Property** __retval);
void FlipApp_FuseTriggersWhileBool_Value_Property__get_Object_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FlipApp_FuseTriggersWhileBool_Value_Property__Set1_fn(FlipApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct FlipApp_FuseTriggersWhileBool_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileBool*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
    static FlipApp_FuseTriggersWhileBool_Value_Property* New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
