#pragma once
#include <vector>

class State
{
	std::vector<int> heroPlayer;
	std::vector<int> enemyPlayer;
public:
	State();
	std::vector<int> GetStateHero();
	std::vector<int> GetStateEnemy();
	virtual ~State() = default;
};

