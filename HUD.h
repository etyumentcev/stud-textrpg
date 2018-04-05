#ifndef HUD_H
#define HUD_H

#include "Element.h"

class HUD
{
public:
	HUD();
	virtual ~HUD();
	void Draw(Element &el);
};

#endif HUD_H