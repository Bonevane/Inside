#include "Levels.h"


// NOTE that the level code for all the levels follows a similar pattern.

// It begins with starting the music, and initializing the required variables.

// Followed by the level loop
// - Print the text for players position
// - Ask for input
// - Compute input while checking for events
// - Repeat

// The only difference is in level 2 and 3, which begin with the same location as level 0
// but there's a different function for that, so the level code pattern remains largely the same. 

// We've mentioned the key functions that are used in this level
// but because other levels follow the same pattern, they will remain largely uncommented 


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// The game code for level 0
void level_0(int* level)
{
	system("cls");	clearMap();

	// Music Start
	music_0.play();

	// Variables for Level 0
	int xpos = 4, ypos = 11, location = maps[0][ypos][xpos];
	bool isChoice = false, shadow = true;	std::string userInput;

	// Opening Line
	displayText("Waking up on a cliffside, you feel a cool breeze and the distant sound of crashing waves.\n", 50); Sleep(500);

	while (*level == 0) {

		location = maps[*level][ypos][xpos];

		// Printing the information for the user when they reach a location
		if (isChoice == false)
		{
			if (locationFlags[0][location - 1] == false)
				for (int i = 0; i < 5; i++)
				{
					displayText(info[0][location - 1].text[i], 50);	locationFlags[0][location - 1] = true;	isChoice = true;
				}
			else
			{
				displayText(describeText[0][location - 1], 50);	isChoice = true;
			}
			Sleep(200);
		}
		else
		{
			checkPos_0(location);					updateMap(xpos, ypos);				// Updating Map and checking for events at current location
			displayDirections(xpos, ypos, 0);		displayPos(location, points, 0);	// Displaying current location and available directions
			choiceQ = rand() % 6;					displayTexty(inputQ[choiceQ], 50);	// Displaying question statement
			
			while (std::cin.peek() == '\n') std::cin.ignore();							// Code for getting input from user (Ignoring if they just pressed enter only)
			getline(std::cin, userInput);	userInput = lowercase(userInput);	
			system("cls");

			
			// Level
			// Events

			// Winning condition
			if (location == 6 && (inputID(userInput) == NORTH || inputID(userInput) == OPEN || inputID(userInput) == INTERACT || inputID(userInput) == PLACE))
				if (hasKey == true)
				{
					displayText("You use the key on the house door. It fits perfectly.\n", 50);
					displayText("You decide to enter the house.", 50);
					*level = *level + 1;
					for (float i = 100; i >= 0; i = i - 2) {
						music_0.setVolume(i);
						Sleep(30);
					}
				}
				else
					displayText("The door is locked...\n", 50);


			// Others
			else if (inputID(userInput) == INTERACT || inputID(userInput) == CHECK)
				if (location == 9 && hasKey == false)
				{
					displayText("You check the pile of leaves and find a rusty key. You decided to pick it up.\n", 50);
					hasKey = true;
				}
				else if (location == 10 && shadow)
				{
					displayText("An ominous shadow is standing here.\nIt disappears as soon as you touch it.\n", 50); shadow = false;
				}
				else if (location == 6)
					displayText("You check the window...\nThere's no-one inside.\n", 50);
				else
					check(location, 0);

			// Secret Ending :O
			else if ((inputID(userInput) == JUMP || inputID(userInput) == SOUTH) && location == 11)
			{
				for (float i = 100; i >= 0; i = i - 2)
				{
					music_0.setVolume(i);
					Sleep(20);
				}
				ending_1();
			}

			// If none of the events are valid for the current location, send input to be computed by the computeInput() function
			else
				computeInput(&xpos, &ypos, maps, userInput, &isChoice, 0);

		}
	}
}

//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//

// Unique text events for each level 
// (Mostly hints or enemy encounters)
void checkPos_0(int location)
{
	if (location == 9)
	{
		if (hasKey == false)
			displayText("You see something hidden in the pile of leaves...\n", 50);
	}
	else if (location == 6 && hasKey == true)
	{
		displayText("You feel the weight of the key in your pocket...\n", 50);
	}
}

