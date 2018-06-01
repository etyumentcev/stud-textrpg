#include "HeroPlayer.h"

HeroPlayer::HeroPlayer(int health, int attackdmg, int magicdmg, int manaLevel)
	: healthLevel(health), basicAttackDamage(attackdmg), magicDamage(magicdmg), manaLevel(manaLevel){};
void HeroPlayer::setState(std::vector<int> v)
{
	this->healthLevel = v.at(0);
	this->basicAttackDamage = v.at(1);
	this->magicDamage = v.at(2);
	this->manaLevel = v.at(3);
}

std::vector<int> HeroPlayer::getState() const
{
	return { healthLevel, basicAttackDamage, magicDamage, manaLevel };
}
