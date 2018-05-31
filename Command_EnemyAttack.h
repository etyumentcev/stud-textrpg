#ifndef CommandEAttack_H
#define CommandEAttack_H
#include "ICommand.h"


class Command_EnemyAttack : public ICommand {
	InterchangeObject& intobj;
public:
	Command_EnemyAttack(InterchangeObject& intobj);
	void execute() override;
};

#endif CommandEAttack_H