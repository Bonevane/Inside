#pragma once
#include "Components.h"

//Function Prototypes for "Movement"
void computeInput(int *x, int *y, int map[][20][20], std::string input, bool *isChoice, int level);
void check(int location, int level);
void displayPos(int location, std::string points[][25], int level);
void displayDirections(int x, int y, int level);
void updateMap(int x, int y);
void clearMap();
void printMap(int map[][20][20], int location, int size[], int level);
int inputID(std::string input);
std::string lowercase(std::string input);

//Enumeration for our ease of use.
enum inputs
{
	NORTH = 1,
	SOUTH,
	EAST,
	WEST,
	LOOKNORTH,
	LOOKEAST,
	LOOKSOUTH,
	LOOKWEST,
	DIRECTIONS,
	EXIT,
	CLEAR,
	ATTACK,
	MOVE,
	LOOK,
	DESCRIBE,
	MAP,
	PLACE,
	PICK,
	INTERACT,
	CHECK,
	JUMP,
	OPEN,
	DEFEND,
	FOCUS,
	ITEMS,
	HELP,
	STATS,
	SAVE,
	LOAD,
	YELL,
	SLEEP
};