on error resume next
set fso = createobject("scripting.filesystemobject")
set proc4 = fso.opentextfile("decrypted_main.txt", 1)
msg = proc4.readall
ddd = x(msg)
set proc2 = fso.createtextfile("decrypted_main.txt", true)
proc2.writeline ddd
proc2.close
Function x(sText)
On Error Resume Next
Dim ekey, i, hash, crbyte
ekey = 235
For i = 1 To Len(sText)
hash = Asc(Mid(sText, i, 1))
crbyte = Chr(hash Xor (ekey Mod 255))
x = x & crbyte
Next
End Function
