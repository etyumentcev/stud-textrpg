#ifndef EnemyHeroNovice_H
#define EnemyHeroNovice_H

#include "EnemyHero.h"
#include <vector>

class EnemyHeroNovice :
	public EnemyHero

{
	int healthLevel;
	int attackDamage;
	int magicDamage;
public:
	EnemyHeroNovice(int health_level, int attack_damage, int magic_damage);
	using EnemyHero::EnemyHero;
	virtual ~EnemyHeroNovice();
	void setState(std::vector<int>);
	void getState(std::vector<int>);
};
#endif EnemyHeroNovice_H