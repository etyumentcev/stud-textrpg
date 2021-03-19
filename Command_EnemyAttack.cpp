#include "Command_EnemyAttack.h"

Command_EnemyAttack::Command_EnemyAttack(InterchangeObject& intobj)
	: intobj(intobj)
{
}

void Command_EnemyAttack::execute()
{
	intobj.makeAttackHeroEnemy();
}
