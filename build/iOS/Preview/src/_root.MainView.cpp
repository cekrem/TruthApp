// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_bundle.h>
#include <_root.FlipApp_FuseControlsPageControl_ActiveIndex_Property.h>
#include <_root.FlipApp_FuseElementsElement_Opacity_Property.h>
#include <_root.FlipApp_FuseReactiveEach_Items_Property.h>
#include <_root.FlipApp_FuseReactiveEach_Limit_Property.h>
#include <_root.FlipApp_FuseReactiveEach_Offset_Property.h>
#include <_root.FlipApp_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.NavigationControlTransition.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[101];
static uType* TYPES[7];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :46
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"truthSlider"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Value"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Items"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Limit"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Offset"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"ActiveIndex"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"truthSlider"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[7/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[8/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[9/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[10/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[11/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[12/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[13/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[14/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[15/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[16/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[17/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[18/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[19/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[20/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[21/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[22/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[23/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[24/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[25/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[26/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[27/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[28/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[29/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[30/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[31/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[32/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[33/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[34/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[35/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[36/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[37/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[38/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[38/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[39/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[39/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[40/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[40/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[41/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[41/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[42/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[42/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[43/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[43/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[44/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[44/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[45/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[45/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[46/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[46/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[47/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[47/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[48/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[48/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[49/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[49/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[50/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[50/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[51/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[51/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[52/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[52/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[53/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[53/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[54/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[54/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[55/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[56/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[57/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[58/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[59/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[60/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[61/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[62/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[63/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[63/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[64/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[65/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[66/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[66/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[67/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[68/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[69/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[69/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[70/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[71/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[72/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[73/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[74/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[75/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[76/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[77/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[78/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[79/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[80/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[81/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[82/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[83/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[84/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[85/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[86/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[87/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[88/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[89/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[90/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[91/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[92/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[93/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("truthSlider");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Items");
    ::STRINGS[4] = uString::Const("Limit");
    ::STRINGS[5] = uString::Const("Offset");
    ::STRINGS[6] = uString::Const("ActiveIndex");
    ::STRINGS[7] = uString::Const("Linear");
    ::STRINGS[8] = uString::Const("QuadraticIn");
    ::STRINGS[9] = uString::Const("QuadraticOut");
    ::STRINGS[10] = uString::Const("QuadraticInOut");
    ::STRINGS[11] = uString::Const("CubicIn");
    ::STRINGS[12] = uString::Const("CubicOut");
    ::STRINGS[13] = uString::Const("CubicInOut");
    ::STRINGS[14] = uString::Const("QuarticIn");
    ::STRINGS[15] = uString::Const("QuarticOut");
    ::STRINGS[16] = uString::Const("QuarticInOut");
    ::STRINGS[17] = uString::Const("QuinticIn");
    ::STRINGS[18] = uString::Const("QuinticOut");
    ::STRINGS[19] = uString::Const("QuinticInOut");
    ::STRINGS[20] = uString::Const("SinusoidalIn");
    ::STRINGS[21] = uString::Const("SinusoidalOut");
    ::STRINGS[22] = uString::Const("SinusoidalInOut");
    ::STRINGS[23] = uString::Const("ExponentialIn");
    ::STRINGS[24] = uString::Const("ExponentialOut");
    ::STRINGS[25] = uString::Const("ExponentialInOut");
    ::STRINGS[26] = uString::Const("CircularIn");
    ::STRINGS[27] = uString::Const("CircularOut");
    ::STRINGS[28] = uString::Const("CircularInOut");
    ::STRINGS[29] = uString::Const("ElasticIn");
    ::STRINGS[30] = uString::Const("ElasticOut");
    ::STRINGS[31] = uString::Const("ElasticInOut");
    ::STRINGS[32] = uString::Const("BackIn");
    ::STRINGS[33] = uString::Const("BackOut");
    ::STRINGS[34] = uString::Const("BackInOut");
    ::STRINGS[35] = uString::Const("BounceIn");
    ::STRINGS[36] = uString::Const("BounceOut");
    ::STRINGS[37] = uString::Const("BounceInOut");
    ::STRINGS[38] = uString::Const("Transparent");
    ::STRINGS[39] = uString::Const("Black");
    ::STRINGS[40] = uString::Const("Silver");
    ::STRINGS[41] = uString::Const("Gray");
    ::STRINGS[42] = uString::Const("White");
    ::STRINGS[43] = uString::Const("Maroon");
    ::STRINGS[44] = uString::Const("Red");
    ::STRINGS[45] = uString::Const("Purple");
    ::STRINGS[46] = uString::Const("Fuchsia");
    ::STRINGS[47] = uString::Const("Green");
    ::STRINGS[48] = uString::Const("Lime");
    ::STRINGS[49] = uString::Const("Olive");
    ::STRINGS[50] = uString::Const("Yellow");
    ::STRINGS[51] = uString::Const("Navy");
    ::STRINGS[52] = uString::Const("Blue");
    ::STRINGS[53] = uString::Const("Teal");
    ::STRINGS[54] = uString::Const("Aqua");
    ::STRINGS[55] = uString::Const("TopLeft");
    ::STRINGS[56] = uString::Const("Center");
    ::STRINGS[57] = uString::Const("Anchor");
    ::STRINGS[58] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[59] = uString::Const("VerticalBoxCenter");
    ::STRINGS[60] = uString::Const("TransformOriginOffset");
    ::STRINGS[61] = uString::Const("PositionOffset");
    ::STRINGS[62] = uString::Const("SizeFactor");
    ::STRINGS[63] = uString::Const("Size");
    ::STRINGS[64] = uString::Const("GiveFocus");
    ::STRINGS[65] = uString::Const("Keyboard");
    ::STRINGS[66] = uString::Const("LayoutChange");
    ::STRINGS[67] = uString::Const("WorldPositionChange");
    ::STRINGS[68] = uString::Const("PositionChange");
    ::STRINGS[69] = uString::Const("SizeChange");
    ::STRINGS[70] = uString::Const("Points");
    ::STRINGS[71] = uString::Const("Pixels");
    ::STRINGS[72] = uString::Const("ContentSize");
    ::STRINGS[73] = uString::Const("ScrollViewSize");
    ::STRINGS[74] = uString::Const("PreloadRetain");
    ::STRINGS[75] = uString::Const("UnloadUnused");
    ::STRINGS[76] = uString::Const("QuickUnload");
    ::STRINGS[77] = uString::Const("UnloadInBackground");
    ::STRINGS[78] = uString::Const("Thin");
    ::STRINGS[79] = uString::Const("Light");
    ::STRINGS[80] = uString::Const("Regular");
    ::STRINGS[81] = uString::Const("Medium");
    ::STRINGS[82] = uString::Const("Bold");
    ::STRINGS[83] = uString::Const("ThinItalic");
    ::STRINGS[84] = uString::Const("LightItalic");
    ::STRINGS[85] = uString::Const("Italic");
    ::STRINGS[86] = uString::Const("MediumItalic");
    ::STRINGS[87] = uString::Const("BoldItalic");
    ::STRINGS[88] = uString::Const("PlatformDefault");
    ::STRINGS[89] = uString::Const("Identity");
    ::STRINGS[90] = uString::Const("Local");
    ::STRINGS[91] = uString::Const("ParentSize");
    ::STRINGS[92] = uString::Const("Width");
    ::STRINGS[93] = uString::Const("Height");
    ::STRINGS[94] = uString::Const("loaded");
    ::STRINGS[95] = uString::Const("doingShuffle");
    ::STRINGS[96] = uString::Const("list");
    ::STRINGS[97] = uString::Const("limit");
    ::STRINGS[98] = uString::Const("offset");
    ::STRINGS[99] = uString::Const("activeIndex");
    ::STRINGS[100] = uString::Const("MainView.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::MainView, temp2_Limit_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::MainView, temp2_Offset_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, truthSlider), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::MainView, truthSlider_ActiveIndex_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, truthSlider_Opacity_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :157
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :161
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :157
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;

// public MainView() [instance] :157
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :161
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp3 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp4 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp5 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp6 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp7 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp8 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp9 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp10 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp11 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp12 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp13 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp14 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp15 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp16 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp17 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp18 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp19 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    truthSlider = ::g::Fuse::Controls::PageControl::New4();
    truthSlider_Opacity_inst = ::g::FlipApp_FuseElementsElement_Opacity_Property::New1(truthSlider, MainView::__selector0());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::FlipApp_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector1());
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[94/*"loaded"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp1_Value_inst = ::g::FlipApp_FuseTriggersWhileBool_Value_Property::New1(temp1, MainView::__selector1());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[95/*"doingShuffle"*/]);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::FlipApp_FuseReactiveEach_Items_Property::New1(temp2, MainView::__selector2());
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[96/*"list"*/]);
    temp2_Limit_inst = ::g::FlipApp_FuseReactiveEach_Limit_Property::New1(temp2, MainView::__selector3());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[97/*"limit"*/]);
    temp2_Offset_inst = ::g::FlipApp_FuseReactiveEach_Offset_Property::New1(temp2, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[98/*"offset"*/]);
    truthSlider_ActiveIndex_inst = ::g::FlipApp_FuseControlsPageControl_ActiveIndex_Property::New1(truthSlider, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[99/*"activeIndex"*/]);
    ::g::Fuse::Reactive::JavaScript* temp26 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Animations::Change* temp27 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], truthSlider_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp20, __g_nametable1, 3);
    ::g::Fuse::Animations::Rotate* temp29 = ::g::Fuse::Animations::Rotate::New2();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp21, __g_nametable1, 3);
    MainView__Template* temp31 = MainView__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp22, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Limit_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Offset_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(truthSlider_ActiveIndex_inst, (uObject*)temp25, __g_nametable1, 3);
    Background(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    temp26->LineNumber(2);
    temp26->FileName(::STRINGS[100/*"MainView.ux"*/]);
    temp26->File(::g::Uno::UX::BundleFileSource::New1(::g::FlipApp_bundle::appde5edfbb()));
    uPtr(truthSlider)->AllowedSwipeDirections(2);
    uPtr(truthSlider)->Transition(1);
    uPtr(truthSlider)->Opacity(0.0f);
    uPtr(truthSlider)->Name(MainView::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(truthSlider)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(truthSlider)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(truthSlider)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(truthSlider)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    ::g::Fuse::Animations::Change__set_Value_fn(temp27, uCRef(1.0f));
    temp27->Duration(1.5);
    temp27->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp29->Degrees(1080.0f);
    temp29->Duration(1.5);
    temp29->DurationBack(0.0);
    temp29->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), truthSlider);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), truthSlider);
}

// public MainView New() [static] :157
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
