// This file was generated based on /Users/ekrem/Documents/code/FlipApp/build/iOS/Preview/cache/ux11/Truth.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FlipApp_FuseControlsShape_Color_Property.h>
#include <_root.FlipApp_FuseControlsTextControl_Value_Property.h>
#include <_root.FlipApp_FuseElementsElement_Opacity_Property.h>
#include <_root.FlipApp_FuseTriggersWhileBool_Value_Property.h>
#include <_root.Truth.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.GreaterThan.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Subtract.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[7];

namespace g{

// public partial sealed class Truth :2
// {
// static Truth() :15
static void Truth__cctor_4_fn(uType* __type)
{
    Truth::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"swipe"*/], ::STRINGS[1/*"temp_eb0"*/]);
    Truth::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Opacity"*/]);
    Truth::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    Truth::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Color"*/]);
    Truth::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"swipe"*/]);
}

static void Truth_build(uType* type)
{
    ::STRINGS[0] = uString::Const("swipe");
    ::STRINGS[1] = uString::Const("temp_eb0");
    ::STRINGS[2] = uString::Const("Opacity");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("Color");
    ::STRINGS[5] = uString::Const("activeIndex");
    ::STRINGS[6] = uString::Const("limit");
    ::STRINGS[7] = uString::Const("text");
    ::STRINGS[8] = uString::Const("hexValue");
    ::STRINGS[9] = uString::Const("makeList");
    ::STRINGS[10] = uString::Const("TODO: Reference here?");
    ::STRINGS[11] = uString::Const("More!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::TappedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(116,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Truth, __g_nametable1), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Truth, swipe), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Truth, temp_eb0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::Truth, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Truth, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Truth, temp2_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Truth, this_Opacity_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Truth::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Truth::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Truth::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Truth::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Truth::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Truth__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* Truth_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 128;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(Truth);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Truth", options);
    type->fp_build_ = Truth_build;
    type->fp_ctor_ = (void*)Truth__New5_fn;
    type->fp_cctor_ = Truth__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Truth() :19
void Truth__ctor_8_fn(Truth* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :23
void Truth__InitializeUX_fn(Truth* __this)
{
    __this->InitializeUX();
}

// public Truth New() :19
void Truth__New5_fn(Truth** __retval)
{
    *__retval = Truth::New5();
}

uSStrong<uArray*> Truth::__g_static_nametable1_;
::g::Uno::UX::Selector Truth::__selector0_;
::g::Uno::UX::Selector Truth::__selector1_;
::g::Uno::UX::Selector Truth::__selector2_;
::g::Uno::UX::Selector Truth::__selector3_;

// public Truth() [instance] :19
void Truth::ctor_8()
{
    uStackFrame __("Truth", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void Truth::InitializeUX()
{
    uStackFrame __("Truth", "InitializeUX()");
    this_Opacity_inst = ::g::FlipApp_FuseElementsElement_Opacity_Property::New1(this, Truth::__selector0());
    swipe = ::g::Fuse::Gestures::SwipeGesture::New2();
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"activeIndex"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"limit"*/]);
    int temp5 = 2;
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(uBox<int>(::g::Uno::Int_typeof(), temp5));
    ::g::Fuse::Reactive::Subtract* temp7 = ::g::Fuse::Reactive::Subtract::New1(temp4, temp6);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::FlipApp_FuseTriggersWhileBool_Value_Property::New1(temp, Truth::__selector1());
    ::g::Fuse::Reactive::GreaterThan* temp8 = ::g::Fuse::Reactive::GreaterThan::New1(temp3, temp7);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Truth::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::FlipApp_FuseControlsTextControl_Value_Property::New1(temp1, Truth::__selector1());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"text"*/]);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    temp2_Color_inst = ::g::FlipApp_FuseControlsShape_Color_Property::New1(temp2, Truth::__selector2());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"hexValue"*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"makeList"*/]);
    ::g::Fuse::Navigation::EnteringAnimation* temp12 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp13 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ExitingAnimation* temp14 = ::g::Fuse::Navigation::ExitingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp15 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Triggers::AddingAnimation* temp17 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp19 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp20 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Gestures::WhileSwipeActive* temp22 = ::g::Fuse::Gestures::WhileSwipeActive::New2(swipe);
    ::g::Fuse::Animations::Move* temp23 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp24 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Color_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Button* temp30 = ::g::Fuse::Controls::Button::New5();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11, __g_nametable1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    temp13->X(-1.0f);
    temp13->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    temp15->Factor(0.75f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(0.7f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    temp18->X(-1.0f);
    temp18->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    temp20->Factor(0.75f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(0.7f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    uPtr(swipe)->Type(0);
    uPtr(swipe)->Direction(3);
    uPtr(swipe)->Length(200.0f);
    uPtr(swipe)->Name(Truth::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    temp23->Y(0.8f);
    temp23->Duration(1.0);
    temp23->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp23->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp24->Y(-50.0f);
    temp24->Duration(0.6);
    temp24->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp1->TextWrapping(1);
    temp1->FontSize(20.0f);
    temp1->TextAlignment(1);
    temp1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(10);
    temp1->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp1->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp28->Color(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp29->Value(::STRINGS[10/*"TODO: Refer...*/]);
    temp29->TextWrapping(1);
    temp29->FontSize(40.0f);
    temp29->TextAlignment(1);
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Alignment(10);
    temp29->Padding(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    temp29->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    temp30->Text(::STRINGS[11/*"More!"*/]);
    temp30->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp30->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp30->Alignment(12);
    ::g::Fuse::Gestures::Tapped::AddHandler(temp30, uDelegate::New(::TYPES[5/*Fuse.Gestures.TappedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
}

// public Truth New() [static] :19
Truth* Truth::New5()
{
    Truth* obj1 = (Truth*)uNew(Truth_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
