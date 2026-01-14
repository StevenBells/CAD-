using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Runtime;
using Gssoft.Gscad.Windows;
using System;
using System.Windows;
using System.Windows.Forms;
using Application = Gssoft.Gscad.ApplicationServices.Application;


namespace CAD
{
    public class CAD
    {
        //调整视口
        [CommandMethod("FF")]
        public static void AppWindowSize()
        {
            //Document document = Application.DocumentManager.MdiActiveDocument;
            Application.MainWindow.DeviceIndependentLocation = new Point(1000, 0);
            Application.MainWindow.DeviceIndependentSize = new Size(1000, 1000);
        }
        //恢复视口 ApplicationWindowSize_44
        [CommandMethod("GG")]
        public static void AppWindowSizeRecover()
        {
            Application.MainWindow.WindowState = Window.State.Normal;
        }

            [CommandMethod("DD")]
            public static void NewDrawing()
            {
                string dwt = "gcad.dwt";
                DocumentCollection documentCollection = Application.DocumentManager;
                Document document = documentCollection.Add(dwt);
                documentCollection.MdiActiveDocument = document;
            }
    }
}
