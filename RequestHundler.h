#ifndef RH_H
#define RH_H

#include <map>

#include "ICommand.h"
#include "Command_esc.h"
#include "Command_Attack.h"

class RequestHundler
{
	std::map<int, ICommand*> commands;
public:
	RequestHundler();
	void HandleRequest(int action);
};

#endif RH_H