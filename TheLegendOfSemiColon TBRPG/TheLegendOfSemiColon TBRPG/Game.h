#pragma once
#include <iostream>
#include "Warrior.h"

class Game {
private:
	bool gameOver;


public:

	Warrior Player;
	Warrior Enemy;

	Game();
	void PlayGame();
	void PlayerTurn();
	void EnemyTurn();
	void EnemyAI();
	void Resolve();


};
	