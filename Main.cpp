#include "Main.h"
#include "GameObject.h"
int main(int argc, char* argv[])
{
	//todo Загрузка настроек, установка состояний
	auto go = new GameObject;
	auto gameMap = go->CreateMap();
	auto view = new View(0);
	go->GameView(*view);
}