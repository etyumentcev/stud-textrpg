#include "MapGameField.h"

Place& MapGameField::operator[](int const x)
{
	return getPlace(x);
}
