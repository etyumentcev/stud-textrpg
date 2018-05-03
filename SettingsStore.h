#ifndef SettingsStore_H
#define SettingsStore_H
#include <vector>
using namespace std;
class SettingsStore
{
public:
	SettingsStore() = default;
	~SettingsStore() = default;
	virtual vector<int> Get() = 0;
	virtual void Set(vector<int>) = 0;
};

class SettingsPlayer : SettingsStore{
	int Health;
	int Manna;
public:
	void Set(vector<int>) override;
	vector<int> Get() override;
};

class SettingsEnemy : SettingsStore{
	int Health;
public:
	void Set(vector<int>) override;
	vector<int> Get() override;
};

class SettingsGame : SettingsStore{
	int currentPlaceOnMap;
	int currentTextStringShow;
public:
	void Set(vector<int>) override;
	vector<int> Get() override;
};

#endif SettingsStore_H