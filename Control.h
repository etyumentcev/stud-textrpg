#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>
#include <map>
#include "View.h"
#include "InterchangeObject.h"
#include "MapGameField.h"
#include "LoadSave.h"


class Control
{
	InterchangeObject& intObj;
	View& view;
	MapGameField& mgf;
	LoadSave& ls;
public:
	Control(InterchangeObject& intObj, View& view, MapGameField& mgf, LoadSave& ls);
	~Control() = default;
	void ReadKey();
	int ReadCode();
	void GetKeyCommand();
	void PressedKeyTest();
};

#endif Input_H