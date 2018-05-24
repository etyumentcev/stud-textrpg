#ifndef LoadSave_H
#define LoadSave_H
#include <vector>

class LoadSave
{
public:
	LoadSave() = default;
	~LoadSave() = default;
	void save(std::vector<int>);
	std::vector<int> load();
};

#endif LoadSave_H
