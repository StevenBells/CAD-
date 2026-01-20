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

namespace test
{
    public class GetArea_110
    {
        [CommandMethod("GetArea")]
        public static void GetArea()
        {
            //获取当前文档
            Document document = Application.DocumentManager.MdiActiveDocument;
            //获取用户输入的对象
            //创建存储二维点的集合
            Point2dCollection point2dCollection = new Point2dCollection();
            //创建一个用户输入的信息的显示，用来提示信息
            PromptPointOptions promptPointOptions = new PromptPointOptions("");
            document.Editor.WriteMessage($"\npromptPointOptions内容为" + promptPointOptions + "\n point2dCollection的内容为：" + point2dCollection);
            //提示用户输入第一个点
            promptPointOptions.Message = "\n输入第一个点";
            //获取用户输入的点的结果
            PromptPointResult promptPointResult = document.Editor.GetPoint(promptPointOptions);
            document.Editor.WriteMessage($"\n该项promptPointResult的内容为" + promptPointResult+ "\npromptPointResult.Value的内容为"+ promptPointResult.Value);
            //把指定点的X和Y放到存储二维点的集合point2dCollection里面
            point2dCollection.Add(new Point2d(promptPointResult.Value.X, promptPointResult.Value.Y));
            //如果按ESC命令，取消输入
            if (promptPointResult.Status == PromptStatus.Cancel) return;
            int n = 1;

            while (n <= 4)
            {
                //按条件输入下一点
                //if(n<=4)
                //{
                //    promptPointOptions.Message = "输入下一个点";
                //    n += 1;
                //}
                switch (n)
                {
                    case 1:
                        promptPointOptions.Message = "\n输入下一个点";
                        break;
                    case 2:
                        promptPointOptions.Message = "\n输入下一个点";
                        break;
                    case 3:
                        promptPointOptions.Message = "\n输入下一个点";
                        break;
                    case 4:
                        promptPointOptions.Message = "\n输入下一个点";
                        break;
                }
                //前一个点为基点 UseBasePoint启用后 后续点的选择将基于一个基准点进行相对定位。
                promptPointOptions.UseBasePoint = true;
                //设置基准点的坐标，是个3维点
                promptPointOptions.BasePoint = promptPointResult.Value;

                promptPointResult = document.Editor.GetPoint(promptPointOptions);
                point2dCollection.Add(new Point2d(promptPointResult.Value.X, promptPointResult.Value.Y));
                if (promptPointResult.Status == PromptStatus.Cancel) return;
                n += 1;
            }
            using (Polyline polyline = new Polyline())
            {
                polyline.AddVertexAt(0, point2dCollection[0], 0, 0, 0);
                polyline.AddVertexAt(1, point2dCollection[1], 0, 0, 0);
                polyline.AddVertexAt(2, point2dCollection[2], 0, 0, 0);
                polyline.AddVertexAt(3, point2dCollection[3], 0, 0, 0);
                polyline.AddVertexAt(4, point2dCollection[4], 0, 0, 0);

                //闭合多段线
                polyline.Closed = true;
                var area = polyline.Area.ToString();
                Application.ShowAlertDialog($"面积是：{area}mm2");
            }

        }
    }
}

