#include "HUD.h"
#include "Content.h"
#include "ViewImpl.h"

ViewImpl::ViewImpl()
{
}


ViewImpl::~ViewImpl()
{
}

void ViewImpl::Draw(HUD hud, Content content)
{
	Element* mock = new Element();
	hud.Draw(mock); // элементы интерфейса
	content.Draw(); // содержание (текст)
}