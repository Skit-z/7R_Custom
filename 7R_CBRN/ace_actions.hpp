class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions  {
            class ACE_Equipment {
                class SR_ApplyGasMaskSelf {
                    displayName = "Equip Gas Mask";
                    condition = "!((goggles _target) in CBRN_allLevel1Masks)";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, _player] spawn SR_CBRN_fnc_EquipGasmask";
                    icon = "PHAN_CW\CBRN_scripts\data\icons\gasmaskIcon.paa";
                };
                class SR_RemoveGasMaskSelf {
                    displayName = "Remove Gas Mask";
                    condition = "(goggles _target) in CBRN_allLevel1Masks";
                    exceptions[] = {"isNotSwimming"};
                    statement = "[_player, _player] spawn SR_CBRN_fnc_RemoveGasmask";
                    icon = "7R_CBRN\data\Icon_Gasmask_Removal.paa";
                };
                class PHEN_CBRN_putMaskOn_SELF {
                    condition = "false";
                };
                class PHEN_CBRN_putMaskOn_SELF_Off {
                    condition = "false";
                };
            };
            class SR_EnvironmentCheck {
                displayName = "Check Environment";
                condition = "([_player, 1] call ace_medical_treatment_fnc_isMedic) || (_player getVariable ['SR_cbrnSpecialist', false])";
                exceptions[] = {"isNotSwimming"};
                statement = "[_player] spawn SR_CBRN_fnc_checkEnvironment";
                icon = "7R_CBRN\data\Icon_CBRN.paa";
            };
        };
    };
};
class ace_medical_treatment_actions {
    class Diagnose;
    class checkExposureLevel : Diagnose {
        displayName = "Check CBRN Exposure";
        displayNameProgress = "Checking CBRN Exposure ...";
        condition = "true";
        medicRequired = 1;
        callbackSuccess = "[_medic, _patient] spawn SR_CBRN_fnc_checkExposureLevel";
    };
    class PHEN_CBRN_Patient_PutMaskON : Diagnose {
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        displayName = "Put on Gas Mask";
        displayNameProgress = "Putting on Gas Mask...";
        treatmentTime = 4;
        allowSelfTreatment = 0;
        condition = "((!((goggles _patient) in CBRN_allLevel1Masks) && (_patient getVariable ['ACE_isUnconscious', false])) || !((goggles _patient) in CBRN_allLevel1Masks) && (_patient getVariable ['ace_captives_isHandcuffed', false]))";
        callbackSuccess = "[_medic, _patient] spawn SR_CBRN_fnc_EquipGasmaskPatient";
        icon = "PHAN_CW\CBRN_scripts\data\icons\gasmaskIcon.paa";
    };
    class Adenosine;
    class ACE_ATNAA_AntidoteInjector : Adenosine{
        litter[] = {{"ACE_MedicalLitter_adenosine"}};
        displayName = "Inject Atropine";
        displayNameProgress = "Injecting Atropine...";
        treatmentTime = "ace_medical_treatment_treatmentTimeAutoinjector";
    };
};