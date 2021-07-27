#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"Simmax", "DerZade"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "rhssaf_c_gear"};
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {
			"grad_extras_beret_green",
			"grad_extras_beret_red",
			"grad_extras_beret_black",
			"grad_extras_beret_purp",
			"grad_extras_beret_blue"
		};
    };
};

class CfgWeapons
{
	class rhssaf_beret_green;
	class grad_extras_beret_green : rhssaf_beret_green
	{
		author = "$STR_GRAD_EXTRAS_AUTHOR";
		displayName = "Gruppe Adler Beret (Green)";
		hiddenSelectionsTextures[] = {"\x\grad_extras\addons\beret\data\texture\green_co.paa"};
	};
	class grad_extras_beret_red : grad_extras_beret_green
	{
		displayName = "Gruppe Adler Beret (Red)";
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_red_ca.paa";
		hiddenSelectionsTextures[] = {"\x\grad_extras\addons\beret\data\texture\red_co.paa"};
	};
	class grad_extras_beret_black : grad_extras_beret_green
	{
		displayName = "Gruppe Adler Beret (Black)";
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_black_ca.paa";
		hiddenSelectionsTextures[] = {"\x\grad_extras\addons\beret\data\texture\black_co.paa"};
	};
	class grad_extras_beret_purp : grad_extras_beret_green
	{
		displayName = "Gruppe Adler Beret (Purple)";
		picture = "\x\grad_extras\addons\beret\data\picture\purp_ca.paa";
		hiddenSelectionsTextures[] = {"\x\grad_extras\addons\beret\data\texture\purp_co.paa"};
	};
	class grad_extras_beret_blue : grad_extras_beret_green
	{
		displayName = "Gruppe Adler Beret (Blue)";
		picture = "\x\grad_extras\addons\beret\data\picture\blue_ca.paa";
		hiddenSelectionsTextures[] = {"\x\grad_extras\addons\beret\data\texture\blue_co.paa"};
	};
};
