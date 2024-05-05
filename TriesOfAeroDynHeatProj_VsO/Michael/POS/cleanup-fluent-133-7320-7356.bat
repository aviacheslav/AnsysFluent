echo off
set LOCALHOST=%COMPUTERNAME%
set KILL_CMD="D:\Prog\ANSYSI~1\v194\fluent/ntbin/win64/winkill.exe"

"D:\Prog\ANSYSI~1\v194\fluent\ntbin\win64\tell.exe" 133-7320 3148 CLEANUP_EXITING
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 8540) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 8512) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 6704) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 7200) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 7356) 
if /i "%LOCALHOST%"=="133-7320" (%KILL_CMD% 1492)
del "D:\MyFilesCur\W32-POS\Michael\POS\cleanup-fluent-133-7320-7356.bat"
