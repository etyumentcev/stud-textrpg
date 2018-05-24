#ifndef HeroPlayer_H
#define HeroPlayer_H
#include <vector>

class HeroPlayer
{
	int healthLevel;
	int basicAttackDamage;
	int magicDamage;
	int manaLevel;
public:
	HeroPlayer(int, int, int, int);
	virtual ~HeroPlayer() = default;

	void setState(std::vector<int>);
	std::vector<int> getState(std::vector<int>) const;
};

#endif HeroPlayer_H