#include "Memories.h"

// Memory 3 (Unlocked via the medical reports)
void memory_3()
{
	music_mem3.play();	system("cls");

	displayTextgrey("Standing at the precipice of our dreams...", 70); pause(); system("cls");
	displayTextgrey("The moonlight bathed the scene in a melancholic glow as we confronted the harsh reality of this world...", 70); pause(); system("cls");

	displayTexti("\"Nell, I know this is hard.", 50); Sleep(700); displayTexti(" But I think it's important that we keep the house.\"", 50); pause(); system("cls");

	displayTexti("\"Adrian...We already talked about this.", 55); Sleep(700); displayTexti(" You must realize by now that selling the house is the only way!\"", 55); pause(); system("cls");

	displayTexti("\"Nell, we can't do that.", 50); Sleep(700); displayTexti(" This place is your dream.", 50); Sleep(700); displayTexti(" I can't take that away from you.\"", 50); pause(); system("cls");

	displayTexti("\"I know that!", 55); Sleep(700); displayTexti(" But dreams can't save you...", 55); Sleep(700); displayTexti("We're running out of time.\"", 55); pause(); system("cls");

	displayTexti("\"There has to be another way, Nell.\"", 50); pause(); system("cls");
	displayTexti("\"Trust me...", 50); Sleep(700); displayTexti("We'll find a way out of this...\"", 50); pause(); system("cls");

	displayTexti("\"We've searched enough already...\"", 55); pause(); system("cls");
	displayTexti("\"There's no other way.", 55); Sleep(700); displayTexti(" I can't watch you suffer anymore.\"", 55); pause(); system("cls");

	displayTexti("\"So what?", 50); Sleep(700); displayTexti(" You're just going to erase everything we've built?\"", 50); pause(); system("cls");
	displayTexti("\"Everything we've been through?\"", 50); pause(); system("cls");

	displayTexti("\"I don't want to erase anything, Adrian.\"", 55); pause(); system("cls");
	displayTexti("\"But we can't live in this fairy tale while reality crumbles around us!\"", 55); pause(); system("cls");

	displayTexti("\"But this place meant everything to you!\"", 50); pause(); system("cls");

	displayTexti("\"I KNOW!\"", 55); pause(); system("cls");
	displayTexti("\"I know...\"", 55); pause(); system("cls");
	displayTexti("\"But we have to make sacrifices to survive, Adrian.", 55); Sleep(700); displayTexti(" Why can't you see that?\"", 55); pause(); system("cls");

	displayTextgrey("The cliffside that we once adored, turned into a silhouette of its former self.", 70); pause(); system("cls");

	displayTexti("\"You're willing to throw away our dreams for the money?\"", 50); pause(); system("cls");

	displayTexti("\"I'm willing to do whatever it takes to save you!\"", 55); pause(); system("cls");
	displayTexti("\"But you're so blinded by this place that you can't even see the truth...\"", 55); pause(); system("cls");

	displayTexti("\"If that's how it is...", 50); Sleep(700); displayTexti("then maybe I should just leave...\"", 50); pause(); system("cls");
	displayTexti("\"Maybe then you can sell the damn house and save yourself from the burden of taking care of me.\"", 50); pause(); system("cls");

	displayTexti("\"Maybe you should!\"", 55); pause(); system("cls");
	displayTexti("\"Maybe this house is better off without someone who's so unwilling to fight for their own life.\"", 55); pause(); system("cls");

	displayTextgrey("I saw him leave.", 70); pause(); system("cls");
	displayTextgrey("I held the power to stop him.", 70); pause(); system("cls");
	displayTextgrey("Yet, ", 70); Sleep(700); displayTextgrey("I couldn't...", 50); pause(); system("cls");
	displayTextgrey("I stood there alone, amidst the empty cliffside.", 70); pause(); system("cls");
	displayTextgrey("Surrounded by the shattered remnants of a dream that once held so much promise...", 70); pause(); system("cls");

	// Music STOPPU
	for (float i = 100; i >= 0; i = i - 1) {
		music_mem3.setVolume(i);
		Sleep(30);
	}
	music_mem3.stop();
}