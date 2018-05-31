#include "Command_Attack.h"

Command_Attack::Command_Attack(InterchangeObject& intobj)
	: intobj(intobj)
{
}

void Command_Attack::execute()
{
	intobj.makeAttackHero();
}
