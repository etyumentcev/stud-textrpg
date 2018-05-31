#include "InterchangeObject.h"

InterchangeObject::InterchangeObject(HeroPlayer& hp, EnemyHero& ep, SettingsStore& ss)
	:hp(hp), ep(ep), ss(ss)
{
}

std::vector<int> InterchangeObject::GetStateHero()
{
	return heroPlayer;
}
std::vector<int> InterchangeObject::GetStateEnemy()
{
	return enemyPlayer;
}