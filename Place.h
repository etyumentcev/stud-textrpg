#ifndef Place_H
#define Place_H
class Place
{
	int placeID;
	int typeEnemy; // ��� ���������� �� ���� �����
	std::tuple<int, int> nextPlaces_; // placeID ���� ���� ��� �������� �� �������� �����
	std::vector<std::string> strings_; // ��������� ������ ��� ����� �����

public:
	Place();
};

inline Place::Place()
{

}
#endif Place_H
