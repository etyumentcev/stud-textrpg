#ifndef MapGameField_H
#define MapGameField_H

#include <tuple>
#include <vector>
#include <map>
#include "Place.h"

class MapGameField
{
	Place* place;
	int current_place;
	//std::map<int, Place*> map;
	std::map < int, Place*> map;
public:
	MapGameField();
	void addPlace(int, int, std::string,  std::tuple<int, int>, std::vector<std::string>);
	void removePlace(int);
	void editPlace(int, int, std::string, std::tuple<int, int>, std::vector<std::string>);
	Place& getPlace(int);
	void nextPlace(int);
	Place& operator[] (int x);
};

#endif MapGameField_H