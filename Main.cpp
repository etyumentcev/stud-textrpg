#include "Main.h"
#include "GameObject.h"
int main(int argc, char* argv[])
{
	//todo �������� ��������, ��������� ���������
	auto go = new GameObject;
	auto gameMap = go->CreateMap();
	View* view = new View(0);
	go->GameView(*view);
}