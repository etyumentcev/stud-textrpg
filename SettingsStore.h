#pragma once
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