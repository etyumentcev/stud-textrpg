#include "MapGameField.h"


void MapGameField::addPlace(int, int, std::string, std::tuple<int, int>, std::vector<std::string>)
{

}

Place& MapGameField::getPlace(int id)
{
	return map[id];
}

void MapGameField::nextPlace(int)
{
	int left = std::get<0>(this->place.nextPlaces_);
	int right = 
	return ;
}

Place& MapGameField::operator[](int const x)
{
	return getPlace(x);
}
