class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_lite_F;
	class B_soldier_AR_F;
	class B_GEN_Soldier_F;
	class I_E_Uniform_01_tanktop_F;


    // COMBAT UNIFORM -----------------------------------------------------------------------------
	class grad_extras_kit_soldier_combatUniform_usArmy_OCP: B_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_usArmy_OCP";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_YesFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\USArmy\CombatUniform_USArmy_OCP_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_usArmy_OCP_S: B_Soldier_lite_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_usArmy_OCP_S";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_YesFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\USArmy\CombatUniform_USArmy_OCP_v2_co.paa"}; //TEMP V2
	};

	class grad_extras_kit_soldier_combatUniform_usArmy_OCP_T: B_soldier_AR_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_usArmy_OCP_T";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_YesFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\USArmy\CombatUniform_USArmy_OCP_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Khaki: B_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Khaki";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Khaki_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Khaki_S: B_Soldier_lite_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Khaki_S";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Khaki_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Khaki_T: B_soldier_AR_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Khaki_T";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Khaki_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Ranger: B_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Ranger";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Ranger_co.paa"};
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Ranger_S: B_Soldier_lite_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Ranger_S";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Ranger_co.paa" };
	};

	class grad_extras_kit_soldier_combatUniform_noFlag_Ranger_T: B_soldier_AR_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatUniform_noFlag_Ranger_T";
		hiddenSelectionsMaterials[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Ranger_co.paa"};
	};


    // COMBAT CASUAL ------------------------------------------------------------------------------
	class grad_extras_kit_soldier_combatCasual_khaki_grey: B_GEN_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatCasual_khaki_grey";
		hiddenSelectionsMaterials[] = {
            "",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"
        };
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatCasual\shirt_grey_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Khaki_co.paa"
        };
	};

	class grad_extras_kit_soldier_combatCasual_khaki_white: B_GEN_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatCasual_khaki_white";
		hiddenSelectionsMaterials[] = {
            "",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"
        };
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatCasual\shirt_white_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_Khaki_co.paa"
        };
	};

	class grad_extras_kit_soldier_combatCasual_ranger_grey: B_GEN_Soldier_F{
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatCasual_ranger_grey";
		hiddenSelectionsMaterials[] = {
            "",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"
        };
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatCasual\shirt_grey_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_ranger_co.paa"
        };
	};

	class grad_extras_kit_soldier_combatCasual_ranger_white: B_GEN_Soldier_F {
		author = "Synch";
		scope = 1;
		uniformClass = "grad_u_combatCasual_ranger_white";
		hiddenSelectionsMaterials[] = {
            "",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\CombatUniform_noFlag.rvmat"
        };
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatCasual\shirt_white_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatUniform\noFlag\CombatUniform_noFlag_ranger_co.paa"
        };
	};


    // COMBAT FATIGUES ----------------------------------------------------------------------------
	class grad_extras_kit_soldier_combatFatigues_khaki_white: I_E_Uniform_01_tanktop_F {
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_khaki_white";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_white_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\khaki_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};

	class grad_extras_kit_soldier_combatFatigues_khaki_telnyashka: I_E_Uniform_01_tanktop_F {
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_khaki_telnyashka";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_telnyashka_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\khaki_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};

	class grad_extras_kit_soldier_combatFatigues_khaki_black: I_E_Uniform_01_tanktop_F {
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_khaki_black";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_black_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\khaki_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};

	class grad_extras_kit_soldier_combatFatigues_green_white: I_E_Uniform_01_tanktop_F	{
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_green_white";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_white_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\green_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};

	class grad_extras_kit_soldier_combatFatigues_green_telnyashka: I_E_Uniform_01_tanktop_F {
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_green_telnyashka";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_telnyashka_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\green_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};

	class grad_extras_kit_soldier_combatFatigues_green_black: I_E_Uniform_01_tanktop_F {
		author = "Synch";
		scope = 1;
		modelSides[] = {1,2};
		uniformClass = "grad_u_combatFatigues_green_black";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {
            "x\grad_extras\addons\kit\data\uniforms\combatFatigues\tanktop_black_co.paa",
			"x\grad_extras\addons\kit\data\uniforms\combatFatigues\green_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
        };
	};


    // RT-1523G -----------------------------------------------------------------------------------
	class TFAR_rt1523g_big_bwmod;
	class grad_TFAR_rt1523g_ranger: TFAR_rt1523g_big_bwmod {
		displayName = "RT-1523G (ASIP) Ranger";
		descriptionShort = "";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\tfar_rt1523g\ranger_co.paa"};
	};


    // KITBAG -------------------------------------------------------------------------------------
	class B_Kitbag_rgr;
	class grad_kitbag_black: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Black)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\black_co.paa"};
	};

	class grad_kitbag_black_medic: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Black, Medical)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\black_medic_co.paa"};
	};

	class grad_kitbag_tan_medic: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Tan, Medical)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\tan_medic_co.paa"};
	};

	class grad_kitbag_sgg_medic: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Sage, Medical)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\sgg_medic_co.paa"};
	};

	class grad_kitbag_rgr_medic: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Green, Medical)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\rgr_medic_co.paa"};
	};

	class grad_kitbag_cbr_medic: B_Kitbag_rgr {
		scope = 2;
		author = "Synch";
		displayName = "Kitbag (Coyote, Medical)";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\kitbag\cbr_medic_co.paa"};
	};


    // MESSENGER BAG -------------------------------------------------------------------------------------
	class B_Messenger_Coyote_F;
	class B_Messenger_Black_F;
	class B_Messenger_Olive_F;
	class B_Messenger_IDAP_F;

	class grad_dlc_low_messenger_coyote_medic: B_Messenger_Coyote_F	{
		scope = 2;
		author = "Synch";
		displayName = "Messenger Bag (Coyote, Medical) [LoW DLC]";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\messenger\coyote_medic_co.paa"};
	};
	class grad_dlc_low_messenger_black_medic: B_Messenger_Black_F {
		scope = 2;
		author = "Synch";
		displayName = "Messenger Bag (Black, Medical) [LoW DLC]";
		hiddenSelectionsTextures[] = {
			"x\grad_extras\addons\kit\data\bags\messenger\black_medic_co.paa"
		};
	};
	class grad_dlc_low_messenger_olive_medic: B_Messenger_Olive_F {
		scope = 2;
		author = "Synch";
		displayName = "Messenger Bag (Olive, Medical) [LoW DLC]";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\messenger\olive_medic_co.paa"};
	};

	class grad_dlc_low_messenger_medic: B_Messenger_IDAP_F {
		scope = 2;
		author = "Synch";
		displayName = "Messenger Bag (Medical) [LoW DLC]";
		hiddenSelectionsTextures[] = {"x\grad_extras\addons\kit\data\bags\messenger\medic_co.paa"};
	};
};
