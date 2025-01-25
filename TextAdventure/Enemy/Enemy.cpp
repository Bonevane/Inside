#include "Enemy.h"

// Enemies data
//Name //Attack //Heal Chance // Health
enem enemies[6] = { {"Thanatophobia", 25, -10, 50}, {"Dementophobia", 5, 0, 150}, {"Nyctophobia", 10, 10, 100}, {"Eremophobia", 5, 0, 200}, {"Acrophobia", 15, 16, 100}};


// General variables
int name = 0, playerHealth, playerDMG, playerHeal, MAX_HEALTH = 100, enemyHealth, chances = 5;


// The enemy function lets go
int enemy(int difficulty)
{
	playerDMG = 10, playerHeal = 10;


	// ITEM BUFFS
	if (hasSketch)
		MAX_HEALTH = 120;

	if (hasBPrint)
		playerHeal = 150;

	if (hasReport)
		MAX_HEALTH = 150;

	if (hasAxe)
		playerDMG = 15;

	playerHealth = MAX_HEALTH;


	// Variables
	int damage, random, healVal;
	std::string userInput; bool isChoice = false, enemyAlive = true, defence = false, buff = false, pbuff = false;


	// Difficulty setting
	if (difficulty == 3)
		name = 5;
	else
		name = (rand() % 3) + difficulty;
	
	// Set enemy health to the health for the chosen enemy
	enemyHealth = enemies[name].health;	system("cls");

	//Loop...
	while (enemyAlive == true)
	{
		srand((unsigned int)time(NULL) );

		//Enemy APPEARED!!!
		if (isChoice == false)
		{
			displayText("You encountered ", 50); displayTextr(enemies[name].name, 50); Sleep(1000); std::cout << std::endl;
			isChoice = true;
		}


		else
		{
			// User input
			displayTexty("What will you do?\n", 50);
			while (std::cin.peek() == '\n') std::cin.ignore();
			getline(std::cin, userInput);	userInput = lowercase(userInput);


			// Bootleg computeInput function fr. 

			switch (inputID(userInput))
			{

			// Attack
			case ATTACK:
				damage = attack(&pbuff);

				if (rand() % 100 >= 95)
				{
					displayText("You land a critical hit!\n", 50);
					damage = (int)(damage * 2);
				}


				if (damage > 0)
				{
					displayText("You used your ", 50);
					if (hasAxe == true)
					{
						displayTexty(axe.itemName, 50); Sleep(500); std::cout << std::endl;
						displayText("You dealt ", 50); std::cout << damage << " "; displayText("damage to ", 50); displayTextr(enemies[name].name, 50); std::cout << std::endl;
						enemyHealth -= damage;
					}
					else
					{
						displayTexty("Hands...\n", 50); Sleep(500);
						displayText("You dealt ", 50); std::cout << damage << " "; displayText("damage to ", 50); displayTextr(enemies[name].name, 50); std::cout << std::endl;
						enemyHealth -= damage;
					}

					if (enemyHealth <= 0)
					{
						enemyAlive = false;
						break;
					}
				}
				else
					displayText("You missed...\n", 50);

				enemyAttack(&defence, &buff);
				break;


			// Defend
			case DEFEND:
				displayText("You defend yourself. The damage taken will be reduced this round.\n", 50); defence = true;

				random = rand() % 100;

				if (random >= 20 + playerHeal)
				{
					healVal = (rand() % 10) + playerHeal;
					playerHealth += healVal;

					if (playerHealth > 100)
						playerHealth = 100;

					displayText("Your defence stance allowed you to heal yourself. You healed ", 50); std::cout << healVal; displayText(" HP.\n", 50);
				}

				if (defend() == true)
					displayText("You completely blocked the enemy attack!\n", 50);
				else
					enemyAttack(&defence, &buff);

				defence = false; buff = false;
				break;


			// Focus
			case FOCUS:
				displayText("You decided to use ", 50); displayTexty("Focus", 50); displayText(". Your damage for next round increased.\n", 50);
				pbuff = true;

				if (defend(20) == true)
					displayText("You managed to evade their attack!\n", 50);
				else
					enemyAttack(&defence, &buff);

				buff = false;
				break;


			// Others
			case STATS:
				displayText("Your health: ", 50); std::cout << playerHealth; displayText(" HP.\n", 50);
				displayTextr(enemies[name].name, 50); displayText(" health: ", 50); std::cout << enemyHealth; displayText(" HP.\n", 50);
				break;

			case HELP:
				displayText("You can do the following:\n", 50);
				displayText("- Attack:\t", 50); displayTextgrey("Deals a normal attack.\n", 50);
				displayText("- Defend:\t", 50); displayTextgrey("Defends against opponent's attack with a low chance of healing you.\n", 50);
				displayText("- Focus:\t", 50); displayTextgrey("Charges your next attack to deal 2x damage to the opponent.\n", 50);
				displayText("- Stats:\t", 50); displayTextgrey("Shows you the health of your opponent and yourself.\n", 50);
				displayText("- Info:\t\t", 50); displayTextgrey("You just did that, didn't you?\n", 50);
				break;

			case EXIT:
				displayText("Thank you for playing ", 70); displayTextr("INSIDE\n", 90);
				exit(0);
				break;

			default:
				displayText("I do not recognize that command...\n", 50);
				break;
			}	


			// Enemy or Player deth check
			if (enemyHealth <= 0)
			{
				enemyAlive = false;
				break;
			}
			else if (playerHealth <= 0)
			{
				chances--;

				//Uh oh, game over D:
				if (chances == 0)
				{
					displayText("You died....", 50); Sleep(1000); displayText("\nThis is all just a bad dream...", 50); Sleep(1000); displayTextr("\nA n d  y o u' r e  n e v e r  w a k i n g  u p...", 60); pause(); break;
				}


				displayText("\nYou died....But you cannot give up just yet! ", 50); Sleep(1000); displayText("Stay", 50); displayTexty(" Determined", 50); displayText("!", 50); pause(); system("cls");
				displayTextgrey("Chances Left:  ", 50); std::cout << chances; Sleep(2000);
				
				enemyAlive = false;
				system("cls");
			}
		}
	}

	// Exit cases
	if (enemyAlive == false && playerHealth > 0)
		return 1;
	else
		return 0;
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


//Player Attack
int attack(bool* pbuff)
{
	bool attack = true, miss = false; int dmg = 1, speed = rand() % 45 + 15;

	while (attack)
	{
		system("cls");
		std::cout << "\033[1;33m" << "[Right Shift]" << "\033[1;0m" << " to attack:\n\n";

		std::cout << "---------------\033[0;31m|\033[0;0m--------\n";
		for (int i = 0; i < 24; i++)
		{
			if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift))
			{
				std::cout << "*"; Sleep(speed);

				if (i > 15)
					dmg = -3 * (i - 25);
				else
					dmg = 2 * i;
			}
			else
				break;

			if (i == 23)
				miss = true;
		}

		std::cout << std::endl << std::endl;
		attack = false;
	}

	dmg = (dmg / 4) + (rand() % (playerDMG - 5) + 5);

	if (hasAxe == true)
		dmg = dmg * (playerDMG / 10);

	if (*pbuff == true)
	{
		dmg *= 2;
		*pbuff = false;
	}

	if (miss)
		return 0;
	else
		return dmg;
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Player Defend
bool defend(int delay)
{
	int speed = rand() % 25 + delay; bool blocked = false;

	while (1)
	{
		system("cls");
		std::cout << "\033[1;33m" << "[Right Shift]" << "\033[1;0m" << " to dodge:\n\n";

		std::cout << "------------\033[0;32m|\033[0;0m-----------\n";
		for (int i = 0; i < 24; i++)
		{
			std::cout << "*"; Sleep(speed);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::RShift))
			{
				if (i >= 10 && i <= 14)
					blocked = true;
				break;
			}	
		}

		std::cout << std::endl << std::endl;
		break;
	}

	return blocked;
}


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


//Enemy Attack
void enemyAttack(bool* defend, bool* buff)
{
	int damage, random, healP, buffP;

	random = rand() % 100;

	if (*buff == true)
	{
		healP = 0;
		buffP = 0;
	}
	else if (enemyHealth >= 80)
	{
		healP = 0;
		buffP = 20;
	}
	else if (enemyHealth >= 60)
	{
		healP = enemies[name].heal / 2;
		buffP = 15;
	}
	else if (enemyHealth >= 40)
	{
		healP = 10 + (enemies[name].heal / 2);
		buffP = 10;
	}
	else if (enemyHealth >= 20)
	{
		healP = 30 + (enemies[name].heal / 2);
		buffP = 5;
	}
	else
	{
		healP = 40 + (enemies[name].heal / 2);
		buffP = 0;
	}

	//Enemy Damage
	damage = rand() % 10 + enemies[name].damage;

	if (*buff == true)
	{
		damage *= 2;
		*buff = false;
	}

	if (random < healP)
	{
		displayText(enemies[name].name, 50); displayText(" used ", 50); displayTextg("Heal", 50); std::cout << "!\n";
		displayText("They recovered ", 50); std::cout << (int)(damage * 0.7) << " HP.\n";
		enemyHealth += (int)(damage * 0.75);

		if (enemyHealth > enemies[name].health)
			enemyHealth = enemies[name].health;
	}
	else if (random < (healP + buffP))
	{
		displayTextr(enemies[name].name, 50); displayText(" chooses to ", 50); displayTexty("Focus", 50); displayText(". Their damage increased for their next attack...\n", 50);
		*buff = true;
	}
	else
	{
		if (*defend == true)
		{
			damage = (damage * 80) / MAX_HEALTH;
			playerHealth -= damage;
			*defend = false;
		}
		else
			playerHealth -= damage;

		displayTextr(enemies[name].name, 50); displayText(" attacks you!\n", 50);
		displayText("They dealt ", 50); std::cout << damage << " "; displayText("damage to you!\n", 50);
	}
}