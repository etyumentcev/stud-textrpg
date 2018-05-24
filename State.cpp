#include "State.h"


State::State()
{
	heroPlayer.push_back(0);
	heroPlayer.push_back(0);
	heroPlayer.push_back(0);

	enemyPlayer.push_back(0);
	enemyPlayer.push_back(0);
	enemyPlayer.push_back(0);
}

std::vector<int> State::GetStateHero()
{
	return heroPlayer;
}

std::vector<int> State::GetStateEnemy()
{
	return enemyPlayer;
}
