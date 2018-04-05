#ifndef SettingsStore_H
#define SettingsStore_H

class SettingsStore //todo классы игры игрока противника будут вызывать методы настроек?
{
public:
	SettingsStore(); // Вызов методов класса загрузки настроек
	~SettingsStore(); // Вызов методов класса сохранения настроек
};

class SettingsPlayer : SettingsStore{

};

class SettingsEnemy : SettingsStore{

};

class SettingsGame : SettingsStore{

};

#endif SettingsStore_H