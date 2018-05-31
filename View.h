#ifndef VIEW_H
#define VIEW_H
#include "InterchangeObject.h"

class View
{
public:
	View() = default;
	virtual  ~View() = default;
	virtual void Draw(InterchangeObject&) = 0;
};
#endif VIEW_H