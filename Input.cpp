#include "Input.h"

int Input::PressedKey()
{
	int lastKeyCode;
	/*
	27 esc
	13 enter
	32 space
	8 backspc
	*/
	int countdown = 0;
	char b;
	while (countdown++ <= 1000) {
		if (b = _kbhit())
			break;
		Sleep(1);
	}
	if (b != 0)
	{
		printf("The key was %d\n", _getch());
		lastKeyCode = _getch();
	}
	return lastKeyCode;
}

void Input::PressedKeyTest()
{
	{
		int lastKeyCode;
		int countdown = 0;
		char b;
		while (true) {
			while (countdown++ <= 1000) {
				if (b = _kbhit())
					break;
				Sleep(1);
			}
			if (b != 0)
			{
				printf("The key was %d\n", _getch());
				lastKeyCode = _getch();
			}
		}
	}
}
