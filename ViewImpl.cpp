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

	hud.Draw(hud); // элементы интерфейса
	content.Draw(content); // содержание (текст)
}