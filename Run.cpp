#include "Run.h"
	void Run::run()
	{
		//todo «агрузка настроек, установка состо€ний
		auto go = new GameObject;
		auto gameMap = go->CreateMap();
		auto view = new View(0);
		go->GameView(*view);
	}