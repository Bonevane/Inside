#include "Text.h"


// Function to print text. (Backbone of our game)
void displayText(std::string string, int speed, int volume)
{
	dialogue.setBuffer(buffer);
	dialogue.setVolume((float)volume);

	for (int k = 0; k < string.size(); ++k) {
		std::cout << string[k];
		if (string[k] == ',' || string[k] == '.')	Sleep(100);
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift))
		{
			dialogue.play();	Sleep(speed);
		}
	}
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Incredible technology for.....changing text colour.
void displayTextr(std::string string, int speed)
{
	std::cout << "\033[1;31m";	displayText(string, speed);	 std::cout << "\033[1;0m";
}

void displayTexty(std::string string, int speed)
{
	std::cout << "\033[1;33m";	displayText(string, speed);	 std::cout << "\033[1;0m";
}

void displayTextg(std::string string, int speed)
{
	std::cout << "\033[1;32m";	displayText(string, speed);  std::cout << "\033[1;0m";
}

void displayTextgrey(std::string string, int speed)
{
	std::cout << "\033[1;90m";	displayText(string, speed);  std::cout << "\033[1;0m";
}

void displayTexti(std::string string, int speed)
{
	std::cout << "\033[0;3m";	displayText(string, speed);  std::cout << "\033[0;0m";
}


// Simple pause function.
void pause()
{
	while (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::Backspace))
		Sleep(1);
}
