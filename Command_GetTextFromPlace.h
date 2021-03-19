#ifndef GetText_H
#define GetText_H
#include "ICommand.h"

class Command_GetTextFromPlace : public ICommand {
	MapGameField& mgf;
public:
	Command_GetTextFromPlace(MapGameField& mgf);
	void execute() override;
};

#endif GetText_H