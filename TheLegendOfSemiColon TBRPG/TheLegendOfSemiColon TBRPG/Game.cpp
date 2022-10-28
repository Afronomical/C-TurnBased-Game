#include <iostream>
#include "Game.h"
#include <cctype>


Game::Game() : gameOver{false} {}


void Game::PlayGame() {
	
	while(Player.GetHealth() > 0 && Enemy.GetHealth() > 0) {

		PlayerTurn();
		EnemyTurn();
		Resolve();

	}

}

void Game::PlayerTurn()
{
	std::cout << "*****Player***** " << std::endl << "Health - " << Player.GetHealth() << std::endl << "Energy - " << Player.GetEnergy()  << "\n" <<std::endl;
	std::cout << "*****Enemy***** " << std::endl << "Health - " << Enemy.GetHealth() << std::endl << "Energy - " << Enemy.GetEnergy() << std::endl;
	
	std::cout << "\n Choose your action \n 1.Attack \n 2.SpAttack \n 3.Dodge \n 4.Re-Charge \n 5.Heal " << std::endl;
	enum actions
	{
		Attack = 1, SpAttack, Dodge, ReCharge, Heal
	};

	actions choice;

	
	int input;
	std::cin >> input;
	choice = (actions)input;
	
											//Attempt to use an Enum
	switch (choice)
	{
	case actions::Attack: 

		Player.Attack(false);
		
		std::cout << "You attacked \n";

		break;

	case actions::SpAttack:
		
		Player.Attack(true);
		std::cout << "You used a special move \n";

		break;

	case actions::Dodge:
		
		Player.Dodge(Enemy);
		std::cout << "You prepared to dodge \n";
		
		break;

	case actions::ReCharge:


		break;

	case actions::Heal:

		std::cout << "You healed \n";
		Player.Heal();
		PlayerTurn();

		break;

	}

	return;
}


int Game::EnemyAI() {

	int firstChoice = rand() % 5;
	return firstChoice;
}

void Game::EnemyTurn() {
	std::cout << "EnemyTurn" << std::endl;
}

void Game::Resolve() {

	

	
	Player.TakeDamage(20);
	
	Player.ResetStats();
	Enemy.ResetStats();
	
	std::cout << "\n \n\n\n\n";
}