#include "InterchangeObject.h"

using namespace std;

InterchangeObject::InterchangeObject(HeroPlayer& hp, EnemyHero& ep, SettingsStore& ss)
	:hp(hp), ep(ep), ss(ss)
{
	hp.setState(ss.Get("player"));
	ep.setState(ss.Get("enemy"));
}

InterchangeObject::~InterchangeObject()
{
	ss.Set("player", hp.getState());
	ss.Set("enemy", ep.getState());
}

void InterchangeObject::makeAttackHero()
{
	vector<int> v = ep.getState();
	v.at(0) = v.at(0) - hp.getState().at(1);
	ep.setState(v);
}

void InterchangeObject::makeMagicAttackHero(int)
{
	vector<int> v_enemy = ep.getState();
	vector<int> v_hero = hp.getState();
	v_hero.at(3) = v_hero.at(3) - 10;
	v_enemy.at(0) = v_enemy.at(0) - v_hero.at(2);
	ep.setState(v_enemy);
	hp.setState(v_hero);
}

void InterchangeObject::makeAttackHeroEnemy()
{
	vector<int> v_enemy = ep.getState();
	vector<int> v_hero = hp.getState();
	v_hero.at(0) = v_hero.at(0) - v_enemy.at(1);
	ep.setState(v_enemy);
	hp.setState(v_hero);
}

void InterchangeObject::makeMagicAttackHeroEnemy(int)
{
	vector<int> v_enemy = ep.getState();
	vector<int> v_hero = hp.getState();
	v_hero.at(0) = v_hero.at(0) - v_enemy.at(2);
	ep.setState(v_enemy);
	hp.setState(v_hero);
}

std::vector<int> InterchangeObject::GetStateHero()
{
	return hp.getState();
}
std::vector<int> InterchangeObject::GetStateEnemy()
{
	return ep.getState();
}