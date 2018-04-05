#ifndef ViewImpl_H
#define ViewImpl_H

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

#endif ViewImpl_H