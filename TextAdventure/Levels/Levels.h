#pragma once
#include "../Source/Components.h"

// Struct to store directional text data (with location ID for our ease)
struct lookText {
	std::string north;
	std::string south;
	std::string east;
	std::string west;
	int location;
};

// Struct to store location descriptions (with location ID for our ease)
struct text {
	std::string text[5];
	int location;
};

// Others
extern std::string inputQ[6];
extern std::string checkText[6];
extern std::string moveFail[6];
extern int choiceQ;
extern int level;

// General text and map related stuff
extern int maps[5][20][20];
extern int tempMap[20][20];
extern text info[][25];
extern lookText directions[][25];
extern std::string describeText[][25];
extern std::string points[][25];
extern bool locationFlags[][25];
extern int mapSize[];
extern std::string checkT[5][25];

// Saving and Loading!
int save();
int load();



//Level 0
void level_0(int* level);
void checkPos_0(int location);



//Level 1
void level_1(int* level);
void checkPos_1(int *location);

extern int bookCount;
extern bool inserted;
extern bool enemy_1a;



//Level 2
int safe();
void level_2pre();
void level_2(int* level);
void checkPos_2(int *location, int x, int y);

extern bool enemy_2a;
extern bool enemy_2b;
extern bool enemy_2c;
extern bool locked;



//Level 3
void level_3pre();
void level_3(int* level);
void checkPos_3(int location, int x, int y);
int puzzle1();
extern bool puzzle;
extern bool mus3;

extern bool enemy_3a;
extern bool enemy_3b;


//Level 4
void level_4(int* level);
void checkPos_4(int location);