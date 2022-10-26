#include <iostream>
#include "Warrior.h"

Warrior::Warrior() : maxHealth{ 100 }, maxEnergy{ 50 }, accuracy{ 0 }, energy{ 50 }, health{ 100 }, rechargeRate{4} {}

//Class for player
	void Warrior::coolSaying() {
		std::cout << health << " " << energy << " " << accuracy << std::endl;
}



	//Read important variables (Health, Energy)
	int Warrior::getHealth() {

		int hp = health;

		return hp;
	}
	int Warrior::getEnergy() {

		int hp = energy;

		return hp;
	}

	//            *****Combat Math*****
	void Warrior::takeDamage(int dmg) {

		health -= dmg;

		if (health < 0)		{ health = 0; }

	}

	void Warrior::healDamage(int heals) {

		health += heals;
		if (health > maxHealth) { health = maxHealth; }
	}

	//            ****Combat Actions****
	void Warrior::attack() {

	}



