#ifndef Element_H
#define Element_H

class Element
{
public:
	Element();
	virtual ~Element();
	virtual void Draw() = 0; //todo ���������� � DrawableObject...
};

#endif Element_H