#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <map>

class Control
{
public:
	Control() = default;
	~Control() = default;
	void GetKeyCommand();
	void PressedKeyTest();
};


#endif Input_H