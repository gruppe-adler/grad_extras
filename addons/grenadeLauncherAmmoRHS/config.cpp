#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"Willard"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "a3_weapons_f", "rhs_c_weapons", "rhsusf_c_weapons"};
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgAmmo.hpp"
