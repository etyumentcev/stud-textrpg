#pragma once
#include "EnemyHero.h"
class EnemyHeroNovice :
	public EnemyHero
{
public:
	using EnemyHero::EnemyHero;
	virtual ~EnemyHeroNovice();
	void makeAttack() override;
	void makeMagicAttack(int) override;
};

