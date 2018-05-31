#include "ICommand.h"
#include "InterchangeObject.h"


class Command_Attack : public ICommand {
	InterchangeObject& intobj;
	

public:
	Command_Attack(InterchangeObject& intobj);
	void execute() override;
};