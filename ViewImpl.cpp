#include "HUD.h"
#include "Content.h"
#include "ViewImpl.h"
#include "Element.h"
#include "DrawableObjectFirst.h"


void ViewImpl::Draw(HUD hud, Content content)
{
	Element* t = new DrawableObjectFirst();
	t->Draw();
	//hud.Draw(*t);
 	//content.DrawText();
}

