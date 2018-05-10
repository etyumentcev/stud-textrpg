#include "Run.h"
	void Run::run()
	{
		auto go = new GameObject;
		auto gameMap = go->CreateMap();
		auto view = new View(0);

		SettingsStore* settings = new SettingsGame;
		SettingsStore* settings = new SettingsPlayer;
		SettingsStore* settings = new SettingsEnemy;

		auto state = new State;
		go->GameView(*view);
	}