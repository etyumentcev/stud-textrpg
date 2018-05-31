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
	void save(SettingsStore& const ss);
};

#endif LoadSave_H