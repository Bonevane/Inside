#include "Memories.h"

// Memory 2 (Unlocked via the house blueprints)
void memory_2()
{
	music_mem2.play();	bgm.play();
	bgm.setVolume(10);	Sleep(300);

	system("cls");

	displayTextgrey("The evening sun melted into the sea, casting a golden farewell...", 70); pause(); system("cls");
	displayTextgrey("We sat on a blanket spread over the grassy knoll, the remnants of our wedding celebration echoed far in the distance.", 70); pause(); system("cls");

	displayTexti("\"Can you believe it's finally done?\"", 55); pause(); system("cls");

	displayTexti("\"Feels surreal.", 50); Sleep(700); displayTexti(" In a good way, though.\"", 50); pause(); system("cls");

	displayTextgrey("We clinked our glasses together, toasting to our newly cemented union...", 70); pause(); system("cls");

	displayTexti("\"Remember when we used to come here just to escape?\"", 55); pause(); system("cls");

	displayTexti("\"Yeah, our little sanctuary.", 50); Sleep(700); displayTexti(" We've come a long way since then.\"", 50); pause(); system("cls");
	displayTexti("\"You know...I never thought I'd find someone like you.\"", 50); pause(); system("cls");

	displayTexti("\"I hope that's a good thing.\"", 55); pause(); system("cls");

	displayTexti("\"Oh just the best.\"", 50); pause(); system("cls");

	displayTextgrey("I saw his eyes light up with a glint of enthusiasm...", 70); pause(); system("cls");

	displayTexti("\"I was thinking...\"", 50); pause(); system("cls");

	displayTexti("\"Hmm?\"", 55); pause(); system("cls");

	displayTexti("\"What if we built something here?", 50); Sleep(700); displayTexti(" Something...to remember.\"", 50); pause(); system("cls");

	displayTexti("\"You mean a sanctuary for ourselves?\"", 55); pause(); system("cls");

	displayTexti("\"Exactly! Our home, on the edge of everything.", 50); Sleep(700); displayTexti(" Our little place of eternity.\"", 50); pause(); system("cls");

	displayTextgrey("I let out a small chuckle.", 70); pause(); system("cls");

	displayTexti("\"Haha...I knew you'd say that.\"", 55); pause(); system("cls");

	displayTexti("\"No good?\"", 50); pause(); system("cls");

	displayTexti("\"Oh no, I love it.", 55); Sleep(700); displayTexti(" Our own haven.\"", 55); pause(); system("cls");

	displayTexti("\"Exactly my thoughts...\"", 50); pause(); system("cls");

	displayTextgrey("...", 70); pause(); system("cls");

	displayTexti("\"Hey.\"", 55); pause(); system("cls");

	displayTexti("\"Yeah?\"", 50); pause(); system("cls");

	displayTexti("\"You think we'll ever get tired of this view?\"", 55); pause(); system("cls");

	displayTexti("\"Never.", 50); Sleep(700); displayTexti(" It's like our personal masterpiece.\"", 50); pause(); system("cls");

	displayTexti("\"But life's going to change now, isn't it?\"", 55); pause(); system("cls");

	displayTexti("\"I suppose so...", 50); Sleep(700); displayTexti("in the best possible way.\"", 50); pause(); system("cls");

	displayTextgrey("We clasped our hands, a silent promise for the adventures ahead...", 70); pause(); system("cls");

	displayTexti("\"To us, and a lifetime of these moments.\"", 50); pause(); system("cls");

	displayTexti("\"To us...\"", 55); pause(); system("cls");


	// Music STOP
	for (float i = 100; i >= 0; i = i - 1) {
		bgm.setVolume(i - 80);
		music_mem2.setVolume(i);
		Sleep(30);
	}
	music_mem2.stop();
	bgm.stop();

	Sleep(1000);
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Thing that plays after the level end
// Just for artistic purposes
void mem_2e()
{
	system("cls");
	if (hasBPrint)
	{
		std::cout << "\033[0;3m";
		displayText("\"I'll never forget.", 80); pause(); system("cls");
		displayText("I'll carry your heart with me...", 80); Sleep(400); displayText("always.\"", 80); pause(); system("cls");
		std::cout << "\033[0;0m";
	}
	else
	{
		std::cout << "\033[0;3m";
		displayText("If that's how it is...", 80); pause(); system("cls");
		displayText("Maybe this house would be better off without someone so unwilling to fight for their own life.", 80);
		std::cout << "\033[0;0m";
	}

	pause();
	system("cls");
}