class ReammoBox_EP1;	// External class reference
class Bag_Base_EP1 : ReammoBox_EP1 {
	scope = private;

	class TransportMagazines {};

	class TransportWeapons {};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	isbackpack = 1;
	reversed = true;
	vehicleClass = "Backpacks";

	class DestructionEffects {};

	class eventHandlers {
		init = "";
	};
};

class DZ_Patrol_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_PATROL;
	descriptionShort = $STR_BACKPACK_DESC_PATROL;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 8;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Patrol_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class DZ_Assault_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ACU;
	descriptionShort = $STR_BACKPACK_DESC_ACU;
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapSize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	transportMaxWeapons = 1;
	transportMaxMagazines = 12;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_Czech_Vest_Puch: Bag_Base_EP1
{
	displayname = $STR_BACKPACK_NAME_VEST;
	descriptionShort = $STR_BACKPACK_DESC_VEST;
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	scope = 2;
	transportmaxmagazines = 12;
	transportmaxweapons = 0;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Czech_Vest_Puch'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_ALICE_Pack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_ALICE;
	descriptionShort = $STR_BACKPACK_DESC_ALICE;
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 16;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_ALICE_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_TK_Assault_Pack_EP1 : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_SURVACU;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU;
	mapSize = 2;
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	transportMaxWeapons = 2;
	transportMaxMagazines = 16;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_TK_Assault_Pack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_British_ACU : Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_BRITISH;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH;
	mapSize = 2;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	transportMaxWeapons = 3;
	transportMaxMagazines = 18;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_British_ACU'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_CivilBackpack_EP1: Bag_Base_EP1    
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_CZECH;
	descriptionShort = $STR_BACKPACK_DESC_CZECH;
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_CivilBackpack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};	
};

class DZ_Backpack_EP1: Bag_Base_EP1
{
	scope = 2;
	displayName = $STR_BACKPACK_NAME_COYOTE;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE;
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
	mapsize = 2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	transportMaxWeapons = 6;
	transportMaxMagazines = 24;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','DZ_Backpack_EP1'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_OD;
class HC_Ruck_OD:LEN_Backpack_OD 
{
	scope = 2;
	displayName = "Ruck 'Olive Drab'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_OD'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_MAR;
class HC_Ruck_MAR:LEN_Backpack_MAR 
{
	scope = 2;
	displayName = "Ruck 'MARPAT'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_MAR'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_BLK;
class HC_Ruck_BLK:LEN_Backpack_BLK 
{
	scope = 2;
	displayName = "Ruck 'Black'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_BLK'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_WDL;
class HC_Ruck_WDL:LEN_Backpack_WDL 
{
	scope = 2;
	displayName = "Ruck 'M81 Woodland'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_WDL'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_NVG;
class HC_Ruck_NVG:LEN_Backpack_NVG 
{
	scope = 2;
	displayName = "Ruck 'NVG'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_NVG'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};

class LEN_Backpack_MTC;
class HC_Ruck_MTC:LEN_Backpack_MTC 
{
	scope = 2;
	displayName = "Ruck 'Multicam'";
	descriptionShort = "";
	mapsize = 2;
	transportMaxWeapons = 6;
	transportMaxMagazines = 48;
	class eventHandlers
	{
		init="[(_this select 0),'CfgVehicles','HC_Ruck_MTC'] execVM '\z\addons\dayz_code\init\object_BackpackAction.sqf';";
	};
};
