using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;
using Application = Gssoft.Gscad.ApplicationServices.Application;

namespace test
{
    public class NewDrawing_81
    {
        [CommandMethod("NewDrawing")]
        public static void NewDrawing()
        {
            string dwt = "gcad.dwt";
            DocumentCollection documentCollection = Application.DocumentManager;
            Document document = documentCollection.Add(dwt);
            documentCollection.MdiActiveDocument = document;
        }
        //NewDrawing_83 使用 Open()方法打开一个已存在的图形。
        [CommandMethod("OpenDrawing")]
        public static void OpenDrawing()
        {
            //先在外部建一个文件
            string strFileName = "C:\\Users\\37023\\Desktop\\222.dwg";
            DocumentCollection documentCollection = Application.DocumentManager;
            if(File.Exists(strFileName))
            {
                //打开并置为当前
                documentCollection.MdiActiveDocument = documentCollection.Open(strFileName, false);
               
            }
            else
            {
                MessageBox.Show("文件不存在！");
            }
        }
        //保存新图形NewDrawing_84
        [CommandMethod("SaveNewDrawing")]
        public static void SaveNewDrawing()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            var name = document.Name;
            //获得系统变量的值，判断是否进行了保存
            var obj = Application.GetSystemVariable("DWGTITLED");
            //转换类型
            int num = System.Convert.ToInt16(obj);
            if(num == 0)
            {
                //0代表了没保存图纸名称
                name = "C:\\Users\\周扬扬\\Desktop\\我的测试文件.dwg"; 
                document.Editor.WriteMessage("\n图纸已保存至：" + name);
            }
            //更新保存
            document.Database.SaveAs(name, true, DwgVersion.Current, document.Database.SecurityParameters);
        }
        //检查当前文档发生修改后是否进行了保存  NewDrawing_85
        [CommandMethod("SaveRight")]
        public static void SaveRight()
        {
            //获取DBMOD的值，是否为0
            var obj = Application.GetSystemVariable("DBMOD");
            int num = System.Convert.ToInt16(obj);
            Document document = Application.DocumentManager.MdiActiveDocument;
            document.Editor.WriteMessage("\nobj的值为：" + num);
            if (num==0)
            {
                document.Editor.WriteMessage("\n该文件没有进行修改过，无需保存该文件......");
            }
            else
            {
                var question = MessageBox.Show("该文件图形内容发生了改变，截止现在未保存，你想保存吗", "警告！", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                if (question == DialogResult.Yes)
                {
                    var name = document.Name;
                    name = "C:\\Users\\周扬扬\\Desktop\\我的测试文件.dwg";
                    document.Database.SaveAs(name, true, DwgVersion.Current, document.Database.SecurityParameters);
                    document.Editor.WriteMessage("\n图纸已保存至：" + name);
                }
            }
        }
    }
}
