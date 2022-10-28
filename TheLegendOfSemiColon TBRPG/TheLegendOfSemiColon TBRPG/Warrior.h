#pragma once
class Warrior {
private:

	//           ----Statistics----
	const int maxHealth;
	int health;

	const int maxEnergy;
	int energy;
	int rechargeRate;

	int accuracy;
	

	bool spAtk;

	bool healedThisTurn;


	//           ----MovePoints----



public:
	Warrior();
	void coolSaying();

	int GetHealth();
	int GetEnergy();

	void TakeDamage(int);
	void HealDamage(int);
	void AddAccuracy(int);

	int Attack(bool);
	int calcAccuracy(int);
	
	void Recharge(Warrior);
	void Dodge(Warrior);
	void Heal();

	void ResetStats();
};