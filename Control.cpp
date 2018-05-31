#include "Control.h"
#include "RequestHundler.h"
#include <chrono>
#include <thread>
#include <iostream>
using namespace std;

Control::Control(InterchangeObject& intObj, View& view, MapGameField& mgf, LoadSave& ls, SettingsStore& ss)
	: intObj(intObj), view(view), mgf(mgf), ls(ls), ss(ss) {}
void Control::ReadKey()
{
	int key = ReadCode();
	RequestHundler* handler = new RequestHundler(intObj, view, mgf, ls, ss);
	try
	{
		handler->HandleRequest(key);
	}
	catch (std::invalid_argument)
	{
		std::cout << "Invalid key code";
	}
	
}
int Control::ReadCode()
{	
	if (_kbhit()) {
		return _getch();
	}
	return 0;

}
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
	while (true) {
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		ReadCode();
	}
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


