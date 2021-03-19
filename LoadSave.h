#ifndef LoadSave_H
#define LoadSave_H
#include <vector>
#include "SettingsStore.h"

class LoadSave
{
	SettingsStore& ss;
public:
	LoadSave(SettingsStore&);
	~LoadSave() = default;
	std::vector<std::string> GetLinesFromFile();
	void save(SettingsStore& ss);
};

#endif LoadSave_H