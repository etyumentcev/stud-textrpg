#ifndef MoveRightPlace_H
#define MoveRightPlace_H
#include "ICommand.h"

class Command_MoveToRightPlace : public ICommand {
	MapGameField& mgf;
public:
	Command_MoveToRightPlace(MapGameField& mgf);
	void execute() override;
};

#endif MoveRightPlace_H
