#include "script_version.hpp"

class CfgPatches {
    class vn_cfe_core_c {
        requiredVersion = 2.08;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
        version = VERSION_STR;
    };
};

class CfgFactionClasses {
    class vn_cfe_B_NATO {
        displayName = "NATO (SOG: Prairie Fire)";

        flag = "\vn\objects_f_vietnam\flags\vn_flag_01_usa_co.paa";
        icon = "\vn\objects_f_vietnam\markers\vn_mrk_usa_ca.paa";
        priority = 1;
        side = 1;
    };
    class vn_cfe_O_CSAT {
        displayName = "CSAT (SOG: Prairie Fire)";

        flag = "\vn\objects_f_vietnam\flags\vn_flag_01_pavn_co.paa";
        icon = "\vn\objects_f_vietnam\markers\vn_mrk_pavn_ca.paa";
        priority = 1;
        side = 0;
    };
};

class vn_attribute_flag {
    class Values {
        class csat {
            name = "CSAT";
            picture = "\a3\data_f\flags\flag_csat_co.paa";
            value = "\a3\data_f\flags\flag_csat_co.paa";
        };
        class nato {
            name = "NATO";
            picture = "\a3\data_f\flags\flag_nato_co.paa";
            value = "\a3\data_f\flags\flag_nato_co.paa";
        };
    };
};
