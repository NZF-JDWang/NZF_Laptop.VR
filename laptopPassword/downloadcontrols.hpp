class downloadDialog 
{
	idd = 1235;

	class controls 
	{
		class downloadBackground: RscText
		{
			idc = 1000;
			style = 48;

			text = "laptopPassword\laptop.paa"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.363 * safezoneH;
		};
		class backupImage: RscPicture
		{
			style = "0x10 + 0x20 + 0x800";
			idc = 1200;

			text = "laptopPassword\code.paa";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.38 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.3 * safezoneH;
		};
		class buttonBackup: RscButton
		{
			idc = 1600;
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.2,1};
			offsetPressedX = "pixelW";
			offsetPressedY = "pixelH";
			action = "[] spawn nzf_fnc_downloadData;";

			text = "BACKUP FILES"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class buttonCancel: RscButton
		{
			idc = 1601;
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.2,1};
			offsetPressedX = "pixelW";
			offsetPressedY = "pixelH";
			action = "closeDialog 1";

			text = "CANCEL"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

