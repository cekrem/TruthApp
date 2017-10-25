// This file was generated based on /Users/ekrem/Documents/code/FlipApp/FlipApp.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class FlipApp_bundle :0
// {
// static FlipApp_bundle() :0
static void FlipApp_bundle__cctor__fn(uType* __type)
{
    FlipApp_bundle::appde5edfbb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FlipApp"*/]))->GetFile(::STRINGS[1/*"app-5cf0a2c...*/]);
}

static void FlipApp_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FlipApp");
    ::STRINGS[1] = uString::Const("app-5cf0a2c6.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FlipApp_bundle::appde5edfbb_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("appde5edfbb", 0));
}

uClassType* FlipApp_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FlipApp_bundle", options);
    type->fp_build_ = FlipApp_bundle_build;
    type->fp_cctor_ = FlipApp_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FlipApp_bundle::appde5edfbb_;
// }

} // ::g
