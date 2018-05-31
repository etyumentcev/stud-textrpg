#include "Control.h"
#include "RequestHundler.h"

void Control::GetKeyCommand()
{

	/*
	27 esc
	13 enter
	32 space
	8 backspc
	119 w
	115 s
	97 a
	d 100

	72 up
	80 down
	75 left
	77 right
	*/

	RequestHundler* handler = new RequestHundler();
	while (true){
		handler->HandleRequest(_getch());
	}
	//todo ��������� ����� map
}

void Control::PressedKeyTest()
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


