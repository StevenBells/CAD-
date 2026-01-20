using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class GetUserInput_113
    {
        [CommandMethod("GetUserInput")]
        public static void GetUserInput()
        {
            //获取当前文档
            Document document = Application.DocumentManager.MdiActiveDocument;
            //创建一个用户输入的信息的显示，用来提示信息
            PromptStringOptions promptStringOptions = new PromptStringOptions("");
            document.Editor.WriteMessage($"\npromptStringOptions内容为" + promptStringOptions);
            //提示用户输入字符串
            promptStringOptions.Message = "\n请输入一个字符串";
            //允许输入空格，按enter才能结束
            promptStringOptions.AllowSpaces = true;
            //获取用户输入的字符串的结果
            PromptResult promptResult = document.Editor.GetString(promptStringOptions);
            document.Editor.WriteMessage($"\n该项promptResult的内容为:" + promptResult + "\npromptResult.StringResult的内容为:" + promptResult.StringResult);
        }
        //GetUserInput_116
        [CommandMethod("GetPointDrawingLine")]
        public static void GetPointDrawingLine()
        {
            //获取当前文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //创建 提示用户输入点的方式
            PromptPointOptions promptPointOptions = new PromptPointOptions("");
            //提示用户输入第一个点
            promptPointOptions.Message = "\n请确定第一个点";
            //获得用户输入点的结果
            PromptPointResult promptPointResult = document.Editor.GetPoint(promptPointOptions);
            document.Editor.WriteMessage($"\n该项promptPointResult的内容为:" + promptPointResult + "\npromptPointResult.Value的内容为:" + promptPointResult.Value);
            Point3d pt1 = promptPointResult.Value;
            //如果按ESC命令，取消输入
            if (promptPointResult.Status == PromptStatus.Cancel) return;

            //提示用户输入第二个点
            promptPointOptions.Message = "\n请确定第二个点";
            //获得用户输入点的结果前提是第一个点输入成功 开启基点定位
            promptPointOptions.UseBasePoint=true;
            promptPointOptions.BasePoint=pt1;
            //获得结果
            promptPointResult = document.Editor.GetPoint(promptPointOptions);
            Point3d pt2 = promptPointResult.Value;
            //如果按ESC命令，取消输入
            if (promptPointResult.Status == PromptStatus.Cancel) return;

            //启动事务，开始画线
            using(Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //打开块表，读形式
                BlockTable blockTable = transaction.GetObject(database.BlockTableId, OpenMode.ForRead) as BlockTable;
                //打开块表记录，写形式
                BlockTableRecord blockTableRecord = transaction.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForWrite) as BlockTableRecord;
                //创建线对象
                Line line = new Line(pt1, pt2);
                //添加线对象到块表记录
                blockTableRecord.AppendEntity(line);
                //没有下面这一行代码画完的线无法选中
                transaction.AddNewlyCreatedDBObject(line, true);
                //缩放图形至全部显示
                //string command = "_Zoom _all ";  //有空格enter
                //activate：输入布尔值，指示是否激活目标文档。也就是命令行
                //wrapUpInactiveDoc：输入布尔值，控制是否将命令字符串包装在引号中。一般为FALSE
                //echoCommand：输入布尔值，指示是否在命令行上回显发送的字符串
                document.SendStringToExecute("_Zoom _all ",true,false,false);
                //string command = "_line\n" + "0,0\n" + "1,1\n"+"\n";
                //document.SendStringToExecute(command, true,false,false);
                //提交事务
                transaction.Commit();
            }
            Application.UpdateScreen();
        }
    }
}
