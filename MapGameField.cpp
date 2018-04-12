#include "MapGameField.h"


Place& MapGameField::getPlace(int)
{
	return *(new Place);
}

Place& MapGameField::operator[](int const x)
{
	return getPlace(x);
}
