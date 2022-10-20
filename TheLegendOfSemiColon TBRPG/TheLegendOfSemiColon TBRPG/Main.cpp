#include <iostream>
#include <string>


//Player
const int maxHealth_P = 100;
int playerHealth = 100;

const int maxEnergy_P = 50;
int playerEnergy = 50;


//Enemy
const int maxHealth_E = 100;
int enemyHealth = 100;

const int maxEnergy_E = 100;
int enemyEnergy = 50;

bool matchActive;







void PlayerTurn() 
{
	std::cout << "*****Player***** " << std::endl << "Health - " << playerHealth << std::endl << "Energy - " << playerEnergy << std::endl;
	std::cout << "*****Enemy***** " << std::endl << "Health - " << enemyHealth << std::endl << "Energy - " << enemyEnergy << std::endl;

	std::string chooses;
	
	int Choice;
	std::cin>> Choice;

	switch(Choice)
	{
	case 1: 
		std::cout << "it works \n";
		break;
	
	case 2:
		std::cout << "it again \n";
		PlayerTurn();
		break;

	case 3:
		std::cout << "no \n";
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
	
	if(playerHealth == 0|| enemyHealth == 0)
	{
		return;
	}
	else if (playerHealth > 0 && enemyHealth > 0)
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