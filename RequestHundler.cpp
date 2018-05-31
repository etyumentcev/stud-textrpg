#include "RequestHundler.h"
#include "InterchangeObject.h"
#include "View.h"

RequestHundler::RequestHundler(InterchangeObject& intObj, View& view)
{
	commands[27] = new Command_esc;
	commands[13] = new Command_Attack(intObj);
}

void RequestHundler::HandleRequest(int action)
{
	ICommand* command = commands[action];

	// Draw;
	//todo вызов отрисовки после каждой команды
	//todo вынести AddPlace() и EditPlace() в mapcreator()
	view->draw();
	
	return  command->execute();
}