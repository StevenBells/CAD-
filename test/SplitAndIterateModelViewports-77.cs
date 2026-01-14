using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.ApplicationServices.Core;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace test
{
    public class SplitAndIterateModelViewports_77
    {
        [CommandMethod("SplitAndIterateModelViewports")]
        public static void SplitAndIterateModelViewports()
        {
            // 获取当前数据库
            Document docunment = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = docunment.Database;
            // 启动事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                // 以写模式打开 Viewport 表
                ViewportTable viewTable = transaction.GetObject(database.ViewportTableId,OpenMode.ForWrite) as ViewportTable;
                // 以写模式打开当前视口
                ViewportTableRecord viewRecord = transaction.GetObject(docunment.Editor.ActiveViewportId,OpenMode.ForWrite) as ViewportTableRecord;
                ViewportTableRecord viewRecord1 = new ViewportTableRecord();
                // 新视口的 Name 设置为”*Active”
                viewRecord1.Name = "*Active";
                // 用当前左下角作为新视口的左下角
                viewRecord1.LowerLeftCorner = viewRecord.LowerLeftCorner;
                // 获取当前右上角 X 值的一半
                viewRecord1.UpperRightCorner = new Point2d(viewRecord.UpperRightCorner.X,viewRecord.LowerLeftCorner.Y +((viewRecord.UpperRightCorner.Y - viewRecord.LowerLeftCorner.Y) / 2));
                // 添加新视口到 Viewport 表，记录事务
                viewTable.Add(viewRecord1);
                transaction.AddNewlyCreatedDBObject(viewRecord1, true);
               
                // 重新计算活动视口的两个角
                viewRecord.LowerLeftCorner = new Point2d(viewRecord.LowerLeftCorner.X, viewRecord1.UpperRightCorner.Y);
                // 用新平铺视口布局更新显示
                docunment.Editor.UpdateTiledViewportsFromDatabase();
                // 遍历视口表中的每个对象
                foreach (ObjectId acObjId in viewTable)
                {
                    // 以读打开对象
                    ViewportTableRecord viewRecord2 = transaction.GetObject(acObjId,OpenMode.ForRead) as ViewportTableRecord;
                    if (viewRecord2.Name == "*Active")
                    {
                        //Gssoft.Gscad.ApplicationServices.Application.SetSystemVariable("ViewportNumber", viewRecord2.Number);
                        //Gssoft.Gscad.ApplicationServices.Application.ShowAlertDialog("视口名称现在是: " + viewRecord2.Number + "\n左下角: " + viewRecord2.LowerLeftCorner.X + ", " + viewRecord2.LowerLeftCorner.Y + "\n右上角: " + viewRecord2.UpperRightCorner.X + ", " + viewRecord2.UpperRightCorner.Y);
                        //创建一个窗口标题
                        MessageBox.Show("名称"+ viewRecord2.Name, "标题", MessageBoxButtons.YesNo, MessageBoxIcon.Stop, MessageBoxDefaultButton.Button1);
                        MessageBox.Show("视口名称现在是: " + viewRecord2.Number + "\n左下角: " + viewRecord2.LowerLeftCorner.X + ", " + viewRecord2.LowerLeftCorner.Y + "\n右上角: " + viewRecord2.UpperRightCorner.X + ", " + viewRecord2.UpperRightCorner.Y);
                    }
                }
                // 提交修改，关闭事务
                transaction.Commit();
            }
        }
    }
}
