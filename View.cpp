#include "View.h"


View::View()
{
	
}


View::~View()
{
}

void View::GameView(GameField gf)
{
	gf.Draw();
}