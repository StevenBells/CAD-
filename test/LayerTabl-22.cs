using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.Colors;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class LayerTable_22
    {

        [CommandMethod("LayerTable")]
        public static void Command()
        {
            //获取当前活动文档和数据库
            Document document = Application.DocumentManager.MdiActiveDocument;
            Database database = document.Database;
            //开启一个事项
            using (Transaction transaction = database.TransactionManager.StartTransaction())
            {
                //获取当前图层
                LayerTable layerTable = transaction.GetObject(database.LayerTableId, OpenMode.ForRead) as LayerTable;
                //查询其中是否存在固定图层 LayerTable_28
                if (layerTable.Has("MyLayer"))
                {
                    document.Editor.WriteMessage("\nMyLayer已存在！");
                }
                else
                {
                    document.Editor.WriteMessage("\n请注意，我没有发现MyLayer图层，下面开始创建图层！");
                    //把图层打开
                    layerTable.UpgradeOpen();
                    //创建固定图层
                    LayerTableRecord layer = new LayerTableRecord()
                    {
                        Name = "MyLayer",//图层名称
                        Color = Color.FromRgb(255, 0, 0),//图层颜色RGB
                        IsOff = false, // 图层开关
                        IsFrozen = true, // 图层冻结
                        IsLocked = false, // 图层锁定
                        IsHidden = false, // 图层隐藏
                        IsPlottable = false, // 图层可打印
                        LineWeight = LineWeight.ByLineWeightDefault, // 线宽
                        //PlotStyleNameId = ObjectId.Null, // 图层样式
                        //LinetypeObjectId = linetypeTable["Center"], // 线型
                    };
                    //将图层添加到图层表中
                    layerTable.Add(layer);
                    transaction.AddNewlyCreatedDBObject(layer, true);
                    document.Editor.WriteMessage("\n.......\nMyLayer图层已经创建成功！");
                }
                //关闭图层表
                layerTable.DowngradeOpen();
                //遍历图层中的图层 LayerTable_27
                foreach (ObjectId id in layerTable)
                {
                    //获取图层
                    LayerTableRecord layerRecord = transaction.GetObject(id, OpenMode.ForRead) as LayerTableRecord;
                    //输出图层信息
                    document.Editor.WriteMessage("\n图层名称：" + layerRecord.Name + "  颜色：" + layerRecord.Color.ToString());

                    //打印完成之后又删除图层 LayerTable_31
                    if (layerRecord.Name == "MyLayer")
                    {
                        try
                        {
                            layerRecord.Erase();
                            document.Editor.WriteMessage("\n.......\nMyLayer图层已经成功删除！");
                        }
                        //如何实现catch  思考一下 实现了之后为何会这样？
                        catch
                        {
                            document.Editor.WriteMessage("\n.......\n没有MyLayer图层，我怎么删除！");
                        }
                    }
                }
                //提交事务
                transaction.Commit();
            }
        }
    }
}
