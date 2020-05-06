#pragma once
class BasePlayer
{
protected:
	float life;

public:

	BasePlayer();
	BasePlayer(float custom_life);
	~BasePlayer();

	void RecieveDamage(float damage);
	void ApplyDamage(BasePlayer* punter, float damage);
	float getLife();

};