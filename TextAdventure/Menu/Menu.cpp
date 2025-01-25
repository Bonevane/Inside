#include "Menu.h"

// Le Menu Fonctione

void menu(bool *isRunning)
{
	std::string input = "";		music_menu.play();

	displayText("Welcome to ", 40); Sleep(70); displayTextr("INSIDE", 40); Sleep(300); std::cout << std::endl << std::endl;

	displayTextr("INSIDE", 40); Sleep(300); displayText(" is best experienced in ", 40); displayTextgrey("Fullscreen", 40); displayText(" with ", 40); displayTextgrey("Sound.\n", 40); Sleep(300);
	displayText("Press ", 40); displayTexty("[F11]", 40); displayText(" to enter Fullscreen Mode.", 40); std::cout << std::endl << std::endl;
	
	displayText("You may use the following commands to navigate the world:\n\n", 40); Sleep(300);

	displayTextgrey("-  look ", 40); Sleep(70); displayTexty("[direction]\n", 40); 
	displayTextgrey("-  move ", 40); Sleep(70); displayTexty("[direction]\n", 40);
	displayTextgrey("-  interact / check\n", 40); Sleep(70);
	displayTextgrey("-  inventory\n\n", 40); Sleep(70);

	displayText("For additional commands, type ", 40); displayTextgrey("\"info\".\n", 40); Sleep(300);
	displayText("You can fast forward the text using ", 40); Sleep(70); displayTexty("[Right Shift]\n\n", 40); Sleep(300);
	
	displayText("You may exit the game anytime by typing ", 40); displayTextgrey("\"exit\".\n", 40); Sleep(300);
	

	while (1)
	{
		displayText("\nTo Begin, type ", 40); displayTextgrey("\"start\"", 40); std::cout << ":  ";
		while (std::cin.peek() == '\n') std::cin.ignore();
		getline(std::cin, input);	input = lowercase(input);

		// Beloved if-else ladder...
		if (input == "start")
		{
			system("cls");

			for (float i = 100; i >= 0; i = i - 2)
			{
				music_menu.setVolume(i);
				Sleep(40);
			}
			Sleep(1000);
			*isRunning = true;
			break;
		}
		else if (input == "help" || input == "info")
			help();
		else if (input == "load")
		{
			if (load() == 0)
			{
				displayTextg("\nLoad Successful...", 50); Sleep(1000); break;
			}
		}
		else if (input == "save")
		{
			displayTextr("Cannot create a save file from the menu...\n", 50);
		}
		else if (input == "exit")
		{
			displayText("Thank you for playing ", 70); displayTextr("INSIDE.\n", 70);
			exit(0);
		}
		else if (input == "credits")
		{
			for (float i = 100; i >= 0; i = i - 2)
			{
				music_menu.setVolume(i);
				Sleep(40);
			}
			credits_good();
		}
			
		else
			displayText("I'm afraid I do not recognize that command...\n", 50);
	}

	music_menu.stop();
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Function if the user enters "Help"
// All the help one could need (i think)
void help()
{
	system("cls");

	displayTexty("Movement Commands:\n\n", 50); Sleep(300);

	displayText("- \"move\"", 50); displayTexty("  [direction]\n", 40);
	displayTexty("- [direction]\n\n", 40);
	displayText("- \"look\"", 50); displayTexty("  [direction]\n", 40);
	Sleep(300); std::cout << std::endl;

	displayTexty("[direction] ", 40); displayTextgrey("can be \"north\", \"south\", \"east\", \"west\".\n", 50); Sleep(300); std::cout << std::endl;

	displayTexty("General Commands:\n\n", 50); Sleep(300);
	
	displayText("- \"check / interact\":\t", 50); displayTextgrey("Checks or interacts with objects in the game world.\n", 50);
	displayText("- \"items / inventory\":\t", 50); displayTextgrey("Displays your inventory.\n", 50);
	displayText("- \"help / info\":\t", 50); displayTextgrey("Prints out help...Oh you already used this command...\n", 50);
	displayText("- \"save / load\":\t", 50); displayTextgrey("Saves or loads your progress.\n", 50);
	displayText("- \"describe\":\t\t", 50); displayTextgrey("Describes your environment once more.\n", 50);
	displayText("- \"map\":\t\t", 50); displayTextgrey("Shows a map of the game world.\n", 50);
	displayText("- \"pick\":\t\t", 50); displayTextgrey("Picks up a key object.\n", 50);
	displayText("- \"place\":\t\t", 50); displayTextgrey("Places a key object.\n", 50);
	displayText("- \"open\":\t\t", 50); displayTextgrey("Opens a door.\n", 50);
	displayText("- \"exit\":\t\t", 50); displayTextgrey("Exits the game.\n", 50);
	Sleep(300); std::cout << std::endl;

	displayTexty("Combat Commands:\n\n", 50); Sleep(300);

	displayText("- \"attack\":\t", 50); displayTextgrey("Deals a normal attack.\n", 50);
	displayText("- \"defend\":\t", 50); displayTextgrey("Defends against opponent's attack with a low chance of healing you.\n", 50);
	displayText("- \"focus\":\t", 50); displayTextgrey("Charges your next attack to deal 2x damage to the opponent.\n", 50);
	displayText("- \"stats\":\t", 50); displayTextgrey("Shows you the health of your opponent and yourself.\n", 50);
	std::cout << std::endl;

	displayText("You can use ", 50); displayTexty("[Right Shift] ", 40); displayText("to fast forward text.\n\n", 50); Sleep(300);

	displayText("In key moments like this one, ", 50); displayTexty("[Backspace]", 40); displayText(" can be used to continue the dialogue...", 50); pause(); system("cls");
}