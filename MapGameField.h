#ifndef MapGameField_H
#define MapGameField_H

#include <tuple>
#include <vector>
#include <map>
#include "Place.h"

class MapGameField
{
	Place* place; // текущее место
	int current_place = 0;
	std::map < int, Place*> map;
public:
	void addPlace(int, int, std::string,  std::tuple<int, int>, std::vector<std::string>);
	void removePlace(int);
	void editPlace(int, int, std::string, std::tuple<int, int>, std::vector<std::string>);
	Place& getPlace(int);
	int getCurrentPlaceID();
	void nextPlace(int);
	Place& operator[] (int x);
};

#endif MapGameField_H