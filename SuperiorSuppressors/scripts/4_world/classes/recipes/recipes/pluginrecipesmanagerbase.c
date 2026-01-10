modded class PluginRecipesManagerBase
{
	override void RegisterRecipies()
	{
    super.RegisterRecipies();

		//RegisterRecipe(new CraftSuppressor);
		RegisterRecipe(new ReinforceSuppressor);
	}
};
