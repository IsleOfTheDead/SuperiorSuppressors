class CfgPatches
{
  class SuperiorSuppressors_Weapons_Muzzles
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = { "DZ_Data", "DZ_Weapons_Muzzles" };
  };
};
class CfgVehicles
{
  class Inventory_Base;
  class ItemSuppressor: Inventory_Base
  {
    repairableWithKits[] = {1};
    repairCosts[] = {25};
  };
  class ImprovisedSuppressor: ItemSuppressor
  {
    //repairableWithKits[]={};
    //repairCosts[]={};
    repairableWithKits[] = {5};
    repairCosts[] = {50};
    //noiseShootModifier=-0.85000002;
    noiseShootModifier = -2.55000006;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints = 1;
          hitpoints = 5;
        };
      };
    };
  };
  class M4_Suppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier = -2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints = 4;
          hitpoints = 20;
        };
      };
    };
  };
  class AK_Suppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier = -2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints = 4;
          hitpoints = 20;
        };
      };
    };
  };
  class PistolSuppressor: ItemSuppressor
  {
    //noiseShootModifier=-0.93000001;
    noiseShootModifier = -2.79000003;
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints = 5;
          hitpoints = 25;
        };
      };
    };
  };

  //class AWC_Suppressor: ItemSuppressor {};

  class ReinforcedSuppressor: ImprovisedSuppressor
  {
    scope = 2;
    displayName = "$STR_CfgVehicles_ReinforcedSuppressor0";
    descriptionShort = "$STR_CfgVehicles_ReinforcedSuppressor1";
    //repairableWithKits[]={0};
    //repairCosts[]={0};
    repairableWithKits[] = {8};
    repairCosts[] = {50};
    //noiseShootModifier=-0.85000002;
    noiseShootModifier = -2.55000006;
    hiddenSelections[] =
    {
      "camo"
    };
    hiddenSelectionsTextures[] =
    {
      "SuperiorSuppressors\dz\weapons\attachments\muzzle\data\reinforced_suppressor_co.paa"
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          //hitpoints=2;
          hitpoints = 10;
        };
      };
    };
  };
};
// class CfgNonAIVehicles
// {
//  class ProxyAttachment {};
//  class Proxybottle_suppressor: ProxyAttachment
//  {
//    scope=2;
//    inventorySlot="suppressorImpro";
//    model="\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
//  };
// };
