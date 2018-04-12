#ifndef VIEW_H
#define VIEW_H

class View //todo Отображение игрового поля
{
public:
	View() = default;
	View(int state);
	virtual  ~View() = default;
	//virtual void Draw() = 0;
};
#endif VIEW_H