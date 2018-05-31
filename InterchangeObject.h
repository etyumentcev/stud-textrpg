#ifndef InterchangeObject_H
#define InterchangeObject_H

#include "HeroPlayer.h"
#include "EnemyHero.h"
#include "SettingsStore.h"

class InterchangeObject {
	std::vector<int> heroPlayer;
	std::vector<int> enemyPlayer;
public:
	InterchangeObject(HeroPlayer& hp, EnemyHero& ep, SettingsStore& ss)
	{

	};
	void makeAttackHero();
	void makeMagicAttackHero(int);

	void makeAttackHeroEnemy();
	void makeMagicAttackHeroEnemy(int);

	std::vector<int> GetStateHero();
	std::vector<int> GetStateEnemy();
};

#endif InterchangeObject_H