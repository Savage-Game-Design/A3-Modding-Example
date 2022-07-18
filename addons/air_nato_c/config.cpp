
class CfgPatches {
    class vn_cfe_air_nato_c {
        requiredVersion = 2.08;
        requiredAddons[] = {
            "vn_cfe_core_c",
            "air_f_vietnam_c"
        };
        units[] = {
            "vn_cfe_b_air_uh1c_nato_hog",
            "vn_cfe_b_air_uh1c_nato_gunship",
            "vn_cfe_air_uh1c_nato_hornet"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "cfgVehicles_uh1c.hpp"
};
