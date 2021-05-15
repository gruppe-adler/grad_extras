class CfgPatches {

    class RHS_US_A2_AirImport {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.320000;
        requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_01", "A3_Air_F_EPB_Heli_Light_03", "A3_CargoPoses_F", "rhsusf_c_troops", "rhsusf_c_heavyweapons", "rhsusf_sounds", "rhsusf_c_airweapons"};
        name = "RHSUSF c130 sound range fix";
        author = "nomisum";
    };
};
class CfgVehicles {

    class RHS_C130J_Base;

    class RHS_C130J: RHS_C130J_Base {
        
        class Sounds {

            class EngineLowOut {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_engine_low", 1.778279, 1, 4500};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "camPos*engineOn*(rpm factor[0.85, 0])";
            };

            class EngineHighOut {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_engine_hi", 1.778279, 1, 5500};
                frequency = "1";
                volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
            };

            class ForsageOut {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext_forsage_1", 1.412538, 1, 6500};
                frequency = "1";
                volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
                cone[] = {1.140000, 3.920000, 2, 0.400000};
            };

            class WindNoiseOut {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\ext-wind1", 0.001000, 0.600000, 150};
                frequency = "(0.1+(1.2*(speed factor[1, 100])))";
                volume = "camPos*(speed factor[1, 100])";
            };

            class EngineLowIn {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_engine_low", 1, 1};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
            };

            class EngineHighIn {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_engine_hi", 1, 1};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
            };

            class ForsageIn {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int_forsage_1", 1.412538, 1.100000};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
            };

            class WindNoiseIn {
                sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\c130\int-wind1", 0.001000, 0.600000};
                frequency = "(0.1+(1.2*(speed factor[1, 100])))";
                volume = "(1-camPos)*(speed factor[1, 100])";
            };
        };
    };
};
