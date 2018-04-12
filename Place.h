#ifndef Place_H
#define Place_H
class Place
{
	int placeID;
	int typeEnemy; // Тип противника на этом месте
	std::tuple<int, int> nextPlaces_; // placeID двух мест для перехода из текущего места
	std::vector<std::string> strings_; // текстовые строки для этого места

public:
	Place();
};

inline Place::Place()
{

}
#endif Place_H
