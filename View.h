#ifndef VIEW_H
#define VIEW_H
#include "State.h"

class View
{
public:
	View() = default;
	virtual  ~View() = default;
	virtual void Draw(State&) = 0;
};
#endif VIEW_H