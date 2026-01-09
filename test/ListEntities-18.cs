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
    public class Class1
    {
        [CommandMethod("LEE")]
        public static void ListEntities()
        {
            // 获取当前文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            // 启动一个事务
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                // 获取模型空间块表记录
                BlockTable blockTable = (BlockTable)transaction.GetObject(database.BlockTableId, OpenMode.ForRead);
                BlockTableRecord modelSpace = (BlockTableRecord)transaction.GetObject(blockTable[BlockTableRecord.ModelSpace], OpenMode.ForRead);
                // 遍历模型空间中的所有实体,并输出它们的类型和句柄
                int n =1;
                foreach (ObjectId entityId in modelSpace)
                {
                    //Entity entity = (Entity)transaction.GetObject(entityId, OpenMode.ForRead);
                    document.Editor.WriteMessage($"\nEntity: {n}, Entity ID: {entityId}");
                    n += 1;
                }
                //意外情况处理：如果模型空间中没有实体，则输出提示信息
                if (n == 1)
                {
                    document.Editor.WriteMessage($"该活动窗口中没有实体对象");
                }
                // 提交事务
                transaction.Commit();
            }
        }
    }
}
