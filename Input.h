#ifndef Input_H
#define Input_H

#include <Windows.h>
#include <conio.h>
#include <cstdio>

class Input
{
public:
	Input() = default;
	~Input() = default;
	int PressedKey();
	void PressedKeyTest();
}
#endif Input_H
