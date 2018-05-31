#include "Command_MAttack.h"



Command_MAttack::Command_MAttack(InterchangeObject& intobj)
	:intobj(intobj)
{
}

void Command_MAttack::execute()
{
	intobj.makeMagicAttackHero(1);
}
