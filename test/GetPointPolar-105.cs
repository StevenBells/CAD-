using Gssoft.Gscad.ApplicationServices;
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
   
    public class GetPointPolar_105
    {
        [CommandMethod("GetPointPolar")]
        public static void GetPointPolar()
        {
            Point2d pt1 = PointPolar(new Point2d(10.5, 20.5),0.785398,12);
            //显示结果
            Application.ShowAlertDialog($"起始点：({pt1.X}, {pt1.Y})");

            Point3d pt2 = PointPolar(new Point3d(2,5,0), 1.0472, 8);
            //显示结果
            Application.ShowAlertDialog($"起始点：({pt2.X}, {pt2.Y}, {pt2.Z})");

            //让用户指定2个点
            PromptDoubleResult promptDoubleResult = Application.DocumentManager.MdiActiveDocument.Editor.GetDistance("\n请指定2个点");
            var distance = promptDoubleResult.Value.ToString();
            //显示结果
            Application.ShowAlertDialog(distance);
        }

        private static Point3d PointPolar(Point3d pt, double dAng, int distance)
        {
            return new Point3d(pt.X + distance * Math.Cos(dAng), pt.Y + distance * Math.Sin(dAng), pt.Z); ;
        }

        private static Point2d PointPolar(Point2d pt, double dAng, int distance)
        {
            return new Point2d(pt.X + distance * Math.Cos(dAng), pt.Y + distance * Math.Sin(dAng));
        }
    }
   
}
