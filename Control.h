#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <map>
#include "View.h"

#include "InterchangeObject.h"


class Control
{
	InterchangeObject& intObj;
	View& view;
public:
	Control(InterchangeObject& intObj, View& view);
	~Control() = default;
	void ReadKey();
	int ReadCode();
	void GetKeyCommand();
	void PressedKeyTest();
};


#endif Input_H