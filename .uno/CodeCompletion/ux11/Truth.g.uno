[Uno.Compiler.UxGenerated]
public partial class Truth: Fuse.Controls.Page
{
    global::Uno.UX.Property<float> truthBlur_Radius_inst;
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<float4> temp3_Color_inst;
    internal global::Fuse.Effects.Blur truthBlur;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "truthBlur",
        "swipe",
        "temp_eb0"
    };
    static Truth()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Truth()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        truthBlur = new global::Fuse.Effects.Blur();
        truthBlur_Radius_inst = new FlipApp_FuseEffectsBlur_Radius_Property(truthBlur, __selector0);
        this_Opacity_inst = new FlipApp_FuseElementsElement_Opacity_Property(this, __selector1);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        var temp4 = new global::Fuse.Reactive.Data("activeIndex");
        var temp5 = new global::Fuse.Reactive.Data("limit");
        var temp6 = 2;
        var temp7 = new global::Fuse.Reactive.Constant(temp6);
        var temp8 = new global::Fuse.Reactive.Subtract(temp5, temp7);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp, __selector2);
        var temp9 = new global::Fuse.Reactive.GreaterThan(temp4, temp8);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp1, __selector2);
        var temp10 = new global::Fuse.Reactive.Data("doingShuffle");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new FlipApp_FuseControlsTextControl_Value_Property(temp2, __selector2);
        var temp11 = new global::Fuse.Reactive.Data("text");
        var temp3 = new global::Fuse.Controls.Rectangle();
        temp3_Color_inst = new FlipApp_FuseControlsShape_Color_Property(temp3, __selector3);
        var temp12 = new global::Fuse.Reactive.Data("hexValue");
        var temp13 = new global::Fuse.Reactive.Data("makeList");
        var temp14 = new global::Fuse.Navigation.EnteringAnimation();
        var temp15 = new global::Fuse.Animations.Move();
        var temp16 = new global::Fuse.Animations.Change<float>(truthBlur_Radius_inst);
        var temp17 = new global::Fuse.Navigation.ExitingAnimation();
        var temp18 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp19 = new global::Fuse.Animations.Change<float>(truthBlur_Radius_inst);
        var temp20 = new global::Fuse.Gestures.WhileSwipeActive(swipe);
        var temp21 = new global::Fuse.Animations.Move();
        var temp22 = new global::Fuse.Animations.Move();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Animations.Scale();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Reactive.DataBinding(temp3_Color_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Rectangle();
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp13, __g_nametable);
        truthBlur.Radius = 0f;
        truthBlur.Name = __selector4;
        temp14.Animators.Add(temp15);
        temp14.Animators.Add(temp16);
        temp15.X = -1f;
        temp15.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp16.Value = 3f;
        temp17.Animators.Add(temp18);
        temp17.Animators.Add(temp19);
        temp18.Value = 0.7f;
        temp19.Value = 3f;
        temp3.Children.Add(swipe);
        temp3.Children.Add(temp20);
        temp3.Children.Add(temp);
        temp3.Children.Add(temp2);
        temp3.Bindings.Add(temp27);
        swipe.Type = Fuse.Gestures.SwipeType.Simple;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Down;
        swipe.Length = 200f;
        swipe.Name = __selector5;
        temp20.Animators.Add(temp21);
        temp21.Y = 0.8f;
        temp21.Duration = 1;
        temp21.RelativeTo = Fuse.TranslationModes.Size;
        temp21.Easing = Fuse.Animations.Easing.CubicOut;
        temp.Animators.Add(temp22);
        temp.Bindings.Add(temp23);
        temp22.Y = -50f;
        temp22.Duration = 0.6;
        temp22.Easing = Fuse.Animations.Easing.CubicIn;
        temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp2.FontSize = 20f;
        temp2.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp2.Color = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Margin = float4(50f, 0f, 50f, 0f);
        temp2.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
        temp2.Font = global::MainView.Lato;
        temp2.Children.Add(temp1);
        temp2.Bindings.Add(temp26);
        temp1.Animators.Add(temp24);
        temp1.Bindings.Add(temp25);
        temp24.Factor = 0.9f;
        temp24.Duration = 1;
        temp24.Easing = Fuse.Animations.Easing.CubicInOut;
        temp28.Color = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp30);
        temp29.Value = "TODO: Reference here?";
        temp29.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp29.FontSize = 40f;
        temp29.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp29.Color = float4(1f, 1f, 1f, 1f);
        temp29.Alignment = Fuse.Elements.Alignment.Center;
        temp29.Padding = float4(40f, 0f, 40f, 0f);
        temp29.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
        temp29.Font = global::MainView.Lato;
        temp30.Text = "More";
        temp30.Color = float4(1f, 1f, 1f, 1f);
        temp30.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp30.Alignment = Fuse.Elements.Alignment.Bottom;
        global::Fuse.Gestures.Tapped.AddHandler(temp30, temp_eb0.OnEvent);
        temp30.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(truthBlur);
        __g_nametable.Objects.Add(swipe);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(truthBlur);
        this.Children.Add(temp14);
        this.Children.Add(temp17);
        this.Children.Add(temp3);
        this.Children.Add(temp28);
    }
    static global::Uno.UX.Selector __selector0 = "Radius";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "truthBlur";
    static global::Uno.UX.Selector __selector5 = "swipe";
}
