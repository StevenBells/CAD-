using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test1
{
    public class EraseViewName_67
    {
        [CommandMethod("EraseView")]
        public static void EraseView()
        {
            //获取文档和数据库
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //获取视图表
                ViewTable viewTable = transaction.GetObject(database.ViewTableId, OpenMode.ForRead) as ViewTable;
                //判断视图表中是否存在指定名称的视图
                if (viewTable.Has("View1") == true)
                {
                    //如果存在，则获取该视图
                    ViewTableRecord viewTableRecord = transaction.GetObject(viewTable["View1"], OpenMode.ForWrite) as ViewTableRecord;
                    //删除该视图
                    viewTableRecord.Erase();
                    document.Editor.WriteMessage("\n视图View1已被删除。");
                }
                else
                {
                    document.Editor.WriteMessage("\n视图表中不存在名称为View1的视图,下面开始创建View1");
                    //如果不存在，则创建一个新的视图
                    ViewTableRecord newView = new ViewTableRecord(); 
                    newView.Name = "View1";
                    //设置视图的属性（根据需要进行设置）
                    newView.CenterPoint = new Gssoft.Gscad.Geometry.Point2d(0, 0);
                    newView.Height = 1000;
                    newView.Width = 1000;
                    //将新视图添加到视图表中
                    viewTable.UpgradeOpen();
                    viewTable.Add(newView);
                    transaction.AddNewlyCreatedDBObject(newView, true);
                    document.Editor.WriteMessage("\n...........\n视图View1已被创建。");
                    //视图置为当前
                    document.Editor.SetCurrentView(newView);
                }


                //提交事务
                transaction.Commit();
            }
        }
    }
}
