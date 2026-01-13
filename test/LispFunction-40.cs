using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class LispFunction_40
    {
        //Lisp函数示例
        [LispFunction("DisplayMessage")]
        public static void DisplayMessage(  ResultBuffer message)
        {
            //命令行输入 (displayMessage "First" "Last")后反映是否有参数传入
            if (message!=null)
            {
                //不为空时，获取参数值
                string strVa1 = "";
                string strVa2 = "";
                int n = 0;
                //执行下面程序，循环传入
                foreach(TypedValue me in message)
                {
                    //判断
                    if(me.TypeCode == (int)Gssoft.Gscad.Runtime.LispDataType.Text)
                    {
                        switch(n)
                        {
                            case 0:
                                strVa1 = me.Value.ToString();
                                break;
                            case 1:
                                strVa2 = me.Value.ToString();
                                break;
                        }
                        
                        n++;
                    }
                }
                Document docunment = Application.DocumentManager.MdiActiveDocument;
                docunment.Editor.WriteMessage($"\nLispFunction-40.cs中的DisplayMessage函数被调用，收到的参数为：\n参数1：{strVa1}\n参数2：{strVa2}\n");

            }
            
        }
    }
}
//命令行输入 (displayMessage "First" "Last")