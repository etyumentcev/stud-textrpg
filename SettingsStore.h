#ifndef SettingsStore_H
#define SettingsStore_H

class SettingsStore //todo ������ ���� ������ ���������� ����� �������� ������ ��������?
{
public:
	SettingsStore(); // ����� ������� ������ �������� ��������
	~SettingsStore(); // ����� ������� ������ ���������� ��������
};

class SettingsPlayer : SettingsStore{

};

class SettingsEnemy : SettingsStore{

};

class SettingsGame : SettingsStore{

};

#endif SettingsStore_H