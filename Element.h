#pragma once

class Element
{
public:
	Element();
	virtual ~Element();
	virtual void Draw() = 0; //todo реализация в DrawableObject...
};