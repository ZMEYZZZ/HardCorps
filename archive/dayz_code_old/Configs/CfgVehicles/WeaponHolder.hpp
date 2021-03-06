class WeaponHolderBase;
class WoodenArrowF : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEMWOODENARROW_CODE_NAME;
	model = "\dayz_weapons\models\bolt";

	class eventHandlers
	{
		init = "[(_this select 0),'cfgMagazines','WoodenArrow'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCrowbar: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_CROWBAR;
	model="\dayz_equip\models\crowbar.p3d";
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeBaseBallBat: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_BASEBALLBAT;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBat'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeBatBarbed: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_BaseBallBatBarbed;
	model="\z\addons\dayz_communityassets\models\baseball_bat.p3d";
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatBarbed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeBaseBallBatNails: WeaponHolderBase
{
	scope=2;
	displayName=$STR_CRAFT_NAME_NailedBaseballBat;
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails.p3d";
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeBaseBallBatNails'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_MeleeMachete: WeaponHolderBase
{
	scope=2;
	displayName=$STR_EQUIP_NAME_MACHETE;
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	class eventHandlers
	{
		init="[(_this select 0),'cfgWeapons','MeleeMachete'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcanEmpty : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN_EMPTY;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcanEmpty'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcan : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_FUELCAN;
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcan'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemCamoNet : WeaponHolderBase {
	scope = public;
	displayName = $STR_ITEM_NAME_CAMONET;
	model = "dayz_equip\models\tentbag_gear.p3d";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemCamoNet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
	};
};
