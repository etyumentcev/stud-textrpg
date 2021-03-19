#ifndef MC_H
#define MC_H
#include "MapGameField.h"

class MapCreator
{
public:
	MapCreator() = default;
	MapGameField& getMap();
};
#endif MC_H