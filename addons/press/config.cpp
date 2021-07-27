#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"XiviD"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "A3_soft_f"};
        VERSION_CONFIG;
        units[] = {"grad_extras_press_offroad"};
        weapons[] = {};
    };
};

class CfgVehicles {
    class Offroad_01_civil_base_F;
    class C_Offroad_01_F: Offroad_01_civil_base_F {
        class EventHandlers;
    };

    class grad_extras_press_offroad: C_Offroad_01_F
    {
        displayName = "Offroad (Press)";
        author = "XiviD";
        hiddenSelectionsTextures[] = {"\x\grad_extras\addons\press\data\exterior_press_co.paa","\x\grad_extras\addons\press\data\exterior_press_co.paa"};
        editorPreview = "\x\grad_extras\addons\press\data\editorPreview.jpg";

        class EventHandlers: EventHandlers {
            init = "(_this select 0) setVariable ['BIS_enableRandomization', false]";
        };

        class TextureSources {
            class grad_extras_press {
                displayName = "Press";
                textures[] = {"\x\grad_extras\addons\press\data\exterior_press_co.paa","\x\grad_extras\addons\press\data\exterior_press_co.paa"};
            };
        };

        class TransportBackpacks {};
        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
    };
};
