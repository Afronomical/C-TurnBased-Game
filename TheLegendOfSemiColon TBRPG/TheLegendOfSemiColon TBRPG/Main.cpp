#include <iostream>
#include <string>
#include "Warrior.h"




//Create Player
Warrior Player;


//Enemy
Warrior Enemy;





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
}

int EnemyChoice()    //most basic version : decisionmaking AI
{
	int firstChoice = rand() % 5;
	return 0;
}
void EnemyTurn()
{
	int choice = 0;
	choice= EnemyChoice();
	

}


void calcAttack()
{

}

void WinCheck()
{
	
	if(Player.getHealth() == 0 || Enemy.getHealth() == 0)
	{
		return;
	}
	else if (Player.getHealth() > 0 && Enemy.getHealth() > 0)
	{
		PlayerTurn();
	}
}





void Gameplayer()
{
	PlayerTurn();
	EnemyTurn();
	WinCheck();
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
}