_action = ["Laptop","Use Laptop","",{[]spawn nzf_fnc_open;},{failure isEqualTo false}] call ace_interact_menu_fnc_createAction;     
[laptop, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;