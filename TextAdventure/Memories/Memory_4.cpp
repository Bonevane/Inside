#include "Memories.h"

// Memory 4 (No unlocking pre-requisites. Just plays after ending Level 3)
// Slight differences for different things the user picked up along the way
void memory_4()
{
	system("cls");

	displayTextgrey("If only the hands of time could yield to my desperate pleas...", 70); pause(); system("cls");
	displayTextgrey("If fate would grant me just one more opportunity...", 70); pause(); system("cls");

	displayTextgrey("The intensity of our argument.", 70); pause(); system("cls");
	displayTextgrey("The hurtful words we said...now seem insignificant compared to the brewing uncertainty that lay ahead...", 70); pause(); system("cls");

	phone.play();
	displayTextgrey("...", 70); Sleep(7000); system("cls");

	displayTexti("\"Mark? What's going on?\"", 55); pause(); system("cls");
	
	if ((hasSketch == false && hasBPrint == false) || (hasBPrint == false && !hasReport))
		music_mem4.play();

	displayTexti("\"Nell? Is everything alright?", 45); Sleep(1000); displayTexti(" Have you heard from Adrian?\"", 45); pause(); system("cls");

	displayTexti("\"No...Not after he left...", 55); Sleep(700); displayTexti("Why?\"", 55);  pause(); system("cls");

	displayTexti("\"He called me a few minutes ago...", 45); Sleep(700); displayTexti("sounded distressed about something.\"", 45); pause(); system("cls");
	displayTexti("\"I heard a weird screech and the call cut off...\"", 45); pause(); system("cls");
	displayTexti("\"He's not picking up the call anymore...\"", 45); pause(); system("cls");

	displayTextgrey("If only...I could", 70); pause(); system("cls");
	displayTextgrey("If only...", 70); pause(); system("cls");

	displayTexti("\"I'll try calling him again.", 45); Sleep(700); displayTexti(" Just wait a moment.\"", 45); pause(); system("cls");
	displayTexti("\"I ' l l  c a l l  y o u  b a c k...\"", 45); pause(); system("cls");

	displayTextgrey("If only I had stopped him then...", 70); pause(); system("cls");


	// If the player just ignored all the in-game items...
	// They get this...Just to let them know that they should pay more attention perhaps.

	if ((hasSketch == false && hasBPrint == false) || (hasBPrint == false && !hasReport))
	{
		displayTextr("It's my fault.", 70); pause(); system("cls");
		displayTextr("I let him go.", 70); pause(); system("cls");
		displayTextr("I pushed him away.", 70); pause(); system("cls");
		displayTextr("I let my pride overshadow compassion.", 70); pause(); system("cls");
		displayTextr("It's my fault.", 70); pause(); system("cls");

		std::cout << "\033[1;31m";
		for (int i = 0; i < 1000; i++)
		{
			std::cout << "It's all my fault. It's all my fault. It's all my fault. It's all my fault. It's all my fault." << std::endl; Sleep(4);
		}
		std::cout << "\033[1;0m";	music_mem4.stop();
	}

	system("cls");	Sleep(2000);
}