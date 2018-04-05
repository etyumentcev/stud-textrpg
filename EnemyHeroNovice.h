#ifndef EnemyHeroNovice_H
#define EnemyHeroNovice_H

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
#endif EnemyHeroNovice_H