/*
 * Author: Skitz
 * Local callback for checking the CBRN Exposure Level of the patient.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject] call SR_CBRN_fnc_checkExposureLevel
 *
 * Public: No
 */

params ["_medic", "_patient"];

//Init Vars
private _fatalLevel = CBRN_exposureDeathThreshold;
private _class3Level = (CBRN_exposureKnockoutThreshold + CBRN_exposureDeathThreshold)/2;
private _class2Level = CBRN_exposureLimpThreshold;
private _class1Level = CBRN_exposureCoughThreshold;
private _levelDescriptor = ["Fatal","Critical","Severe","Moderate"];
private _cbrnLevel = _patient getVariable ["CBRN_exposure", 0];

//Init Outputs
private _cbrnLevelOutput = format ["%1 is dead",_patient call ace_common_fnc_getName];
private _logOutput = format ["%1 checked CBRN Exposure: Fatal",_medic call ace_common_fnc_getName];

// When alive proceed
if (_cbrnLevel < _class1Level) then {
        _cbrnLevelOutput = format ["%1 is not suffering any CBRN Exposure", _patient call ace_common_fnc_getName];
        _logOutput = format ["%1 checked CBRN Exposure: No Exposure",_medic call ace_common_fnc_getName];
} else {
    // Check fatal exposure level
    if (_cbrnLevel >= _fatalLevel) then {
        _cbrnLevelOutput = format ["%1 has suffered Fatal CBRN Exposure",_patient call ace_common_fnc_getName];
        _logOutput = format ["%1 checked CBRN Exposure: Fatal",_medic call ace_common_fnc_getName];
    } else {
        // Check exposure class
        {
            if (_cbrnLevel >= _x) exitWith {
                _cbrnLevelOutput = format ["%1 has suffered %2 CBRN Exposure",_patient call ace_common_fnc_getName,_levelDescriptor select _forEachIndex];
                _logOutput = format ["%1 checked CBRN Exposure: %2",_medic call ace_common_fnc_getName,_levelDescriptor select _forEachIndex];
            };
        } forEach [_fatalLevel,_class3Level,_class2Level,_class1Level];
    };
};

//Report the patient's death regardless of CBRN level
if (!alive _patient) then {
    _cbrnLevelOutput = format ["%1 is dead",_patient call ace_common_fnc_getName];
};

// Log
[_patient, "quick_view", _logOutput, []] call ace_medical_treatment_fnc_addToLog;
// Message
//["ace_common_fnc_displayTextStructured", [_cbrnLevelOutput, 1.75, _medic], _medic] call CBA_fnc_targetEvent;
[_cbrnLevelOutput, 1.75, _medic] call ace_common_fnc_displayTextStructured;