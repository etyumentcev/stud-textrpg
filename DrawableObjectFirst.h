#pragma once
#include "Element.h"
class DrawableObjectFirst :
	public Element
{
public:
	DrawableObjectFirst();
	virtual ~DrawableObjectFirst();
	void Draw() override; //todo реализация отрисовки для конкретного объекта
};

