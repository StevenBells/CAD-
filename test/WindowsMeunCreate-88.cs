using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.Runtime;
using Gssoft.Gscad.Windows;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using static Gssoft.Gscad.Internal.LayoutContextMenu;



/*本示例代码使用 DocumentDestroyed 事件监控最后一个文档何时关闭及何时进入零文档状
态。一旦进入零文档状态，就将 Opening 事件注册到应用程序菜单。单击应用程序菜单就触
发 Opening 事件。Opening 事件中向应用程序菜单添加一个新菜单项，单击新菜单项将显示
一个消息框。*/
/*
namespace test
{
    public class MyCommandHandler : System.Windows.Input.ICommand
    {
        //添加2个引用  GCAD AdWindows.dll 和WindowsBase.dll
        public bool CanExecute(object parameter)
        {
            return true;
        }
        public event EventHandler CanExecuteChanged;
        public void Execute(object parameter)
        {
            Application.ShowAlertDialog("MyMenuItem has been clicked");
        }
    }
    class Chp02_3_3
    {
        //Global var for ZeroDocState 全局变量
        //ApplicationMenuItem acApMenuItem = null;
        [CommandMethod("AddZeroDocEvent")]
        public void AddZeroDocEvent()
        {
            // 获取 DocumentCollection 并注册 DocumentDestroyed 事件
            DocumentCollection documentCollection = Application.DocumentManager;
            documentCollection.DocumentDestroyed += new DocumentDestroyedEventHandler(docDestroyed);
        }
        public void docDestroyed(object obj,
        DocumentDestroyedEventArgs documentDesEvtArgs)
        {
            // 确定菜单项是否已存在
            // 确定打开的文档数
            if (Application.DocumentManager.Count == 1)
            {
                // 添加事件处理器来守候应用程序菜单
                // 记着添加引用 AdWindows.dll 啊~
                ComponentManager.ApplicationMenu.Opening += new EventHandler<EventArgs>(ApplicationMenu_Opening);
            }
        }
        void ApplicationMenu_Opening(object sender, EventArgs e)
        {
            // 检查菜单项，看看之前添加过吗
            if (acApMenuItem == null)
            {
                // 获取应用程序菜单组件
                ApplicationMenu acApMenu = ComponentManager.ApplicationMenu;
                // 创建新菜单项
                acApMenuItem = new ApplicationMenuItem();
                acApMenuItem.Text = "MyMenuItem";
                acApMenuItem.CommandHandler = new MyCommandHandler();
                // 追加新菜单项
                acApMenu.MenuContent.Items.Add(acApMenuItem);
                // 移除事件处理器
                ComponentManager.ApplicationMenu.Opening -=
                new EventHandler<EventArgs>(ApplicationMenu_Opening);
            }
        }
    }
}*/
