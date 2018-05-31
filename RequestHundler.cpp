#include "RequestHundler.h"
#include "InterchangeObject.h"
#include "View.h"
using namespace std;

RequestHundler::RequestHundler(InterchangeObject& intObj, View& view)
	:intObj(intObj), view(view)
{
	commands[27] = new Command_esc;
	commands[13] = new Command_Attack(intObj);
}

void RequestHundler::HandleRequest(int action)
{
	ICommand* command = commands[action];
	//todo вынести AddPlace() и EditPlace() в mapcreator()
	view.Draw(intObj);
	try
	{
		return  command->execute();
	}
	catch (...)
	{
		std::cout << "Incorrect key code";
	}
}