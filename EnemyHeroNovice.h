#pragma once
#include "EnemyHero.h"
class EnemyHeroNovice :
	public EnemyHero
{
public:
	EnemyHeroNovice(int, int, int);
	virtual ~EnemyHeroNovice();
	void makeAttack() override;
	void makeMagicAttack(int) override;
};

