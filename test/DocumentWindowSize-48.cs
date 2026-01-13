using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.Runtime;
using Gssoft.Gscad.Windows;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace test1
{
    public  class DocumentWindowSize_48
    {
        [CommandMethod("DocumentWindow")]
        public static void DocumentWindow()
        {
            //获取文档
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            //文档窗口的形式是什么 DocumentWindowSize_49
            //document.Window.WindowState = Window.State.Normal;
            //document.Window.WindowState = Window.State.Minimized;
            document.Window.WindowState = Window.State.Maximized;
            //获取文档窗口的大小
            var width = document.Window.DeviceIndependentLocation;
            var heightx = document.Window.DeviceIndependentSize.Width;
            var heighty = document.Window.DeviceIndependentSize.Height;
            document.Editor.WriteMessage("\n目前文档窗口的位置为:"+width+",宽度为："+ heightx + ",高度为:"+ heighty);
            //改变窗口，自定义大小
            //窗口的位置
            Point point = new Point(400, 0);
            document.Window.DeviceIndependentLocation = point;
            //窗口的大小
            Size size = new Size(400, 500);
            document.Window.DeviceIndependentSize = size;
            document.Editor.WriteMessage("\n重新生成的文档窗口的位置为：" + document.Window.DeviceIndependentLocation + "宽度为 "+ document.Window.DeviceIndependentSize.Width+", 高度为:" + document.Window.DeviceIndependentSize.Height);
        }
    }
}
