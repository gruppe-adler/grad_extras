#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		author = "$STR_grad_Author";
		name = QUOTE(ADDON);
		url = "$STR_grad_URL";
		requiredVersion = 1.0;
		requiredAddons[] = {QMAINPATCH, "gm_core_weapons", "hlcweapons_g3", "hlcweapons_MG3s"};
		units[] = {};
		weapons[] = {};
		VERSION_CONFIG;
        authors[] = {
			"Salbei"
		};
	};
};


#include "CfgWeapons.hpp"
