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

            Point2dCollection point2Ds = new Point2dCollection();
            PromptPointOptions promptPointOptions = new PromptPointOptions("");
            document.Editor.WriteMessage($"\n您指定的点坐标为" + promptPointOptions + "\n " + point2Ds);
            //提示用户输入第一个点
            promptPointOptions.Message = "输入第一个点";
            PromptPointResult promptPointResult = document.Editor.GetPoint(promptPointOptions);
            document.Editor.WriteMessage($"\n该项内容为" + promptPointResult);
            //把指定点的X和Y放到2D里面
            point2Ds.Add(new Point2d(promptPointResult.Value.X, promptPointResult.Value.Y));
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
                        promptPointOptions.Message = "输入下一个点";
                        break;
                    case 2:
                        promptPointOptions.Message = "输入下一个点";
                        break;
                    case 3:
                        promptPointOptions.Message = "输入下一个点";
                        break;
                    case 4:
                        promptPointOptions.Message = "输入下一个点";
                        break;
                }
                //前一个点为基点
                promptPointOptions.UseBasePoint = true;
                promptPointOptions.BasePoint = promptPointResult.Value;

                promptPointResult = document.Editor.GetPoint(promptPointOptions);
                point2Ds.Add(new Point2d(promptPointResult.Value.X, promptPointResult.Value.Y));
                if (promptPointResult.Status == PromptStatus.Cancel) return;
                n += 1;

                using (Polyline polyline = new Polyline())
                {
                    polyline.AddVertexAt(0, point2Ds[0], 0, 0, 0);
                    polyline.AddVertexAt(1, point2Ds[1], 0, 0, 0);
                    polyline.AddVertexAt(2, point2Ds[2], 0, 0, 0);
                    polyline.AddVertexAt(3, point2Ds[3], 0, 0, 0);
                    polyline.AddVertexAt(4, point2Ds[4], 0, 0, 0);

                    //闭合多段线
                    polyline.Closed = true;
                    var area = polyline.Area.ToString();
                    Application.ShowAlertDialog($"面积是：{area}");
                }
            }
        }
    }
}

