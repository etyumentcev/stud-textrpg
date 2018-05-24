#ifndef SettingsStore_H
#define SettingsStore_H
#include <vector>
using namespace std;
class SettingsStore
{
	vector<int> Player;
	vector<int> Enemy;
	vector<int> map;
public:
	SettingsStore();
	~SettingsStore() = default;
	vector<int> Get() const;
	void Set(vector<int>);
};

#endif SettingsStore_H