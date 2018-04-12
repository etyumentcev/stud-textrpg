#include "GameObject.h"
#include "View.h"
#include "HUD.h"
#include "ViewImpl.h"
#include <memory>
#include "MapGameField.h"
#include "MapCreator.h"

void GameObject::GameView(View &view)
{
	//HUD* hud = new HUD;
	//Element* el = new Element;
	//hud->Draw(*el);

	//std::shared_ptr<ViewImpl> vi(new ViewImpl);
	//std::shared_ptr<Content> mock1(new Content);
	//std::shared_ptr<HUD> mock2(new HUD);
	auto vi = std::make_unique<ViewImpl>();
	auto mock1 = std::make_unique<Content>();
	auto mock2 = std::make_unique<HUD>();
	vi->Draw(*mock2, *mock1);
}

MapGameField& GameObject::CreateMap()
{
	std::shared_ptr<MapCreator> mapCreator(new MapCreator);
	return mapCreator->getMap();
}
