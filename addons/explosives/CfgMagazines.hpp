class CfgMagazines {
    class CA_Magazine;
    class ATMine_Range_Mag: CA_Magazine {
        ACE_Placeable = 1;
        useAction = 0;
        ACE_SetupObject = "ACE_Explosives_Place_ATMine"; // CfgVehicle class for setup object.
        ACE_DelayTime = 2.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.06;
            };
        };
    };
    class APERSBoundingMine_Range_Mag: ATMine_Range_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_APERSBoundingMine";
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.08;
            };
        };
    };
    class APERSMine_Range_Mag: ATMine_Range_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_APERSMine";
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.02;
            };
        };
    };
    class APERSTripMine_Wire_Mag: ATMine_Range_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_APERSTripwireMine";
        class ACE_Triggers {
            SupportedTriggers[] = {"Tripwire"};
            class Tripwire;
        };
    };

    class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine {
        ACE_Placeable = 1;
        useAction = 0;
        ACE_SetupObject = "ACE_Explosives_Place_Claymore";
        ACE_DelayTime = 1.5;
        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "MK16_Transmitter"};
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
        };
    };

    class SatchelCharge_Remote_Mag: CA_Magazine {
        ACE_Placeable = 1;
        useAction = 0;
        ACE_SetupObject = "ACE_Explosives_Place_SatchelCharge";
        ACE_DelayTime = 1;
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer","Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_DemoCharge";
        model = "\A3\Weapons_F\explosives\c4_charge_small_d";
    };

    class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_SLAM";
        class ACE_Triggers {
            SupportedTriggers[] = {"IRSensor","PressurePlate","Timer","Command"};
            class PressurePlate{
                displayName = CSTRING(SLAME_Magnetic);
                digDistance = 0;
                ammo = "ACE_SLAMDirectionalMine_Magnetic_Ammo";
                pitch = 90;
            };
            class IRSensor{
                displayName = CSTRING(SLAME_IRSensor);
            };
            class Timer {
                ammo = "ACE_SLAMDirectionalMine_Timer_Ammo";
            };
            class Command {
                ammo = "ACE_SLAMDirectionalMine_Command_Ammo";
                fuseTime = 0.5;
            };
        };
    };

    class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanBig";
        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "ACE_IEDUrbanBig_Command_Ammo";
            };
            class DeadmanSwitch:Command {};
            class Cellphone:Command {};
            class PressurePlate {
                displayName = CSTRING(PressurePlate);
                digDistance = 0;
                ammo = "ACE_IEDUrbanBig_Range_Ammo";
                pitch = 0;
            };
        };
    };

    class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_IEDLandBig";
        class ACE_Triggers: ACE_Triggers {
            class Command: Command {
                ammo = "ACE_IEDLandBig_Command_Ammo";
            };
            class PressurePlate: PressurePlate {
                ammo = "ACE_IEDLandBig_Range_Ammo";
            };
        };
    };
    class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
            class Command {
                FuseTime = 0.5;
                ammo = "ACE_IEDUrbanSmall_Command_Ammo";
            };
            class DeadmanSwitch: Command {};
            class Cellphone: Command {};
            class PressurePlate {
                displayName = CSTRING(PressurePlate);
                digDistance = 0;
                ammo = "ACE_IEDUrbanSmall_Range_Ammo";
                pitch = 0;
            };
        };
    };
    class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag {
        ACE_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
        class ACE_Triggers: ACE_Triggers {
            class Command: Command {
                ammo = "ACE_IEDLandSmall_Command_Ammo";
            };
            class PressurePlate: PressurePlate {
                ammo = "ACE_IEDLandSmall_Range_Ammo";
            };
        };
    };
};
