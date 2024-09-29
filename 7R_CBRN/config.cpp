#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class SR_CBRN
	{
		name = "7R CBRN";
		units[]={};
		weapons[]={};
		version="0.0.1";
		requiredVersion=0.1;
		requiredAddons[]={
			"ace_common",
			"ace_fire",
			"ace_medical_treatment",
			"CBRN_Compat_ACE"
		};
		author="Skitz";
	};
};

#include "CfgFunctions.hpp"
#include "ace_actions.hpp"
#include "cfgWeapons.hpp"
