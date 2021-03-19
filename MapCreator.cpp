#include "MapCreator.h"
#include <memory>
using namespace std;

MapGameField& MapCreator::getMap()
{
	using namespace std;
	auto mgf = new MapGameField;

	vector<string> place0_text;
	place0_text.push_back("Игра начинается");
	place0_text.push_back("Вам предстоит сразится с первым монстром");
	place0_text.push_back("Применяйте способности и победити ...");
	place0_text.push_back("Вы победили, теперь вы можете выбрать место для дальнейшего продвижения");
	place0_text.push_back("Вы проиграли!");

	vector<string> place1_text;
	place1_text.push_back("Вы пришли в новое место");
	place1_text.push_back("второе место");
	place1_text.push_back("Вы пришли в новое место");

	vector<string> place2_text;
	place2_text.push_back("Вы подошли к второму месту");
	place2_text.push_back("Вы подошли к второму месту");
	place2_text.push_back("Вы подошли к второму месту");

	vector<string> place3_text;
	place3_text.push_back("Это четвертое место");
	place3_text.push_back("Замок");
	place3_text.push_back("Это четвертое место");

	vector<string> place4_text;
	place4_text.push_back("Здесь пятое место");
	place4_text.push_back("Побережье");
	place4_text.push_back("Здесь пятое место");

	vector<string> place5_text;
	place5_text.push_back("Это последнее");
	place5_text.push_back("шестое масто");
	place5_text.push_back("На этом игра заканчивается");
	

	mgf->addPlace(0, 0, "Start !", make_tuple(1,2), place0_text);
	mgf->addPlace(1, 0, "Поляна", make_tuple( 4,2 ), place1_text);
	mgf->addPlace(2, 1, "Лес", make_tuple( 1,3 ), place2_text);
	mgf->addPlace(3, 1, "Замок", make_tuple( 4,5 ), place3_text);
	mgf->addPlace(4, 2, "Побережье", make_tuple( 3,5 ), place4_text);
	mgf->addPlace(5, 2, "Finish !", make_tuple( 4,5 ), place5_text);

	return *mgf;
}

