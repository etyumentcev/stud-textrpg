#ifndef Place_H
#define Place_H
#include <string>
#include <vector>
#include <tuple>

class Place
{
	int placeID;
	int typeEnemy;
	std::string NameofPlace;
	std::vector<std::string> strings_;
	std::vector<std::string>::iterator it;
	std::vector<std::string>::iterator end;
	std::tuple<int, int> nextPlaces_;
public:
	Place(int, int, std::string, std::vector<std::string>, std::tuple<int, int> nextPlaces_);
	std::tuple<int, int> getnextPlaces();
	std::string GetNextPhrase();
	int getPlaceID();
	int getTypeEnemy();
	void setPlace(int placeID, int TypeEnemy, std::string name, std::vector<std::string> strings);
};

#endif Place_H