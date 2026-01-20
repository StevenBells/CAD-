using Gssoft.Gscad.Runtime;
using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using GrxCAD.Interop;


namespace test
{
    public class PreferencesSet_95
    {
        [CommandMethod("SetAllPreferences")]
        public static void SetAllPreferences()
        {
            //获得当前文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            GcadPreferences preferences = Application.Preferences as GcadPreferences;
            //十字光标大小为50
            preferences.Display.CursorSize = 50;
            //滚动条不显示
            preferences.Display.DisplayScrollBars = false;
            //布局选项卡不显示
            preferences.Display.DisplayLayoutTabs = false;
            //    try
            //    {
            //        // 获得Preferences对象
            //        GcadPreferences preferences = Application.Preferences as GcadPreferences;

            //        //if (preferences == null)
            //        //{
            //        //    Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage( "\n无法获取Preferences对象！");
            //        //    return;
            //        //}

            //        document.Editor.WriteMessage( "\n开始设置Preferences...");

            //        // 1. PreferencesDisplay - 显示设置
            //        SetDisplayPreferences(preferences.Display);

            //        //// 2. PreferencesDrafting - 绘图设置
            //        //SetDraftingPreferences(preferences.Drafting);

            //        //// 3. PreferencesFiles - 文件设置
            //        //SetFilesPreferences(preferences.Files);

            //        //// 4. PreferencesOpenSave - 打开/保存设置
            //        //SetOpenSavePreferences(preferences.OpenSave);

            //        //// 5. PreferencesOutput - 输出设置
            //        //SetOutputPreferences(preferences.Output);

            //        //// 6. PreferencesSelection - 选择集设置
            //        //SetSelectionPreferences(preferences.Selection);

            //        //// 7. PreferencesSystem - 系统设置
            //        //SetSystemPreferences(preferences.System);

            //        //// 8. PreferencesUser - 用户设置
            //        //SetUserPreferences(preferences.User);

            //        document.Editor.WriteMessage( "\n所有Preferences设置完成！");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        document.Editor.WriteMessage( $"\n设置过程中出错：{ex.Message}");
            //    }
            //}

            //// 1. 显示设置
            //private static void SetDisplayPreferences(dynamic displayPrefs)
            //{
            //    try
            //    {
            //        // 调整十字光标大小 (1-100)
            //        displayPrefs.CursorSize = 40;

            //        // 显示/隐藏滚动条
            //        ////displayPrefs.DisplayScrollBars = true;

            //        // 显示/隐藏布局选项卡
            //        ////displayPrefs.DisplayLayoutTabs = false;

            //        // 显示/隐藏模型选项卡
            //        ////displayPrefs.DisplayModelTabs = false;

            //        // 十字光标是否使用全屏
            //        ////displayPrefs.FullScreenCursor = false;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage( "\n显示设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage( $"\n显示设置错误：{ex.Message}");
            //    }
            //}

            //// 2. 绘图设置
            //private static void SetDraftingPreferences(dynamic draftingPrefs)
            //{
            //    try
            //    {
            //        // 设置自动捕捉标记大小 (1-20)
            //        draftingPrefs.AutoSnapMarkerSize = 10;

            //        // 设置靶框大小 (1-50)
            //        draftingPrefs.ApertureSize = 10;

            //        // 设置拾取框大小 (0-50)
            //        draftingPrefs.PickBoxSize = 5;

            //        // 启用极轴追踪
            //        draftingPrefs.PolarTracking = true;

            //        // 设置对象捕捉选项
            //        draftingPrefs.RunningObjectSnap = true;

            //        // 设置对象捕捉模式
            //        // 2 = 端点, 4 = 中点, 8 = 圆心, 16 = 节点, 32 = 象限点, 64 = 交点, 128 = 插入点
            //        draftingPrefs.RunningObjectSnaps = 2 + 4 + 8 + 64; // 端点、中点、圆心、交点

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n绘图设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n绘图设置错误：{ex.Message}");
            //    }
            //}

            //// 3. 文件设置
            //private static void SetFilesPreferences(dynamic filesPrefs)
            //{
            //    try
            //    {
            //        // 设置自动保存文件路径
            //        filesPrefs.AutoSaveFilePath = @"C:\Temp\AutoSave\";

            //        // 设置模板文件路径
            //        filesPrefs.TemplateDwgPath = @"C:\Program Files\Gstarsoft\GstarCAD\Template\";

            //        // 设置支持文件搜索路径（多个路径用分号分隔）
            //        filesPrefs.SupportPath = @"C:\Program Files\Gstarsoft\GstarCAD\Support\;C:\MySupportFiles\";

            //        // 设置临时文件位置
            //        filesPrefs.TempFilePath = @"C:\Temp\GstarCAD\";

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n文件设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n文件设置错误：{ex.Message}");
            //    }
            //}

            //// 4. 打开/保存设置
            //private static void SetOpenSavePreferences(dynamic openSavePrefs)
            //{
            //    try
            //    {
            //        // 设置自动保存间隔（分钟）
            //        openSavePrefs.AutoSaveInterval = 10;

            //        // 创建备份文件
            //        openSavePrefs.CreateBackup = true;

            //        // 设置默认保存格式
            //        // 12 = AutoCAD 2000 DWG, 24 = AutoCAD 2004 DWG, 36 = AutoCAD 2007 DWG
            //        openSavePrefs.DefaultSaveFormat = 24;

            //        // 显示文件打开时的缩略图预览
            //        openSavePrefs.FileOpenThumbnailPreview = true;

            //        // 设置最近使用文件列表大小
            //        openSavePrefs.MRUListSize = 9;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n打开/保存设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n打开/保存设置错误：{ex.Message}");
            //    }
            //}

            //// 5. 输出设置
            //private static void SetOutputPreferences(dynamic outputPrefs)
            //{
            //    try
            //    {
            //        // 设置默认输出设备
            //        // 需要根据系统中实际打印机名称设置
            //        // outputPrefs.DefaultOutputDevice = "DWG To PDF.pc3";

            //        // 使用传统打印对话框
            //        outputPrefs.PlotLegacy = false;

            //        // 打印时隐藏系统打印机
            //        outputPrefs.HideSystemPrinters = false;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n输出设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n输出设置错误：{ex.Message}");
            //    }
            //}

            //// 6. 选择集设置
            //private static void SetSelectionPreferences(dynamic selectionPrefs)
            //{
            //    try
            //    {
            //        // 设置选择预览
            //        selectionPrefs.SelectionPreview = 3; // 3 = 命令和对象选择时都显示

            //        // 先选择后执行模式
            //        selectionPrefs.PickFirst = true;

            //        // 设置夹点大小 (1-255)
            //        selectionPrefs.GripSize = 5;

            //        // 启用夹点
            //        selectionPrefs.Grips = true;

            //        // 选择集模式：0x1=Shift添加, 0x2=按住并拖动, 0x4=隐含窗口, 0x8=对象编组
            //        // 0x10=关联填充, 0x20=拾取框, 0x40=夹点, 0x80=夹点提示
            //        selectionPrefs.SelectionModes = 0x1 + 0x4 + 0x8; // Shift添加 + 隐含窗口 + 对象编组

            //        // 添加选择模式
            //        selectionPrefs.PickAdd = true;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n选择集设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n选择集设置错误：{ex.Message}");
            //    }
            //}

            //// 7. 系统设置
            //private static void SetSystemPreferences(dynamic systemPrefs)
            //{
            //    try
            //    {
            //        // 单文档模式 (true=单文档, false=多文档)
            //        systemPrefs.SingleDocumentMode = false;

            //        // 存储SQL索引
            //        systemPrefs.StoreSQLIndex = true;

            //        // 允许长符号名
            //        systemPrefs.AllowLongSymbolNames = true;

            //        // 启用启动对话框
            //        systemPrefs.ShowStartupDialog = true;

            //        // 任务栏显示所有打开的图形
            //        systemPrefs.Taskbar = true;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n系统设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n系统设置错误：{ex.Message}");
            //    }
            //}

            //// 8. 用户设置
            //private static void SetUserPreferences(dynamic userPrefs)
            //{
            //    try
            //    {
            //        // 右键自定义设置
            //        // 0 = 重复上一个命令, 1 = 显示快捷菜单
            //        userPrefs.ShortcutMenu = 1;

            //        // 双击编辑
            //        userPrefs.DblClickEdit = true;

            //        // 键盘输入优先级
            //        // 0 = 执行脚本和对象输入, 1 = 对象输入, 2 = 脚本输入
            //        userPrefs.KeyboardPriority = 0;

            //        // 命令行回显
            //        userPrefs.CommandLine = true;

            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n用户设置已更新");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n用户设置错误：{ex.Message}");
            //    }
            //}

            // 单独的设置命令示例
            //[CommandMethod("SetDisplay")]
            //public static void SetDisplayOnly()
            //{
            //    try
            //    {
            //        GcadPreferences preferences = Application.Preferences as GcadPreferences;
            //        SetDisplayPreferences(preferences.Display);
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage( $"\n错误：{ex.Message}");
            //    }
            //}

            //[CommandMethod("SetDrafting")]
            //public static void SetDraftingOnly()
            //{
            //    try
            //    {
            //        GcadPreferences preferences = Application.Preferences as GcadPreferences;
            //        SetDraftingPreferences(preferences.Drafting);
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n错误：{ex.Message}");
            //    }
            //}

            //[CommandMethod("ResetCursor")]
            //public static void ResetCursorSize()
            //{
            //    try
            //    {
            //        GcadPreferences preferences = Application.Preferences as GcadPreferences;
            //        preferences.Display.CursorSize = 5; // 恢复默认值
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            "\n十字光标大小已重置为默认值5");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n错误：{ex.Message}");
            //    }
            //}

            //[CommandMethod("ShowCurrentSettings")]
            //public static void ShowCurrentSettings()
            //{
            //    try
            //    {
            //        GcadPreferences preferences = Application.Preferences as GcadPreferences;
            //        var doc = Application.DocumentManager.MdiActiveDocument;
            //        var ed = doc.Editor;

            //        ed.WriteMessage("\n=== 当前设置 ===");
            //        ed.WriteMessage($"\n十字光标大小：{preferences.Display.CursorSize}");
            //        ed.WriteMessage($"\n滚动条显示：{(preferences.Display.DisplayScrollBars ? "是" : "否")}");
            //        ed.WriteMessage($"\n自动保存间隔：{preferences.OpenSave.AutoSaveInterval} 分钟");
            //       // ed.WriteMessage($"\n拾取框大小：{preferences.Drafting.PickBoxSize}");
            //        ed.WriteMessage($"\n夹点大小：{preferences.Selection.GripSize}");
            //        ed.WriteMessage($"\n单文档模式：{(preferences.System.SingleDocumentMode ? "是" : "否")}");
            //    }
            //    catch (System.Exception ex)
            //    {
            //        Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage(
            //            $"\n错误：{ex.Message}");
            //    }
            //}
        }
    }
}
