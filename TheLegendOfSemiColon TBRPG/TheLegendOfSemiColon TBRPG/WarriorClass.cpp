#include <iostream>
#include "Warrior.h"

Warrior::Warrior() : maxHealth{ 100 }, maxEnergy{ 50 }, accuracy{ 0 }, energy{ 50 }, health{ 100 }, rechargeRate{ 4 }, spAtk{ false }, healedThisTurn{ false }, accumulatedDamageThisTurn{ 0 } {}

//Class for player
	void Warrior::coolSaying() {
		std::cout << health << " " << energy << " " << accuracy << std::endl;
}



	//            **Read variables**
	int Warrior::GetHealth() {

		int hp = health;

		return hp;
	}
	int Warrior::GetEnergy() {

		int hp = energy;

		return hp;
	}
		


	//            *****Combat Math*****
	void Warrior::TakeDamage(int dmg) {

		health -= dmg;

		if (health < 0)		
		{ 
			health = 0;
		}

	}

	void Warrior::HealDamage(int heals) {

		health += heals;
		if (health > maxHealth) { health = maxHealth; }
	}

	void Warrior::AddAccuracy(int acc) {
		
		accuracy += acc;
	}



	//            ****Combat Actions****


	int Warrior::calcAccuracy(int hitChance) {

		
		/// If the random percentage is more than the accuracy then the players attack misses
		

		if (rand() % 100 + 0 <= hitChance) {   //The attack hits
			return 0;
		}

		else {  //The attack is mitigated 
			return 1;
		}
	
	}


	void Warrior::CalcAttackDamage(bool specialAttacking) {
		int atkDamageToDeal;

		

		if (!specialAttacking) {

			energy -= 5;
			atkDamageToDeal = rand() % 11 + 1;
			//atkDamageToDeal *= calcAccuracy(80);
			accumulatedDamageThisTurn = atkDamageToDeal;

		}
		else if (specialAttacking) {

			energy -= 20;
			atkDamageToDeal = rand() % 21 + 5;
			atkDamageToDeal *= calcAccuracy(50);
			accumulatedDamageThisTurn = atkDamageToDeal;
		}


			
	}
	int Warrior::DamageDealt() {

		return accumulatedDamageThisTurn;
	}


	void Warrior::Recharge(Warrior Foe) {
		rechargeRate *= 4;

		Foe.accuracy += 10;


	}

	void Warrior::Dodge(Warrior Foe) {   //reduces enemy's chance of hitting

		Foe.accuracy -= 30;       
		rechargeRate /= 2;

	}

	void Warrior::Heal() {

		if (energy >= 10 && !healedThisTurn && health != maxHealth) {
			
			if (maxHealth - health < energy/2)
			{
				energy -= maxHealth - health;
				health = maxHealth;
			}
			else {

				health += energy / 2;
				energy /= 2;
				
			}


		}
		else {
			std::cout << "HEALING FAILED\n\n\n"<< std::endl;
		}

		healedThisTurn = true;
		
		
	}

	void Warrior::ResetStats() {
		accuracy = 0;

		energy += rechargeRate;
		if (energy < maxEnergy) {
			energy = maxEnergy;
		}

		rechargeRate = 4;
		healedThisTurn = false;

		std::cout << " stats reset" << std::endl;
	}



