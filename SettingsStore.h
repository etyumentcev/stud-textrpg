#ifndef SettingsStore_H
#define SettingsStore_H

#include <vector>

class SettingsStore
{
	std::vector<int> player;
	std::vector<int> enemy;
	std::vector<int> map;
public:
	SettingsStore();
	~SettingsStore() = default;
	std::vector<int> Get(int type) const;
	void Set(int type, std::vector<int>);
};

#endif SettingsStore_H