#pragma once
class Warrior {
private:

	//           ----Statistics----
	const int maxHealth;
	int health;

	const int maxEnergy;
	int energy;

	int accuracy;


	//           ----MovePoints----



public:
	Warrior();
	void coolSaying();

	int getHealth();
	int getEnergy();

	void takeDamage(int);
	void healDamage(int);

};