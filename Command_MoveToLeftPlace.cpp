#include "Command_MoveToLeftPlace.h"

Command_MoveToLeftPlace::Command_MoveToLeftPlace(MapGameField & mgf)
	:mgf(mgf)
{
}

void Command_MoveToLeftPlace::execute()
{
	mgf.nextPlace(1);
}
