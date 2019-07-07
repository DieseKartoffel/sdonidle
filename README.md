# sdonidle

Windows Task Scheduler is cancer so this C++ code will simply shutdown windows if the mouse has not moved in 4 hours.

Change Wait time by creating a shortcut to sdonidle.exe and adding time argument to Target
For example, shut down PC after 60 seconds idle time with: " 'C:\your\path\to\sdonidle.exe' 60 "

Add to startup by placing exe or shortcut into "C:\Users\Username\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup"
