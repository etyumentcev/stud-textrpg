#include "DrawableObjectHUD.h"
#include <windows.h>
#include <iostream>
#include "State.h"

unsigned char sprite_h[9][9] = { { 32, 32, 32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 178, 32, 32, 32, 10 },
{ 32, 32 ,206, 178, 178, 178, 206, 32, 10 },
{ 32, 32 ,32, 32, 178, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32, 32, 32, 32, 32, 32, 32, 10 } };

unsigned char sprite_m[9][9] = { { 32, 32, 32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 180 ,180, 180, 180, 32, 32, 32, 10 },
{ 180, 32 ,32, 32, 32, 180, 32, 32, 10 },
{ 180, 32 ,32, 32, 32, 32, 180, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32, 32, 32, 32, 32, 32, 32, 10 } };

unsigned char sprite_t1[9][9] = { { 32, 32, 32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,186, 205, 205, 186, 32, 32, 10 },
{ 32, 32 ,186, 32, 32, 186, 32, 32, 10 },
{ 32, 32 ,186, 32, 32, 186, 32, 32, 10 },
{ 32, 32 ,186, 205, 205, 186, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32, 32, 32, 32, 32, 32, 32, 10 } };

unsigned char sprite_t2[9][9] = { { 32, 32, 32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,207, 207, 207, 207, 32, 32, 10 },
{ 32, 32 ,207, 32, 32, 207, 32, 32, 10 },
{ 32, 32 ,207, 32, 32, 207, 32, 32, 10 },
{ 32, 32 ,207, 207, 207, 207, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 32, 32, 32, 32, 32, 32, 32, 10 } };

unsigned char sprite_t3[9][9] = { { 32, 32, 32, 32, 32, 32, 32, 32, 10 },
{ 32, 32 ,32, 32, 32, 32, 32, 32, 10 },
{ 32, 196 ,196, 196, 196, 196, 196, 32, 10 },
{ 32, 32 ,174, 32, 32, 175, 32, 32, 10 },
{ 32, 32 ,174, 32, 32, 175, 32, 32, 10 },
{ 32, 32 ,174, 32, 32, 175, 32, 32, 10 },
{ 32, 32 ,174, 32, 32, 175, 32, 32, 10 },
{ 32, 196 ,196, 196, 196, 196, 196, 32, 10 },
{ 32, 32, 32, 32, 32, 32, 32, 32, 10 } };

void DrawableObjectHUD::DrawIcon_(unsigned char(&array)[9][9], short ofs_x, short ofs_y)
{
	using namespace std;
	COORD coord;
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = ofs_x;
	coord.Y = ofs_y;
	SetConsoleCursorPosition(oh, coord);

	int i = ofs_y;

	for (auto& rows : array)
	{
		for (auto& el : rows)
		{
			cout << el;
		}
		coord.X = ofs_x;
		coord.Y = ++i;
		SetConsoleCursorPosition(oh, coord);
	}
}

void DrawableObjectHUD::DrawTextInfo_(std::string msg, int text)
{
	std::cout << msg << "  " << text;
}

void DrawableObjectHUD::Clear_console() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}



void DrawableObjectHUD::Draw(State& s)
{
	DrawIcon_(sprite_h, 10, 0);
	DrawTextInfo_("Hero Health: ", s.GetStateHero().at(0) );
	DrawIcon_(sprite_m, 10, 5);
	DrawTextInfo_("Hero Mana: ", s.GetStateHero().at(1));
	DrawIcon_(sprite_t1, 10, 10);
	DrawTextInfo_("Current text string:", 0);


	DrawIcon_(sprite_h, 20, 0);
	DrawTextInfo_("Enemy Health: ", s.GetStateEnemy().at(0));

}