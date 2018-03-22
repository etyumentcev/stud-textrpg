#pragma once
#include "HUD.h"
#include "Content.h"
class GameField
{
public:
	GameField();
	virtual ~GameField();
	virtual void Draw() = 0;
};
