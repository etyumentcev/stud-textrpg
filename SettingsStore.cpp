#include "SettingsStore.h"
using namespace std;

SettingsStore::SettingsStore()
{
	player.push_back(0);
	player.push_back(0);
	player.push_back(0);
	player.push_back(0);

	enemy.push_back(0);
	enemy.push_back(0);
	enemy.push_back(0);

	map.push_back(0);
	map.push_back(0);
}

vector<int> SettingsStore::Get(int type) const
{
	if (type = 0) return player;
	if (type = 1) return enemy;
	if (type = 2) return map;
}

void SettingsStore::Set(int type, vector<int> v)
{
	if (type = 0) this->player = v;
	if (type = 1) this->enemy = v;
	if (type = 2) this->map = v;
}
