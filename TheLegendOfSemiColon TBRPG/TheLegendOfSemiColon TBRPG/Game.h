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
	void Turn(Warrior, Warrior, int);
	void PlayerTurn();
	void EnemyTurn();
	int EnemyAI();
	void Resolve();


};
	