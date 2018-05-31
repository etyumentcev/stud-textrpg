#ifndef CommandEMAttack_H
#define CommandEMAttack_H

#include "ICommand.h"
class Command_EnemyMAttack :
	public ICommand
{
	InterchangeObject& intobj;
public:
	Command_EnemyMAttack(InterchangeObject& intobj);
	void execute() override;
};

#endif CommandEMAttack_H