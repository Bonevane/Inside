#include "Levels.h"


// Randomization stuff for input text and the "check" command text. Is used in all levels
std::string inputQ[6] = { "What is your next move?\n", "What will you do?\n", "What will you do next?\n", "What is your next action?\n", "How do you proceed?\n", "What do you want to do?\n" };
std::string checkText[6] = { "You checked the air. You feel enlightened.\n", "You decide to check...something. You feel like you learnt nothing...\n", "You check the air. Nothing happens.\n", "With great determination, you check the nothingness around you. It feels nice.\n", "You feel inclined to check the air. Nothing happens.\n", "...Nothing happens\n" };
std::string moveFail[6] = { "You cannot move there.\n", "You can't go in that direction.\n", "It seems you can't proceed that way.\n", "Something prevents you from going there.\n", "It seems the way is barred in that direction.\n", "It's not possible to proceed in that direction.\n" };
int choiceQ = 0;
int level = 0;


//Old inputQ. Only here for the "What eerie move do you wish to make?" (It's too funny to remove)
//std::string inputQ[6] = { "What unnerving path do you wish to tread?\n", "What action shall you take?\n", "What unsettling path will you explore?\n", "What eerie move do you wish to make?\n", "How do you proceed?\n", "What is your next action?\n" };

// Location flags (Used to store if player has visited a location before)
bool locationFlags[5][25] =
{
	{ false },
	{ false },
	{ false },
	{ false },
	{ false },
};

//Level 1
bool enemy_1a = true, inserted = false;
int bookCount = 0;

//Level 2
bool enemy_2a = true, enemy_2b = true, enemy_2c = false, locked = true;

//Level 3
bool enemy_3a = true, enemy_3b = true, puzzle = false;


// SAVE FUNCTION LETS GO
int save()
{
	std::ofstream outf{ "save.txt" };

	// If we couldn't open the input file stream for reading
	if (!outf)
	{
		displayTextr("Could not save...\n", 50);
		return 1;
	}

	// Save current value for each (valuable) variable into the save file 

	//1
	outf << std::to_string(level) << "\n";
	
	//2
	if (hasKey)
		outf << "1\n";
	else
		outf << "0\n";
	//3
	if (hasAxe)
		outf << "1\n";
	else
		outf << "0\n";
	//4
	if (hasSketch)
		outf << "1\n";
	else
		outf << "0\n";
	//5
	if (hasBPrint)
		outf << "1\n";
	else
		outf << "0\n";
	//6
	if (hasReport)
		outf << "1\n";
	else
		outf << "0\n";
	//7
	outf << std::to_string(bookCount) << "\n";
	//8
	if (inserted)
		outf << "1\n";
	else
		outf << "0\n";
	//9
	if (enemy_1a)
		outf << "1\n";
	else
		outf << "0\n";
	//10
	if (enemy_2a)
		outf << "1\n";
	else
		outf << "0\n";
	//11
	if (enemy_2b)
		outf << "1\n";
	else
		outf << "0\n";
	//12
	if (enemy_2c)
		outf << "1\n";
	else
		outf << "0\n";
	//13
	if (locked)
		outf << "1\n";
	else
		outf << "0\n";
	//14
	if (puzzle)
		outf << "1\n";
	else
		outf << "0\n";
	//15
	if (hasBook)
		outf << "1\n";
	else
		outf << "0\n";
	//16
	if (enemy_3a)
		outf << "1\n";
	else
		outf << "0\n";
	//17
	if (enemy_3b)
		outf << "1\n";
	else
		outf << "0\n";
	//18
	outf << std::to_string(chances) << "\n";

	outf.close();

	return 0;
}

// Enums for our ease of use
enum values {
	LEVEL = 1,
	KEY,
	AXE,
	SKETCH,
	BPRINT,
	REPORT,
	BCOUNT,
	INSERTED,
	ENEMY1A,
	ENEMY2A,
	ENEMY2B,
	ENEMY2C,
	LOCKED,
	PUZZLE,
	BOOK,
	ENEMY3A,
	ENEMY3B,
	CHANCES
};

// LOAD FUNCTION LETS GO
int load()
{
	int line = 0;
	std::ifstream inf{ "save.txt" };

	// If we couldn't open the input file stream for reading
	if (!inf)
	{
		displayTextr("Uh oh...a save file was not found...\n\n", 50);
		return 1;
	}

	// While there's still stuff left to read
	while (inf)
	{
		// Read stuff from the file and update the in-game variables accordingly
		std::string strInput;
		inf >> strInput;
		line++;
		
		switch (line)
		{
		case LEVEL:
			level = stoi(strInput);
			break;
		case KEY:
			if (stoi(strInput) == 1)
				hasKey = true;
			break;
		case AXE:
			if (stoi(strInput) == 1)
				hasAxe = true;
			break;
		case SKETCH:
			if (stoi(strInput) == 1)
				hasSketch = true;
			break;
		case BPRINT:
			if (stoi(strInput) == 1)
				hasBPrint = true;
			break;
		case REPORT:
			if (stoi(strInput) == 1)
				hasReport = true;
			break;
		case BCOUNT:
			bookCount = stoi(strInput);
			break;
		case INSERTED:
			if (stoi(strInput) == 1)
				inserted = true;
			break;
		case ENEMY1A:
			if (stoi(strInput) == 0)
				enemy_1a = false;
			break;
		case ENEMY2A:
			if (stoi(strInput) == 0)
				enemy_2a = false;
			break;
		case ENEMY2B:
			if (stoi(strInput) == 0)
				enemy_2b = false;
			break;
		case ENEMY2C:
			if (stoi(strInput) == 1)
				enemy_2c = true;
			break;
		case LOCKED:
			if (stoi(strInput) == 0)
				locked = false;
			break;
		case PUZZLE:
			if (stoi(strInput) == 1)
				puzzle = true;
		case BOOK:
			if (stoi(strInput) == 1)
				hasBook = true;
			break;
		case ENEMY3A:
			if (stoi(strInput) == 0)
				enemy_3a = false;
			break;
		case ENEMY3B:
			if (stoi(strInput) == 0)
				enemy_3b = false;
			break;
		case CHANCES:
			chances = stoi(strInput);
			break;
		default:
			break;
		}
	}

	inf.close();
	return 0;
}
