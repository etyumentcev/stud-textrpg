#include "MapGameField.h"
#include <memory>

using namespace std;


void MapGameField::addPlace(int placeID, int typeEnemy, string nameOfPlace, tuple<int, int> nextPlaces, vector<string> strings)
{
	auto place = new Place(placeID, typeEnemy, nameOfPlace, strings, nextPlaces);
	map.insert(std::make_pair(placeID, place));
}

void MapGameField::removePlace(int el)
{
	map.erase(el);
}

void MapGameField::editPlace(int placeID, int typeEnemy, std::string name, std::tuple<int, int> nextPlaces, std::vector<std::string> strings)
{
	auto place = getPlace(placeID);
	place.setPlace(placeID, typeEnemy, name, nextPlaces, strings);
}

Place& MapGameField::getPlace(int id)
{
	return *map[id];
}

void MapGameField::nextPlace(int hand_side)
{
	const int left = get<0>(this->place->getnextPlaces());
	const int right = get<1>(this->place->getnextPlaces());
	if (hand_side == left)
	{
		place = &getPlace(left);
		current_place = place->getPlaceID();
	}
	else
	{
		place = &getPlace(right);
		current_place = place->getPlaceID();
	}
}

Place& MapGameField::operator[](int const x)
{
	return getPlace(x);
}