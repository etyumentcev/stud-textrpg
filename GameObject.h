#ifndef GameObject_H
#define GameObject_H

#include "Items.h"
#include "View.h"
#include "MapGameField.h"

class GameObject //todo Планируется, как объект для связи остальных объектов
{
public:
	void GameView(View &view);
	MapGameField& CreateMap();
};

#endif	GameObject_H	