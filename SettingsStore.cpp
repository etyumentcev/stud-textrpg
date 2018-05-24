#include "SettingsStore.h"

SettingsStore::SettingsStore()
{
	Player.push_back(0);
	Player.push_back(0);
	Player.push_back(0);
	Player.push_back(0);

	Enemy.push_back(0);
	Enemy.push_back(0);

	map.push_back(0);
	map.push_back(0);
}

vector<int> SettingsStore::Get() const
{

}

void SettingsStore::Set(vector<int>)
{

}
