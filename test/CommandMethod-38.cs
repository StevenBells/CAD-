using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;

namespace test
{
    public class CommandMethodExamples
    {
        // 1. 【先选择后执行】- 允许用户先选择对象，再执行命令
        [CommandMethod("TestPickFirst", CommandFlags.UsePickSet)]
        public static void TestPickFirst()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n使用先选择后执行模式");

        }

        // 2. 【透明命令】- 可以在其他命令执行期间调用？？？
        [CommandMethod("TestTransparent", CommandFlags.Transparent)]
        public static void TestTransparent()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n这是一个透明命令");
        }

        // 3. 【模态命令】- 默认模式，会中断当前正在执行的命令
        [CommandMethod("TestModal", CommandFlags.Modal)]
        public static void TestModal()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n这是一个模态命令");
        }

        // 4. 【不显示历史记录】- 命令不会显示在历史记录中
        [CommandMethod("TestNoHistory", CommandFlags.NoHistory)]
        public static void TestNoHistory()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n这个命令不会记录在历史中");
        }

        // 5. 【禁止撤消】- 命令执行的操作不可撤销
        [CommandMethod("TestNoUndoMarker", CommandFlags.NoUndoMarker)]
        public static void TestNoUndoMarker()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n这个命令的操作不可撤销");
        }

        // 6. 【禁用撤消/重做】- 完全禁用撤消重做机制
        [CommandMethod("TestUndoDisabled", CommandFlags.NoBlockEditor | CommandFlags.NoPaperSpace | CommandFlags.NoTileMode)]
        public static void TestUndoDisabled()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n禁用撤消重做功能");
        }

        // 7. 【会话命令】- 可以在没有文档时执行
        [CommandMethod("TestSession", CommandFlags.Session)]
        public static void TestSession()
        {
            Application.ShowAlertDialog("这是一个会话命令");
        }

        // 8. 【只读模式】- 以只读方式打开数据库
        [CommandMethod("TestDocReadLock", CommandFlags.DocReadLock)]
        public static void TestReadOnly()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            //Database database = document.Database;
            document.Editor.WriteMessage("\n以只读模式访问数据库");
        }

        // 9. 【块编辑器外可用】- 可在块编辑器之外使用
        [CommandMethod("TestNoBlockEditor", CommandFlags.NoBlockEditor)]
        public static void TestNoBlockEditor()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n此命令不能在块编辑器中使用");
        }

        // 10. 【多个标志组合使用】
        [CommandMethod("TestCombined", CommandFlags.UsePickSet | CommandFlags.Transparent)]
        public static void TestCombined()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n组合使用：透明命令 + 先选择后执行");
        }

        // 11. 【无图纸空间】- 不能在图纸空间中使用
        [CommandMethod("TestNoPaperSpace", CommandFlags.NoPaperSpace)]
        public static void TestNoPaperSpace()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n此命令不能在图纸空间中使用");
        }

        // 12. 【非平铺模式】- 不能在模型空间平铺视口使用
        [CommandMethod("TestNoTileMode", CommandFlags.NoTileMode)]
        public static void TestNoTileMode()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\n此命令不能在平铺视口模式下使用");
        }

        // 13. 【单一文档模式】- 只能在单文档模式下使用
        //[CommandMethod("TestSingleDoc", CommandFlags.)]
        //public static void TestSingleDoc()
        //{
        //    Document document = Application.DocumentManager.MdiActiveDocument;
        //    document.Editor.WriteMessage("\n此命令只能在单文档模式下使用");
        //}

        ////14. 【多文档模式】- 只能在多文档模式下使用
        //[CommandMethod("TestMultipleDoc", CommandFlags.Multiple)]
        //public static void TestMultipleDoc()
        //{
        //    Document document = Application.DocumentManager.MdiActiveDocument;
        //    document.Editor.WriteMessage("\n此命令只能在多文档模式下使用");
        //}

        //// 15. 【编辑器未锁定】- 无需锁定文档即可执行
        //[CommandMethod("TestNoLock", CommandFlags.NoLock)]
        //public static void TestNoLock()
        //{
        //    Document document = Application.DocumentManager.MdiActiveDocument;
        //    document.Editor.WriteMessage("\n此命令执行时不会锁定文档");
        //}
    }
}
