#ifndef SettingsStore_H
#define SettingsStore_H

#include <vector>
#include <map>

class SettingsStore
{
	std::map < std::string, std::vector<int>* > settings;
public:
	SettingsStore();
	~SettingsStore() = default;
	std::vector<int> Get(std::string) const;
	std::map < std::string, std::vector<int>* > load();
	void in(std::map < std::string, std::vector<int>* >);
	void Set(std::string, std::vector<int>);
};

#endif SettingsStore_H