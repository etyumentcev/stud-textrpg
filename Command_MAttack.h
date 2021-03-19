#ifndef CommandMAttack_H
#define CommandMAttack_H

#include "ICommand.h"
class Command_MAttack :
	public ICommand
{
	InterchangeObject& intobj;
public:
	Command_MAttack(InterchangeObject& intobj);
	void execute() override;
};
#endif CommandMAttack_H