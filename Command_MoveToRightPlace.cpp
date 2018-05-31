#include "Command_MoveToRightPlace.h"

Command_MoveToRightPlace::Command_MoveToRightPlace(MapGameField& mgf)
	:mgf(mgf)
{
}

void Command_MoveToRightPlace::execute()
{
	mgf.nextPlace(2);
}
