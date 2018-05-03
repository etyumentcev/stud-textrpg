#include "Input.h"

int Input::PressedKey()
{
	int lastKeyCode;
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
		lastKeyCode = reinterpret_cast<int>(_getch);
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
				lastKeyCode = reinterpret_cast<int>(_getch);
			}
		}
	}
}
