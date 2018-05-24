#include "GameObject.h"
#include "View.h"
#include "HUD.h"
#include "ViewImpl.h"
#include <memory>
#include "MapGameField.h"
#include "MapCreator.h"

void GameObject::GameView(View &view)
{
	auto vi = new ViewImpl;
	auto mock1 = new Content;
	auto mock2 = new HUD;

	vi->Draw(*mock2, *mock1);
}

MapGameField& GameObject::CreateMap()
{
	auto mapCreator = new MapCreator;
	return mapCreator->getMap();
}