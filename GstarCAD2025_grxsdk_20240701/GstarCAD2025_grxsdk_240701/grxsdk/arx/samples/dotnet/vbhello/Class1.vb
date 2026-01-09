'---------------------------------------------------------------------------------------
'
' Please refer to "COPYRIGHT.md" for the relevant copyright statement of this software.
'
'---------------------------------------------------------------------------------------
'
Imports System
Imports Gssoft.Gscad

Imports Gssoft.Gscad.Runtime

Imports Gssoft.Gscad.DatabaseServices
Imports Gssoft.Gscad.Geometry

Imports Gssoft.Gscad.ApplicationServices
Imports Gssoft.Gscad.EditorInput

' This line is not mandatory, but improves loading performances
<Assembly: CommandClass(GetType(GRXTest.MyCommands))> 

Namespace GRXTest
    Public Class MyCommands

        <CommandMethod("vbhello", CommandFlags.Modal)> _
        Public Sub RunMRLCommand() ' This method can have any name
            Dim doc As Gssoft.Gscad.ApplicationServices.Document
            Dim ent As Entity


            doc = Gssoft.Gscad.ApplicationServices.Application.DocumentManager.MdiActiveDocument
            doc.Editor.WriteMessage("hello vb.net")
        End Sub

    End Class
End Namespace
