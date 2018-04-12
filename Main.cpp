#include "Main.h"
#include "GameObject.h"
int main(int argc, char* argv[])
{
	//todo «агрузка настроек, установка состо€ний
	auto go = new GameObject;
	View* view = new View(0);
	go->GameView(*view);
}
