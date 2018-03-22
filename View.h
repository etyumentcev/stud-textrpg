#ifndef VIEW_H
#define VIEW_H
#include "GameField.h"

class View //todo Отображение игрового поля
{
public:
	View();
	~View();
	void GameView(GameField gf); // Отрисовка
};
#endif /VIEW_H