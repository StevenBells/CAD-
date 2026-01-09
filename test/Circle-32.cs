using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Colors;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    //移动圆的位置和大小
    public class Circle_32
    {
        //为第二次事务起作用
       // private ObjectId circleCon;

        [CommandMethod("CircleCenterMove")]

        public static void CircleCenterMove()
        {
            //获取活动文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //开启一个事项
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //获取快表
                BlockTable blockTable = transaction.GetObject(database.BlockTableId, OpenMode.ForRead) as BlockTable;
                //获得块表记录
                BlockTableRecord blockTableRecord = transaction.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForWrite) as BlockTableRecord;
                //创建一个圆
                Circle circle = new Circle()
                {
                    Center = new Gssoft.Gscad.Geometry.Point3d(0, 0, 0),
                    Radius = 10,
                };
                //将实体圆添加到模型中
                ObjectId circleCon = blockTableRecord.AppendEntity(circle);//传参出去，第二次事务起作用
                transaction.AddNewlyCreatedDBObject(circle, true);
                document.Editor.WriteMessage("\n已完成圆心:(0,0,0),半径为:10的圆");

                document.Editor.WriteMessage("\n请注意，马上修改圆心和半径........");
                //改变圆心
                circle.Center = new Gssoft.Gscad.Geometry.Point3d(10, 10, 0);
                //改变半径
                circle.Radius = 20;
                //偏移一定距离
                double offset = 5;
                circle.GetOffsetCurves(offset);
                //这样是不会生成实体圆的，需存储进数据库对象里或者再次提交一个事务


                //存储进数据库里 DBObjectCollection可百度了解方法
                DBObjectCollection offsetObject = circle.GetOffsetCurves(offset);
                //将偏移后的实体圆添加到模型中
                foreach (Entity entity in offsetObject)
                {
                    //创建实体对象到块表记录中去
                    blockTableRecord.AppendEntity(entity);
                    transaction.AddNewlyCreatedDBObject(entity, true);
                    document.Editor.WriteMessage("\n已完成圆心:(10,10,0),半径为:20的圆，并偏移了5的距离");
                }


                //提交事项
                transaction.Commit();
                document.Editor.WriteMessage("\n已完成圆心和半径的修改，并改变了圆的位置");
            }

            //重新开始一个事务来偏移圆(待修改)
            //using (Transaction transaction2 = database.TransactionManager.StartTransaction())
            //{
            //    //获取快表
            //    BlockTable blockTable = transaction2.GetObject(database.BlockTableId, OpenMode.ForRead) as BlockTable;
            //    //获得块表记录
            //    BlockTableRecord blockTableRecord = transaction2.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForWrite) as BlockTableRecord;
            //    //上面第一次事务完成之后的圆得取回来
            //    Circle circle = transaction2.GetObject(circleCon, OpenMode.ForWrite) as Circle;
            //    double offset = 5;

            //    if (circle != null)
            //    {
            //        DBObjectCollection offsetObject = circle.GetOffsetCurves(offset);
            //        if (offsetObject != null)
            //        {
            //            foreach (Entity e in offsetObject)
            //            {
            //                blockTableRecord.AppendEntity(e);
            //                transaction2.AddNewlyCreatedDBObject(e, true);
            //            }
            //        }
            //    }

            //    transaction2.Commit();
            //}
        }
    }
}
