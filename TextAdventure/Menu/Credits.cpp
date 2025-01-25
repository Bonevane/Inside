#include "Menu.h"

// Good ending :)
void credits_good()
{
	int delay = 1800;

	music_credg.play();	system("cls");

	displayTextr("INSIDE.", 100); Sleep(1000);
	std::cout << std::endl << std::endl << std::endl;
	displayText("By Rafay Ahmad & Danish Munib.", 80); Sleep(delay); system("cls");

	displayTexty("Lead Programmer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Game Designers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Level Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Puzzle Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Technical Artist", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Lead Artist", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Project Manager", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Lead Writer & Narrative Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Dialogue Writer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Level Descriptions", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Memories", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Last Encounter", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Movement & Combat", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTexty("Impractical Deadline Imposer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Music", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Signalis", 80, 0); Sleep(delay); system("cls");

	displayTexty("Composers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Cicada Sirens & 1000 Eyes", 80, 0); Sleep(delay); system("cls");

	displayTexty("QA Lead", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");


	displayTexty("QA Testers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Wajih-Ul-Hassan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Sikandar Hayat Khan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Saif Ali Khan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Abdul Moiz", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ahmed Afzal", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ahmed Zuhair", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Saarim Ejaz", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Abdul Rafay Farooq", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ali Ahsan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Hassan Shakil", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Taha Ali", 80, 0); Sleep(delay); system("cls");

	// SPECIAL THANKS :)))

	displayTextr("Special Thanks", 100); Sleep(2000); system("cls");

	displayTexty("Attack System (Idea)", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Noman Enterprises (Noman & Anas Co)", 80, 0); Sleep(delay); system("cls");

	displayTexty("Narrative Help", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Wajih-Ul-Hassan", 80, 0); Sleep(delay); system("cls");

	displayTexty("Emotional Support", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTexty("Influenced By", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Zork", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Signalis", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("To the Moon", 80, 0); Sleep(delay); system("cls");

	displayTexty("Library Used", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("SFML (Simple & Fast Multimedia Library)", 80, 0); Sleep(delay); system("cls");

	displayText("And a special thanks to those who supported us during this project.", 100); Sleep(delay); std::cout << std::endl << std::endl;
	displayText("And to you as the player for taking the time to finish this game.", 100); Sleep(delay); system("cls");

	displayTexty("Copyright (c) 2023 RMun. All Rights Reserved.", 100); Sleep(delay); std::cout << std::endl;

	for (float i = 100; i >= 0; i--)
	{
		music_credg.setVolume(i);
		Sleep(20);
	} music_credg.stop();


	exit(1);

}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Bad ending D:
// Better song choice in my humble opinion.
void credits_bad()
{
	int delay = 1800;

	music_credb.play();	system("cls");

	displayText("...As the echoes of choices fade.", 70, 0); Sleep(600); std::cout << std::endl << std::endl;
	displayText("The tapestry of fate unravels.", 70, 0); Sleep(600); std::cout << std::endl << std::endl;
	displayText("Thus, it reveals a tragic melody that lingers in the silence of your journey...", 70, 0); Sleep(800); system("cls");

	system("cls");

	displayTextr("INSIDE.", 100); Sleep(1000);	std::cout << std::endl << std::endl << std::endl;
	displayText("By Rafay Ahmad & Danish Munib.", 80); Sleep(delay); system("cls");

	displayTextr("Lead Programmer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Game Designers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Level Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Puzzle Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Technical Artist", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Lead Artist", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Project Manager", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Lead Writer & Narrative Designer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Dialogue Writer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Level Descriptions", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(delay); system("cls");

	displayTextr("Memories", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Last Encounter", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Movement & Combat", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Impractical Deadline Imposer", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");

	displayTextr("Music", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Signalis", 80, 0); Sleep(delay); system("cls");

	displayTextr("Composers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Cicada Sirens & 1000 Eyes", 80, 0); Sleep(delay); system("cls");

	displayTextr("QA Lead", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Rafay Ahmad", 80, 0); Sleep(delay); system("cls");


	displayTextr("QA Testers", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Danish Munib", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Wajih-Ul-Hassan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Sikandar Hayat Khan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Saif Ali Khan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Abdul Moiz", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ahmed Afzal", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ahmed Zuhair", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Saarim Ejaz", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Abdul Rafay Farooq", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Ali Ahsan", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Hassan Shakil", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Taha Ali", 80, 0); Sleep(delay); system("cls");

	displayTextr("Influenced By", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("Zork", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("Signalis", 80, 0); Sleep(200); std::cout << std::endl;
	displayText("To the Moon", 80, 0); Sleep(delay); system("cls");

	displayTextr("Library Used", 100); Sleep(700); std::cout << std::endl << std::endl;
	displayText("SFML (Simple & Fast Multimedia Library)", 80, 0); Sleep(delay); system("cls");
	
	displayTextr("Copyright (c) 2023 RMun. All Rights Reserved.", 100); Sleep(delay); system("cls");

	// Music STOP
	for (float i = 100; i >= 0; i--)
	{
		music_credb.setVolume(i);
		Sleep(20);
	} music_credb.stop();

	displayText("Even in shadows, there's always a glimmer of hope.", 90); Sleep(delay); std::cout << std::endl << std::endl;
	displayText("Your journey doesn't end here...a brighter path awaits.", 90); Sleep(delay); std::cout << std::endl << std::endl;
	displayText("Will you then shape a different destiny?", 90); Sleep(delay); std::cout << std::endl << std::endl;

	exit(1);
}