#ifndef ICommand_H
#define ICommand_H
#include "InterchangeObject.h"
#include "MapGameField.h"

class ICommand
{
public:
	virtual void execute() = 0;
	virtual ~ICommand() = default;
};

#endif ICommand_H