#ifndef CommandESC_H
#define CommandESC_H

#include "ICommand.h"
#include "LoadSave.h"

class Command_Esc : public ICommand {
	LoadSave& ls;
	SettingsStore& ss;
public:
	Command_Esc(LoadSave& ls, SettingsStore& ss);
	void execute() override;
};
#endif CommandESC_H