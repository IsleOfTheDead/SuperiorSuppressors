class CfgPatches
{
  class SuperiorSuppressors_Weapons_Muzzles
  {
    units[]={ "ImprovisedSuppressor", "ReinforcedSuppressor", "M4_Suppressor", "AK_Suppressor", "PistolSuppressor", "AWC_Suppressor" };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data", "DZ_Weapons_Muzzles" };
  };
};
class CfgVehicles
{
  class Inventory_Base;

  class ItemSuppressor: Inventory_Base
  {
    repairableWithKits[]={1};
    repairCosts[]={25};
  };

  class ImprovisedSuppressor: ItemSuppressor
  {
    //repairableWithKits[]={};
    //repairCosts[]={};
    repairableWithKits[]={5};
    repairCosts[]={50};
    //noiseShootModifier=-0.85000002;
    noiseShootModifier=-2.55000006;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=1;
          hitpoints=2;
        };
      };
    };
  };

	class ReinforcedSuppressor: ItemSuppressor
	{
		scope=2;
    displayName="$STR_CfgVehicles_ReinforcedSuppressor0";
    descriptionShort="$STR_CfgVehicles_ReinforcedSuppressor1";
		model="\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
		// repairableWithKits[]={0};
		// repairCosts[]={0};
    repairableWithKits[]={8};
    repairCosts[]={50};
		rotationFlags=17;
		reversed=0;
		weight=50;
		itemSize[]={3,1};
		itemModelLength=0.23999999;
		barrelArmor=1500;
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"suppressorImpro",
			"weaponMuzzleAK",
			"weaponMuzzleM4",
			"pistolMuzzle"
		};
		simulation="ItemSuppressor";
		// noiseShootModifier=-0.85000002;
    noiseShootModifier=-2.55000006;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1.2};
		selectionFireAnim="zasleh";
		soundIndex=2;
		muzzlePos="usti hlavne";
    hiddenSelections[]={ "camo" };
    hiddenSelectionsTextures[]={ "SuperiorSuppressors\dz\weapons\attachments\muzzle\data\reinforced_suppressor_co.paa" };
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=15;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					overrideDirectionVector[]={0,180,180};
					onlyWithinOverheatLimits[]={0,0.69999999};
				};
				class SmokeHot
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,2};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					// hitpoints=2;
          hitpoints=4;
					healthLevels[]=
					{
						{ 1, { "dz\weapons\attachments\muzzle\data\bottle_suppressor.rvmat" } },
						{ 0.69999999, { "dz\weapons\attachments\muzzle\data\bottle_suppressor.rvmat" } },
						{ 0.5, { "dz\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat" } },
						{ 0.30000001, { "dz\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat" } },
						{ 0, { "dz\weapons\attachments\muzzle\data\bottle_suppressor_destruct.rvmat" } }
					};
				};
			};
		};
		soundImpactType="plastic";
	};

  class M4_Suppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier=-2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=4;
          hitpoints=8;
        };
      };
    };
  };

  class AK_Suppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier=-2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=4;
          hitpoints=8;
        };
      };
    };
  };

  class PistolSuppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier=-2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=5;
          hitpoints=10;
        };
      };
    };
  };

  class AWC_Suppressor: ItemSuppressor
  {
    scope=2;
    displayName="$STR_CfgVehicles_AWC_Suppressor0";
    descriptionShort="$STR_CfgVehicles_AWC_Suppressor1";
    model="SuperiorSuppressors\dz\weapons\attachments\muzzle\suppressor_308.p3d";
    rotationFlags=17;
    reversed=0;
    weight=73;
    itemSize[]={ 3, 1 };
    itemModelLength=0.180;
    barrelArmor=2250;
    lootCategory="Attachments";
    lootTag[]={ "Military_west" };
    inventorySlot[]={ "suppressorImpro" };
    simulation="ItemSuppressor";
    dispersionModifier=-0.00015000001;
    dispersionCondition="true";
    //noiseShootModifier=-0.93000001;
    noiseShootModifier=-2.79000003;
    recoilModifier[]={ 0.89999998, 0.89999998, 0.89999998 };
    swayModifier[]={ 1.3, 1.3, 1.3 };
    selectionFireAnim="zasleh";
    soundIndex=1;
    muzzlePos="usti hlavne";
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=4;
          hitpoints=8;
          healthLevels[]=
          {
            { 1, { "SuperiorSuppressors\dz\weapons\attachments\data\suppressor308.rvmat" } },
            { 0.69999999, { "SuperiorSuppressors\dz\weapons\attachments\data\suppressor308.rvmat" } },
            { 0.5, {"SuperiorSuppressors\dz\weapons\attachments\data\suppressor308_damage.rvmat"} },
            { 0.30000001, { "SuperiorSuppressors\dz\weapons\attachments\data\suppressor308_damage.rvmat" } },
            { 0, { "SuperiorSuppressors\dz\weapons\attachments\data\suppressor308_destruct.rvmat" } }
          };
        };
      };
    };
    class Particles
    {
      class OnFire
      {
        class MuzzleFlash
        {
          overrideParticle="weapon_shot_fnx_02";
          onlyWithinHealthLabel[]={ 0, 3 };
        };
      };
      class OnOverheating
      {
        shotsToStartOverheating=3;
        maxOverheatingValue=10;
        overheatingDecayInterval=1;
        class SmokeTrail
        {
          overrideParticle="smoking_barrel_small";
          onlyWithinRainLimits[]={ 0, 0.2 };
        };
        class SmokingBarrelHotSteamSmall
        {
          overrideParticle="smoking_barrel_steam_small";
          positionOffset[]={ 0, 0.1, 0 };
          onlyWithinOverheatLimits[]={ 0, 1 };
          onlyWithinRainLimits[]={ 0.2, 1 };
        };
      };
    };
  };
};
