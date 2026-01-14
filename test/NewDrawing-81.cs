using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
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
    }
}
