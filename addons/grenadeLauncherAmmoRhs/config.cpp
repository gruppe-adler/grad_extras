#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "$STR_grad_Author";
        name = QUOTE(ADDON);
        url = "$STR_grad_URL";
        requiredVersion = 1.0;
        requiredAddons[] = { QMAINPATCH , "A3_Weapons_F", "rhs_c_weapons", "rhsusf_c_weapons"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        authors[] = {
            "Willard"
        };
    };
};

#include "cfgAmmo.hpp"
