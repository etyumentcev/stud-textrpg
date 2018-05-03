#include "SettingsStore.h"

void SettingsPlayer::Set(vector<int> pls)
{
	Health = pls.at(0);
	Manna = pls.at(1);
}

vector<int> SettingsPlayer::Get()
{
	return { Health, Manna };
}

void SettingsEnemy::Set(vector<int> ens)
{
	Health = ens.at(0);
}

vector<int> SettingsEnemy::Get()
{
	return { Health };
}

void SettingsGame::Set(vector<int> sg)
{
	currentPlaceOnMap = sg.at(0);
	currentTextStringShow = sg.at(1);
}

vector<int> SettingsGame::Get()
{
	return { currentPlaceOnMap, currentTextStringShow };
}
