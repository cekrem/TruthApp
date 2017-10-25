// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.Truth.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.EventArgs.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{

// public partial sealed class MainView.Template :5
// {
// static Template() :19
static void MainView__Template__cctor__fn(uType* __type)
{
    MainView__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb1"*/]);
}

static void MainView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb1");
    ::STRINGS[1] = uString::Const("onActivated");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView__Template, __g_nametable1), 0,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parentInstance1), uFieldFlagsWeak,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView__Template::__g_static_nametable1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->fp_build_ = MainView__Template_build;
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template__New1_fn;
    return type;
}

// public Template(MainView parent, MainView parentInstance) :9
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :22
void MainView__Template__New1_fn(MainView__Template* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template", "New()");
    ::g::Truth* __self1 = ::g::Truth::New5();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"onActivated"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MainView__Template::__g_static_nametable1());
    ::g::Fuse::Reactive::EventBinding* temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp, __this->__g_nametable1);
    ::g::Fuse::Navigation::Activated::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb11));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    return *__retval = __self1, void();
}

// public Template New(MainView parent, MainView parentInstance) :9
void MainView__Template__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template** __retval)
{
    *__retval = MainView__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> MainView__Template::__g_static_nametable1_;

// public Template(MainView parent, MainView parentInstance) [instance] :9
void MainView__Template::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MainView parent, MainView parentInstance) [static] :9
MainView__Template* MainView__Template::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
