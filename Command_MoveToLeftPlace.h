#ifndef MoveLeftPlace_H
#define MoveLeftPlace_H
#include "ICommand.h"

class Command_MoveToLeftPlace : public ICommand {
	MapGameField& mgf;
public:
	Command_MoveToLeftPlace(MapGameField& mgf);
	void execute() override;
};

#endif MoveLeftPlace_H