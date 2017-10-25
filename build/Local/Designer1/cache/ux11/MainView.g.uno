[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb1"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Truth();
            var temp = new global::Fuse.Reactive.Data("onActivated");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp_eb1 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
            global::Fuse.Navigation.Activated.AddHandler(__self, temp_eb1.OnEvent);
            __g_nametable.Objects.Add(temp_eb1);
            __self.Bindings.Add(temp_eb1);
            return __self;
        }
    }
    global::Uno.UX.Property<float> truthSlider_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<int> temp2_Limit_inst;
    global::Uno.UX.Property<int> temp2_Offset_inst;
    global::Uno.UX.Property<int> truthSlider_ActiveIndex_inst;
    internal global::Fuse.Controls.PageControl truthSlider;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "truthSlider"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp4 = new global::Fuse.Reactive.FuseJS.Http();
        var temp5 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp6 = new global::Fuse.Drawing.BrushConverter();
        var temp7 = new global::Fuse.Triggers.BusyTaskModule();
        var temp8 = new global::Fuse.Testing.UnoTestingHelper();
        var temp9 = new global::Fuse.FileSystem.FileSystemModule();
        var temp10 = new global::Fuse.Storage.StorageModule();
        var temp11 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp12 = new global::Polyfills.Window.WindowModule();
        var temp13 = new global::FuseJS.Globals();
        var temp14 = new global::FuseJS.Lifecycle();
        var temp15 = new global::FuseJS.Environment();
        var temp16 = new global::FuseJS.Base64();
        var temp17 = new global::FuseJS.Bundle();
        var temp18 = new global::FuseJS.FileReaderImpl();
        var temp19 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        truthSlider = new global::Fuse.Controls.PageControl();
        truthSlider_Opacity_inst = new FlipApp_FuseElementsElement_Opacity_Property(truthSlider, __selector0);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp20 = new global::Fuse.Reactive.Data("loaded");
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new FlipApp_FuseTriggersWhileBool_Value_Property(temp1, __selector1);
        var temp21 = new global::Fuse.Reactive.Data("doingShuffle");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new FlipApp_FuseReactiveEach_Items_Property(temp2, __selector2);
        var temp22 = new global::Fuse.Reactive.Data("list");
        temp2_Limit_inst = new FlipApp_FuseReactiveEach_Limit_Property(temp2, __selector3);
        var temp23 = new global::Fuse.Reactive.Data("limit");
        temp2_Offset_inst = new FlipApp_FuseReactiveEach_Offset_Property(temp2, __selector4);
        var temp24 = new global::Fuse.Reactive.Data("offset");
        truthSlider_ActiveIndex_inst = new FlipApp_FuseControlsPageControl_ActiveIndex_Property(truthSlider, __selector5);
        var temp25 = new global::Fuse.Reactive.Data("activeIndex");
        var temp26 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp27 = new global::Fuse.Motion.NavigationMotion();
        var temp28 = new global::Fuse.Animations.Change<float>(truthSlider_Opacity_inst);
        var temp29 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp20, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Fuse.Animations.Rotate();
        var temp31 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp21, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp32 = new Template(this, this);
        var temp33 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp22, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp34 = new global::Fuse.Reactive.DataBinding(temp2_Limit_inst, temp23, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp35 = new global::Fuse.Reactive.DataBinding(temp2_Offset_inst, temp24, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp36 = new global::Fuse.Reactive.DataBinding(truthSlider_ActiveIndex_inst, temp25, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Background = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
        temp26.LineNumber = 2;
        temp26.FileName = "MainView.ux";
        temp26.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../app.js"));
        truthSlider.AllowedSwipeDirections = Fuse.Navigation.AllowedNavigationDirections.Backward;
        truthSlider.Transition = Fuse.Controls.NavigationControlTransition.None;
        truthSlider.Opacity = 0f;
        truthSlider.Name = __selector6;
        truthSlider.Motion = temp27;
        truthSlider.Children.Add(temp);
        truthSlider.Children.Add(temp1);
        truthSlider.Children.Add(temp2);
        truthSlider.Bindings.Add(temp36);
        temp27.Overflow = Fuse.Motion.OverflowType.Elastic;
        temp.Animators.Add(temp28);
        temp.Bindings.Add(temp29);
        temp28.Value = 1f;
        temp28.Duration = 1;
        temp28.Easing = Fuse.Animations.Easing.CubicInOut;
        temp1.Animators.Add(temp30);
        temp1.Bindings.Add(temp31);
        temp30.Degrees = 360f;
        temp30.Duration = 1.5;
        temp30.Easing = Fuse.Animations.Easing.CubicInOut;
        temp2.Templates.Add(temp32);
        temp2.Bindings.Add(temp33);
        temp2.Bindings.Add(temp34);
        temp2.Bindings.Add(temp35);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(truthSlider);
        this.Children.Add(temp26);
        this.Children.Add(truthSlider);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Limit";
    static global::Uno.UX.Selector __selector4 = "Offset";
    static global::Uno.UX.Selector __selector5 = "ActiveIndex";
    static global::Uno.UX.Selector __selector6 = "truthSlider";
}
