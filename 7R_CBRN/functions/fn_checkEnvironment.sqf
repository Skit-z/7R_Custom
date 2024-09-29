/*
 * Author: Skitz
 * Local callback for checking the CBRN Exposure Levels in the immediate vicinity.
 *
 * Arguments:
 * 0: _unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call SR_CBRN_fnc_checkEnvironment
 *
 * Public: No
 */

params ["_unit"];

// Animation
_unit playAction "Gear";

// Progress bar equipment 3s
[3, _this, {
	// Parameter init
	_this select 0 params ["_unit","_target"];

	//Grab contamination tiers present within in 10m - Boolean Array
	private _contamination = (getPosASL _unit) call CBRN_fnc_isAreaContaminated;

	//Default output
	_output = format ["No CBRN Agent detected in the immediate vicinity"];

	//Find the highest tier contaminent within in 10m
	for "_i" from 4 to 0 step -1 do {
		if ((_contamination select _i) == true) exitWith {
			_output = format ["Tier %1 CBRN Agent detected",(_i+1)];
		};
	};

	//Output
	[_output, 1.75, _unit] call ace_common_fnc_displayTextStructured;

},{}, "Checking vicinity for CBRN threat..."] call ace_common_fnc_progressBar;