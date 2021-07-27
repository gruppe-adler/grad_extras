#include "script_component.hpp"

#define GRAD_AUTHOR "Grendel"
#define GRAD_SIDE 1
#define GRAD_FACTION "BLU_F"
#define GRAD_CREW "B_Soldier_F"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {GRAD_AUTHOR};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.32;
        requiredAddons[] = {QMAINPATCH, "a3_soft_f_beta_mrap_03"};
        VERSION_CONFIG;
        units[] = {
			"grad_extras_fennek_wd",
			"grad_extras_fennek_wd_hmg",
			"grad_extras_fennek_wd_gmg",
			"grad_extras_fennek_wd_san",
			"grad_extras_fennek_des",
			"grad_extras_fennek_des_hmg",
			"grad_extras_fennek_des_gmg",
			"grad_extras_fennek_des_san",
			"grad_extras_fennek_snow",
			"grad_extras_fennek_snow_hmg",
			"grad_extras_fennek_snow_gmg",
			"grad_extras_fennek_snow_san",
			"grad_extras_fennek_un",
			"grad_extras_fennek_un_san"
		};
        weapons[] = {};
    };
};

class grad_extras_fennek_TextureSources {
	class wd_01 {
		displayName = "Woodland 01";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
	};
	class wd_02 {
		displayName = "Woodland 02";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_02_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
	};
	class wd_03 {
		displayName = "Woodland 03";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_03_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
	};
	class wd_04 {
		displayName = "Woodland SAN";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
	};
	class des_01 {
		displayName = "Desert 01";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
	};
	class des_02 {
		displayName = "Desert 02";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_02_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
	};
	class des_03 {
		displayName = "Desert 03";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_03_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
	};
	class des_04 {
		displayName = "Desert SAN";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
	};

	class snow_01 {
		displayName = "Snow 01";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
	};
	class snow_02 {
		displayName = "Snow 02";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_02_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
	};
	class snow_03 {
		displayName = "Snow 03";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_03_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
	};
	class snow_04 {
		displayName = "Snow SAN";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
	};
	class un_01 {
		displayName = "UN";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_un_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_un_co.paa"
		};
	};
	class un_02 {
		displayName = "UN SAN";
		textures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_un_02_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_un_co.paa"
		};
	};
};

class CfgVehicles {
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;

	// Woodland ---------------------------------------------------------------------------------------------------------------
	class grad_extras_fennek_wd: I_MRAP_03_F {
		displayName = "Fennek (Woodland)";
		author = GRAD_AUTHOR;
		side = GRAD_SIDE;
		faction = GRAD_FACTION;
		crew = GRAD_CREW;
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\wd.jpg";

		class TransportBackpacks {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		class TextureSources: grad_extras_fennek_TextureSources {};
	};
    class grad_extras_fennek_wd_hmg: I_MRAP_03_hmg_F {
		displayName = "Fennek HMG (Woodland)";
		author = GRAD_AUTHOR;
		side = GRAD_SIDE;
		faction = GRAD_FACTION;
		crew = GRAD_CREW;
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\wd_hmg.jpg";

		class TransportBackpacks {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		class TextureSources: grad_extras_fennek_TextureSources {};
	};
    class grad_extras_fennek_wd_gmg: I_MRAP_03_gmg_F {
		displayName = "Fennek GMG (Woodland)";
		author = GRAD_AUTHOR;
		side = GRAD_SIDE;
		faction = GRAD_FACTION;
		crew = GRAD_CREW;
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\wd_gmg.jpg";

		class TransportBackpacks {};
		class TransportItems {};
		class TransportMagazines {};
		class TransportWeapons {};

		class TextureSources: grad_extras_fennek_TextureSources {};
	};
	class grad_extras_fennek_wd_san: grad_extras_fennek_wd {
		displayName = "Fennek SAN (Woodland)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_wd_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_wd_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\wd_san.jpg";
	};

	// Desert -----------------------------------------------------------------------------------------------------------------
	class grad_extras_fennek_des: grad_extras_fennek_wd {
		displayName = "Fennek (Desert)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\des.jpg";
	};
    class grad_extras_fennek_des_hmg: grad_extras_fennek_wd_hmg {
		displayName = "Fennek HMG (Desert)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\des_hmg.jpg";
	};
    class grad_extras_fennek_des_gmg: grad_extras_fennek_wd_gmg {
		displayName = "Fennek GMG (Desert)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\des_gmg.jpg";
	};
	class grad_extras_fennek_des_san: grad_extras_fennek_wd {
		displayName = "Fennek SAN (Desert)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_des_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_des_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\des_san.jpg";
	};

	// Winter -----------------------------------------------------------------------------------------------------------------
	class grad_extras_fennek_snow: grad_extras_fennek_wd {
		displayName = "Fennek (Winter)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\snow.jpg";
	};
    class grad_extras_fennek_snow_hmg: grad_extras_fennek_wd_hmg {
		displayName = "Fennek HMG (Winter)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\snow_hmg.jpg";
	};
    class grad_extras_fennek_snow_gmg: grad_extras_fennek_wd_gmg {
		displayName = "Fennek GMG (Winter)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\snow_gmg.jpg";
	};
	class grad_extras_fennek_snow_san: grad_extras_fennek_wd {
		displayName = "Fennek SAN (Winter)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_snow_04_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_snow_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\snow_san.jpg";
	};

	// UN ---------------------------------------------------------------------------------------------------------------------
	class grad_extras_fennek_un: grad_extras_fennek_wd {
		displayName = "Fennek (UN)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_un_01_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_un_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\un.jpg";
	};
	class grad_extras_fennek_un_san: grad_extras_fennek_wd {
		displayName = "Fennek SAN (UN)";
		hiddenSelectionsTextures[] = {
			"\x\grad_extras\addons\fennek\data\textures\exterior_un_02_co.paa",
			"\x\grad_extras\addons\fennek\data\textures\turret_un_co.paa"
		};
		editorPreview = "\x\grad_extras\addons\fennek\data\editorPreview\un_san.jpg";
	};
};

delete grad_extras_fennek_TextureSources;

#undef GRAD_AUTHOR
#undef GRAD_SIDE
#undef GRAD_FACTION
#undef GRAD_CREW