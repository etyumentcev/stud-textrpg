#include "Run.h"
#include "EnemyHeroNovice.h"
#include "HeroPlayer.h"
#include "InterchangeObject.h"

void Run::run()
	{
		auto go = new GameObject;
		auto gameMap = go->CreateMap();
		auto view = new View(0);

		SettingsStore* settingsGame = new SettingsGame;
		SettingsStore* settingsPlayer = new SettingsPlayer;
		SettingsStore* settingsEnemy = new SettingsEnemy;
		//todo interchange object
		//todo ��� ���������� ������ ���������?
		//todo ��������� �������� ������ ������� ������ �����������
		auto state = new State; //todo ����������


		auto enemyHero = new EnemyHeroNovice(100, 100, 100);
		auto hero = new HeroPlayer(100, 100, 100, 100);
		auto intObj = new InterchangeObject(*hero, *enemyHero);
		go->GameView(*view);
	}
