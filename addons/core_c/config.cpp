
class CfgPatches {
    class vn_cfe_core_c {
        requiredVersion = 2.08;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
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
