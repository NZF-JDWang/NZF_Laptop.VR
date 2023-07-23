# NZF_Laptop.VR

Simple Passworded Laptop dialog.

Place down a laptop and name it laptop

LaptopPassword\password.sqf contains all the watched variables. There you set your user name, password, number of attempts before failure.

Time to download the files can be changed in fn_downloadData with the default being 8 seconds

If you fail to enter the correct username/password missionNamespace getVariable "failure" will be true. In the same way once the files have been downloaded missionNamespace getVariable "fileDownload" will be true.

The mission has a trigger showing how to set off an alarm if the players fail to get the username/password correct.

You can make another trigger with the condition set to fileDownload and that will trigger on successful download of the datafiles.

The logo on the laptop screen can be changed by replacing laptopPassword\logo.paa with another paa file of your choice.
