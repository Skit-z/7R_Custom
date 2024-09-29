/*
	Parameters:
		<-- Unit as Object
		<-- Target as Object
		
	Description:
		Units equips gas mask as cbrn protection.

*/

// Parameter init
params ["_unit","_target"];

// Animation
_unit playAction "Gear";

// Progress bar equipment 3s
[3, _this, {
	// Parameter init
	_this select 0 params ["_unit","_target"];

	//Retrieve gas mask className
	private _gasMask = _target getVariable ["SR_CBRN_Mask", ""];
	if (_gasMask == "") then {_gasMask = _unit getVariable ["SR_CBRN_Mask", "G_CBRN_M04"];};

	// Remove and save normal goggles
	private _currentGoggles = goggles _target;

	if (local _target) then {
		_target setVariable ["SR_CBRN_OldGoggles", _currentGoggles];
	} else {
		[_target,["SR_CBRN_OldGoggles",_currentGoggles]] remoteExec ["setVariable",_target];
	};

	// Adds gas mask
	_target addGoggles _gasMask;

},{}, "Putting on Gas Mask..."] call ace_common_fnc_progressBar;