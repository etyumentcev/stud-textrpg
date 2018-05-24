#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <map>

class Input
{
public:
	Input() = default;
	~Input() = default;
	int PressedKey();
	void PressedKeyTest();
};
class ICommand
{
public:
	void execute();
};
class Input_esc : public ICommand {
public:
	void execute() {
		
	}
};
class Request
{
	std::map<int, ICommand*> commands;
public:
	void Handle(int id)
	{
		ICommand* command = commands[id];
		command->execute();
	}
};

#endif Input_H