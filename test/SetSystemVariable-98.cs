using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class SetSystemVariable_98
    {
        [CommandMethod("SetSystemVariable")]
        public void SetSystemVariable()
        {
            //MAXSORT设置由列表命令进行排序的符号名或块名的最大数目。如果项目总数超过了本系统变量的值，将不进行排序
            var getSystemVariable = Application.GetSystemVariable("MAXSORT");
           int maxSort = System.Convert.ToInt32(getSystemVariable);
            Application.DocumentManager.MdiActiveDocument.Editor.WriteMessage($"\n  MAXSORT 的值: {maxSort}");
            //设置系统变量 MAXSORT 的值为 100
            Application.SetSystemVariable("MAXSORT",100);

        }

        //本例修改捕捉基点到(1,1)，并修改捕捉旋转角为 30 度。打开栅格并调整间距，使修改可见。SetSystemVariable_100
        [CommandMethod("ChangeSnap")]
        public void ChangeSnap()
        {
            //获得当前文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //启动一项事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //打开当前视口
                ViewportTableRecord viewportTableRecord = (ViewportTableRecord)transaction.GetObject(document.Editor.ActiveViewportId, OpenMode.ForWrite);
                //打开栅格
                viewportTableRecord.GridEnabled = false ;
                //设置栅格间距为 1,1
                viewportTableRecord.GridIncrements=new Point2d(1,1);
                //打开当前视口的捕捉模式
                viewportTableRecord.SnapEnabled = false;
                //设置捕捉间距到(0.5,0.5) 捕捉基点到(1,1)
                viewportTableRecord.SnapIncrements = new Point2d(0.5, 0.5);
                viewportTableRecord.SnapBase = new Point2d(1, 1);
                //设置捕捉旋转角度为 30 度
                viewportTableRecord.SnapAngle = 0;
                //正交模式SetSystemVariable_102
                database.Orthomode = false;
                //更新显示
                //document.Editor.UpdateScreen();
                document.Editor.UpdateTiledViewportsFromDatabase();
                //提交事务
                transaction.Commit();

            }
        }
    }
}
