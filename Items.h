﻿#ifndef Items_H
#define Items_H

class Items //todo Разделить на неск классов на каждый тип предмета
{
	int gainNextAttack;
	int weakenNextAttack;
	int recoveryHealth;
	int recoveryMana;
public:
	Items(int a, int b, int c, int d);
};

#endif Items_H