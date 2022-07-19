class vn_wheeled_m151_base;

// M151A1 Transport
class vn_wheeled_m151_01_base: vn_wheeled_m151_base {
    class Turrets;
};
class vn_b_wheeled_m151_01: vn_wheeled_m151_01_base {
    class Turrets: Turrets {
        class cargoturret_rear;
        class codriver_ffv;
    };
};

class vn_cfe_b_wheeled_m151_transport: vn_b_wheeled_m151_01 {
    displayName = "M151A1 Transport (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Cars";

    crew = "B_Soldier_F";

    class Turrets: Turrets {
        class cargoturret_rear: cargoturret_rear {
            gunnerType = "B_soldier_AR_F";
        };
        class codriver_ffv: codriver_ffv {
            gunnerType = "B_Soldier_F";
        };
    };
};

// M151A1 Transport (covered)
class vn_wheeled_m151_02_base: vn_wheeled_m151_01_base {
    // this class does not define it's own Turrets class, it inherits them from the parent
};
class vn_b_wheeled_m151_02: vn_wheeled_m151_02_base {
    class Turrets: Turrets { // inherits Turrets from vn_wheeled_m151_01_base
        class cargoturret_rear;
        class codriver_ffv;
    };
};

class vn_cfe_b_wheeled_m151_transport_covered: vn_b_wheeled_m151_02 {
    displayName = "M151A1 Transport Covered (NATO)";

    faction = "vn_cfe_B_NATO";
    editorSubcategory = "EdSubcat_Cars";

    crew = "B_Soldier_F";

    class Turrets: Turrets {
        class cargoturret_rear: cargoturret_rear {
            gunnerType = "B_soldier_AR_F";
        };
        class codriver_ffv: codriver_ffv {
            gunnerType = "B_Soldier_F";
        };
    };
};
