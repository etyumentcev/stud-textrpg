#ifndef DrawOF_H
#define DrawOF_H

#include "Element.h"
#include <string>

class DrawableObjectFirst :
	public Element
{
public:
	DrawableObjectFirst() = default;
	virtual ~DrawableObjectFirst() = default;
	void Draw() override; //todo реализация отрисовки для определенного объекта
	void DrawIcon_(unsigned char(&array)[9][9], short ofs_x, short ofs_y);
	void DrawTextInfo_(std::string msg);
	void Clear_console();
};

#endif DrawOF_H
