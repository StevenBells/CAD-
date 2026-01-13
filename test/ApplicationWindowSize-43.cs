using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Runtime;
using Gssoft.Gscad.Windows;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Forms;
using System.Xml.Linq;
using Application = Gssoft.Gscad.ApplicationServices.Application;


namespace test
{
    public class ApplicationWindowSize_43
    {
        [CommandMethod("AppWindowSize")]
        public static void AppWindowSize()
        {
            //获取当前应用程序窗口的形式
            var state = Application.MainWindow.WindowState;
            
            //输出窗口大小信息到命令行
            Document document = Application.DocumentManager.MdiActiveDocument;
            //记住此时的state
            document.Editor.WriteMessage($"\n当前应用程序窗口的形式为：\n Window.State = {state}");
            Application.MainWindow.DeviceIndependentLocation = new Point(1000, 0);
            Application.MainWindow.DeviceIndependentSize = new Size(1000, 1000);
            document.Editor.WriteMessage($"\n当前应用程序窗口的位置为：\n Window.Location = {Application.MainWindow.DeviceIndependentLocation}");
            //此时更改了窗口大小 state发生了变化
            document.Editor.WriteMessage($"\n当前应用程序窗口的大小为：\n Window.Size = {Application.MainWindow.DeviceIndependentSize}");

            var widle = Application.MainWindow.DeviceIndependentLocation.X;
            var height = Application.MainWindow.DeviceIndependentSize.Height;
            document.Editor.WriteMessage($"\n当前应用程序窗口的大小为：\n Window.Location = {widle},Window.Size = {height}");
        }

        //恢复视口 ApplicationWindowSize_44
        [CommandMethod("AppWindowSizeRecover")]
        public static void AppWindowSizeRecover()
        {
            //正常大小
            Application.MainWindow.WindowState = Window.State.Normal;
            //最大化
            //Application.MainWindow.WindowState = Window.State.Maximized;
            ////最小化
            //Application.MainWindow.WindowState = Window.State.Minimized;
            //如果想要窗口显示 ApplicationWindowSize_45
            System.Windows.Forms.MessageBox.Show("恢复窗口大小成功！当前窗口形式是："+ Application.MainWindow.WindowState.ToString());
        }

        //隐藏窗口
        [CommandMethod("AppWindowHide")]
        public static void AppWindowHide()
        {
            Application.MainWindow.Visible = false;
            System.Windows.Forms.MessageBox.Show("窗口已隐藏！");
            Application.MainWindow.Visible = true;

            //获得大小
            Size getSize = Application.MainWindow.DeviceIndependentSize;
            Document document = Application.DocumentManager.MdiActiveDocument;
            var a = getSize.Width;
            document.Editor.WriteMessage(getSize.ToString());
            document.Editor.WriteMessage($"\n当前应用程序窗口的形式为：\n Window.width = {a}");

        }
    }
}
