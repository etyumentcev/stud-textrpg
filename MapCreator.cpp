#include "MapCreator.h"
#include <memory>
using namespace std;

MapGameField& MapCreator::getMap()
{
	using namespace std;
	unique_ptr<MapGameField> mgf(new MapGameField);

	vector<string> place0_text;
	place0_text.push_back("Игра начинается");
	place0_text.push_back("Вам предстоит сразится с первым монстром");
	place0_text.push_back("Применяйте способности и победити ...");
	place0_text.push_back("Вы победили, теперь вы можете выбрать место для дальнейшего продвижения");
	place0_text.push_back("Вы проиграли!");

	vector<string> place1_text;
	place1_text.push_back("Вы пришли в новое место");

	vector<string> place2_text;
	place2_text.push_back("");

	vector<string> place3_text;
	place3_text.push_back("");

	vector<string> place4_text;
	place4_text.push_back("");

	vector<string> place5_text;
	place5_text.push_back("Это последнее место");

	mgf->addPlace(0, 0, "Start !", { 1,2 }, place0_text);
	mgf->addPlace(0, 0, "Start !", { 4,2 }, place1_text);
	mgf->addPlace(0, 0, "Start !", { 1,3 }, place2_text);
	mgf->addPlace(0, 0, "Start !", { 4,5 }, place3_text);
	mgf->addPlace(0, 0, "Start !", { 3,5 }, place4_text);
	mgf->addPlace(0, 0, "Start !", { 4,5 }, place5_text);

	return *mgf;
}

