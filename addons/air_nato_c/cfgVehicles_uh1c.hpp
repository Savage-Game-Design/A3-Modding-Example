class vn_air_uh1c_doorguns_base;

// UH-1C Iroquois Hog
class vn_air_uh1c_01_base: vn_air_uh1c_doorguns_base {
    class Turrets;
};
class vn_b_air_uh1c_01_01: vn_air_uh1c_01_base {
    class Turrets: Turrets {
        class CargoTurret_01; // right passenger
        class CargoTurret_02; // left passenger
        class CopilotTurret;
        class MainTurret; // right door gun (crew chief)
        class LeftDoorGun; // left door gun
    };
};

class vn_cfe_b_air_uh1c_nato_hog: vn_b_air_uh1c_01_01 {
    displayName = "UH-1C Iroquois HOG (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Helicopters";

    crew = "B_Helipilot_F";

    class Turrets: Turrets {
        class CargoTurret_01: CargoTurret_01 {
            gunnerType = "B_Soldier_F";
        };
        class CargoTurret_02: CargoTurret_02 {
            gunnerType = "B_Soldier_F";
        };
        class CopilotTurret: CopilotTurret {
            gunnerType = "B_Helipilot_F";
        };
        class MainTurret: MainTurret {
            gunnerType = "B_helicrew_F";
        };
        class LeftDoorGun: LeftDoorGun {
            gunnerType = "B_helicrew_F";
        };
    };
};

// UH-1C Iroquois Gunship
class vn_air_uh1c_02_base: vn_air_uh1c_01_base {
    class Turrets;
};

class vn_b_air_uh1c_02_01: vn_air_uh1c_02_base {
    class Turrets: Turrets {
        class CargoTurret_01; // right passenger
        class CargoTurret_02; // left passenger
        class CopilotTurret;
        class MainTurret; // right door gun (crew chief)
        class LeftDoorGun; // left door gun
    };
};

class vn_cfe_b_air_uh1c_nato_gunship: vn_b_air_uh1c_02_01 {
    displayName = "UH-1C Iroquois Gunship (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Helicopters";

    crew = "B_Helipilot_F";

    class Turrets: Turrets {
        class CargoTurret_01: CargoTurret_01 {
            gunnerType = "B_Soldier_F";
        };
        class CargoTurret_02: CargoTurret_02 {
            gunnerType = "B_Soldier_F";
        };
        class CopilotTurret: CopilotTurret {
            gunnerType = "B_Helipilot_F";
        };
        class MainTurret: MainTurret {
            gunnerType = "B_helicrew_F";
        };
        class LeftDoorGun: LeftDoorGun {
            gunnerType = "B_helicrew_F";
        };
    };
};

// UH-1C Iroquois Hornet
class vn_air_uh1c_03_base: vn_air_uh1c_01_base {
    class Turrets;
};

class vn_b_air_uh1c_03_01: vn_air_uh1c_03_base {
    class Turrets: Turrets {
        class CargoTurret_01; // right passenger
        class CargoTurret_02; // left passenger
        class CopilotTurret;
        class MainTurret; // right door gun (crew chief)
        class LeftDoorGun; // left door gun
    };
};

class vn_cfe_air_uh1c_nato_hornet: vn_b_air_uh1c_03_01 {
    displayName = "UH-1C Iroquois Hornet (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Helicopters";

    crew = "B_Helipilot_F";

    class Turrets: Turrets {
        class CargoTurret_01: CargoTurret_01 {
            gunnerType = "B_Soldier_F";
        };
        class CargoTurret_02: CargoTurret_02 {
            gunnerType = "B_Soldier_F";
        };
        class CopilotTurret: CopilotTurret {
            gunnerType = "B_Helipilot_F";
        };
        class MainTurret: MainTurret {
            gunnerType = "B_helicrew_F";
        };
        class LeftDoorGun: LeftDoorGun {
            gunnerType = "B_helicrew_F";
        };
    };
};

// TODO
// vn_b_air_uh1c_04_01 - Frog
// vn_b_air_uh1c_05_01 - Heavy Hog
// vn_b_air_uh1c_06_01 - ARA
// vn_b_air_uh1c_07_01 - Slick
