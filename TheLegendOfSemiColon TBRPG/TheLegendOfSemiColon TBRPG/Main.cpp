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

const int maxHealth_E = 100;
int enemyEnergy = 50;

bool matchActive;




enum Moves
{
	Atk = 1, sp_Atk, Dodge, Recharge, Heal 
};


void PlayerTurn() 
{
	std::cout << "*****Player***** " << std::endl << "Health - " << playerHealth << std::endl << "Energy - " << playerEnergy << std::endl;
	std::cout << "*****Enemy***** " << std::endl << "Health - " << enemyHealth << std::endl << "Energy - " << enemyEnergy << std::endl;
}

void EnemyTurn()
{
	int choice = EnemyChoice();
}

int EnemyChoice()    //most basic version : decisionmaking AI
{
	int choice = rand() % 5;
	return choice;
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
	while(matchActive)
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

}