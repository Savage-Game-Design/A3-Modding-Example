class vn_boat_05_base;
class vn_boat_06_turret_base: vn_boat_05_base {
    class Attributes {
        class vn_flag: vn_attribute_flag {
            class Values: Values {
                class sog;
                class nato;
            }
        };
        class vn_flag_raise;
        class vn_lights;
    };

    class Turrets;
};

// PTF Nasty Boat, 40mm
class vn_b_boat_06_01: vn_boat_06_turret_base { // Red
    class Turrets: Turrets {
        class commander_turret;
        class mg1_turret;
        class mg2_turret;
        class mg3_turret;
        class mg4_turret;
        class mg5_turret;
        class mg6_turret;
    };
};

class vn_cfe_b_boat_nasty_40mm_red: vn_b_boat_06_01 {
    displayName = "PTF Nasty Boat (40mm, Red) (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Boats";

    crew = "B_Soldier_F";

    // change default flag of the vehicle to NATO
    vn_flag = "\a3\data_f\flags\flag_nato_co.paa";

    // change default value of the flag attribute to NATO
    class Attributes: Attributes {
        class vn_lights: vn_lights {};
        class vn_flag_raise: vn_flag_raise {};
        class vn_flag: vn_flag {
            class Values: Values {
                class sog: sog {
                    default = 0;
                };
                class nato: nato {
                    default = 1;
                };
            };
        };
    };

    class Turrets: Turrets {
        class commander_turret: commander_turret {
            gunnerType = "B_officer_F";
        };
        class mg1_turret: mg1_turret {
            gunnerType = "B_Soldier_F";
        };
        class mg2_turret: mg2_turret {
            gunnerType = "B_Soldier_F";
        };
        class mg3_turret: mg3_turret {
            gunnerType = "B_Soldier_F";
        };
        class mg4_turret: mg4_turret {
            gunnerType = "B_Soldier_F";
        };
        class mg5_turret: mg5_turret {
            gunnerType = "B_Soldier_F";
        };
        class mg6_turret: mg6_turret {
            gunnerType = "B_Soldier_F";
        };
    };
};
