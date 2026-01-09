using Gssoft.Gscad.ApplicationServices;
using Gssoft.Gscad.DatabaseServices;
using Gssoft.Gscad.Runtime;


namespace test
{
    public class test
    {
        [CommandMethod("Test")]
        public static void Method1()
        {
            Document document = Application.DocumentManager.MdiActiveDocument;
            //Database database = document.Database;
            document.Editor.WriteMessage("\n你好，这是我的第一次在浩辰中编写代码！");
            
        }
    }
}
