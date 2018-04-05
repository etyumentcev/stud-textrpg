#ifndef MapGameField_H
#define MapGameField_H

#include <tuple>
#include <vector>
#include <map>
#include "Place.h"


class MapGameField //todo сделать контейнер для карты и заполнение карты
{
	Place place;
public:
	MapGameField();
	void addPlace(int, std::tuple<int, int>);
	void removePlace();
	void editPlace(int, int, std::tuple<int, int>);
	Place& getPlace(int);
	//Place& operator[] (int x);
	std::map<int, double> map;
};

#endif MapGameField_H