#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"Synch"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {
            QMAINPATCH,
            "A3_Characters_F",
            "A3_Characters_F_Exp",
            "A3_Characters_F_Enoch",
            "A3_Characters_F_Enoch_Vests",
            "A3_Weapons_F_Ammoboxes",
            "A3_Supplies_F_Orange_Bags",
            "tfar_backpacks"
        };
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
    };
};

#define SCOPE_WIP 1

#include "CfgVehicles.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgWeapons.hpp"

#undef SCOPE_WIP