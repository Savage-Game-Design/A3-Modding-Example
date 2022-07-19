class vn_armor_pt76_base;

// PT-76A
class vn_armor_pt76a_base: vn_armor_pt76_base {
    class Turrets;
};
class vn_o_armor_pt76a_01: vn_armor_pt76a_base {
    class Turrets: Turrets {
        class loaderTurret;
        class MainTurret;
    };
};

class vn_cfe_o_armor_pt76a_csat: vn_o_armor_pt76a_01 {
    displayName = "PT-76A Tank (CSAT)";

    faction = "vn_cfe_O_CSAT";
    editorSubcategory = "EdSubcat_Tanks";

    crew = "O_crew_F";

    class Turrets: Turrets {
        class loaderTurret: loaderTurret {
            gunnerType = "O_crew_F";
        };
        class MainTurret: MainTurret {
            gunnerType = "O_crew_F";
        };
    };
};

// PT-76B
class vn_armor_pt76b_base: vn_armor_pt76_base {
    class Turrets;
};
class vn_o_armor_pt76b_01: vn_armor_pt76b_base {
    class Turrets: Turrets {
        class loaderTurret;
        class MainTurret;
    };
};

class vn_cfe_o_armor_pt76b_csat: vn_o_armor_pt76b_01 {
    displayName = "PT-76B Tank (CSAT)";

    faction = "vn_cfe_O_CSAT";
    editorSubcategory = "EdSubcat_Tanks";

    crew = "O_crew_F";

    class Turrets: Turrets {
        class loaderTurret: loaderTurret {
            gunnerType = "O_crew_F";
        };
        class MainTurret: MainTurret {
            gunnerType = "O_crew_F";
        };
    };
};
