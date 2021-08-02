class CfgVehicles {
    class Land_Shoot_House_Wall_F;
    class grad_extras_shootHouseDoor: Land_Shoot_House_Wall_F {
        _generalMacro = "grad_extras_shootHouseDoor";
        author = "DerZade";
        editorPreview = QPATHTOF(data\editorPreview.jpg);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        displayName = "Shoot House - Wall (Door)";
        numberOfDoors = 1;
        model = QPATHTOF(data\model.p3d);
        class AnimationSources {
            class Door_1_locked_source {
                source = "user";
                initPhase = 0;
                animPeriod = 0.8;
            };
            class Door_1_sound_source {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
                sound = "GenericDoorsSound";
                soundPosition = "Door_1_trigger";
            };
            class Door_1_noSound_source {
                source = "user";
                initPhase = 0;
                animPeriod = 1;
            };
        };
    
        class SimpleObject {
            animate[] = {["door_1_rot",0],["door_1_handle_rot_1",0],["door_1_handle_rot_2",0],["door_1_locked_rot",0],["door_1_handle_locked_rot",0]};
            eden = 0;
            hide[] = {};
            init = "''";
            verticalOffset = 0.203;
            verticalOffsetWorld = 0;
        };

        class UserActions {
            class CloseDoor_1 {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_DN_OUT_C_DOOR";
                position = "door_1_trigger";
                selection = "door_1";
                priority = 11;
                radius = 1.75;
                aiMaxRange = 5.25;
                onlyForPlayer = 0;
                condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
                statement = "([this, 1, 0] call BIS_fnc_Door)";
            };
            class OpenDoor_1: CloseDoor_1 {
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                displayName = "$STR_DN_OUT_O_DOOR";
                priority = 11;
                condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
                statement = "([this, 1, 1] call BIS_fnc_Door)";
            };
        };
    };
};