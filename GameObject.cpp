#include "GameObject.h"
#include "View.h"
#include "HUD.h"
#include "ViewImpl.h"
#include <memory>
#include "MapGameField.h"
#include "MapCreator.h"

void GameObject::GameView(View &view)
{
	auto vi = std::make_unique<ViewImpl>();
	auto mock1 = std::make_unique<Content>();
	auto mock2 = std::make_unique<HUD>();
	vi->Draw(*mock2, *mock1);
}

MapGameField& GameObject::CreateMap()
{
	std::unique_ptr<MapCreator> mapCreator(new MapCreator);
	return mapCreator->getMap();
}