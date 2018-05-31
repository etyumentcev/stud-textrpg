#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <map>

#include "InterchangeObject.h"

class Control
{
public:
	Control(InterchangeObject& intObj); // ?
	~Control() = default;
	void GetKeyCommand();
	void PressedKeyTest();
};


#endif Input_H