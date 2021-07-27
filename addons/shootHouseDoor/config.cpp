#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"Salbei", "DerZade"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "A3_structures_f"};
        VERSION_CONFIG;
        units[] = {
			"grad_extras_shootHouseDoor"
		};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"