#ifndef InterchangeObject_H
#define InterchangeObject_H

#include "HeroPlayer.h"
#include "EnemyHero.h"

class InterchangeObject{
	HeroPlayer& hero;
	EnemyHero& enemyhero;
public:
	InterchangeObject(HeroPlayer& hp, EnemyHero& ep): hero(hp), enemyhero(ep){};
	void makeAttackHero();
	void makeMagicAttackHero(int);
	void makeAttackHeroEnemy();
	void nextStep(int place);
	void makeMagicAttackHeroEnemy(int);

#endif InterchangeObject_H