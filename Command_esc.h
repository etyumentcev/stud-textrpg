#ifndef CommandESC_H
#define CommandESC_H

#include "ICommand.h"

class Command_esc : public ICommand {
public:
	void execute() override;
};
#endif CommandESC_H