using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.EditorInput;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test1
{
    public class ZoomGetView_51
    {
        [CommandMethod("ZoomGetView")]
        public static void ZoomGetView()
        {
            //获取当前文档和数据库
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            //Database database = document.Database;
            //获取当前的视图记录ZoomGetView_51
            var viewRecord = document.Editor.GetCurrentView();
            //输出看看viewRecord是什么
            document.Editor.WriteMessage("\n对象为：" + viewRecord);
            // DCS为显示坐标系,当前视图的常用属性
            Point2d point = viewRecord.CenterPoint;//获取视图的中心点
            double point1 = viewRecord.Height;//- DCS 坐标系中视图的高度，高度增加视图拉远，高度减小视图拉近；
            var point2 = viewRecord.Target;//获取视图的目标
            var point3 = viewRecord.ViewDirection;//获取WCS 坐标系中视图目标到视图观察点的矢量；
            var point4 = viewRecord.ViewTwist;//获取的视图扭转角（弧度）；
            var point5 = viewRecord.Width;//DCS 坐标系中视图的宽度，宽度增加视图拉远，宽度减小视图拉近
            document.Editor.WriteMessage($"\n显示坐标系的point中心点为：{point}\n高度point1为：{point1}\n目标点point2为：{point2}\n视图方向point3为：{point3}\n扭转角point4为：{point4}弧度\n宽度point5为：{point5}");
            //修改对象 最好在CAD图中原点处绘制矩形1000 2000 3000 4000 5000做对比观察（调整视图参数）
            Point2d newCenterPoint = new Point2d(2000, 2000);//设置新的中心店
            viewRecord.CenterPoint = newCenterPoint;

            double newHeight = 1000D;//设置新的高度
            viewRecord.Height = newHeight;

            Point3d newTargetPoint = new Point3d(2000, 2000, 0); // 设置新的目标点
            viewRecord.Target = newTargetPoint;

            Vector3d newViewDirection = new Vector3d(1, 1, 1); // 设置新的视图方向
            viewRecord.ViewDirection = newViewDirection;

            double newViewTwist = Math.PI * 0; // 设置新的视图扭转角（0度）
            viewRecord.ViewTwist = newViewTwist;

            double newWidth = 1000; // 设置新的宽度
            viewRecord.Width = newWidth;

            // 输出修改后的视图中心点
            document.Editor.WriteMessage($"\n修改对象后，显示坐标系的中心点为：{newCenterPoint}，现在的对象中心点为：{viewRecord.CenterPoint}");

            // 输出所有修改后的属性
            document.Editor.WriteMessage($"\n新的高度为：{viewRecord.Height}\n新的目标点为：{viewRecord.Target}\n新的视图方向为：{viewRecord.ViewDirection}\n新的扭转角为：{viewRecord.ViewTwist}弧度\n新的宽度为：{viewRecord.Width}");
            //此时无变化
            //调用SetCurrentView()方法,更新视图
            document.Editor.SetCurrentView(viewRecord);
        }
    }
    public class ZoomGetView_55
    {
        [CommandMethod("ZoomMove")]
        //注意Point3d和Point3D的区别
        public static void ZoomMove(Point3d point3DX, Point3d point3DY, Point3d point3DZ, double key)
        {

            //获取当前文档和数据库
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //获取当前的视图记录
            //ViewTableRecord viewRecord = document.Editor.GetCurrentView();

            int nMode = System.Convert.ToInt32(Application.GetSystemVariable("CVPORT"));
            ////输出nMode，确定是什么
            //document.Editor.WriteMessage("\n当前视口编号为：" + nMode);
            ////输出其他信息Application.GetSystemVariable("CVPORT")，确定是什么
            //document.Editor.WriteMessage("\n当前视口编号为：" + Application.GetSystemVariable("CVPORT"));
            //模型空间输出的值是2，布局空间是1
            //获取当前空间的范围
            //首先确定是模型空间还是布局空间
            if (database.TileMode == true)
            {
                //条件符合
                if (point3DX.Equals(new Point3d()) == true && point3DY.Equals(new Point3d()) == true)
                {
                    //符合条件，则进行下面代码
                    point3DX = database.Extmin; //模型空间的最小点
                    point3DY = database.Extmax; //模型空间的最大点
                    document.Editor.WriteMessage($"\n当前 模型 空间的范围为：最小点point3DX = {point3DX},最大点point3DY = {point3DY}");
                }
                //else
                //{
                //    document.Editor.WriteMessage("\n当前模型空间的范围未获取到");
                //}
            }
            else
            {
                //检查空间是否是图纸空间
                if (nMode == 1)
                {
                    //获取图纸空间的范围
                    if (point3DX.Equals(new Point3d()) == true && point3DY.Equals(new Point3d()) == true)
                    {
                        //符合条件，则进行下面代码
                        point3DX = database.Extmin; //模型空间的最小点
                        point3DY = database.Extmax; //模型空间的最大点
                        document.Editor.WriteMessage($"\n当前 图纸 空间的范围为：最小点point3DX = {point3DX},最大点point3DY = {point3DY}");
                    }
                    //else
                    //{
                    //    document.Editor.WriteMessage("\n当前 图纸 空间的范围未获取到");
                    //}
                }
                else
                {
                    //获取模型空间范围
                    if (point3DX.Equals(new Point3d()) == true && point3DY.Equals(new Point3d()) == true)
                    {
                        //符合条件，则进行下面代码
                        point3DX = database.Extmin; //模型空间的最小点
                        point3DY = database.Extmax; //模型空间的最大点
                        document.Editor.WriteMessage($"\n当前模型空间的范围为：最小点point3DX = {point3DX},最大点point3DY = {point3DY}");
                    }
                    //else
                    //{
                    //    document.Editor.WriteMessage("\n当前模型空间的范围未获取到");
                    //}
                }
            }
            //开启一个事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //获取当前视图
                using (ViewTableRecord viewRecord = document.Editor.GetCurrentView())
                {
                    //声明一个3维边界
                    Extents3d extents;

                    //转换坐标系  把WCS转成显示坐标系DCS
                    Matrix3d DCSpoint = Matrix3d.PlaneToWorld(viewRecord.ViewDirection);
                    //document.Editor.WriteMessage($"\n当前DCSpoint的内容为：{DCSpoint}");
                    DCSpoint = Matrix3d.Displacement(viewRecord.Target - Point3d.Origin) * DCSpoint;
                   // document.Editor.WriteMessage($"\n当前DCSpoint的内容为：{DCSpoint}");
                    DCSpoint = Matrix3d.Rotation(-viewRecord.ViewTwist, viewRecord.ViewDirection, viewRecord.Target) * DCSpoint;
                    document.Editor.WriteMessage($"\n当前DCSpoint的内容为：{DCSpoint}");
                    //如果指定了中心店，就为中心模式和比例模式
                    //设置显示范围的最小点和最大点
                    if (point3DZ.DistanceTo(Point3d.Origin) != 0)
                    {
                        //计算
                        point3DX = new Point3d(point3DZ.X - viewRecord.Width / 2, point3DZ.Y - viewRecord.Height / 2, 0);
                        point3DY = new Point3d(point3DZ.X + viewRecord.Width / 2, point3DZ.Y + viewRecord.Height / 2, 0);
                        document.Editor.WriteMessage($"\n当前point3DX的内容为：{point3DX}，point3DY的内容为：{point3DY}");
                    }
                    //用直线创建范围大小对象
                    using (Line line = new Line(point3DX, point3DY))
                    {
                        //计算
                        extents = new Extents3d(line.Bounds.Value.MinPoint, line.Bounds.Value.MaxPoint);
                        document.Editor.WriteMessage($"\n当前extents的内容为：{extents}");
                    }
                    //计算当前视图的宽高比
                    var viewWidth = viewRecord.Width / viewRecord.Height;
                    //变换视图范围
                    DCSpoint = DCSpoint.Inverse();
                    //更新3维边界
                    extents.TransformBy(DCSpoint);

                    double newWidth;
                    double newHeight;
                    Point2d newCenter;
                    //检查是否提供了中心点（中心模式和比例模式）
                    if (point3DZ.DistanceTo(Point3d.Origin) != 0)
                    {
                        //提供了中心点
                        newWidth = viewRecord.Width;
                        newHeight = viewRecord.Height;

                        if (key == 0)
                        {
                            point3DZ = point3DZ.TransformBy(DCSpoint);
                        }
                        newCenter = new Point2d(point3DZ.X, point3DZ.Y);
                    }
                    else
                    {
                        //窗口、范围和界限模式下 计算当前视图的宽高新值；
                        newWidth = extents.MaxPoint.X - extents.MinPoint.X;
                        newHeight = extents.MaxPoint.Y - extents.MinPoint.Y;
                        //获取视图中心点
                        newCenter = new Point2d((extents.MaxPoint.X + extents.MinPoint.X) / 2, (extents.MaxPoint.Y + extents.MinPoint.Y) / 2);
                        document.Editor.WriteMessage($"\nnewWidth的内容为{newWidth}，newHeight的内容为{newHeight}，newCenter的内容为{newCenter}");
                    }
                    //检查宽度值是否适用于当前窗口
                    if (newWidth > (newHeight * viewWidth))
                        newHeight = newWidth / viewWidth;
                    //调整视图大小
                    if (key != 0)
                    {
                        viewRecord.Height = newHeight * key;
                        viewRecord.Width = newWidth * key;
                    }
                    //设置视图中心
                    viewRecord.CenterPoint = newCenter;
                    //更新视图
                    document.Editor.SetCurrentView(viewRecord);
                }
                //提交事务修改
                transaction.Commit();
            }

        }
        //调用函数ZoomGetView_58
        [CommandMethod("ZoomWindow")]
        public static void ZoomWindow()
        {
            //画一个图形来观察变化情况
            Point3d point3DX = new Point3d(1.3, 7.8, 0);
            Point3d point3DY = new Point3d(13.7, -2.6, 0);
            ZoomMove(point3DX, point3DY, new Point3d(), 1);
        }

        //调用函数ZoomGetView_60
        [CommandMethod("ZoomScale")]
        public static void ZoomScale()
        {
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            //获取视图
            using (ViewTableRecord viewRecord = document.Editor.GetCurrentView())
            {
                //确定视图中心的值
                var x=viewRecord.CenterPoint.X;
                var y = viewRecord.CenterPoint.Y;
                document.Editor.WriteMessage($"\nx={x},y={y}");
                Point3d point3DZ = new Point3d(x,y,0);
                double key = 2;
                ZoomMove(new Point3d(), new Point3d(), point3DZ, key);
            }
        }
        //调用函数ZoomGetView_61
        [CommandMethod("ZoomCenter")]
        public static void ZoomCenter()
        {
            // 设置视图的中心点为（5,5,0）
            ZoomMove(new Point3d(), new Point3d(), new Point3d(5, 5, 0), 1);
        }
        //调用函数ZoomGetView_63
        [CommandMethod("ZoomExtents")]
        static public void ZoomExtents()
        {
            // 缩放到当前空间的范围；
            ZoomMove(new Point3d(), new Point3d(), new Point3d(), 1.01075);
        }

        //调用函数ZoomGetView_63
        [CommandMethod("ZoomLimits")]
        static public void ZoomLimits()
        {
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            // 放到模型空间的界限；
            ZoomMove(
            new Point3d(database.Limmin.X, database.Limmin.Y, 0),
            new Point3d(database.Limmax.X, database.Limmax.Y, 0),
            new Point3d(),
            1);
        }
    }
}
    

