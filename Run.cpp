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

		auto settings = new SettingsStore();
		auto loadSave = new LoadSave(*settings);

		auto enemyHero = new EnemyHero(100, 100, 100);
		auto hero = new HeroPlayer(100, 100, 100, 100);

		auto intObj = new InterchangeObject(*hero, *enemyHero, *settings);

		View* view = new DrawableObjectHUD();
		view->Draw(*intObj);

		auto control = new Control(*intObj, *view, gameMap, *loadSave, *settings);
	}

MapGameField& Run::CreateMap()
{
	auto mapCreator = new MapCreator;
	return mapCreator->getMap();
}