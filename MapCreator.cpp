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

	mgf->addPlace(0, 0, "Start !", { 1,2 }, place0_text);
}

