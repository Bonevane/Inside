#include "Enemy.h"


// Final encounter!
// Branching paths depending on what you choose.
void boss()
{
	std::string choice; int correct = 0;
	system("cls");

	displayTextgrey("...", 70); pause(); system("cls");
	displayTextr("I t ' s  a l l  m y  f a u l t . . .", 70); pause(); system("cls");
	displayTextr("I  k i l l e d  h i m . . .", 70); pause(); system("cls");
	displayTextr("I  s e n t  h i m  t o  h i s  d e a t h . . .", 70); pause(); system("cls");
	displayTextr("D o n ' t  y o u  a g r e e ?", 70); Sleep(200); displayTextr("  N e l l ?", 70); pause(); std::cout << std::endl << std::endl;

	displayText("1. Yes\n", 50);
	displayText("2. No\n", 50);

	// Choice 1 (Just for the sake of making the player realize there's choices)
	while (1)
	{
		choice = "";
		displayTexty("Your choice:  ", 50);
		getline(std::cin, choice);
		choice = lowercase(choice);

		if (choice == "1" || choice == "2" || choice == "yes" || choice == "no")
			break;
	}

	system("cls");

	if (choice == "1" || choice == "yes")
	{
		displayTextr("I  s e e . . .", 70); pause(); system("cls");
		displayTextr("I t  s e e m s  y o u  u n d e r s t a n d  w h a t  y o u ' v e  d o n e . . .", 70); pause(); system("cls");
		displayTextr("I  c a n ' t  f o r g i v e  y o u  f o r  i t  e i t h e r  y o u  k n o w . . .", 100); pause(); system("cls");
	}
	else
	{
		displayTextr("I  s e e . . .", 70); pause(); system("cls");
		displayTextr("Y o u ' r e  s t i l l  t o o  n a i v e  t o  u n d e r s t a n d  t h e  w e i g h t  o f  y o u r  a c t i o n s . . .", 70); pause(); system("cls");
		displayTextr("I  s u p p o s e  i t ' s  f o r  t h e  b e s t . . .", 70); pause(); system("cls");
		displayTextr("O r  p e r h a p s . . .", 70); pause(); system("cls");
		displayTextr("P e r h a p s  y o u  a r e  s t i l l  r u n n i n g  a w a y  f r o m  t h e  t r u t h . . .", 70); pause(); system("cls");
	}

	displayTextr("B u t  I  u n d e r s t a n d . . .", 70); pause(); system("cls");
	displayTextr("I ' m  t h e  s a m e  a s  y o u ,  y o u  r e a l i z e ?", 70); pause(); system("cls");
	displayTextr("I  t h o u g h t  I  w o u l d ' v e  f o r g o t t e n  a n d  m o v e d  o n . . .", 70); pause(); system("cls");
	displayTextr("B u t  h e r e  w e  a r e . . .", 70); Sleep(400); displayTextr("S t i l l  r e m i n i s c i n g  o v e r  t h e  p a s t . . .", 70); pause(); system("cls");
	displayTextr("W e l l . . .", 70); Sleep(800); displayTextr(" d o  y o u  s t i l l  r e m e m b e r ?", 50); pause(); system("cls");
	displayTextr("D o  y o u  s t i l l  r e m e m b e r  w h a t  m a d e  t h a t  e v e n i n g  s o  s p e c i a l ?", 70); pause(); std::cout << std::endl << std::endl;


	displayText("1. The stars\n", 50);
	displayText("2. The cliff\n", 50);
	displayText("3. The house\n", 50);

	// Actual first choice
	while (1)
	{
		choice = "";
		displayTexty("Your choice:  ", 50);
		getline(std::cin, choice);
		choice = lowercase(choice);

		if (choice == "1" || choice == "2" || choice == "3" || choice == "the stars" || choice == "stars" || choice == "the cliff" || choice == "cliff" || choice == "the house" || choice == "house")
			break;
	}

	system("cls");
	

	// Actual first branch

	if (choice == "1" || choice == "the stars" || choice == "stars")
	{
		correct++;
		displayTextr("I  g u e s s  d e e p  d o w n  I  n e v e r  t r u l y  g a v e  u p  o n  t h e  p a s t . . .", 70); pause(); system("cls");
		displayTextr("I s n ' t  t h a t  s e l f i s h ?", 70); pause(); system("cls");
		displayTextr("A f t e r  a l l  t h a t  t i m e  w e  s p e n t . . .", 70); pause(); system("cls");
		displayTextr("I  w e n t  a n d  d e s t r o y e d  a l l  o f  i t . . .", 70); pause(); system("cls");
		displayTextr("W e  w e r e  s o  n a i v e  b a c k  t h e n . . .", 70); pause(); system("cls");
		displayTextr("W h a t  w e n t  s o  w r o n g . . .", 70); pause(); system("cls");
		displayTextr("I f  I  h a d  a n o t h e r  c h a n c e . . .", 70); pause(); system("cls");
		displayTextr("I f  o n l y  I  c o u l d  g o  b a c k  a n d  c h a n g e  i t  a l l . . .", 70); pause(); system("cls");
		displayTextr("I f  o n l y  I  c o u l d . . .", 70); pause(); system("cls");
		displayTextr("I  k n o w  y o u  w a n t  t o . . .", 70); pause(); system("cls");
		displayTextr("I ' m  y o u  a f t e r  a l l . . .", 70); pause(); system("cls");
		displayTextr("W h a t  w o u l d  y o u  c h a n g e  i f  y o u  h a d  t h e  c h o i c e ?", 70); pause(); std::cout << std::endl << std::endl;

		displayText("1. The wedding\n", 50);
		displayText("2. Last words\n", 50);
		displayText("3. No reply\n", 50);

		while (1)
		{
			choice = "";
			displayTexty("Your choice:  ", 50);
			getline(std::cin, choice);
			choice = lowercase(choice);

			if (choice == "1" || choice == "2" || choice == "3" || choice == "the wedding" || choice == "wedding" || choice == "last words" || choice == "no reply")
				break;
		}

		system("cls");

		// Branch 2

		if (choice == "2" || choice == "last words")
		{
			correct++;
			displayTextr("You know...", 70); pause(); system("cls");
			displayTextr("I thought I had forgotten.", 70); pause(); system("cls");
			displayTextr("After all...I hid those feelings deep within myself.", 70); pause(); system("cls");
			displayTextr("I wanted to be free of this guilt.", 70); pause(); system("cls");
			displayTextr("I didn't mean those words.", 70); pause(); system("cls");
			displayTextr("I wish I could talk to him one last time.", 70); pause(); system("cls");
			displayTextr("I wish I could say a proper goodbye.", 70); pause(); system("cls");
			displayTextr("...", 100); pause(); system("cls");
			displayTextr("Nell...", 70); pause(); system("cls");
			displayTextr("Can we forgive ourselves?", 70); pause(); system("cls");
			displayTextr("Do you think he will forgive us for what we've done?", 70); pause(); std::cout << std::endl << std::endl;

			displayText("1. Yes\n", 50);
			displayText("2. No\n", 50);

			while (1)
			{
				choice = "";
				displayTexty("Your choice:  ", 50);
				getline(std::cin, choice);
				choice = lowercase(choice);

				if (choice == "1" || choice == "2" || choice == "yes" || choice == "no")
					break;
			}

			system("cls");


			// Branch 3

			if (choice == "1" || choice == "yes")
			{
				correct++;
				displayTextr("I see...", 70); pause(); system("cls");
				displayTextr("You've changed, Nell.", 70); pause(); system("cls");
				displayTextr("That moment...", 70); pause(); system("cls");
				displayTextr("On that call.", 70); pause(); system("cls");
				displayTextr("I had forgotten.", 70); pause(); system("cls");
				displayTextr("I couldn't forgive myself for what i'd done.", 70); pause(); system("cls");
				displayTextr("But I had forgotten his feelings.", 70); pause(); system("cls");
				displayTextr("I had forgotten the passion we shared.", 70); pause(); system("cls");
				displayTextr("Forgotten the time we spent.", 70); pause(); system("cls");
				displayTextr("But you've made me remember.", 70); pause(); system("cls");
				displayTextr("I'm sure he'll forgive us.", 70); pause(); system("cls");
				displayTextr("Despite everything we've done.", 70); pause(); system("cls");
				displayTextr("And Nell...", 70); pause(); system("cls");
				displayTextr("I wish that you'd forgive me too...", 70); pause(); system("cls");
				displayTextr("For burying all those memories.", 70); pause(); system("cls");
				displayTextr("For running away...", 70); pause(); system("cls");
				displayTextr("Please.", 70); pause(); system("cls");
				displayTextr("Forgive me...", 70); pause(); system("cls");
				displayTextr("...", 70); pause(); system("cls");
				displayTextr("And Nell...", 70); pause(); system("cls");
				displayText("Thank you for remembering him.", 90); pause(); system("cls");
			}
			else
			{
				displayTextr("I see...", 70); pause(); system("cls");
				displayTextr("If that's how it is...", 70); pause(); system("cls");
				displayTextr("I suppose there's not much we can do...", 70); pause(); system("cls");
				displayTextr("But at the very least...", 70); pause(); system("cls");
				displayTextr("I wish that you'd forgive me...Nell.", 70); pause(); system("cls");
				displayTextr("For burying all those memories.", 70); pause(); system("cls");
				displayTextr("For running away...", 70); pause(); system("cls");
				displayText("Forgive me...Nell", 70); pause(); system("cls");
			}

			for (float i = 100; i >= 0; i = i - 1)
			{
				music_4.setVolume(i);
				Sleep(30);
			}
			music_4.stop();
			credits_good();
		}

		else
		{
			displayTextr("I  s e e . . .", 70); pause(); system("cls");
			displayTextr("S t i l l  r u n n i n g  a w a y  a f t e r  a l l  t h a t  t i m e . . .", 70); pause(); system("cls");

			if (choice == "3" || choice == "no reply")
			{
				displayTextr("A l t h o u g h  y o u ' v e  b e e n  r u n n i n g  a w a y  f r o m  r e a l i t y  f o r  f a r  t o o  l o n g . . .", 70); pause(); system("cls");
				displayTextr("D o i n g  n o t h i n g  w o n ' t  f i x  a n y t h i n g . . .", 70); pause(); system("cls");
			}
			else
			{
				displayTextr("Y o u  w a n t  t o  e r a s e  a l l  t h e  g o o d  m e m o r i e s  y o u ' v e  h a d  w i t h  h i m ?", 70); pause(); system("cls");
				displayTextr("I  s u p p o s e  s o m e  t h i n g s  n e v e r  c h a n g e . . .", 70); pause(); system("cls");
			}
			
			displayTextr("W e l l . . .", 70); pause(); system("cls");
			displayTextr("Y o u  s e e . . . e v e n  i f  I  c o u l d  c h a n g e  t h e  p a s t . . .", 70); pause(); system("cls");
			displayTextr("I ' m  s u r e  w e  w o u l d ' v e  e n d e d  u p  w i t h  a  s i m i l a r  f a t e . . .", 70); pause(); system("cls");
			displayTextr("D o n ' t  y o u  a g r e e ?", 70); pause(); system("cls");
			displayTextr("A c t u a l l y .", 70); pause(); system("cls");
			displayTextr("D o n ' t  a n s w e r  t h a t . . .", 60); pause(); system("cls");
			displayTextr("I n s t e a d . . . I  w a n t  t o  k n o w . . .", 70); pause(); system("cls");
			displayTextr(". . .", 70); pause(); system("cls");
			displayTextr("N e l l . . .", 70); pause(); system("cls");
			displayTextr("D o  y o u  b e l i e v e  i n  c h a n g e ?", 70); pause(); system("cls");
			displayTextr("D o  y o u  b e l i e v e  t h a t  w e  c a n  f o r g i v e  o u r s e l v e s  f o r  w h a t  w e ' v e  d o n e ?", 70); pause();  std::cout << std::endl << std::endl;

			displayText("1. Yes\n", 50);
			displayText("2. No\n", 50);

			while (1)
			{
				choice = "";
				displayTexty("Your choice:  ", 50);
				getline(std::cin, choice);
				choice = lowercase(choice);

				if (choice == "1" || choice == "2" || choice == "yes" || choice == "no")
					break;
			}

			system("cls");


			//Branch 4

			if (choice == "1" || choice == "yes")
			{
				music_4.stop();
				displayTextr("I see...", 70); pause(); system("cls");
				displayTextr("I thought I had forgotten.", 70); pause(); system("cls");
				displayTextr("After all...I hid those feelings deep within myself.", 70); pause(); system("cls");
				displayTextr("I wanted to be free of this guilt.", 70); pause(); system("cls");
				displayTextr("I suppose there's not much we can do...", 70); pause(); system("cls");
				displayTextr("But at the very least...", 70); pause(); system("cls");
				displayTextr("I wish that you'd forgive me...Nell.", 70); pause(); system("cls");
				displayTextr("For burying all those memories.", 70); pause(); system("cls");
				displayTextr("For running away...", 70); pause(); system("cls");
				displayTextr("And I wish that you forgive yourself, too.", 70); pause(); system("cls");
				displayTextr("Goodbye...", 70); Sleep(500); displayTextr("Nell.", 70); pause(); system("cls");

				credits_good();
			}
			else
			{
				displayTextr("H a h a . . .", 70); pause(); system("cls");
				displayTextr("I  k n e w  a s k i n g  m y s e l f  w o u l d  b e  p o i n t l e s s . . .", 70); pause(); system("cls");
				displayTextr("I  k n e w  w h a t  y o u ' d  s a y  a n y w a y s .", 70); pause(); system("cls");
				displayTextr("I t ' s  a l l  p o i n t l e s s . . .", 70); pause(); system("cls");
				displayTextr("T h e r e ' s  n o  p o i n t  l i v i n g  w i t h o u t  a n y  c h a n c e  a t  r e d e m p t i o n . . .", 70); pause(); system("cls");
				displayTextr("H e ' s  g o n e  n o w . . . A n d  t h e r e ' s  n o  c h a n g i n g  t h a t . . .", 70); pause(); system("cls");
				displayTextr("B u t  y o u  k n o w . . .", 70); pause(); system("cls");
			}
		}
		
	}
	else
	{
		displayTextr("H a h a . . .", 70); pause(); system("cls");
		displayTextr("I t ' s  f u n n y . . .", 70); pause(); system("cls");
		displayTextr("I  k n e w  y o u  w o u l d n ' t  r e m e m b e r .", 70); pause(); system("cls");
		displayTextr("B u t  d o n ' t  w o r r y . . .", 70); pause(); system("cls");
		displayTextr("I  c a n 't  r e m e m b e r  e i t h e r . . .", 70); pause(); system("cls");
		displayTextr("A f t e r  b l a m i n g  m y s e l f  f o r  s o  l o n g . . . I  s e e m  t o  h a v e  f o r g o t t e n  w h y  I  e v e n  b o t h e r e d  t o  c o n t i n u e . . .", 70); pause(); system("cls");
		displayTextr("I  s u p p o s e  t h e r e ' s  n o t  m u c h  l e f t  f o r  u s  t o  d o  t h e n . . .", 70); pause(); std::cout << std::endl << std::endl;

		displayText("1. Give Up\n", 50);
		displayText("2. Continue\n", 50);

		while (1)
		{
			choice = "";
			displayTexty("Your choice:  ", 50);
			getline(std::cin, choice);
			choice = lowercase(choice);

			if (choice == "1" || choice == "2" || choice == "give up" || choice == "continue")
				break;
		}

		system("cls");


		// Branch 5

		if (choice == "2" || choice == "continue")
		{
			displayTextr("I  d o n ' t  u n d e r s t a n d . . .", 70); pause(); system("cls");
			displayTextr("W h y  d o  y o u  s t i l l  b o t h e r . . .", 70); pause(); system("cls");
			displayTextr("W h y . . .", 70); pause(); system("cls");
			displayTextr("I s  i t  w o r t h  f i g h t i n g  f o r ?", 70); pause(); system("cls");
			displayTextr("W e  c o u l d  e n d  i t  r i g h t  n o w . . .", 70); pause(); system("cls");
			displayTextr("S o  w h y ?", 70); pause(); system("cls");
			displayTextr("W h y  d o  y o u  s t i l l  b o t h e r . . .", 70); pause(); system("cls");
			displayTextr("I s  i t  b e c a u s e  y o u  s t i l l  h a v e  h o p e ?", 70); pause(); system("cls");
			displayTextr("H e ' s  g o n e . . . N e l l . . .", 70); pause(); system("cls");
			displayTextr("T h e r e ' s  n o  p o i n t  t o  w h a t  y o u ' r e  d o i n g . . .", 70); pause(); system("cls");
			displayTextr("O r . . . d o  y o u  s t i l l  b e l i e v e  t h a t  i t ' s  w o r t h  f o r g i v i n g  o u r s e l v e s ?", 70); pause(); std::cout << std::endl << std::endl;

			displayTextg("1. Yes\n", 50);
			displayTextr("2. No\n", 50);

			while (1)
			{
				choice = "";
				displayTexty("Your choice:  ", 50);
				getline(std::cin, choice);
				choice = lowercase(choice);

				if (choice == "1" || choice == "2" || choice == "yes" || choice == "no")
				{
					music_4.stop(); break;
				}
			}

			system("cls");


			// Branch 6 

			if (choice == "1" || choice == "yes")
			{
				displayTextr("I see...", 70); pause(); system("cls");
				displayTextr("I do not understand...", 70); pause(); system("cls");
				displayTextr("What makes you so different...", 70); pause(); system("cls");
				displayTextr("What makes you hold on...", 70); pause(); system("cls");
				displayTextr("Despite everything we've done...", 70); pause(); system("cls");
				displayTextr("I do not understand...", 70); pause(); system("cls");
				displayTextr("But if that's how it is...", 70); pause(); system("cls");
				displayTextr("I suppose there's not much that I can do...", 70); pause(); system("cls");
				displayTextr("But at the very least...", 70); pause(); system("cls");
				displayTextr("I wish that you'd forgive yourself...", 70); pause(); system("cls");
				displayTextr("For burying all those memories.", 70); pause(); system("cls");
				displayTextr("And for running away...", 70); pause(); system("cls");
				displayTextr("Goodbye...", 70); Sleep(500); displayTextr("Nell.", 70); pause(); system("cls");

				credits_good();
			}
			else
			{
				displayTextr("H a h a h a . . .", 70); pause(); system("cls");
				displayTextr("T h a t ' s  r i g h t . . .", 70); pause(); system("cls");
				displayTextr("I  k n e w  y o u ' d  u n d e r s t a n d . . .", 70); pause(); system("cls");
				displayTextr("B u t  y o u  k n o w . . .", 70); pause(); system("cls");
			}

		}	
		
	}

	// Worst ending. (The player just didn't pay attention to the storyline.)
	// Very dark.
	music_4.stop();
	if (choice == "1" || choice == "give up")
		displayTextr("H a h a h a . . .", 70); pause(); system("cls");

	displayTextr("I s n ' t  i t  a m u s i n g ?", 70); pause(); system("cls");
	displayTextr("A f t e r  a l l  t h e  t i m e  w e  s p e n t. . .", 70); pause(); system("cls");
	displayTextr("W e ' v e  d e c i d e d  t o  t h r o w  i t  a l l  a w a y . . .", 70); pause(); system("cls");
	displayTextgrey("You see the shadow grab a knife from the debris beside them.", 70); pause(); system("cls");
	displayTextr("B u t  i t ' s  f i n e . . .", 70); pause(); system("cls");
	displayTextr("I ' m  s u r e  t h i s  i s  w h a t  h e  w a n t e d . . .", 70); pause(); system("cls");
	displayTextr("T h a n k  y o u  f o r  m a k i n g  m e  u n d e r s t a n d . . .", 70); pause(); system("cls");
	displayTextr("A l l  w e  n e e d e d  t o  d o  w a s  t o  a c c e p t  t h e  r e a l i t y . . .", 70); pause(); system("cls");
	displayTextr("T  H  A  T   I  T   W  A  S   A  L  L   O  U  R   F  A  U  L  T ", 70); Sleep(500); knife.play(); Sleep(1000);

	system("cls");  Sleep(1500);


	credits_bad();

}

