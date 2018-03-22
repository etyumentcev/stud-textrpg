#pragma once
#include "GameField.h"

class GFImpl : public GameField
{
public:
	GFImpl();
	virtual ~GFImpl();
	void Draw(HUD hud, Content content);
};