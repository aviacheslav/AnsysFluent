echo off
set LOCALHOST=%COMPUTERNAME%
set KILL_CMD="D:\Prog\ANSYSI~1\v194\fluent/ntbin/win64/winkill.exe"

"D:\Prog\ANSYSI~1\v194\fluent\ntbin\win64\tell.exe" 133-7320 4374 CLEANUP_EXITING
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 6628) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 6608) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 8064) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 4464) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 5260) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 6296)
del "D:\MyFilesCur\POS\cleanup-fluent-133-7320-5260.bat"
