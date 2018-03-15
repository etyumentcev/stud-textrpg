#pragma once
#include <tuple>
#include <vector>

class Place
{
	int placeID;
	int typeEnemy; // Тип противника на этом месте
	std::tuple<int, int> nextPlaces; // placeID двух мест для перехода из текущего места
	std::vector<std::string> strings; // текстовые строки для этого места
public:
	Place();
};

class MapGameField //todo сделать контейнер для карты и заполнение карты
{
	Place place;
public:
	MapGameField();
	void addPlace(int, std::tuple<int, int>);
	void removePlace();
	void editPlace(int, int, std::tuple<int, int>);
	Place getPlace(int);
};