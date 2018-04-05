#ifndef VIEW_H
#define VIEW_H

class View //todo Отображение игрового поля
{
public:
	View();
	~View();
	virtual void Draw() = 0;
};
#endif VIEW_H