#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(ADDON);
        author = "$STR_GRAD_EXTRAS_AUTHOR";
        authors[] = {"nomisum"};
        url = "$STR_GRAD_EXTRAS_URL";
        requiredVersion = 1.0;
        requiredAddons[] = {QMAINPATCH, "a3_data_f", "a3_weapons_f", "rhs_us_a2_airimport"};
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class RHS_UH1_Base;

    class RHS_UH1Y_base: RHS_UH1_Base {
        class Sounds {
            class EngineExt {
                sound[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01", 3.262278, 1, 800};
                frequency = "rotorSpeed";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class EngineInt {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine", 1.400000, 1};
                frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class DistanceSound {
                sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant", 2.310000, 1, 3200};
                frequency = "rotorSpeed";
                volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
            };
        };

        class SoundsExt {
            class Sounds: Sounds {
                class EngineExt {
                    sound[] = {"rhsusf\addons\rhsusf_a2port_air2\sounds\ah1\ext\ext-ah1z-engine-01", 2.762278, 1, 800};
                    frequency = "rotorSpeed";
                    volume = "camPos*((rotorSpeed-0.72)*4)";
                };
                class EngineInt {
                    sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_int_engine", 1.400000, 1};
                    frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                    volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
                };
                class DistanceSound {
                    sound[] = {"rhsusf\addons\rhsusf_sounds\0_vehicles\ah-1\ah-1_distant", 2.310000, 1, 3200};
                    frequency = "rotorSpeed";
                    volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
                };
            };
        };

        class Reflectors {
            class Middle {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100, 0};
                position = "gun_begin"; /*"svetlo" == light"*/
                direction = "gun_end"; /*"svetlo konec   konec" == "end"*/
                hitpoint = "svetlo";
                selection = "svetlo";
                size = 1;
                innerAngle = 5;
                outerAngle = 15;
                coneFadeCoef = 5;
                intensity = 3000;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 10;

                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 2; /*for a less abrupt fading, lower this value toward 1, and increase the linear or maybe constant part */
                };
            };
        };
    };
};