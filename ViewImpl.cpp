#include "HUD.h"
#include "Content.h"
#include "ViewImpl.h"
#include "Element.h"
#include "DrawableObjectFirst.h"

ViewImpl::ViewImpl()
{
}


ViewImpl::~ViewImpl()
{
}

void ViewImpl::Draw(HUD hud, Content content)
{
	Element* t = new DrawableObjectFirst();
	hud.Draw(*t);
 	content.DrawText();
}