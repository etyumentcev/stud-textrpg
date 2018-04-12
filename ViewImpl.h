#ifndef ViewImpl_H
#define ViewImpl_H

#include "View.h"
#include "HUD.h"
#include "Content.h"


class ViewImpl : public View
{
public:
	virtual ~ViewImpl() = default;
	void Draw(HUD hud, Content content);
};

#endif ViewImpl_H