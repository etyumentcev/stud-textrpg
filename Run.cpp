#include "Run.h"
	void Run::run()
	{
		//todo Загрузка настроек, установка состояний
		auto go = new GameObject;
		auto gameMap = go->CreateMap();
		auto view = new View(0);
		go->GameView(*view);
	}