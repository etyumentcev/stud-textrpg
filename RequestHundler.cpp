#include "RequestHundler.h"
#include "InterchangeObject.h"
#include "View.h"
#include "Command_EnemyAttack.h"
#include "Command_GetTextFromPlace.h"
#include "Command_MoveToLeftPlace.h"
#include "Command_MoveToRightPlace.h"
#include "exception"
#include "Command_MAttack.h"
#include "Command_EnemyMAttack.h"
using namespace std;

RequestHundler::RequestHundler(InterchangeObject& intObj, View& view, MapGameField& mgf, LoadSave& ls, SettingsStore& ss)
	:intObj(intObj), view(view), mgf(mgf), ls(ls), ss(ss)
{
	commands[27] = new Command_Esc(ls, ss);
	commands[13] = new Command_Attack(intObj);
	commands[8] = new  Command_EnemyAttack(intObj);
	commands[72] = new Command_GetTextFromPlace(mgf);
	commands[97] = new Command_MoveToLeftPlace(mgf);
	commands[100] = new Command_MoveToRightPlace(mgf);
	commands[75] = new Command_MAttack(intObj);
	commands[77] = new Command_EnemyMAttack(intObj);
}

void RequestHundler::HandleRequest(int action)
{	
	if(commands[action] != nullptr)
	{
		ICommand* command = commands[action];
		view.Draw();
		return command->execute();
	}
	throw std::invalid_argument("");
}