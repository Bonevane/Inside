#include "Memories.h"

// Small bit before the game begins
void prologue()
{
	//I think we forgot this existed. But it's cool so it stays where it is.
	// No idea what to call if in sound.cpp so it just stays here i guess. (whoosing sound.)
	sf::Music music;
	music.openFromFile("Music/mus_cymbal.ogg");
	
	std::cout << "\033[0;90m\033[0;3m";
	displayText("Hey Nell.", 90); Sleep(1000); system("cls");
	displayText("It's me, Mark.", 90); Sleep(1000); system("cls");
	displayText("I heard about Adrian...", 90); Sleep(1000); system("cls");
	displayText("Nell...I just wanted to check in on you.", 90); Sleep(1000); system("cls");
	displayText("How are you holding up?", 90); Sleep(2000); system("cls");
	displayText("I know it's been tough, Nell.", 90); Sleep(2000); system("cls");
	displayText("No, it was not your fault.", 80); Sleep(1000); system("cls");
	displayText("You can't blame yourself for it.", 90); Sleep(1000); system("cls");
	displayText("Hey Nell? Are you still there?", 100); Sleep(2000); system("cls");
	displayText("Are you there Nell?", 100); Sleep(1000); system("cls");
	displayText("Nell?", 150); Sleep(1000); system("cls");
	
	// Dramatic. Wowsers.

	music.play();
	displayText("N", 100); Sleep(1000); std::cout << "   ";
	displayText("E", 100); Sleep(1000); std::cout << "   ";
	displayText("L", 100); Sleep(1000); std::cout << "   ";
	displayText("L", 100); Sleep(1000); std::cout << "   ";
	displayText("?", 100); Sleep(800); std::cout << "   ";
	system("cls");
	std::cout << "\033[0;0m";
	Sleep(1500);
}