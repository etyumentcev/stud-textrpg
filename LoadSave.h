#ifndef LoadSave_H
#define LoadSave_H
#include <vector>
#include "SettingsStore.h"

class LoadSave
{
public:
	LoadSave() = default;
	~LoadSave() = default;
	void save(SettingsStore&);
	std::vector<int> load(SettingsStore&);
};

#endif LoadSave_H