using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace test1
{
    public class CreateModelViewport_72
    {
        [CommandMethod("CreateModelViewport")]
        public static void CreateModelViewport()
        {
            //获取当前文档
            Document document = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument;
            //获取当前数据库
            Database database = document.Database;
            // 启动一个事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                // 获取视图表
                ViewTable viewTable = transaction.GetObject(database.ViewTableId, OpenMode.ForRead) as ViewTable;
                // 检查是否已经存在名为 "ModelViewport" 的视图
                if (viewTable.Has("ModelViewport"))
                {
                    document.Editor.WriteMessage("\n视图表中已存在名称为 'ModelViewport' 的视图，即将删除视图。");
                    // 删除视图

                    foreach (ObjectId acObjId in viewTable)
                    {
                        ViewTableRecord viewRecord = transaction.GetObject(acObjId, OpenMode.ForRead) as ViewTableRecord;


                        if (viewRecord.Name == "ModelViewport" && viewRecord != null)
                        {
                            viewRecord.UpgradeOpen();
                            viewRecord.Erase();
                            document.Editor.WriteMessage("\n..........\n名称为 'ModelViewport' 的视图已被成功删除。");
                        }
                    }
                }
                else
                {
                    // 创建第一个新的视图表记录
                    ViewTableRecord newViewRecord = new ViewTableRecord();
                    newViewRecord.Name = "ModelViewport";
                    // 设置视图的属性（根据需要进行设置）
                    newViewRecord.CenterPoint = new Gssoft.Gscad.Geometry.Point2d(0, 0);
                    newViewRecord.Height = 1000;
                    newViewRecord.Width = 1000;
                    // 将新视图添加到视图表中
                    viewTable.UpgradeOpen();
                    viewTable.Add(newViewRecord);
                    transaction.AddNewlyCreatedDBObject(newViewRecord, true);
                    document.Editor.WriteMessage("\n视图 'ModelViewport' 已被创建。");
                    // 将新视图设置为当前视图
                    document.Editor.SetCurrentView(newViewRecord);
                    //赋值窗口视口为新创建的视口
                    //newViewRecord.LowerLeftCorner = new Point2d(0, 0);
                    //newViewRecord.UpperRightCorner = new Point2d(400, 400);
                    //第一个视口
                    Viewport viewport1 = new Viewport();
                    // 设置视口的属性
                    viewport1.Width = newViewRecord.Width / 2;
                    viewport1.Height = newViewRecord.Height;
                    viewport1.CenterPoint = new Point3d(0, 0, 0);
                    viewport1.ViewCenter = new Point2d(0, 0);
                    viewport1.On = true;
                    //增加视口到当前空间
                    BlockTable blockTable = transaction.GetObject(database.BlockTableId, OpenMode.ForRead) as BlockTable;
                    BlockTableRecord modelSpace = transaction.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForWrite) as BlockTableRecord;
                    modelSpace.AppendEntity(viewport1);
                    transaction.AddNewlyCreatedDBObject(viewport1, true);
                    document.Editor.WriteMessage("\n视口 '1' 已被创建。");
                    //第二个视口
                    Viewport viewport2 = new Viewport();
                    // 设置视口的属性
                    viewport2.Width = newViewRecord.Width / 2;
                    viewport2.Height = newViewRecord.Height;
                    viewport2.CenterPoint = new Point3d(500, 0, 0);
                    viewport2.ViewCenter = new Point2d(500, 0);
                    viewport2.On = true;

                    modelSpace.AppendEntity(viewport2);
                    transaction.AddNewlyCreatedDBObject(viewport2, true);
                    document.Editor.WriteMessage("\n视口 '2' 已被创建。");
                }
                // 提交事务
                transaction.Commit();
            }
            using(Transaction transaction = database.TransactionManager.StartTransaction())
            { 
                // 获取视图表
                    ViewportTable viewportTable = transaction.GetObject(database.ViewportTableId, OpenMode.ForRead) as ViewportTable;
                    if (viewportTable.Has("TEST_VIEWPORT") == false)
                    {
                        //打开视图viewportTable表
                        viewportTable.UpgradeOpen();
                        //创建新的视口A表记录
                        ViewportTableRecord viewportRecord1 = new ViewportTableRecord();
                         //赋值属性
                        // 新视口命名为‘TEST_VIEWPORT’并将绘图窗口的下半部分赋给它
                        viewportRecord1.Name = "TEST_VIEWPORT";
                        viewportRecord1.LowerLeftCorner = new Point2d(0, 0);
                        viewportRecord1.UpperRightCorner = new Point2d(1, 0.5);
                        viewportTable.Add(viewportRecord1);
                        transaction.AddNewlyCreatedDBObject(viewportRecord1, true);
                       

                        //创建新的视口B表记录
                        ViewportTableRecord viewportRecord2 = new ViewportTableRecord();
                        //赋值属性
                        // 新视口命名为‘TEST_VIEWPORT’并将绘图窗口的下半部分赋给它
                        viewportRecord2.Name = "TEST_VIEWPORT";
                        viewportRecord2.LowerLeftCorner = new Point2d(0, 0.5);
                        viewportRecord2.UpperRightCorner = new Point2d(1, 1);   
                        viewportTable.Add(viewportRecord2);
                        transaction.AddNewlyCreatedDBObject(viewportRecord2, true);
                       

                        //遍历符号表里的每个对象
                        foreach (ObjectId acObjId in viewportTable)
                        {
                            // 以读模式打开对象
                            ViewportTableRecord viewRecord_1 = transaction.GetObject(acObjId, OpenMode.ForRead) as ViewportTableRecord;
                            // 检查是否为活动视口，是就删除
                            if (viewRecord_1.Name == "*Active")
                            {
                                viewRecord_1.UpgradeOpen();
                                viewRecord_1.Erase();
                            }
                        }
                        // 复制新视口为活动视口
                        foreach (ObjectId acObjId in viewportTable)
                        {
                            // 以读模式打开对象
                            ViewportTableRecord viewRecord_2 = transaction.GetObject(acObjId, OpenMode.ForRead) as ViewportTableRecord;
                            // 检查是否为活动视口，是就删除
                            if (viewRecord_2.Name == "TEST_VIEWPORT")
                            {
                                ViewportTableRecord viewRecord_3 = viewRecord_2.Clone() as ViewportTableRecord;
                            // 添加新视口到 Viewport 表并添加事务记录
                                viewportTable.Add(viewRecord_3);
                                viewRecord_3.Name = "*Active";
                                transaction.AddNewlyCreatedDBObject(viewRecord_3, true);
                            }
                        }
                    // 用新的平铺视口排列更新显示
                    document.Editor.UpdateTiledViewportsFromDatabase();
                    //CreateModelViewport_79 _80
                    //document.Editor.UpdateScreen();
                    //document.Editor.Regen();

                }
                // 提交事务
                transaction.Commit();
            }
         }
    }
}
