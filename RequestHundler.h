#ifndef RH_H
#define RH_H

#include <map>
#include "ICommand.h"
#include "Command_esc.h"
#include "Command_Attack.h"
#include "View.h"
#include "MapGameField.h"

class RequestHundler
{
	std::map<int, ICommand*> commands;
	InterchangeObject& intObj;
	View& view;
	MapGameField& mgf;
	LoadSave& ls;
	SettingsStore& ss;
public:
	RequestHundler(InterchangeObject& intObj, View& view, MapGameField& mgf, LoadSave& ls, SettingsStore& ss);
	void HandleRequest(int action);
};

#endif RH_H