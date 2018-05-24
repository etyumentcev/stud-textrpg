#include "Run.h"
#include "HeroPlayer.h"
#include "InterchangeObject.h"
#include "View.h"
#include "MapGameField.h"
#include "MapCreator.h"
#include "DrawableObjectHUD.h"
#include "LoadSave.h"
#include "Control.h"


void Run::run()
	{
		auto gameMap = CreateMap();
		auto state = new State;
		View* t = new DrawableObjectHUD();
		t->Draw(*state);

		auto settings = new SettingsStore();
		auto loadSave = new LoadSave();
		loadSave->load(*settings);

		auto enemyHero = new EnemyHero(100, 100, 100);
		auto hero = new HeroPlayer(100, 100, 100, 100);

		auto intObj = new InterchangeObject(*hero, *enemyHero);

		auto control = new Control;

	}

MapGameField& Run::CreateMap()
{
	auto mapCreator = new MapCreator;
	return mapCreator->getMap();
}
