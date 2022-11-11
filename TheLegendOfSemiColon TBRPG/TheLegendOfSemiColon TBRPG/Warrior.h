#pragma once
#include <string>
class Warrior {
private:

	//           ----Statistics----
	const int maxHealth;
	int health;

	const std::string Name;

	const int maxEnergy;
	int energy;
	int rechargeRate;

	int accuracy;
	int accumulatedDamageThisTurn;

	bool spAtk;

	bool healedThisTurn;


	//           ----MovePoints----



public:
	Warrior();
	void coolSaying();
	void SetObjectName();

	int GetHealth();
	int GetEnergy();

	void TakeDamage(int);
	void HealDamage(int);
	void AddAccuracy(int);

	void CalcAttackDamage(bool);
	int DamageDealt();
	int calcAccuracy(int);
	
	void Recharge(Warrior);
	void Dodge(Warrior);
	void Heal();

	void ResetStats();
	
};