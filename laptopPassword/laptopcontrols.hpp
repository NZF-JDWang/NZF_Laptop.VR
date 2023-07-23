class laptopDialog 
{
	idd = 1234;

	class controls 
	{
		class laptopBackground: RscText
		{
			idc = 1000;
			style = 48;

			text = "laptopPassword\laptop.paa"; 
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.363 * safezoneH;
		};
		class textUserName: RscText
		{
			idc = 1001;

			text = "USERNAME:"; 
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class textPassword: RscText
		{
			idc = 1003;

			text = "PASSWORD:"; 
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonOK: RscButton
		{
			idc = 1600;

			text = "LOGIN"; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackgroundActive[] = {0.85,0.4,0,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.2,1};
			offsetPressedX = "pixelW";	
			offsetPressedY = "pixelH";	
			action = "[] spawn nzf_fnc_passwordAttempt";
		};
		class buttonCancel: RscButton
		{
			idc = 1601;

			text = "CANCEL"; 
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackgroundActive[] = {0.85,0.4,0,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.2,1};
			offsetPressedX = "pixelW";
			offsetPressedY = "pixelH";
			action = "closeDialog 1";

		};
		class inputUsername: RscEdit
		{
			idc = 1400;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class inputPassword: RscEdit
		{
			idc = 1401;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class laptopImage: RscPicture
		{
			idc = 1200;

			text = "laptopPassword\logo.paa";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.6001 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0599999 * safezoneH;
		};
		class laptopInfo: RscText
		{	
			idc = 1100;
			style = 2;
			align = "center";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.026 * safezoneH;
		};
	};
};

