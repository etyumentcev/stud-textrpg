#ifndef HeroPlayer_H
#define HeroPlayer_H
#include <iostream>
#include "GameObject.h"


class HeroPlayer
{
	int healthLevel;
	int manaLevel;
	int basicAttackDamage;
	Items items; // Предметы
	int magicDamageType1;
	int magicDamageType2;
	int magicDamageType3;
public:
	virtual ~HeroPlayer() = default;
	HeroPlayer(int, int, int, Items, int, int, int);
	void loadState();
	void saveState();
	virtual void makeAttack() = 0;
	virtual void getItem() = 0;
	virtual void makeMagicAttack(int typeAttack) = 0;
	void nextStep(int place); //todo Переход на новыое место карты
};
#endif HeroPlayer_H