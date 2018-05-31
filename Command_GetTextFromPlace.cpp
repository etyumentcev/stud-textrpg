#include "Command_GetTextFromPlace.h"

Command_GetTextFromPlace::Command_GetTextFromPlace(MapGameField& mgf)
	: mgf(mgf)
{
}

void Command_GetTextFromPlace::execute()
{
	mgf.getPlace(1).GetNextPhrase();
}
