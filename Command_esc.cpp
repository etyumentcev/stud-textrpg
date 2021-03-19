#include "Command_esc.h"

Command_Esc::Command_Esc(LoadSave& ls, SettingsStore& ss)
	: ls(ls), ss(ss)
{
}

void Command_Esc::execute()
{	
	ls.save(ss);
	exit(0);
}