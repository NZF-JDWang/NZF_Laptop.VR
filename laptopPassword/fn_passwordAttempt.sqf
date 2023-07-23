private _userName = ctrlText 1400;
private _password = ctrlText 1401;

if (numberOfAttempts < maxAttempts) then {

	if (_userName isEqualTo username && _password isEqualTo password) then 
		{	
			playSound3D ["a3\ui_f\data\sound\cfgnotifications\tasksucceeded.wss", laptop];
			closeDialog 2;
			[] spawn nzf_fnc_download;
		} else 
			{
				playSound3D ["a3\sounds_f\debugsound.wss", laptop];
				numberOfAttempts = numberOfAttempts + 1;
			};
		
} else 
	{
		missionNamespace setVariable ["failure",true,true];
		closeDialog 2;
	};