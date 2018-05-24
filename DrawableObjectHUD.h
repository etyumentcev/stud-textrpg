#ifndef DrawOF_H
#define DrawOF_H

#include "View.h"
#include <string>
#include "State.h"

class DrawableObjectHUD :
	public View
{
public:
	DrawableObjectHUD() = default;
	virtual ~DrawableObjectHUD() = default;
	void Draw(State& s) override;
	void DrawIcon_(unsigned char(&array)[9][9], short ofs_x, short ofs_y);
	void DrawTextInfo_(std::string msg, int);
	void Clear_console();
};

#endif DrawOF_H
