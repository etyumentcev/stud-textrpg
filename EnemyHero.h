#ifndef EnemyHero_H
#define EnemyHero_H

class EnemyHero
{
	int healthLevel;
	int attackDamage;
	int magicDamage;
public:
	virtual ~EnemyHero() = default;

	EnemyHero(int health_level, int attack_damage, int magic_damage);
	virtual void makeAttack() = 0;
	virtual void makeMagicAttack(int) = 0;

	void loadState();
	void saveState();
};
#endif EnemyHero_H