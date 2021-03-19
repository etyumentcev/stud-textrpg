#include "Place.h"
#include <string>
using namespace std;

Place::Place(int placeID, int typeEnemy, string nameOfPlace, vector<string> strings, std::tuple<int, int> nextPlaces)
	: placeID(placeID), typeEnemy(typeEnemy), NameofPlace(nameOfPlace), strings_(strings), it(strings_.begin()), end(strings_.end()), nextPlaces_(nextPlaces){}

std::tuple<int, int> Place::getnextPlaces()
{
	return nextPlaces_;
}

std::string Place::GetCurrentPhrase()
{
	return *it;
}

std::string Place::GetNextPhrase()
{
	if (it != end)
	{
		return *(it++);
	}
	return *(it);
}

int Place::getPlaceID()
{
	return placeID;
}

int Place::getTypeEnemy()
{
	return typeEnemy;
}

void Place::setPlace(int placeID, int TypeEnemy, std::string name, std::tuple<int, int> nextPlaces, std::vector<std::string> strings)
{
	this->placeID = placeID;
	this->typeEnemy = TypeEnemy;
	this->NameofPlace = name;
	this->nextPlaces_ = nextPlaces;
	this->strings_ = strings;
}
