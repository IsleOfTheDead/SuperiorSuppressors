class CfgPatches
{
  class SuperiorSuppressors
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]={ "DZ_Data", "DZ_Scripts" };
  };
};

class CfgMods
{
  class SuperiorSuppressors
  {
    dir="SuperiorSuppressors";
    hideName=0;
    hidePicture=0;
    extra=0;
    name="SuperiorSuppressors";
    picture="SuperiorSuppressors\data\picture.paa";
    logoSmall="SuperiorSuppressors\data\logoSmall.paa";
    logo="SuperiorSuppressors\data\logo.paa";
    logoOver="SuperiorSuppressors\data\logo.paa";
    action="https://steamcommunity.com/sharedfiles/filedetails/?id=3638007480";
    credits="moldypenguins";
    author="moldypenguins";
    authorID="76561198312711389";
    version="1.3";
    type="mod";
    dependencies[]={ "World" };
    class defs
    {
      class engineScriptModule
      {
        value="";
        files[]={ "SuperiorSuppressors\scripts\1_core" };
      };
      class worldScriptModule
      {
        value="";
        files[]={ "SuperiorSuppressors\scripts\4_world" };
      };
    }
  };
};
