#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"Salbei"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "gm_core_weapons", "hlcweapons_g3", "hlcweapons_MG3s"};
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
    };
};


#include "CfgWeapons.hpp"
