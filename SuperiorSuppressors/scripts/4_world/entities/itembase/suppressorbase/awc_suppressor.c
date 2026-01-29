class AWC_Suppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if (!super.CanPutAsAttachment(parent)) return false;

		if (CheckSuppressorCompability(parent)) return true;

		return false;
	}

	// Check if suppressor is compatible with weapon attaching to
	static bool CheckSuppressorCompability(EntityAI weapon)
	{
    // Array of ammo types (their name) that can be used with weapon
		TStringArray ammo_names = new TStringArray;
    // Create config path and get ammo types
		string cfg_path = "CfgWeapons " + weapon.GetType() + " chamberableFrom";
		g_Game.ConfigGetTextArray(cfg_path, ammo_names);
		// for every ammo in ammo string compare passed ammo
		foreach (string ammo_name : ammo_names)
		{
			if (ammo_name.IndexOf("Ammo_308Win") == 0)
			{
				return true;
			}
		}
		// if no ammo from the array matches, return false
		return false;
	}
}
