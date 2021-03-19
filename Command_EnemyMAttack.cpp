#include "Command_EnemyMAttack.h"

Command_EnemyMAttack::Command_EnemyMAttack(InterchangeObject& intobj)
	:intobj(intobj)
{
}


void Command_EnemyMAttack::execute()
{
	intobj.makeMagicAttackHeroEnemy(1);
}
