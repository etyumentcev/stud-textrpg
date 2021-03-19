#include "EnemyHero.h"
EnemyHero::EnemyHero(int health_level, int attack_damage, int magic_damage)
	: healthLevel(health_level),
	attackDamage(attack_damage),
	magicDamage(magic_damage){}

void EnemyHero::setState(std::vector<int> v)
{
	this->healthLevel = v.at(0);
	this->attackDamage = v.at(1);
	this->magicDamage = v.at(2);
}

std::vector<int> EnemyHero::getState() const
{
	return {healthLevel, attackDamage, magicDamage};
}