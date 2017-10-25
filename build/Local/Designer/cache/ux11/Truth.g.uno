[Uno.Compiler.UxGenerated]
public partial class Truth: Fuse.Controls.Page
{
    global::Uno.UX.Property<float> truthBlur_Radius_inst;
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
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
        var temp3 = new global::Fuse.Reactive.Data("activeIndex");
        var temp4 = new global::Fuse.Reactive.Data("limit");
        var temp5 = 2;
        var temp6 = new global::Fuse.Reactive.Constant(temp5);
        var temp7 = new global::Fuse.Reactive.Subtract(temp4, temp6);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp, __selector2);
        var temp8 = new global::Fuse.Reactive.GreaterThan(temp3, temp7);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new FlipApp_FuseControlsTextControl_Value_Property(temp1, __selector2);
        var temp9 = new global::Fuse.Reactive.Data("text");
        var temp2 = new global::Fuse.Controls.Rectangle();
        temp2_Color_inst = new FlipApp_FuseControlsShape_Color_Property(temp2, __selector3);
        var temp10 = new global::Fuse.Reactive.Data("hexValue");
        var temp11 = new global::Fuse.Reactive.Data("makeList");
        var temp12 = new global::Fuse.Navigation.EnteringAnimation();
        var temp13 = new global::Fuse.Animations.Move();
        var temp14 = new global::Fuse.Animations.Change<float>(truthBlur_Radius_inst);
        var temp15 = new global::Fuse.Navigation.ExitingAnimation();
        var temp16 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp17 = new global::Fuse.Animations.Change<float>(truthBlur_Radius_inst);
        var temp18 = new global::Fuse.Gestures.WhileSwipeActive(swipe);
        var temp19 = new global::Fuse.Animations.Move();
        var temp20 = new global::Fuse.Animations.Move();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Rectangle();
        var temp25 = new global::Fuse.Controls.Text();
        var temp26 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp11, __g_nametable);
        truthBlur.Radius = 0f;
        truthBlur.Name = __selector4;
        temp12.Animators.Add(temp13);
        temp12.Animators.Add(temp14);
        temp13.X = -1f;
        temp13.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp14.Value = 3f;
        temp15.Animators.Add(temp16);
        temp15.Animators.Add(temp17);
        temp16.Value = 0.7f;
        temp17.Value = 3f;
        temp2.Children.Add(swipe);
        temp2.Children.Add(temp18);
        temp2.Children.Add(temp);
        temp2.Children.Add(temp1);
        temp2.Bindings.Add(temp23);
        swipe.Type = Fuse.Gestures.SwipeType.Simple;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Down;
        swipe.Length = 200f;
        swipe.Name = __selector5;
        temp18.Animators.Add(temp19);
        temp19.Y = 0.8f;
        temp19.Duration = 1;
        temp19.RelativeTo = Fuse.TranslationModes.Size;
        temp19.Easing = Fuse.Animations.Easing.CubicOut;
        temp.Animators.Add(temp20);
        temp.Bindings.Add(temp21);
        temp20.Y = -50f;
        temp20.Duration = 0.6;
        temp20.Easing = Fuse.Animations.Easing.CubicIn;
        temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp1.FontSize = 20f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.Color = float4(1f, 1f, 1f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Margin = float4(50f, 0f, 50f, 0f);
        temp1.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
        temp1.Font = global::MainView.Lato;
        temp1.Bindings.Add(temp22);
        temp24.Color = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp26);
        temp25.Value = "TODO: Reference here?";
        temp25.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp25.FontSize = 40f;
        temp25.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp25.Color = float4(1f, 1f, 1f, 1f);
        temp25.Alignment = Fuse.Elements.Alignment.Center;
        temp25.Padding = float4(40f, 0f, 40f, 0f);
        temp25.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
        temp25.Font = global::MainView.Lato;
        temp26.Text = "More!";
        temp26.Color = float4(1f, 1f, 1f, 1f);
        temp26.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp26.Alignment = Fuse.Elements.Alignment.Bottom;
        global::Fuse.Gestures.Tapped.AddHandler(temp26, temp_eb0.OnEvent);
        temp26.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(truthBlur);
        __g_nametable.Objects.Add(swipe);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(truthBlur);
        this.Children.Add(temp12);
        this.Children.Add(temp15);
        this.Children.Add(temp2);
        this.Children.Add(temp24);
    }
    static global::Uno.UX.Selector __selector0 = "Radius";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "truthBlur";
    static global::Uno.UX.Selector __selector5 = "swipe";
}
