class vn_armor_m113_01_base;

// M113 ACAV M2
class vn_armor_m113_acav_m2_base: vn_armor_m113_01_base {
    class Turrets;
};

class vn_b_armor_m113_acav_01: vn_armor_m113_acav_m2_base {
    class Turrets: Turrets {
        class commanderTurret;
        class mg1_turret;
        class mg2_turret;
        class mg3_turret;

        class cargoTurret_12;
        class cargoTurret_13;
        class cargoTurret_14;
        class cargoTurret_15;
    };
};

class vn_cfe_b_armor_m113_acav_m2_nato: vn_b_armor_m113_acav_01 {
    displayName = "M113A1 ACAV (M2) (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_APCs";

    crew = "B_crew_F";

    class Turrets: Turrets {
        class commanderTurret: commanderTurret {
            gunnerType = "B_crew_F";
        };
        class mg1_turret: mg1_turret{
            gunnerType = "B_crew_F";
        };
        class mg2_turret: mg2_turret {
            gunnerType = "B_crew_F";
        };
        class mg3_turret: mg3_turret{
            gunnerType = "B_crew_F";
        };

        class cargoTurret_12: cargoTurret_12 {};
        class cargoTurret_13: cargoTurret_13 {};
        class cargoTurret_14: cargoTurret_14 {};
        class cargoTurret_15: cargoTurret_15 {};
    };
};

// M113 ACAV M2/M40
class vn_armor_m113_acav_m40_base: vn_armor_m113_acav_m2_base {
    class Turrets;
};

class vn_b_armor_m113_acav_06: vn_armor_m113_acav_m40_base {
    class Turrets: Turrets {
        class commanderTurret;
        class mg1_turret;
        class mg2_turret;
        class mg3_turret;

        class cargoTurret_12;
        class cargoTurret_13;
    };
};

class vn_cfe_b_armor_m113_acav_m2m40_nato: vn_b_armor_m113_acav_06 {
    displayName = "M113A1 ACAV (M2/M40) (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_APCs";

    crew = "B_crew_F";

    class Turrets: Turrets {
        class commanderTurret: commanderTurret {
            gunnerType = "B_crew_F";
        };
        class mg1_turret: mg1_turret{
            gunnerType = "B_crew_F";
        };
        class mg2_turret: mg2_turret {
            gunnerType = "B_crew_F";
        };
        class mg3_turret: mg3_turret{
            gunnerType = "B_crew_F";
        };

        class cargoTurret_12: cargoTurret_12 {};
        class cargoTurret_13: cargoTurret_13 {};
    };
};
