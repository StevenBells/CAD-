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
    public class LockDocument_92
    {
        [CommandMethod("LockDocument")]
        public static void LockDocument()
        {
            //获取当前文档
            Document document = Application.DocumentManager.MdiActiveDocument;
            //新建一个图形文档
            DocumentCollection documentCollection = Application.DocumentManager;
            Document newdocument = documentCollection.Add("gcad.dwt");
            Database database = newdocument.Database;

            //锁定文档以进行安全的编辑操作
            //using (DocumentLock documentLock = newdocument.LockDocument())
            //{
            //    //在此处执行对文档的编辑操作
            //    document.Editor.WriteMessage("\n文档已被锁定，可以安全地进行编辑操作。");
            //    //示例编辑操作：在命令行输出当前时间
            //    document.Editor.WriteMessage($"\n当前时间: {DateTime.Now}");
            //    documentCollection.MdiActiveDocument = newdocument;
            //}

            ////离开using块时，文档将自动解锁
            //document.Editor.WriteMessage("\n文档已被解锁。");

            //锁定文档
            using (DocumentLock documentLock = newdocument.LockDocument())
            {
                document.Editor.WriteMessage("\n文档已被锁定，可以安全地进行编辑操作。");
                //启动事物
                using (Transaction transaction = database.TransactionManager.StartTransaction())
                {
                    //以读的形式打开块表
                    BlockTable blockTable = transaction.GetObject(database.BlockTableId, OpenMode.ForRead) as BlockTable;
                    //以写的模式打开块表记录
                    BlockTableRecord blockRecord = transaction.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForWrite) as BlockTableRecord;
                    //创建一个圆
                    Circle circle = new Circle();
                    circle.Center = new Point3d(5, 5, 0);
                    circle.Radius = 3;

                    //添加到实体中
                    blockRecord.AppendEntity(circle);
                    transaction.AddNewlyCreatedDBObject(circle, true);
                    //提交修改
                    transaction.Commit();
                }
                document.Editor.WriteMessage("\n文档即将解锁。");
            }
            documentCollection.MdiActiveDocument = newdocument;
        }
    }
}
