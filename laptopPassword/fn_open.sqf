createDialog "laptopDialog";
_ctrl = (findDisplay 1234) displayCtrl 1400;
ctrlSetFocus _ctrl;

while {true} do 
{
	_attempts = (maxAttempts - numberOfAttempts) + 1;
	if (_attempts > 1) then 
	{
		ctrlSetText [1100, format["%1 LOGON ATTEMPTS LEFT", _attempts]];
	} else 
	{
		ctrlSetText [1100, format["%1 LOGON ATTEMPTS LEFT", _attempts]];
	};
	sleep 0.1;
};
