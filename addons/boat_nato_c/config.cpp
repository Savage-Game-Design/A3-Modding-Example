
class CfgPatches {
    class vn_cfe_boat_nato_c {
        requiredVersion = 2.10;
        requiredAddons[] = {
            "vn_cfe_core_c",
            "boat_f_vietnam_c"
        };
        units[] = {
            "vn_cfe_b_boat_nasty_40mm_red"
        };
        weapons[] = {};
    };
};

class vn_attribute_flag {
    class Values;
};

class CfgVehicles {
    #include "cfgVehicles_nasty.hpp"
};
