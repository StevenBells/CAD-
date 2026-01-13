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
    public class CreateViewName_65
    {
        [CommandMethod("CreateViewName")]
        public void CreateViewName()
        {
            //获取当前文档和数据库
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //开启事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //打开当前的视图表
                var viewTable =transaction.GetObject(database.ViewTableId, OpenMode.ForRead) as ViewTable;
                if(viewTable.Has("View1"))
                {
                    //
                    viewTable.UpgradeOpen();
                    //新建一个View表记录并命名
                    ViewTableRecord viewRecord = new ViewTableRecord();
                    viewRecord.Name = "View1";
                    //将新建的View表记录添加到视图表中
                    viewTable.Add(viewRecord);
                    transaction.AddNewlyCreatedDBObject(viewRecord, true);
                    //置为当前视图
                    document.Editor.SetCurrentView(viewRecord);
                    //提交事务
                    transaction.Commit();
                }
            }
        }
    }
}
