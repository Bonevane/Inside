#pragma once
#include "../Source/Components.h"

void Puzzle_1();

struct enem {
	std::string name;
	int damage;
	int heal;
	int health;
	bool defeat = false;
};

int enemy(int difficulty = 0);
int attack(bool *pbuff);
bool defend(int delay = 30);
void enemyAttack(bool* defend, bool* buff);

//extern std::string enemies[10];
extern int name, playerHealth, playerDMG, playerHeal, MAX_HEALTH, chances;
extern enem enemies[];

void boss();

//Simple Lock and Key

//Smth like a library section with books(?)

//Smth like a deciphering thinger

//Smth like switches of some sort(?)