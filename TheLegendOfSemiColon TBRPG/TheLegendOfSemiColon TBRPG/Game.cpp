#include <iostream>
#include "Game.h"


Game::Game() : gameOver{false} {}


void Game::PlayGame() {
	
	while(Player.getHealth() > 0 && Enemy.getHealth() > 0) {

		PlayerTurn();
		EnemyTurn();
		Resolve();

	}

}

void Game::PlayerTurn()
{
	std::cout << "*****Player***** " << std::endl << "Health - " << Player.getHealth() << std::endl << "Energy - " << Player.getEnergy() << std::endl;
	std::cout << "*****Enemy***** " << std::endl << "Health - " << Enemy.getHealth() << std::endl << "Energy - " << Enemy.getEnergy() << std::endl;

	std::string chooses;

	int Choice;
	std::cin >> Choice;

	switch (Choice)
	{
	case 1:
		std::cout << "Damage \n";

		//Player.takeDamage(dmg);
		

		break;

	case 2:
		
		break;

	case 3:
		
		
		
		break;
	}

	
}


void Game::EnemyAI() {

}

void Game::EnemyTurn() {
}

void Game::Resolve() {

}