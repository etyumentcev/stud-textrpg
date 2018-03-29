#pragma once
#include "View.h"
#include "HUD.h"
#include "Content.h"


class ViewImpl : public View
{
public:
	ViewImpl();
	virtual ~ViewImpl();
	void Draw(HUD hud, Content content);
};
