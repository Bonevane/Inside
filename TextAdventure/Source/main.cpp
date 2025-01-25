#include "Components.h"

int main()
{
	bool isRunning = true;

	//Initializing all the music
	initMusic();
	
	//Clearing the system because the console does weird things if not cleared...
	//I don't understand the logic behind it but escape sequences don't work properly for the menu otherwise.
	system("cls");

	//Menu
	menu(&isRunning);

	
	//Game Loop
	while (isRunning) 
	{
		//Cases for individual levels
		switch (level) 
		{
		case 0:	
			prologue();
			level_0(&level);
			break;
		case 1:
			level_1(&level);
			mem_1e();
			break;
		case 2:
			level_2(&level);
			mem_2e();
			break;
		case 3:
			level_3(&level);
			memory_4();
			break;
		case 4:
			level_4(&level);
			break;
		default:
			displayTextr("An error occured and the program had to exit. Please try again.\n", 40);
			exit(1);
		}
	}

	return 0;
}