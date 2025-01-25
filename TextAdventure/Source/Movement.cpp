#include "Movement.h"

//The function to compute most of the input from the user (except some inputs)
void computeInput(int* x, int* y, int map[][20][20], std::string input, bool* isChoice, int level)
{
	//Initializing location.
	int location = map[level][*y][*x];

	//The main meat of the function
	switch (inputID(input))
	{
	//Movement
	case NORTH:
		if (map[level][*y - 1][*x] <= 0)
			displayText(moveFail[choiceQ], 50);
		else
		{
			*y = *y - 1;
			while (map[level][*y][*x] == 1)
			{
				updateMap(*x, *y);
				*y = *y - 1;
			}
			*isChoice = false;
		}
		break;
	case SOUTH:
		if (map[level][*y + 1][*x] <= 0)
			displayText(moveFail[choiceQ], 50);
		else
		{
			*y = *y + 1;
			while (map[level][*y][*x] == 1)
			{
				updateMap(*x, *y);
				*y = *y + 1;
			}

			*isChoice = false;
		}
		break;
	case EAST:
		if (map[level][*y][*x + 1] <= 0)
			displayText(moveFail[choiceQ], 50);
		else
		{
			*x = *x + 1;
			while (map[level][*y][*x] == 1)
			{
				updateMap(*x, *y);
				*x = *x + 1;
			}
			*isChoice = false;
		}
		break;
	case WEST:
		if (map[level][*y][*x - 1] <= 0)
			displayText(moveFail[choiceQ], 50);
		else
		{
			*x = *x - 1;
			while (map[level][*y][*x] == 1)
			{
				updateMap(*x, *y);
				*x = *x - 1;
			}
			*isChoice = false;
		}
		break;

	//Look [Direction]
	case LOOKNORTH:
		if (directions[level][map[level][*y][*x] - 1].north == "")	displayText("There is nothing to look at.\n", 50);
		else  displayText(directions[level][map[level][*y][*x] - 1].north, 50);
		break;
	case LOOKEAST:
		if (directions[level][map[level][*y][*x] - 1].east == "")	displayText("There is nothing to look at.\n", 50);
		else  displayText(directions[level][map[level][*y][*x] - 1].east, 50);
		break;
	case LOOKSOUTH:
		if (directions[level][map[level][*y][*x] - 1].south == "")	displayText("There is nothing to look at.\n", 50);
		else  displayText(directions[level][map[level][*y][*x] - 1].south, 50);
		break;
	case LOOKWEST:
		if (directions[level][map[level][*y][*x] - 1].west == "")	displayText("There is nothing to look at.\n", 50);
		else  displayText(directions[level][map[level][*y][*x] - 1].west, 50);
		break;

	//Miscellaneous Commands
	case ATTACK:
		if (hasAxe == false)
			displayText("You attack the air. Oh no, nothing happens...\n", 50);
		else
			displayText("You swing the axe at the air. Nothing happens...\n", 50);
		break;
	case EXIT:
		displayText("Thank you for playing ", 70); displayTextr("INSIDE\n", 80);
		exit(0);
		break;
	case ITEMS:
		displayInventory();
		break;
	case CLEAR:
		system("cls");
		*isChoice = false;
		break;
	case MOVE:
		displayText("You move......nowhere.\n", 50);
		break;
	case LOOK:
		displayText("You look at yourself. It feels nice.\n", 50);
		break;
	case STATS:
		displayText("There are no stats to show.\n", 50);
		break;
	case DEFEND:
		displayText("You defend against the air...Nice.\n", 50);
		break;
	case PICK:
		displayText("There is nothing to pick up.\n", 50);
		break;
	case FOCUS:
		displayText("You decide to focus. Your attention span for next command increases...or not.\n", 50);
		break;
	case PLACE:
		displayText("You cannot use anything here.\n", 50);
		break;
	case JUMP:
		displayText("You jumped. Interesting.\n", 50);
		break;
	case HELP:
		help();
		break;
	case DESCRIBE:
		for (int i = 0; i < 5; i++)
			displayText(info[level][location - 1].text[i], 50);
		//displayText(describeText[level][location - 1], 50);
		Sleep(200);
		break;
	case MAP:
		printMap(maps, location, mapSize, level);
		break;
	case CHECK:
	case INTERACT:
		check(location, level);
		break;
	case SAVE:
		if (save() == 0)
			displayTextg("Save Successful...\n", 50);
		break;
	case LOAD:
		displayText("You need to be in the menu to load a save file.\n", 50);
		break;
	case YELL:
		displayText("You yell at the top of your lungs...But nobody came.", 50);
		break;
	case SLEEP:
		displayText("You decide to sleep in the middle of the game...\n", 50);
		for (int i = 0; i < 5; i++) {
			displayText(".", 50); Sleep(100);
		}
		displayText("\nThe guilt of not playing the game properly wakes you up...\n", 50);
		break;
	default:
		displayText("I cannot comprehend that command...\n", 50);
		break;

	}
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


//Function to display the current position of the player
void displayPos(int location, std::string points[][25], int level)
{
	displayText("Current Location:  ", 50);
	displayTextgrey(points[level][location - 1], 50);
}

//Function to display available directions for movement to the player
void displayDirections(int x, int y, int level)
{
	displayText("Available Directions:  ", 50);
	if (maps[level][y - 1][x] > 0)
		displayTextgrey("North  ", 50);
	if (maps[level][y + 1][x] > 0)
		displayTextgrey("South  ", 50);
	if (maps[level][y][x + 1] > 0)
		displayTextgrey("East  ", 50);
	if (maps[level][y][x - 1] > 0)
		displayTextgrey("West  ", 50);
	std::cout << std::endl;
}

//Display the "check" text for the particular location the user is at, if they input "check" or "interact"
void check(int location, int level)
{
	if (checkT[level][location-1] != "")
		displayText(checkT[level][location-1], 50);
	else
		displayText(checkText[choiceQ], 50);
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


//Updating the map to reveal more of the map
void updateMap(int x, int y)
{
	for (int k = 0; k < 5; k++)
	{
		for (int l = 0; l < 5; l++)
		{
			tempMap[y - 2 + k][x - 2 + l] = 1;
		}
	}
}

//Clearing the map (Used at the start of each level)
void clearMap()
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
			tempMap[i][j] = 0;
}

//Printing the map.
void printMap(int map[][20][20], int location, int size[], int level)
{
	for (int i = 0; i < size[level]; i++)
	{
		for (int j = 0; j < size[level]; j++)
		{
			if (map[level][i][j] != location)
			{
				if ((level == 1 && j == 0))	continue;
				else if (map[level][i][j] == 0 && tempMap[i][j] == 1)	std::cout << "\033[1;90m" << "X" << "\033[1;0m";
				else    std::cout << "\033[1;90m" << " " << "\033[1;0m";
			}

			else
				std::cout << "\033[1;31m" << "X" << "\033[1;0m";
			std::cout << " ";
		}
		if ((level == 1 && i >= 15))
			break;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	displayText("You are here:  ", 50); displayTextr("X\n\n", 50);
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// IDs for individual inputs.
// Mostly to consolidate everything and for our ease of use.
int inputID(std::string input)
{
	if (input == "go north" || input == "move north" || input == "north" || input == "go forward" || input == "move forward" || input == "forward" || input == "front")
		return 1;
	else if (input == "go south" || input == "move south" || input == "south" || input == "go back" || input == "move back" || input == "back")
		return 2;
	else if (input == "go east" || input == "move east" || input == "east" || input == "go right" || input == "move right" || input == "right")
		return 3;
	else if (input == "go west" || input == "move west" || input == "west" || input == "go left" || input == "move left" || input == "left")
		return 4;
	else if (input == "look north" || input == "look front" || input == "look forward")
		return 5;
	else if (input == "look east" || input == "look right")
		return 6;
	else if (input == "look south" || input == "look back" || input == "look behind")
		return 7;
	else if (input == "look west" || input == "look left")
		return 8;
	else if (input == "directions" || input == "direction")
		return 9;
	else if (input == "exit")
		return 10;
	else if (input == "clear")
		return 11;
	else if (input == "attack")
		return 12;
	else if (input == "move")
		return 13;
	else if (input == "look")
		return 14;
	else if (input == "describe" || input == "describe area" || input == "describe surroundings")
		return 15;
	else if (input == "map" || input == "show map")
		return 16;
	else if (input == "place" || input == "place book" || input == "use" || input == "use book")
		return 17;
	else if (input == "pick" || input == "pick book" || input == "pick up" || input == "pick key" || input == "take" || input == "take book" || input == "take key")
		return 18;
	else if (input == "interact")
		return 19;
	else if (input == "check")
		return 20;
	else if (input == "jump" || input == "jump off")
		return 21;
	else if (input == "open" || input == "open door" || input == "enter")
		return 22;
	else if (input == "defend" || input == "dodge" || input == "block")
		return 23;
	else if (input == "focus" || input == "charge" || input == "focus attack" || input == "charge attack")
		return 24;
	else if (input == "items" || input == "inventory" || input == "show items" || input == "show inventory")
		return 25;
	else if (input == "help" || input == "info")
		return 26;
	else if (input == "health" || input == "show health" || input == "show stats" || input == "stats" || input == "show health")
		return 27;
	else if (input == "save")
		return 28;
	else if (input == "load")
		return 29;
	else if (input == "yell" || input == "shout")
		return 30;
	else if (input == "sleep")
		return 31;
	else
		return 0;
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Converting the user input to lowercase.
std::string lowercase(std::string input)
{
	int size = input.length();

	for (int i = 0; i < size; i++)
		input[i] = tolower(input[i]);

	return input;
}
