
class CfgPatches {
    class vn_cfe_tracked_nato_c {
        requiredVersion = 2.08;
        requiredAddons[] = {
            "vn_cfe_core_c",
            "armor_f_vietnam_02_c"
        };
        units[] = {
            "vn_cfe_b_armor_m113_acav_m2_nato",
            "vn_cfe_b_armor_m113_acav_m2m40_nato"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "cfgVehicles_m113.hpp"
};
