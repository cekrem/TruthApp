[Uno.Compiler.UxGenerated]
public partial class Truth: Fuse.Controls.Page
{
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
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
        this_Opacity_inst = new FlipApp_FuseElementsElement_Opacity_Property(this, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("activeIndex");
        var temp4 = new global::Fuse.Reactive.Data("limit");
        var temp5 = 2;
        var temp6 = new global::Fuse.Reactive.Constant(temp5);
        var temp7 = new global::Fuse.Reactive.Subtract(temp4, temp6);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp8 = new global::Fuse.Reactive.GreaterThan(temp3, temp7);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new FlipApp_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp9 = new global::Fuse.Reactive.Data("text");
        var temp2 = new global::Fuse.Controls.Rectangle();
        temp2_Color_inst = new FlipApp_FuseControlsShape_Color_Property(temp2, __selector2);
        var temp10 = new global::Fuse.Reactive.Data("hexValue");
        var temp11 = new global::Fuse.Reactive.Data("makeList");
        var temp12 = new global::Fuse.Navigation.EnteringAnimation();
        var temp13 = new global::Fuse.Animations.Move();
        var temp14 = new global::Fuse.Navigation.ExitingAnimation();
        var temp15 = new global::Fuse.Animations.Scale();
        var temp16 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp17 = new global::Fuse.Triggers.AddingAnimation();
        var temp18 = new global::Fuse.Animations.Move();
        var temp19 = new global::Fuse.Triggers.RemovingAnimation();
        var temp20 = new global::Fuse.Animations.Scale();
        var temp21 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp22 = new global::Fuse.Gestures.WhilePressed();
        var temp23 = new global::Fuse.Animations.Move();
        var temp24 = new global::Fuse.Animations.Move();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Rectangle();
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp11, __g_nametable);
        temp12.Animators.Add(temp13);
        temp13.X = -1f;
        temp13.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp14.Animators.Add(temp15);
        temp14.Animators.Add(temp16);
        temp15.Factor = 0.75f;
        temp16.Value = 0.7f;
        temp17.Animators.Add(temp18);
        temp18.X = -1f;
        temp18.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp19.Animators.Add(temp20);
        temp19.Animators.Add(temp21);
        temp20.Factor = 0.75f;
        temp21.Value = 0.7f;
        temp2.Children.Add(temp22);
        temp2.Children.Add(temp);
        temp2.Children.Add(temp1);
        temp2.Bindings.Add(temp27);
        temp22.Animators.Add(temp23);
        temp23.Y = 0.6f;
        temp23.Duration = 0.6;
        temp23.RelativeTo = Fuse.TranslationModes.Size;
        temp23.Easing = Fuse.Animations.Easing.CubicIn;
        temp.Animators.Add(temp24);
        temp.Bindings.Add(temp25);
        temp24.Y = -50f;
        temp24.Duration = 0.6;
        temp24.Easing = Fuse.Animations.Easing.CubicIn;
        temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp1.FontSize = 20f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.Color = float4(1f, 1f, 1f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Margin = float4(50f, 0f, 50f, 0f);
        temp1.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
        temp1.Bindings.Add(temp26);
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
        temp30.Text = "More!";
        temp30.Color = float4(1f, 1f, 1f, 1f);
        temp30.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp30.Alignment = Fuse.Elements.Alignment.Bottom;
        global::Fuse.Gestures.Tapped.AddHandler(temp30, temp_eb0.OnEvent);
        temp30.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp12);
        this.Children.Add(temp14);
        this.Children.Add(temp17);
        this.Children.Add(temp19);
        this.Children.Add(temp2);
        this.Children.Add(temp28);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Color";
}
