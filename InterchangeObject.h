#ifndef InterchangeObject_H
#define InterchangeObject_H

#include "HeroPlayer.h"
#include "EnemyHero.h"
#include "SettingsStore.h"

class InterchangeObject {
	HeroPlayer& hp;
	EnemyHero& ep;
	SettingsStore& ss;
public:
	InterchangeObject(HeroPlayer& hp, EnemyHero& ep, SettingsStore& ss);
	~InterchangeObject();
	void makeAttackHero();
	void makeMagicAttackHero(int);

	void makeAttackHeroEnemy();
	void makeMagicAttackHeroEnemy(int);

	std::vector<int> GetStateHero();
	std::vector<int> GetStateEnemy();
};

#endif InterchangeObject_H