#include "Levels.h"

// Text that plays when the player goes back to a point they've been to already
// First one always empty because location "1" is reserved for movement
std::string describeText[5][25] = {

	{//Level 0
	{""},
	{"You are at the south-west edge of the house\n"},
	{"You stand at the nort-west corner of the house. There is a path leading into the forest.\n"},
	{"This is the north-east edge of the house.\n"},
	{"This is the forest enterance.\n"},
	{"This is the front of the house. You are at the front-door.\n"},
	{"This is the south-east corner of the house.\n"},
	{"You stand west of the forest enterance.\n"},
	{"You stand deep inside the forest.\n"},
	{"You are at the eastern edge of the forest path.\n"},
	{"This is the spot where you woke up.\nThe ominous house lies to your north.\n"}
	},


	{//Level 1
	{""},
	{"You stand at the enterance to the house.\n"},
	{"You are standing next to the eerie mirror.\n"},
	{"You are at the stairs to the attic.\nThere's a door to your east.\n"},
	{"In this corner of the foyer, there are doors to your north and west.\n"},
	{"You are at the workshop.\n"},
	{"You stand in the sunroom.\n"},
	{"You are now standing on the balcony perched above the cliffside.\n"},
	{"You stand at the study enterance.\n"},
	{"You are standing next to a shelf.\nThere's a door to your north.\n"},
	{"You stand in a dark room.\nYou can see a dimly lit table to your east.\n"},
	{"You stand next to a dimly lit table.\n"},
	{"You stand at the first few steps to the attic...Something prevents you from going further.\n"},
	{"You are standing next to a shelf.\nThere's a door to your north.\n"}
	},


	{//Level 2
	{""},
	{"You are standing at the end of a long, eerie corridor extending eastward.\n"},
	{"You stand at the bedroom enterance.\n"},
	{"You are on the eastern side of the bed.\nThere is a page peeping from below the bed.\n"},
	{"You are in the bathroom.\n"},
	{"You are standing at the enterance to the home office.\n"},
	{"You approached the safe inside the home office.\n"},
	{""}, // Unused point, used to be in the home office
	{"This is the eastern end of the corridor.\n"},
	{"You're standing in the sitting area.\nThere is a black grand piano to the west.\n"},
	{"The piano plays by itself, almost as if its playing from memory.\nSurprisingly, it doesn't freak you out.\n"},
	{"You are at the stairs to the attic.\n"},
	{"You are standing next to the eerie mirror.\n"},
	{"You stand at the enterance to the house.\n"},
	{"In this corner of the foyer, there is a door to your north.\n"},
	{"You stand at the study enterance.\n"},
	{"You are standing next to a bookshelf in the study.\n"}
	},


	{//Level 3
	{""},
	{""},
	{"You're at the foyer enterance.\n"},
	{"You stand next to the locked door.\n"},
	{"You're in the room with the TV displaying a video feed of yourself.\n"},
	{""}, // Unused point
	{"You stand in the room with a door leading to the hospital to your west and the library to your east.\n"},
	{"You are standing in the lobby of the hospital.\n"},
	{"You're at the hospital corridoor.\n"},
	{"You're standing next to the ICU 03 room door.\n"},
	{"You stand inside the ICU 03 room.\n"},
	{"The door to the east is labelled 'Imaging'.\n"},
	{"You stand inside the Imaging room.\n"},
	{"You're standing in the pipes room.\n"},
	{"You're at the northern end of the flooded corridoor.\nYou can see a door at the bottom of the small staircase to the north, but the flooding makes it impossible to reach.\n"}, // Update
	{"You're standing in the waiting room.\n"},
	{"You're at the southern end of the flooded corridoor.\nThere's a door going to your east and to your west.\n"},
	{"You stand at the enterance to the pump room.\nThere are pump controls to your north, and a note on the desk to your south.\n"},
	{"You're standing next to the pump controls.\n"},
	{"You stand in the storeroom.\n"},
	{"You are standing at the observatory.\n"},
	{"You stand at the balcony next to the observatory.\nThere is door to the south.\n"}
	},


	{//Level 4
	{""},
	{"You are at the south-west edge of the house\n"},
	{"You stand at the north-west corner of the house. There is a path leading into the forest.\n"},
	{"This is the north-east edge of the house.\n"},
	{"This is the forest enterance.\n"},
	{"You stand in front of the house ruins.\n"},
	{"This is the south-east corner of the house.\n"},
	{"You stand west of the forest enterance.\n"},
	{"You stand deep inside the forest.\n"},
	{"You are at the eastern edge of the forest path.\n"},
	{"This is the spot where you woke up.\nThe house ruins lie to your north.\n"},
	{""}
	}
};


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Location Names (Printed by the displayPos() function
// First one always empty because location "1" is reserved for movement
std::string points[5][25] = {

	{//Level 0
	"1\n",
	"Riverside\n",
	"Riverside\n",
	"Northside of house\n",
	"Forest Entrance\n",
	"Front of house\n",
	"Eastside of house\n",
	"Forest\n",
	"Deep Forest\n",
	"Forest\n",
	"Cliffside\n"
	},


	{//Level 1
	"1\n",
	"Foyer Entrance\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Workshop\n",
	"Sun Room\n",
	"Balcony\n",
	"Study\n",
	"Study\n",
	"??????\n",
	"??????\n",
	"Stairs to Attic\n",
	"Study\n"
	},


	{//Level 2
	"1\n",
	"Hallway\n",
	"Bedroom\n",
	"Bedroom\n",
	"Bath\n",
	"Office\n",
	"Office\n",
	"Office\n",
	"Hallway\n",
	"Sitting Area\n",
	"Sitting Area\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Foyer\n",
	"Study\n",
	"Study\n"
	},


	{//Level 3
	"1\n",
	"????\n",
	"Foyer\n",
	"Foyer\n",
	"Lounge\n",
	"Kitchen\n",
	"Library / Hospital Enterance\n",
	"Reception\n",
	"Reception\n",
	"Hallway\n",
	"ICU 03\n",
	"Hallway\n",
	"Imaging Room\n",
	"Pipes\n",
	"Flooded Corridor - North End\n",
	"Waiting Room\n",
	"Flooded Corridor - South End\n",
	"Pump Room\n",
	"Pump Control\n",
	"Store\n",
	"Observatory\n",
	"Observatory\n",
	"23\n"
	},


	{//Level 4
	"1\n",
	"Riverside\n",
	"Riverside\n",
	"Northside of house\n",
	"Forest Entrance\n",
	"House Ruins\n",
	"Eastside of house\n",
	"Forest\n",
	"Deep Forest\n",
	"Forest\n",
	"Cliffside\n",
	"????\n"
	}
};


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//



// Text that plays when the player uses the "check" command
// First one always empty because location "1" is reserved for movement
// Printed using the check() function
std::string checkT[5][25]{

	{//Level 0
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	""
	},


	{//Level 1
	"1\n",
	"You check the window to see......nothing outside.\n",
	"It's you!\n",
	"You check the darkness around you. It's quite ominous...\n",
	"",
	"You check your surroundings.\nThe workshop looks like it's been used regularly.\n",
	"The sunroom looks as breathtaking as ever.\n",
	"You can see the vast ocean...\nIts beauty fills you with determination.\n",
	"",
	"There is a gap for a book in the bookshelves.\n",
	"You check the ominous air around you...but nothing happens.\n",
	"The table is lit by a single candle.\n",
	"The darkness exudes a heavy presence around you...\nYou decide to not head further.\n",
	"You check the shelf.\n\"Applied Physics By M.S\" catches your eye once more....\nYou decide to avert your eyes.\n"
	},


	{//Level 2
	"1\n",
	"",
	"There seems to be picture frames hung on the walls.\nThey depict a couple at their wedding.\n",
	"You check the bed and find a note peeping from below. It reads:\n\n\"Dear Diary,\n\nToday, as I wandered through the dusty attic, I stumbled upon a weathered notebook filled with sheet music.\nI opened it to find the first page had a single line on it. It instantly transported me back to the days when Adrian was learning to play the piano.\nOh, how he struggled with each note, determined to create something special.\n\nOne evening, after countless hours of practice, he surprised me with a tune he had composed just for me.\nHis eyes gleamed with pride as he played, and I could see the dedication he poured into crafting every chord.\nHe would hold that piece so dear.\n\nYours,\nNell.\"\n\n",
	"The shower seems to be dripping...\nYou can hear the faint notes of a piano...\n",
	"",
	"The big black safe is quite sturdy...\n",
	"",
	"You can hear the faint notes of a piano coming from a room somewhere...\n",
	"You can see a piano at the other end of the room.\nIt's playing by itself...\n",
	"You check the piano.\nIt's a Yamaha P-515.\n",
	"The door that was once here has vanished...\n",
	"It's you!\n",
	"You check the door.\nThe front door to the house seems to have changed in design...\n",
	"The enterance to the workshop seems to be barricaded...\n",
	"You check the note.\nIt reads:\n\n\"To whom it may concern,\n\nCount the numbers of individual notes before the gaps.\n\nRegards,\nAdrian.\"\n\n",
	"You check the shelf.\n\"Operational Health & Safe-\"...\nYou avert your eyes as quick as humanly possible.\n"
	},


	{//Level 3
	"1\n",
	"",
	"The foyer seems familier...yet so unfamiliar...\n",
	"The door seems to be locked.\n",
	"The TV seems to be displaying a silhouette of yourself.\nYou can't make out any more details.\n",
	"There are various utensils lying around on the floor.\nA knife with scarlet red sediments catches your eye...\n", // Unused point
	"Despite everything, it's still you.\n",
	"The reception desk is stocked with outdated magazines.\n",
	"You can smell the stench of a hospital...\n",
	"",
	"The dimly lit room is littered with oxygen cylinders, IV stands, pumps and workstations.\n",
	"",
	"There are monitors displaying information meaningless to you.\n",
	"Oversized pipes bend into the walls and floor, crisscrossing the space around you.\n",
	"You can see a door at the bottom of the small staircase to the north.\n",
	"",
	"",
	"You read the note. It says:\n\n\"This is my final time explaining this to you Bob...Don't lose this note again.\n\nPressing the Button 1 will drain tank 1 and distribute the water among the rest.\nThen if you press any button (including 1), it will drain said tank by 5 liters.\nWater goes from Tank 1 to 4, Tank 2 to 3, Tank 3 to 1, and from Tank 4 to 2.\n\nDO NOT LOSE THIS NOTE AGAIN BOB I'M WARNING YOU\"\n\n",
	"The pump controls seem to be fully functional.\n",
	"There's a note on the locker demanding the plumbers to fix the water tanks.\n",
	"The note on the table seems to be notes about different stars.\nThe note is signed with \"-Adrian\" at the end.\n",
	"You look through the telescope.\nYou can see the moon in all it's glory.\nYou get the feeling that this telescope was very dear to someone you knew.\n", // left
	},


	{//Level 4
	"1",
	"2",
	"3",
	"4",
	"5",
	"House Ruins\n",
	"7",
	"8",
	"9",
	"10",
	"Cliffside\n",
	"12"
	}
};