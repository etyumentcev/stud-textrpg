#ifndef RH_H
#define RH_H

#include "ICommand.h"
#include "Command_esc.h"
#include <map>

class RequestHundler
{
	std::map<int, ICommand*> commands;
public:
	RequestHundler();
	void HandleRequest(int action);
};

#endif RH_H