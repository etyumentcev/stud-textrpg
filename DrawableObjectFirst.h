#pragma once
#include "Element.h"
class DrawableObjectFirst :
	public Element
{
public:
	DrawableObjectFirst();
	virtual ~DrawableObjectFirst();
	void Draw() override; //todo ���������� ��������� ��� ����������� �������
	void DrawIcon_(unsigned char(&array)[9][9], short ofs_x, short ofs_y);
	void Clear_console();
};

