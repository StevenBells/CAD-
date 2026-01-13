using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test1
{
    public class ZoomGetView_55
    {
        [CommandMethod("ZoomGetView")]
        public static void ZoomGetView()
        {
            //获取当前文档和数据库
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //获取当前的视图记录ZoomGetView_51
            var viewRecord = document.Editor.GetCurrentView();
            //输出看看viewRecord是什么
            document.Editor.WriteMessage("\n对象为：" + viewRecord);
            // DCS为显示坐标系,当前视图的常用属性
            Point2d point =viewRecord.CenterPoint;//获取视图的中心点
            double point1=viewRecord.Height;//- DCS 坐标系中视图的高度，高度增加视图拉远，高度减小视图拉近；
            var point2=viewRecord.Target;//获取视图的目标
            var point3=viewRecord.ViewDirection;//获取WCS 坐标系中视图目标到视图观察点的矢量；
            var point4=viewRecord.ViewTwist;//获取的视图扭转角（弧度）；
            var point5=viewRecord.Width;//DCS 坐标系中视图的宽度，宽度增加视图拉远，宽度减小视图拉近
            document.Editor.WriteMessage("\n显示坐标系对象为：" + point+"\n"+point1+ "\n" + point2+"\n" + point3+"\n" + point4 + "\n" + point5);
            //修改对象
            Point2d point2D = new Point2d(5000, 5000);
            viewRecord.CenterPoint = point2D;
            //double point1_1 = new double(5000D);


            document.Editor.WriteMessage("\n修改对象后，显示坐标系对象为：" + point2D+"，现在的对象为："+ viewRecord.CenterPoint);

            int nMode = System.Convert.ToInt32(Application.GetSystemVariable("CVPORT"));
            ////输出nMode，确定是什么
            //document.Editor.WriteMessage("\n当前视口编号为：" + nMode);
            ////输出其他信息Application.GetSystemVariable("CVPORT")，确定是什么
            //document.Editor.WriteMessage("\n当前视口编号为：" + Application.GetSystemVariable("CVPORT"));
            //模型空间输出的值是2，布局空间是1
            //获取当前空间的范围
            //首先确定是模型空间还是布局空间
            if(database.TileMode == true)
                {
                //为模型空间
               
            }



        }
    }
}
