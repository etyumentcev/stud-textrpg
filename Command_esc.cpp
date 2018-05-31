#include "Command_esc.h"
#include <iostream> 

Command_Esc::Command_Esc(LoadSave& ls, SettingsStore& ss)
	: ls(ls), ss(ss)
{
}

void Command_Esc::execute()
{	
	ls.save(ss);
	std::terminate();
}