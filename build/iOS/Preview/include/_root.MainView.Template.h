// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template;}

namespace g{

// public partial sealed class MainView.Template :5
// {
::g::Uno::UX::Template_type* MainView__Template_typeof();
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance);
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval);
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval);

struct MainView__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MainView*> __parent1;
    uWeak< ::g::MainView*> __parentInstance1;

    void ctor_1(::g::MainView* parent, ::g::MainView* parentInstance);
    static MainView__Template* New2(::g::MainView* parent, ::g::MainView* parentInstance);
};
// }

} // ::g
