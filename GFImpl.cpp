#include "GFImpl.h"
#include "HUD.h"
#include "Content.h"

GFImpl::GFImpl()
{
}


GFImpl::~GFImpl()
{
}

void GFImpl::Draw(HUD hud, Content content)
{
	hud.Draw(); // �������� ����������
	content.Draw(); // ���������� (�����)
}