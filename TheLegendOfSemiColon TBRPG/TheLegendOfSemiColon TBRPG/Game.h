#pragma once
#include <iostream>

class Game {
private:
	bool gameOver;


public:
	void PlayerTurn();
	void EnemyTurn();
	void EnemyAI();
	void Resolve();


};
	