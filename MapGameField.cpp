#include "MapGameField.h"
#include <memory>

using namespace std;


void MapGameField::addPlace(int placeID, int typeEnemy, std::string namaOfPlace, std::tuple<int, int> nextPlaces, std::vector<std::string> strings)
{
	unique_ptr<Place> place(new Place(placeID, typeEnemy, namaOfPlace, nextPlaces));
}

void MapGameField::editPlace(int, int, std::string, std::tuple<int, int>, std::vector<std::string>)
{

}

Place& MapGameField::getPlace(int id)
{
	return map[id];
}

void MapGameField::nextPlace(int hand_side)
{
	int left = get<0>(this->place.getnextPlaces());
	int right = get<1>(this->place.getnextPlaces());
	if (hand_side == left)
	{
		place = getPlace(left);
		current_place = place.getPlaceID();
	}
	else
	{
		place = getPlace(right);
		current_place = place.getPlaceID();
	}
}

Place& MapGameField::operator[](int const x)
{
	return getPlace(x);
}
