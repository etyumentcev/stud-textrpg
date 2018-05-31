#include "SettingsStore.h"
using namespace std;

std::map<std::string, std::vector<int>*> SettingsStore::load()
{
	return settings;
}

void SettingsStore::in(const std::map<std::string, std::vector<int>*> in)
{
	this->settings = in;
}

SettingsStore::SettingsStore()
{
	// player - 4 
	// enemy -3
	// map (place and string position) - 2
	settings["player"] = new vector<int>;
	settings["enemy"] = new vector<int>;
	settings["map"] = new vector<int>;
}

vector<int> SettingsStore::Get(string s) const
{
	return *settings.at(s);
}

void SettingsStore::Set(string s, vector<int> v)
{
	this->settings[s] = &v;
}