#ifndef DrawOF_H
#define DrawOF_H

#include "View.h"
#include <string>
#include "InterchangeObject.h"

class DrawableObjectHUD :
	public View
{
public:
	DrawableObjectHUD() = default;
	virtual ~DrawableObjectHUD() = default;
	void Draw(InterchangeObject& s) override;
	void DrawIcon_(unsigned char(&array)[9][9], short ofs_x, short ofs_y);
	void DrawTextInfo_(std::string msg, std::string text = "");
	void Clear_console();
};

#endif DrawOF_H
