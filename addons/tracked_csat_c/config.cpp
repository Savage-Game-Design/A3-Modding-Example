
class CfgPatches {
    class vn_cfe_tracked_csat_c {
        requiredVersion = 2.08;
        requiredAddons[] = {
            "vn_cfe_core_c",
            "armor_f_vietnam_02_c"
        };
        units[] = {
            "vn_cfe_o_armor_pt76a_csat",
            "vn_cfe_o_armor_pt76b_csat"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "cfgVehicles_pt76.hpp"
};
