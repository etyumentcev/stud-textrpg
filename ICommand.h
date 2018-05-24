#ifndef ICommand_H
#define ICommand_H

class ICommand
{
public:
	virtual void execute() = 0;
	virtual ~ICommand() = 0;
};

#endif ICommand_H