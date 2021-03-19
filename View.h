#ifndef VIEW_H
#define VIEW_H
#include "InterchangeObject.h"
#include "MapGameField.h"

class View
{
public:
	View() = default;
	virtual  ~View() = default;
	virtual void Draw() = 0;
};
#endif VIEW_H