#ifndef State_H
#define State_H

class State
{
public:
	State();
	void TakeDamage(int Sender);
	void TakeMgcDamage(int Sender);
	int GetState(int Sender);
	void SetState();
	virtual ~State();
};
#endif State_H