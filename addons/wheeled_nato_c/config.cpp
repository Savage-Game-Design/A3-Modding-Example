
class CfgPatches {
    class vn_cfe_wheeled_nato_c {
        requiredVersion = 2.08;
        requiredAddons[] = {
            "vn_cfe_core_c",
            "wheeled_f_vietnam_c"
        };
        units[] = {
            "vn_cfe_b_wheeled_m151_transport",
            "vn_cfe_b_wheeled_m151_transport_covered"
        };
        weapons[] = {};
    };
};

class CfgVehicles {
    #include "cfgVehicles_m151.hpp"
};
