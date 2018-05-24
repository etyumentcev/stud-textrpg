#include "Command_esc.h"
#include <corecrt_terminate.h>

void Command_esc::execute()
{
	terminate();
}
