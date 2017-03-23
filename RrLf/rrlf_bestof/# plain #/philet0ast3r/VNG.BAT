@echo off

:: virus name generator v2.3
:: by philet0ast3r
:: some added notes from 2008:
:: when me and spth coded Bat/BatXP.Iaafe end of 2002, we could not decide what name we should give the virus
:: so i changed the numbers in my Batch Random Number Generator v1.0 to letters
:: iaafe was the first exeptable thing that popped out of this program

echo hehehe, philet0ast3r's crazy virus name generator v2.3
echo.
pause

:start1
echo.
ver|time|find ",1">nul
if not errorlevel 1 goto 11
ver|time|find ",2">nul
if not errorlevel 1 goto 12
ver|time|find ",3">nul
if not errorlevel 1 goto 13
ver|time|find ",4">nul
if not errorlevel 1 goto 14
ver|time|find ",5">nul
if not errorlevel 1 goto 15
ver|time|find ",6">nul
if not errorlevel 1 goto 16
ver|time|find ",7">nul
if not errorlevel 1 goto 17
ver|time|find ",8">nul
if not errorlevel 1 goto 18
ver|time|find ",9">nul
if not errorlevel 1 goto 19
ver|time|find ",0">nul
if not errorlevel 1 goto 10
goto start1

:10
set random1=p
goto start2
:19
set random1=h
goto start2
:18
set random1=i
goto start2
:17
set random1=l
goto start2
:16
set random1=e
goto start2
:15
set random1=t
goto start2
:14
set random1=0
goto start2
:13
set random1=a
goto start2
:12
set random1=s
goto start2
:11
set random1=t
goto start2

:start2
ver|time|find ",1">nul
if not errorlevel 1 goto 21
ver|time|find ",2">nul
if not errorlevel 1 goto 22
ver|time|find ",3">nul
if not errorlevel 1 goto 23
ver|time|find ",4">nul
if not errorlevel 1 goto 24
ver|time|find ",5">nul
if not errorlevel 1 goto 25
ver|time|find ",6">nul
if not errorlevel 1 goto 26
ver|time|find ",7">nul
if not errorlevel 1 goto 27
ver|time|find ",8">nul
if not errorlevel 1 goto 28
ver|time|find ",9">nul
if not errorlevel 1 goto 29
ver|time|find ",0">nul
if not errorlevel 1 goto 20
goto start2

:20
set random2=3
goto start3
:29
set random2=r
goto start3
:28
set random2=a
goto start3
:27
set random2=n
goto start3
:26
set random2=d
goto start3
:25
set random2=S
goto start3
:24
set random2=e
goto start3
:23
set random2=c
goto start3
:22
set random2=o
goto start3
:21
set random2=n
goto start3

:start3
ver|time|find ",1">nul
if not errorlevel 1 goto 31
ver|time|find ",2">nul
if not errorlevel 1 goto 32
ver|time|find ",3">nul
if not errorlevel 1 goto 33
ver|time|find ",4">nul
if not errorlevel 1 goto 34
ver|time|find ",5">nul
if not errorlevel 1 goto 35
ver|time|find ",6">nul
if not errorlevel 1 goto 36
ver|time|find ",7">nul
if not errorlevel 1 goto 37
ver|time|find ",8">nul
if not errorlevel 1 goto 38
ver|time|find ",9">nul
if not errorlevel 1 goto 39
ver|time|find ",0">nul
if not errorlevel 1 goto 30
goto start3

:30
set random3=d
goto start4
:39
set random3=P
goto start4
:38
set random3=a
goto start4
:37
set random3=r
goto start4
:36
set random3=t
goto start4
:35
set random3=T
goto start4
:34
set random3=o
goto start4
:33
set random3=H
goto start4
:32
set random3=e
goto start4
:31
set random3=l
goto start4

:start4
ver|time|find ",1">nul
if not errorlevel 1 goto 41
ver|time|find ",2">nul
if not errorlevel 1 goto 42
ver|time|find ",3">nul
if not errorlevel 1 goto 43
ver|time|find ",4">nul
if not errorlevel 1 goto 44
ver|time|find ",5">nul
if not errorlevel 1 goto 45
ver|time|find ",6">nul
if not errorlevel 1 goto 46
ver|time|find ",7">nul
if not errorlevel 1 goto 47
ver|time|find ",8">nul
if not errorlevel 1 goto 48
ver|time|find ",9">nul
if not errorlevel 1 goto 49
ver|time|find ",0">nul
if not errorlevel 1 goto 40
goto start4

:40
set random4=l
goto start5
:49
set random4=o
goto start5
:48
set random4=f
goto start5
:47
set random4=w
goto start5
:46
set random4=w
goto start5
:45
set random4=w
goto start5
:44
set random4=.
goto start5
:43
set random4=r
goto start5
:42
set random4=R
goto start5
:41
set random4=l
goto start5

:start5
ver|time|find ",1">nul
if not errorlevel 1 goto 51
ver|time|find ",2">nul
if not errorlevel 1 goto 52
ver|time|find ",3">nul
if not errorlevel 1 goto 53
ver|time|find ",4">nul
if not errorlevel 1 goto 54
ver|time|find ",5">nul
if not errorlevel 1 goto 55
ver|time|find ",6">nul
if not errorlevel 1 goto 56
ver|time|find ",7">nul
if not errorlevel 1 goto 57
ver|time|find ",8">nul
if not errorlevel 1 goto 58
ver|time|find ",9">nul
if not errorlevel 1 goto 59
ver|time|find ",0">nul
if not errorlevel 1 goto 50
goto start5

:50
set random5=f
goto end
:59
set random5=.
goto end
:58
set random5=d
goto end
:57
set random5=e
goto end
:56
set random5=r
goto end
:55
set random5=u
goto end
:54
set random5=l
goto end
:53
set random5=e
goto end
:52
set random5=!
goto end
:51
set random5=!
goto end

:end
echo bat.%random1%%random2%%random3%%random4%%random5%
echo.
choice /c:yn write this down to file virusname.txt?
if errorlevel 2 goto ptr
if errorlevel 1 goto writedown
:ptr
echo.
choice /c:yn again?
if errorlevel 2 goto aaa
if errorlevel 1 goto start1
:aaa
cls
ctty nul
exit
:writedown
echo bat.%random1%%random2%%random3%%random4%%random5%>virusname.txt
echo Ok.
echo.
goto ptr