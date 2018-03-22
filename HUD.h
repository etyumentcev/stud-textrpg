#pragma once
#include "Element.h"

class HUD
{
public:
	HUD();
	virtual ~HUD();
	void Draw(Element el); // Element - элемент для отрисовки
};