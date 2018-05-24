#ifndef EnemyHero_H
#define EnemyHero_H
#include <vector>

class EnemyHero
{
	int healthLevel;
	int attackDamage;
	int magicDamage;
public:
	EnemyHero(int health_level, int attack_damage, int magic_damage);
	void setState(std::vector<int>);
	void getState(std::vector<int>);
	virtual ~EnemyHero() = default;
};

#endif EnemyHero_H