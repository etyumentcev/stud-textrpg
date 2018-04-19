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
	
public:
	std::tuple<int, int> nextPlaces_;
	Place();
	std::string GetNextPhrase();
};

#endif Place_H