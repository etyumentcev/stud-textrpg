#ifndef HeroPlayer_H
#define HeroPlayer_H
#include <iostream>
#include "GameObject.h"


class HeroPlayer
{
	int healthLevel;
	int manaLevel;
	int basicAttackDamage;
	int magicDamage;
public:
	virtual ~HeroPlayer() = default;
	HeroPlayer(int, int, int, Items, int, int, int);
	void setState(std::vector<int>);
	void getState(std::vector<int>);
};
#endif HeroPlayer_H