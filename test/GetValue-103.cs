using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.Geometry;
using Gssoft.Gscad.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace test
{
    public class GetValue_103
    {
        [CommandMethod("GetValue")]
        public static void GetValue()
        {
            Point2d pt1 = new Point2d(10.5, 20.5);
            Point2d pt2 = new Point2d(5.5, 15.5);
            Application.ShowAlertDialog($"点1的X坐标：{pt1.X}, 点1的Y坐标：{pt1.Y}");
            Application.ShowAlertDialog($"点2的X坐标：{pt2.X}, 点2的Y坐标：{pt2.Y}");
            //计算两点之间的距离
            double distance = pt1.GetDistanceTo(pt2);
            Application.ShowAlertDialog($"点1和点2之间的距离：{distance}");
            //计算两点的角度
            string angle = pt1.GetVectorTo(pt2).Angle.ToString();
            //显示结果
            Application.ShowAlertDialog($"点1指向点2的向量角度：{angle} 弧度");
        }
    }
}
