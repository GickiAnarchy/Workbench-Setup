class CustomMission: MissionGameplay
{
	void CustomMission(){}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}

void main()
{
	PlayerBase player = PlayerBase.Cast( (GetGame().CreatePlayer( NULL, "SurvivorF_Linda", 2200 10 2200, 0, "NONE") ) );
	player.CreateInInventory("TShirt_Black");
	GetGame().SelectPlayer(NULL, player);
}

