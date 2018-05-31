#ifndef RH_H
#define RH_H

#include <map>
#include <iostream>
#include "ICommand.h"
#include "Command_esc.h"
#include "Command_Attack.h"

class View;

class RequestHundler
{
	std::map<int, ICommand*> commands;
	InterchangeObject& intObj;
	View& view;
public:
	RequestHundler(InterchangeObject& intObj, View& view);
	void HandleRequest(int action);
};

#endif RH_H