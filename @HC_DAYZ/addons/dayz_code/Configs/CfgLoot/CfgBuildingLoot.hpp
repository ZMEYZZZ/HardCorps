#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		lootType[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {"SMAW","Javelin","G36C","Stinger"};
	};
	//New System
	class Church: Default {
		zombieChance = 0.3;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
		lootChance = 0.3;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMatchbox","generic",0.02},
		//weapons
		//special
		//mags special
			{"ItemBookBible","magazine",0.03},
			//{"8Rnd_9x18_RH_mk2","magazine",0.03}, //this is church! no weapons allowed :)
		//bags
		//multiple spawns	
			{"","Church",0.50},
			{"","trash",0.30},
			{"","generic",0.60}
		};
	};
	class Castle: Default {
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMatchbox","weapon",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMap","generic",0.01},
			{"ItemCompass","weapon",0.01},
			{"ItemFlashlight","weapon",0.01},			
		//weapons
			{"WeaponHolder_ItemHatchet","object",0.01},
		//special
			{"WeaponHolder_ItemTent","object",0.01},
			{"ItemSandbag","magazine",0.04},
		//mags special
			{"PartWoodPile","magazine",0.04},
		//bags
			{"DZ_Patrol_Pack_EP1","object",0.01},
		//Multiple spawns	
			{"","Residential",0.60},
			{"","trash",0.30},
			{"","generic",0.50}
		};
	};	
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.4;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemWatch","generic",0.03},
			{"ItemFlashlight","generic",0.05},
			{"Skin_Functionary1_EP1_DZ","magazine",0.03},
			//{"ItemFishingPole","generic",0.04}, //move it to boats and boatstations
		//weapons
			{"RH_mk2","weapon",0.02},
			{"RH_mk22","weapon",0.02},
			{"RH_python","weapon",0.01},
			{"MR43","weapon",0.02},
			{"RH_m1911","weapon",0.01},
			{"MeleeBaseBallBat","weapon",0.02},
		//special
			{"WeaponHolder_ItemFuelcan","object",0.03},
		//mags special
			{"ItemPainkiller","magazine",0.04},
			{"ItemBandage","magazine",0.06},
		//bags
			{"DZ_Patrol_Pack_EP1","object",0.05},
			{"DZ_Assault_Pack_EP1","object",0.04},
		//multiple spawns	
			{"","Residential",0.50},
			{"","trash",0.30},
			{"","generic",0.70}
		};
	};
	class Industrial: Default { //254
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","z_new_worker2","z_new_worker3","z_new_worker4"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemKnife","weapon",0.03},
			{"ItemToolbox","weapon",0.06},
			{"ItemFlashlight","weapon",0.02},
			{"ACE_Earplugs","weapon",0.03},
		//weapons
			{"WeaponHolder_ItemCrowbar","object",0.08},
			{"WeaponHolder_ItemHatchet","object",0.05},
		//special
			{"WeaponHolder_PartGeneric","object",0.04},
			{"WeaponHolder_PartWheel","object",0.05},
			{"WeaponHolder_PartFueltank","object",0.02},
			{"WeaponHolder_PartEngine","object",0.02},
			{"WeaponHolder_PartGlass","object",0.04},
			//{"WeaponHolder_PartVRotor","object",0.01}, //move it to helichash and ss_hangar 
			{"WeaponHolder_ItemJerrycan","object",0.04},
			{"WeaponHolder_ItemFuelcan","object",0.03},
		//mags special
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSandbag","magazine",0.04},
		//bags
		//multiple spawns	
			{"","Industrial",0.50},
			{"","trash",0.30},
			{"","generic",0.60}
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMatchbox","weapon",0.05},
			{"ACE_YardAge450","generic",0.01},
			{"ACE_Earplugs","weapon",0.03},
		//weapons
			{"WeaponHolder_ItemHatchet","object",0.05},
			{"huntingrifle","weapon",0.02},
			{"LeeEnfield","weapon",0.03},
			{"ACE_SKS","weapon",0.03},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.03},
			{"MR43","weapon",0.05},
			{"MeleeMachete","weapon",0.04},
		//special
			{"WeaponHolder_ItemJerrycan","object",0.03},
			{"ItemSandbag","magazine",0.04},
		//mags special
			{"TrapBear","magazine",0.01},
			{"PartWoodPile","magazine",0.08},
		//bags
		//multiple spawns		
			{"","Farm",0.50},
			{"","trash",0.30},
			{"","generic",0.50}
		};
	};
	class Supermarket: Default {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_new_villager2","z_new_villager3","z_new_villager4"};
		lootType[] = {
		//one spawn
		//tools
			{"ACE_SSVZ","weapon",0.03},
			{"ItemWatch","generic",0.05},
			{"ItemCompass","generic",0.01},
			{"ItemMap","generic",0.06},
			{"ItemFlashlight","generic",0.04},
			{"ACE_MugLite","weapon",0.02},
			{"ItemKnife","generic",0.02},
			{"ItemMatchbox","generic",0.05},
			{"Binocular","weapon",0.03},
			{"ACE_Earplugs","weapon",0.03},
		//weapons
			{"RH_mk2","weapon",0.02},
			{"RH_ar10","weapon",0.01},
			{"RH_mk22","weapon",0.02},
			{"LeeEnfield","weapon",0.01},
			{"RH_python","weapon",0.01},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.01},
			{"MR43","weapon", 0.01},			
		//special
			{"WeaponHolder_ItemTent","object",0.01},
		//mags special
			{"PartWoodPile","magazine",0.04},
		//bags
			{"DZ_Patrol_Pack_EP1","object",0.05}, //12
			{"DZ_ALICE_Pack_EP1","object",0.02}, // 16
			{"DZ_TK_Assault_Pack_EP1","object",0.02}, // 16
		//multiple spawns		
			{"","food",0.05},
			{"","Supermarket",0.50},
			{"","trash",0.50},
			{"","generic",0.50}
		};
	};	
	class Office: Residential {
		maxRoaming = 3;
		lootChance = 0.2;
		zombieClass[] = {"z_suit1","z_suit2"};
		lootType[] = {
		//one spawn
		//tools
			{"ItemWatch","weapon",0.08},
			{"ItemMap","weapon",0.06},
			{"ACE_MugLite","weapon",0.05},			
			{"Skin_RU_Policeman_DZ","magazine",0.03},
			{"Skin_Haris_Press_EP1_DZ","magazine",0.03},
		//weapons
		//special
		//mags special
			{"ItemAntibacterialWipe","magazine",0.04},
			{"ItemPainkiller","magazine",0.04},
			{"ItemSandbag","magazine",0.04},
		//bags
		//multiple spawns
			{"","trash",0.40},
			{"","generic",0.60}
		};
	};
	class InfectedCamps: Default { //5
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemWatch","generic",0.05},
			{"ItemCompass","generic",0.05},
			{"ItemFlashlight","generic",0.06},
			{"ItemKnife","generic",0.07},
			{"ItemMatchbox","generic",0.06},
			{"Binocular","weapon",0.06},
		//weapons
			{"RH_mk2","weapon",0.04},
			{"RH_mk22","weapon",0.02},
			//{"RH_m1911old","weapon",0.04}, //mil/police
			{"LeeEnfield","weapon",0.03},
			{"RH_python","weapon",0.04},
			{"Winchester1866","weapon",0.03},
			{"Crossbow_DZ","weapon",0.01},
			{"MR43","weapon",0.03},
			{"MeleeBaseBallBat","weapon",0.02},
			{"WeaponHolder_ItemCrowbar","object",0.08},
		//special
			{"WeaponHolder_PartGeneric","object",0.04},
			{"WeaponHolder_PartWheel","object",0.02},
			{"WeaponHolder_PartFueltank","object",0.02},
			{"WeaponHolder_PartEngine","object",0.02},
			{"WeaponHolder_ItemFuelcan","object",0.03},
			{"WeaponHolder_ItemTent","object",0.01},
			{"MedBox0_DZ","object",0.05},
			{"FoodBox0_DZ","object",0.05},
		//mags special
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemSodaMdew","magazine",0.01},
			{"PartWoodPile","magazine",0.06},
			{"Skin_Camo1_DZ","magazine",0.01},
			{"ItemBookBible","magazine",0.02},
			{"RH_30Rnd_6x35_PDW","magazine",0.02},
		//bags
			{"DZ_ALICE_Pack_EP1","object",0.01}, // 16
			{"DZ_TK_Assault_Pack_EP1","object",0.02}, // 16
		//multiple spawns
			{"","medical",0.10},
			{"","trash",0.50},
			{"","generic",0.80}
		};
	};
	class HeliCrashWEST: Default {
		zombieChance = 1;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ACE_Battery_Rangefinder","magazine",0.03}, 
			{"ACE_Kestrel4500","weapon",0.01},
			{"Skin_Pilot_EP1_DZ","magazine",0.03},			
		//weapons
			{"FN_FAL","weapon",0.04},
			{"RH_Mk48mod1","weapon",0.03},
			{"RH_M249","weapon",0.04},
			{"RH_PDW_EOTECH","weapon",0.04},
			{"RH_m1stacog","weapon",0.02},
			{"RH_m21","weapon",0.01},
			{"RH_m9sd","weapon",0.02},
			{"RH_g19t","weapon",0.02},
			{"RH_bull","weapon",0.01},
			{"RH_Scarh_sd_gl_eotech","weapon",0.01},
			{"RH_MK21A5","weapon",0.01},		
		//special
			{"MedBox0_DZ","object",0.05},
			{"AmmoBoxSmall_556","object",0.05},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"WeaponHolder_PartVRotor","object",0.02},
		//mags special
			{"Skin_Camo1_DZ","magazine",0.05},
			{"Skin_Sniper1_DZ","magazine",0.05},
			{"RH_30Rnd_6x35_PDW","magazine",0.02},

		//bags
			{"HC_Ruck_NVG","object",0.01},
		//multiple spawns
		//multiple spawns
			{"","medical",0.25},
			{"","militaryWESTcrash",0.25}
		};
	};
	class HeliCrashEAST: Default {
		zombieChance = 1;
		maxRoaming = 8;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"Binocular","weapon",0.01},
			{"ItemKnife","generic",0.03},
			{"ItemCompass","generic",0.04},
			{"ACE_Battery_Rangefinder","magazine",0.03},
			{"ACE_Rangefinder_OD","weapon",0.01}, 
			{"ACE_Kestrel4500","weapon",0.01},
		//weapons
			{"RH_tt33","weapon",0.04},
			{"RH_vz61","weapon",0.03},
			{"RH_akm","weapon",0.03},
			{"RH_aks47","weapon",0.03}, 
			{"M14_EP1","weapon",0.02},
			{"RH_bizonsdk","weapon",0.04},
			{"DMR_DZ","weapon",0.04},
			{"RH_rpk74","weapon",0.02},
			{"RH_mk2sd","weapon",0.02},
		//special
			{"MedBox0_DZ","object",0.05},
			{"AmmoBoxSmall_762","object",0.3},
			{"WeaponHolder_PartVRotor","object",0.02},
			{"WeaponHolder_ItemCamoNet","object",0.01},
			{"Strela","weapon",0.01},
		//mags special
			{"100Rnd_762x54_PK","magazine",0.01},
			{"M_Strela_AA","magazine",0.03},
		//bags
			{"HC_Ruck_MTC","object",0.01},
		//multiple spawns
			{"","medical",0.25},
			{"","militaryEASTcrash",0.25}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
		//weapons
		//special
			{"MedBox0_DZ","object",0.08},
			{"Skin_Doctor_DZ","magazine",0.05},
		//mags special
		//bags
		//multiple spawns
			{"","trash",0.30},
			{"","hospital",0.50}
		};
	};
	class MilitaryEast: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"AK47basicBox","weapon",0.05},
			{"AmmoBox_GrenadeEast","weapon",0.02},
			{"AmmoBox_545_300rnds","weapon",0.02},

		//tools
			{"ACE_SSVZ","weapon",0.02},
			{"Binocular","weapon",0.05},
			{"ItemFlashlightRed","generic",0.06},
			{"ItemKnife","generic",0.06},
			{"ItemMap","generic",0.03},
			{"ItemEtool","weapon",0.03},
			{"ACE_GlassesGasMask_RU","weapon",0.03},
			{"ACE_Earplugs","weapon",0.06},
			{"ACE_YardAge450","generic",0.01},
			{"ACE_GlassesBalaklavaOlive","weapon",0.03},
			
		//weapons
			//PISTOL
			{"RH_PDW","weapon",0.05},
			{"RH_PDW_AIM","weapon",0.03},
			{"RH_PDW_ACOG","weapon",0.01},
			{"RH_mk22sd","weapon",0.01},
			{"RH_aps","weapon",0.03},
			//SHOTGUN
			{"M1014","weapon",0.06},
			//556
			{"RH_bizon","weapon",0.06},
			//762
			{"RH_oc14","weapon",0.06},
			{"RH_oc14gl","weapon",0.02},
			//{"AK_74","weapon",0.06},
			{"RH_aks74uptk","weapon",0.03},
			{"RH_aks74u","weapon",0.05},
			{"RH_ak47","weapon",0.05},
			{"RH_ak47gl","weapon",0.03},
			{"RH_ak103","weapon",0.03},
			//SMG
			{"MP5A5","weapon",0.04},
			{"MP5SD","weapon",0.01},
			{"RH_krisssd","weapon",0.01},			
			//MG
			//SNIPER
			{"RH_asval","weapon",0.01},
		//special
			{"RPG18","weapon",0.02},
			{"MetisLauncher","weapon",0.01},
			{"MineE","weapon",0.02},			
		//mags special
			{"ItemSandbag","magazine",0.05},
			{"AT13","magazine",0.01},
		//bags
			{"DZ_British_ACU","object",0.02}, // 18
			{"DZ_Backpack_EP1","object",0.01}, // 24
			{"ACE_TacticalLadder_Pack","object",0.01},
						
		//multiple spawns
			{"","militaryEast",0.60},
			{"","trash",0.80},
			{"","generic",0.40}
		};
	};
	class MilitaryWest: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"M16basicBox","object",0.04},
			{"AmmoBox_GrenadeWest","object",0.02},
			{"AmmoBox_203_Flare","object",0.01},
			{"AmmoBox_203_HE","object",0.01},
			{"AmmoBox_203_Smoke","object",0.01},
			{"AmmoBox_BBeneli","object",0.02},
			{"AmmoBox_DMR","object",0.01},
			{"AmmoBox_556_300rnd","object",0.02},
			{"AmmoBox_9mm_15rnd","object",0.02},
			{"AmmoBox_45cal_8rnd","object",0.02},
			{"PistolBasicBox","object",0.03},
			{"M249basicBox","object",0.01},
			
		//tools
			{"ACE_SSVZ","weapon",0.02},
			{"Binocular","weapon",0.05},
			{"ItemFlashlightRed","generic",0.06},
			{"ItemKnife","generic",0.06},
			{"ItemMap","generic",0.03},
			{"ItemEtool","weapon",0.03},
			{"ACE_GlassesGasMask_RU","weapon",0.03},
			{"ACE_Earplugs","weapon",0.06},
			{"ACE_YardAge450","generic",0.01},
			{"ACE_GlassesBalaklavaOlive","weapon",0.03},
			
		//weapons
			//PISTOL
			{"RH_g17","weapon",0.05},
			{"RH_PDW","weapon",0.05},
			{"RH_m9sd","weapon",0.01},
			//{"RH_m1911old","weapon",0.05},
			//{"RH_m9","weapon",0.05},			
			//SHOTGUN
			{"Remington870_lamp","weapon",0.05},
			{"M1014","weapon",0.05},
			//556
			{"RH_m4acog","weapon",0.02},
			{"RH_m4r","weapon",0.02},
			{"RH_m16a2s","weapon",0.03},
			{"RH_m16a4acog","weapon",0.03},
			//{"RH_m16a4","weapon",0.04},
			//{"RH_m16a2","weapon",0.04},
			//{"RH_m16a2gl","weapon",0.03},
			//{"RH_m4aim","weapon",0.02},
			//{"RH_m4","weapon",0.04},
			//{"RH_m4gl","weapon",0.03},
			{"RH_m14","weapon",0.03},
			{"RH_m27","weapon",0.02},
			{"RH_hk416","weapon",0.01},
			{"RH_sc2acog","weapon",0.02},
			{"RH_SCARL_EOTECH","weapon",0.01},
			//762
			{"ACE_DM25",0.02},
			//SMG
			{"MP5A5","weapon",0.04},
			{"MP5SD","weapon",0.01},
			{"RH_krisssd","weapon",0.01},
			//MG
			{"RH_M249","weapon",0.01},
			//SNIPER
			{"RH_mk12","weapon",0.03},
					
		//special
		//mags special
			{"ItemSandbag","magazine",0.05},
			{"MineE","weapon",0.02},
		//bags
			{"DZ_British_ACU","object",0.02}, // 18
			{"DZ_Backpack_EP1","object",0.01}, // 24
			{"ACE_TacticalLadder_Pack","object",0.01},			
		//multiple spawns
			{"","militaryWest",0.60},
			{"","trash",0.80},
			{"","generic",0.40}
		};
	};
	class MilitarySpecialEast: Default {
		zombieChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.1;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"AK47basicBox","weapon",0.05},
			{"AmmoBox_GrenadeEast","weapon",0.03},
			{"AmmoBox_545_300rnds","weapon",0.03},
			{"AmmoBox_545_900rnds","weapon",0.01},
			
		//tools
			{"Binocular","weapon",0.03},
			{"ItemFlashlightRed","generic",0.05},
			{"ItemKnife","generic",0.05},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","generic",0.03},
			{"Binocular_Vector","generic",0.01},
			{"ACE_Earplugs","weapon",0.05},
			//{"ACE_Battery_Rangefinder","magazine",0.03},
			{"ACE_Rangefinder_OD","weapon",0.01}, 
			{"ACE_Kestrel4500","weapon",0.01},
			{"ACE_GlassesBalaklava","weapon",0.03},
		//Pistol
			{"RH_mk22sd","weapon",0.02},
			{"RH_PDW","weapon",0.06},

		//weapons
			//shotgun
			{"ACE_SPAS12","weapon",0.07},
			{"Sa58V_RCO_EP1","weapon",0.03},
			{"Sa58V_CCO_EP1","weapon",0.04},
			{"AKS_74_kobra","weapon",0.05},
			{"AKS_74_U","weapon",0.05},
			{"AK_47_M","weapon",0.05},
			{"AK_74","weapon",0.05},
			{"Sa58P_EP1","weapon",0.02},
			{"Sa58V_EP1","weapon",0.02},	
			{"RH_gr1","weapon",0.03},		
			//SNIPER
			{"RH_svdb","weapon",0.01},
			{"RH_svd","weapon",0.02},
			//SMG
			{"RH_P90","weapon",0.02},
			{"RH_tmpsdeot","weapon",0.02},
			//MG
			{"RH_rpk74","weapon",0.02},
			{"RH_rpk47","weapon",0.01},
		//special
			{"AmmoBoxSmall_762","object",0.02},
			{"WeaponHolder_ItemCamoNet","object",0.03},
			{"Strela","weapon",0.01},
			//mags special
			{"100Rnd_762x54_PK","magazine",0.01},
			{"PipeBomb","magazine",0.01},
			{"ACE_OSM4_M","magazine",0.01},
			{"ACE_MON50_M","magazine",0.01},
			{"BAF_ied_v1","magazine",0.01},
			{"M_Strela_AA","magazine",0.01},
		//bags
			{"HC_Ruck_OD","object",0.02}, // 24
			{"HC_Ruck_BLK","object",0.02}, // 24

		//multiple spawns
			{"","militaryEast",0.60},
			{"","trash",0.80},
			{"","generic",0.40}
		};
	};
	class MilitarySpecialWest: Default {
		zombieChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","z_new_worker2","z_new_worker3","z_new_worker4"};
		lootChance = 0.1;
		lootPos[] = {};
		lootType[] = {
		//one spawn
			{"M16basicBox","object",0.01},
			{"AmmoBox_GrenadeWest","object",0.01},
			{"AmmoBox_203_Flare","object",0.01},
			{"AmmoBox_203_HE","object",0.01},
			{"AmmoBox_203_Smoke","object",0.01},
			{"AmmoBox_BBeneli","object",0.01},
			{"AmmoBox_556_belted","object",0.01},
			{"AmmoBox_762_belted","object",0.01},
			{"AmmoBox_DMR","object",0.01},
			{"AmmoBox_556_900rnd","object",0.01},
			{"AmmoBox_556_300rnd","object",0.01},
			{"AmmoBox_9mm_15rnd","object",0.01},
			{"AmmoBox_45cal_8rnd","object",0.01},
			{"PistolBasicBox","object",0.01},
			{"M249basicBox","object",0.02},
			{"M4basicBox","object",0.01},

		//tools
			{"Binocular","weapon",0.03},
			{"ItemFlashlightRed","generic",0.05},
			{"ItemKnife","generic",0.05},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","generic",0.03},
			{"Binocular_Vector","generic",0.01},
			{"ACE_Earplugs","weapon",0.06},
			{"ACE_DAGR", "weapon",0.01},
			//{"ACE_Battery_Rangefinder","magazine",0.03},
			{"ACE_Rangefinder_OD","weapon",0.01}, 
			{"ACE_Kestrel4500","weapon",0.01},
			{"ACE_GlassesBalaklavaGray","weapon",0.03},
		//Pistol
			{"RH_usp","weapon",0.04}, 
			{"RH_g18","weapon",0.03},	
			{"RH_m9sd","weapon",0.02},
			{"RH_PDW","weapon",0.08},
			{"RH_g17","weapon",0.07},

		//weapons
			//shotgun
			{"RH_M4CMK","weapon",0.05},
			{"ACE_SPAS12","weapon",0.07},
			{"Remington870_lamp","weapon",0.06},
			//556
			{"MIDF_Aug_A3_acog_black","weapon",0.03},
			{"ACE_30Rnd_556x45_S_Stanag",0.03},
			{"RH_M4aim_wdl","weapon",0.05},
			{"RH_M4gleotech_wdl","weapon",0.02},
			{"RH_m16a2","weapon",0.05},
			{"RH_m16a2gl","weapon",0.05},
			{"RH_m4aim","weapon",0.04},
			{"DMR_DZ","weapon",0.02},
			{"RH_m4","weapon",0.06},
			{"RH_m14acog","weapon",0.03},
			{"RH_m4sbreotech","weapon",0.03},
			{"RH_hk417","weapon",0.03},
			{"RH_m27aim","weapon",0.03},
			{"RH_mas","weapon",0.03},
			{"RH_acr","weapon",0.03},
			{"RH_ctar21","weapon",0.03},

			//762
			{"RH_M60E4","weapon",0.02},
			{"RH_sc2acog","weapon",0.02},
			//SNIPER
			{"RH_M14EBRSP","weapon",0.02},
			{"RH_mk12mod1","weapon",0.02},
			{"M24","weapon",0.02},
			{"M40A3","weapon",0.01},
			//Machine Gun
			//{"RH_M249","weapon",0.02},
			{"M240_DZ","weapon",0.01},
			{"RH_Mk48mod1","weapon",0.01},
		//special
			//{"AmmoBoxSmall_556","object",0.04},
			{"WeaponHolder_ItemCamoNet","object",0.03},
		//mags special
			{"ACE_C4_M","magazine",0.01},
			{"ACE_BBETTY_M","magazine",0.01},
			{"ACE_CLAYMORE_M","magazine",0.01}, 
			{"ACE_M86PDM","magazine",0.01},
			{"ACE_M4SLAM_M","magazine",0.01},			
		//bags
			{"HC_Ruck_MAR","object",0.02},	
			{"HC_Ruck_WDL","object",0.02},	

		//multiple spawns
			{"","militaryWest",0.60},
			{"","trash",0.80},
			{"","generic",0.40}
		};
	};
	class Hunting: Default {
		zombieChance = 0.6;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMap","weapon",0.06},
			{"ItemFlashlight","generic",0.06},
			{"ItemKnife","generic",0.05},
			{"ItemMatchbox","generic",0.07},
			{"ACE_YardAge450","generic",0.01},
			//weapons
			{"Crossbow_DZ","weapon",0.04},
			{"MeleeMachete","weapon",0.04},
			{"huntingrifle","weapon",0.05},
			{"MR43","weapon",0.08}, 			
			{"Winchester1866","weapon",0.06},		
		//special
			{"WeaponHolder_ItemTent","object",0.02},
		//mags special
			{"TrapBear","magazine",0.01},
		//bags
		//multiple spawns
			{"","hunter",0.10},
			{"","trash",0.30},
			{"","generic",0.50}
		};
	};
#include "CfgBuildingPos.hpp"

};
