#ifndef Element_H
#define Element_H
#include "View.h"
class Element : public View
{
public:
	Element() = default;
	virtual ~Element() = default;
	virtual void Draw() = 0; //todo реализация в DrawableObject...
};

#endif Element_H