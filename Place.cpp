#include "Place.h"
#include <string>
using namespace std;
Place::Place()
{
	it = strings_.begin();
	end = strings_.end();
}

std::string Place::GetNextPhrase()
{
	if (it != end)
	{
		return *(it++);
	}
	return *(it);
}
