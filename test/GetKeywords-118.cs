using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class GetKeywords_118
    {
        [CommandMethod("GetKeywords")]
        //下例将 PromptKeywordOptions 对象的 AllowNone 属性设置为 false（不允许直接回车），
        //这样使用户必须输入一个关键字。Keywords 属性用于添加允许的有效关键字。
        public static void GetKeywords()
        {
            //获取当前文档
            Document document = Application.DocumentManager.MdiActiveDocument;
            //创建一个用户输入的信息的显示，用来提示信息
            PromptKeywordOptions promptKeywordOptions = new PromptKeywordOptions("");
            document.Editor.WriteMessage($"\npromptKeywordOptions内容为" + promptKeywordOptions);
            //提示用户输入关键字
            promptKeywordOptions.Message = "\n请输入一个关键字";
            //添加关键字选项
            promptKeywordOptions.Keywords.Add("红色");
            promptKeywordOptions.Keywords.Add("绿色");
            promptKeywordOptions.Keywords.Add("蓝色");
            //不允许直接回车，必须输入一个关键字
            promptKeywordOptions.AllowNone = false;
            //设置默认关键字
            promptKeywordOptions.Keywords.Default = "红色";
            //获取用户输入的关键字的结果
            PromptResult promptResult = document.Editor.GetKeywords(promptKeywordOptions);
            document.Editor.WriteMessage($"\n该项promptResult的内容为:" + promptResult + "\npromptResult.StringResult的内容为:" + promptResult.StringResult);
        }

        [CommandMethod("GetKeyMessage")]
        //下例提示用户输入一个非零的正整数或一个关键字。
        public static void GetKeyMessage()
        {
            //获取当前文档
            Document document = Application.DocumentManager.MdiActiveDocument;
            //创建一个 获得用户输入的信息提示
            PromptIntegerOptions promptIntegerOptions = new PromptIntegerOptions("\n请输入一个非零的正整数");
            //设置不为0
            promptIntegerOptions.AllowZero = false;
            //用于控制整数输入选项的一个属性。它决定了用户在命令行输入整数时，是否可以输入负数值。false时输入负数将被拒绝，系统会提示重新输入。
            promptIntegerOptions.AllowNegative= false;
            //添加关键字选项
            promptIntegerOptions.Keywords.Add("Big");
            promptIntegerOptions.Keywords.Add("Small");
            promptIntegerOptions.Keywords.Add("Regular");
            promptIntegerOptions.Keywords.Default = "Big";
            //允许直接回车，使用默认值
            promptIntegerOptions.AllowNone = true;
            //获取用户输入的结果
            PromptIntegerResult promptIntegerResult = document.Editor.GetInteger(promptIntegerOptions);
            //判断输入结果的状态是否为OK
            if (promptIntegerResult.Status == PromptStatus.Keyword)
            {
                Application.ShowAlertDialog (promptIntegerResult+"\n用户输入的关键字为：" + promptIntegerResult.StringResult); 
            }
            else
            {
                Application.ShowAlertDialog($"\n用户输入的整数为:" + promptIntegerResult.Value);
            }
        }
    }
}
