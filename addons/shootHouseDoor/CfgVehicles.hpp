class CfgVehicles
{
	class Land_Shoot_House_Wall_F;
	class grad_extras_shootHouseDoor: Land_Shoot_House_Wall_F
	{
		_generalMacro = "grad_extras_shootHouseDoor";
		author = "DerZade";
		editorPreview = QPATHTOF(data\editorPreview.jpg);
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		displayName = "Shoot House - Wall (Door)";
		model = QPATHTOF(data\model.p3d);
		class AnimationSources
		{
			class LockedDoor_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.1;
			};
			class Door_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				sound = "GenericDoorsSound";
				soundPosition = "Door_trigger";
			};
			class Handle_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Door_trigger";
				priority = 11;
				radius = 1.5;
				aiMaxRange = "1.5 * 3";
				onlyForPlayer = 0;
				condition = "((this animationPhase 'Door') < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
				statement = "([this, 'Door', 'Handle_1', 'Handle_2'] call BIS_fnc_DoorOpen)";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				displayName = "$STR_DN_OUT_C_DOOR";
				priority = 11;
				condition = "((this animationPhase 'Door') >= 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
				statement = "([this, 'Door', 'Handle_1', 'Handle_2'] call BIS_fnc_DoorClose)";
			};
		};
	};
}; 