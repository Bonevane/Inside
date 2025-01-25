#include "Memories.h"

// Memory 1 (Unlocked via the sketchbook)
void memory_1()
{
	music_mem1.play();	bgm.play();
	bgm.setVolume(10);	Sleep(300);

	system("cls");

	displayTextgrey("The sun, dipped below the horizon, cast a warm glow over the cliffside...", 70); pause(); system("cls");
	displayTextgrey("I stood there with my canvas perched on the easel, capturing the last moments of daylight...", 70); pause(); system("cls");

	//Adrian
	displayTexti("\"Excuse me. Mind if I share the view?\"", 50); pause(); system("cls");

	displayTextgrey("A stranger stood a few feet away, with a camera slung across his shoulder...", 70); pause(); system("cls");
	
	//Nell
	displayTexti("\"Sure. Help yourself.", 55); Sleep(700); displayTexti(" It's a spectacular view isn't it?\"", 55); pause(); system("cls");

	//Adrian
	displayTexti("\"Yea, i've heard this spot's perfect for capturing the night stars.\"", 50); pause(); system("cls");
	displayTexti("\"Oh, name's Adrian, by the way...\"", 50); pause(); system("cls");
	
	//Nell
	displayTexti("\"Nell.", 55); Sleep(300); displayTexti(" A painter, if you couldn't tell.\"", 55); pause(); system("cls");
	
	//Adrian
	displayTexti("\"Nell...That's a nice name.\"", 50); pause(); system("cls");
	displayTexti("\"Well, i'm a photographer.", 50); Sleep(300); displayTexti(" I was hoping to snag some shots of the stars tonight.\"", 50); pause(); system("cls");
	displayTexti("\"Mind if I set up next to you?\"", 50); pause(); system("cls");

	//Nell
	displayTexti("\"Oh not at all.\"", 45); pause(); system("cls");

	displayTextgrey("I could sense the passion behind his eyes as he spread out his equipment and began setting it up.", 70); pause(); system("cls");

	//Adrian
	displayTexti("\"Ever painted under the stars?\"", 50); pause(); system("cls");

	//Nell
	displayTexti("\"Not really.", 55); Sleep(300); displayTexti(" But the idea of capturing the night sky on canvas has its allure.\"", 55); pause(); system("cls");

	//Adrian
	displayTexti("\"Then I guess we're both chasing something magical tonight...\"", 50); displayTextgrey(", he remarked, his voice carrying the excitement of a shared passion.", 70); pause(); system("cls");

	//Nell
	displayTexti("\"I suppose so.\"", 60); pause(); system("cls");


	displayTextgrey("The night unfolded, stars emerging like scattered diamonds across the vast canvas of the sky.", 65); pause(); system("cls");
	displayTextgrey("Adrian's camera clicked softly, capturing the celestial dance, while I blended colors to recreate the mystique of the night.", 65); pause(); system("cls");

	displayTextgrey("Hours passed, and our distinct art forms merged into a shared experience.", 65); pause(); system("cls");
	displayTextgrey("The cliff, stars, and sea whispers bore witness to the collaboration of a painter and a photographer, bound by a love for the magic in the universe's canvas.", 65); pause(); system("cls");

	displayTextgrey("Each brushstroke echoed the quiet click of Adrian's camera, creating a symphony beneath the vast night sky.", 65); pause(); system("cls");
	displayTextgrey("In the soft dawn glow, as the echoes of our collaboration lingered, I sensed this night, beneath the stars with Adrian, held a special place in the gallery of my heart...", 65); pause(); system("cls");


	// Music STOP
	for (float i = 100; i >= 0; i = i - 1) {
		bgm.setVolume(i-80);
		music_mem1.setVolume(i);
		Sleep(30);
	}
	music_mem1.stop();
	bgm.stop();

	Sleep(1000);
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Thing that plays after the level end
// Just for artistic purposes
void mem_1e()
{
	system("cls");
	if (hasSketch)
	{
		std::cout << "\033[0;3m";
		displayText("\"Even if every star in the night sky fades.", 80); pause(); system("cls");
		displayText("Even if everyone else forgets.", 80); pause(); system("cls");
		displayText("Even if all of this never happened.", 80); pause(); system("cls");
		displayText("I will still remember...\"", 80); 
		std::cout << "\033[0;0m";
	}
	else
	{
		std::cout << "\033[0;3m";
		displayText("It's too late, Nell.", 80); pause(); system("cls");
		displayText("There's nothing we can do anymore...", 80); 
		std::cout << "\033[0;0m";
	}
		
	pause();
	system("cls");

}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Secret Ending (Jumping off the cliff) 
// Included here because a separate file for just 1 ending makes little sense
void ending_1()
{
	system("cls");
	displayTextgrey("Despite thinking twice, you decide to jump off the cliff...", 60); pause(); system("cls");
	displayTextgrey("Time seemed to both stretch and compress, creating a surreal dance with gravity.", 60); pause(); system("cls");
	displayTextgrey("Amidst the descent, you feel a peculiar mix of exhilaration and apprehension, like butterflies fluttering in the pit of one's stomach.", 60); pause(); system("cls");
	displayTextgrey("The sensation of weightlessness painting a canvas of fleeting euphoria.", 60); pause(); system("cls");
	displayTextgrey("Then came the impact, a sudden and jarring meeting of body and ground.", 60); pause(); system("cls");
	displayTextgrey("The world quivered momentarily, resonating with the visceral experience of a decision made manifest.", 60); pause(); system("cls");
	displayTextgrey("A symphony of sensations unfolded, from the visceral crunch to the aftermath of the meeting of earth and form.", 60); pause(); system("cls");
	displayTextgrey("As you lay still, a subtle question tiptoes into your fading consciousness...", 60); pause(); system("cls");
	displayTextgrey("What was it that you wished to accomplish?...", 70); pause();

	credits_bad();	exit(1);
}