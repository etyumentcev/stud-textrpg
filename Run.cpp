#include "Run.h"
#include "HeroPlayer.h"
#include "InterchangeObject.h"
#include "View.h"
#include "MapGameField.h"
#include "MapCreator.h"
#include "DrawableObjectHUD.h"


void Run::run()
	{
		auto gameMap = CreateMap();
		auto state = new State;
		View* t = new DrawableObjectHUD();
		t->Draw(*state);

		auto settings = new SettingsStore();

		auto enemyHero = new EnemyHero(100, 100, 100);
		auto hero = new HeroPlayer(100, 100, 100, 100);

		auto intObj = new InterchangeObject(*hero, *enemyHero);



	}

MapGameField& Run::CreateMap()
{
	auto mapCreator = new MapCreator;
	return mapCreator->getMap();
}
