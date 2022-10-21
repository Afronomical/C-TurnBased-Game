#include <iostream>
#include <string>
#include "Warrior.h"

void PlayerTurn();
bool WinCheck();

//Create Player
Warrior Player;


//Enemy
Warrior Enemy;



bool WinCheck()
{
	
	if(Player.getHealth() == 0 || Enemy.getHealth() == 0)
	{
		return false;
	}
	else if (Player.getHealth() > 0 && Enemy.getHealth() > 0)
	{
		PlayerTurn();
	}
}

void EnemyTurn()
{
	int choice = 0;
	//choice= EnemyChoice();
	
	WinCheck();
}

void PlayerTurn() 
{
	std::cout << "*****Player***** " << std::endl << "Health - " << Player.getHealth() << std::endl << "Energy - " << Player.getEnergy() << std::endl;
	std::cout << "*****Enemy***** " << std::endl << "Health - " << Enemy.getHealth() << std::endl << "Energy - " << Enemy.getEnergy() << std::endl;

	std::string chooses;
	
	int Choice;
	std::cin>> Choice;

	switch(Choice)
	{
		case 1: 
			std::cout << "Damage \n";

			int dmg;

			std::cin >> dmg;
			Player.takeDamage(dmg);
			PlayerTurn();

			break;
	
		case 2:
			std::cout << "it again \n";
			PlayerTurn();
			break;

		case 3:
			std::cout << "Heal \n";

			std::cin >> dmg;
			Player.healDamage(dmg);
			PlayerTurn();
			break;
	}

	EnemyTurn();
}

int EnemyChoice()    //most basic version : decisionmaking AI
{
	int firstChoice = rand() % 5;
	return 0;
}


void Attack()
{

}


void Gameplayer()
{
	PlayerTurn();
	EnemyTurn();
	
}
int main() 
{

	

	
	/*while(matchActive)
	{
		Gameplayer();
		if(playerEnergy > enemyHealth)
		{
			//Player Wins
		}
		else if (playerHealth < enemyHealth)
		{
			//Player Loses
		}
		else 
		{
			// Draw
		}
	}
*/

	PlayerTurn();
	WinCheck();
}