//HardCorps AMMO CRATE filler
//ONLY SPAWNS UPON RESTART
// _refill = [cratename] execVM "ammo.sqf"

_ammo = _this select 0;
while {true} do
{
_ammo setdamage 0;

clearmagazinecargo _ammo;
clearweaponcargo _ammo;

//WEAPONS ONLY
_ammo addweaponcargo ["ACE_HK417_Eotech_4x",1];
_ammo addweaponcargo ["SCAR_H_CQC_CCO_SD",1];
_ammo addweaponcargo ["ACE_P8",1];

//AMMO ONLY
_ammo addmagazinecargo ["ACE_20Rnd_762x51_B_HK417", 2];
_ammo addmagazinecargo ["20Rnd_762x51_SB_SCAR", 4];
_ammo addmagazinecargo ["ACE_15Rnd_9x19_P8", 4];
_ammo addmagazinecargo ["SmokeShell",4];
_ammo addmagazinecargo ["ACE_Flashbang",2];

//ITEMS ONLY
_ammo addweaponcargo ["ItemGPS",1];
_ammo addweaponcargo ["ACE_Kestrel4500", 2];
_ammo addweaponcargo ["ACE_WireCutter", 1];
_ammo addweaponcargo ["ACE_SpottingScope", 1];


//BACKPACKS ONLY
_ammo addweaponcargo ["DZ_Backpack_EP1",1];
sleep 150000;
};