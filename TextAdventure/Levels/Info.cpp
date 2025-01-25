#include "Levels.h"

// Text that is printed when the player gets to a location for the first time.
// First row always empty because location "1" is reserved for movement
text info[5][25] = {

	{//Level 0
		{"", "", "", "", "", 1},
		{"You are on the south-west corner of the house.\n", "To the west, there is a cliff with a sheer drop.\n", "", "","", 2},
		{"You are at the north-west corner of the house\n", "There is a tight path going into the forest from here.\n", "You can only see darkness at the end.\n", "", "", 3},
		{"A dense and strangely dark forest stands to your east.\n", "There seems to be an opening in the growth to the south.\n", "", "", "", 4},
		{"You stand on the eastern side of the house.\n", "There is a path going into the forest.\n", "", "", "", 5},
		{"A mysterious house looms ahead. It is surrounded by an ominous aura.\n", "", "", "", "", 6},
		{"This is the south-east corner of the house.\n", "The forest is impenetrable to your east.\n", "", "", "", 7},
		{"You stand west of the forest enterance.\n", "The forest grows denser to your north.\n", "You get an uneasy feeling, like you are being watched.\n", "", "", 8},
		{"You stroll deeper into the woods, and reach a small clearing.\n","The golden light peaking in through the leaves makes soothing rays.\n" , "There is a pile of dead leaves in the centre.\n", "", "", 9},
		{"The forest path opens up to the south and east.\n", "You can see the north side of the house from here.\n", "", "", "", 10},
		{"There's a mysterious house ahead, standing against the fading daylight.\n", "The air is filled with anticipation.\n", "", "", "", 11}
	},
	

	{//Level 1
	{"TBD\n", "", "", "", "", 1},
	{"You now stand inside a foyer cloaked in an unsettling silence.\n", "The breeze seeping in leaves the atmosphere chilly.\n", "Many doors line the walls ahead.\n", "","", 2},
	{"There is what's supposed to be a window to your south.\n", "Instead of clear glass, it seems to act as a mirror.\n", "You see your reflection for the first time in a while.\n", "It feels strangely unfamilliar.\n", "", 3},
	{"There is a locked door to your east, and a set of stairs going up.\n", "The pitch black darkness and the screeching sound at the end of the stairs prevents you from going up.\n", "", "", "", 4},
	{"In this corner of the foyer, there are doors to your north and west.\n", "", "", "", "", 5},
	{"You have entered the workshop.\n", "Supplies are scattered around the room, as if someone trashed the area on purpose.\n", "", "", "", 6},
	{"This is a sunroom.\n", "The abundant green and the pattern of sunlight gives the room a very warm and homely feeling.\n", "You can hear the sound of waves crashing to your west.\n", "", "", 7},
	{"You are now standing on the balcony perched above the cliffside.\n", "The ocean feels frighteningly vast.\n", "The blue hour gives the air a sad mood.\n", "", "", 8},
	{"The study lies in eerie silence, the air thick with an unsettling stillness.\n","A single flickering candle on the desk casts elongated shadows.\n" , "An imposing bookshelf stands to your west.\n", "", "", 9},	
	{"The floor creaks beneath your feet as you approach the shelf, the air growing colder.\n", "Two ominous gaps disrupt the orderly rows of books.\n", "There is a locked door to the north.\n", "", "", 10},
	{"The path seems to stretch longer than it should have.\nEach step echoes, resonating with a chilling cadence.\nThere is only the faint light ahead you in this darkness.\n", "......\n", "You enter a blank room and hear the door shut behind you.\n", "", "", 11},
	{"You approach a dimly lit table at the eastern side of the room.\n","There is a small painted postcard on the table.\n","","","",12},
	{"The darkness exudes a heavy presence around you...\n","You decide to not head further.\n","","","",13},
	{"The door next to you slowly opens.\n","There's a dark passageway going north.\n","","","",14},
	},


	{//Level 2
	{"TBD\n", "", "", "", "", 1},
	{"You are standing at the end of a long, eerie corridor extending eastward.\n", "A figure was standing at the other end when you entered, but went down the stairs as this was being printed.\n", "You hear a door slam behind your back, and turn to find it to be that of a closet.\n", "There are doors to your north and south.\n", "", 2},
	{"You have ventured into a large bedroom.\n", "There is soft moonlight flowing in from the window against the draping curtains.\n", "The wallpaper is scraping at spots.\n", "You are standing on the western side of the bed, with the rest of the room to your east.\n", "The moonlight makes the white sheets glow.\n", 3},
	{"You are on the eastern side of the bed.\n", "There is a page peeping from below the bed...\n", "There is a bathroom to the east.\n", "", "", 4},
	{"While entering the bathroom, you see a mirror at your front.\n", "It doesn't show your reflection.\n", "......", "You see an axe lying at the ground...\n", "", 5},
	{"You are standing in a home office.\n", "A flickering desk lamp barely illuminates scattered papers on the large table to your south.\n", "The glow of the computer screen reveals a chair..\n", "Somehow, it feels like someone was just sitting here.\n", "The large painting to the east is mounted on hinges, and is tilting open a bit.\n", 6},
	{"You approach the painting and swing it fully open.\n", "It reveals a hidden safe inside the wall.\n", "It is protected by a number pin.\n", "", "", 7},
	{"TBD\n", "", "", "", "", 8}, //Unused point, used to be in the home office
	{"This is the other end of the corridor.\n", "To your south, there is a set of stairs going down.\n", "A sitting room lies to your north.\n", "","",9},
	{"The fireplace of the sitting area sets the tone of the room.\n", "The warm glow gives it all a welcoming feeling.\n", "The decorations in the room tell that it was designed with care.\n",  "There is a black grand piano to the west.\n", "", 10},
	{"There is a single sheet on the piano with a few lines of music on it.\n", "The piano plays by itself, almost as if its playing from memory.\n", "Surprisingly, it doesn't freak you out.\n", "", "", 11},
	{"You now stand inside a foyer cloaked in an unsettling silence.\n", "The breeze seeping in leaves the atmosphere chilly.\n", "Many doors line the walls around you.\n", "You have been here before.\n","", 12},
	{"There is what's supposed to be a window to your south.\n", "Instead of clear glass, it seems to act as a mirror.\n", "You see your reflection for the first time in a while.\n", "It feels strangely unfamilliar.\n", "", 13},
	{"You stand at the enterance to the house.\n", "", "", "", "", 14},
	{"In this corner of the foyer, there is a door to your north.\n", "Strangely, the door to the workshop has been barred off to your west.\n", "", "", "", 15},
	{"The study lies in eerie silence, the air thick with an unsettling stillness.\n","A single flickering candle on the desk casts elongated shadows.\n" , "An imposing bookshelf stands to your west.\n", "", "", 16},
	{"You are standing next to the imposing bookshelf.\n", "", "", "", "", 17}
	},
	

	{//Level 3
		{"", "", "", "", "", 1},
		{"The sheer amount of bookshelves around you overwhelms you...\n", "You no longer seem to remember where you stand.\n", "", "", "", 2},
		{"You are standing in a large foyer.\n", "You expected this sight to have become a familiar by now, but the inconsistencies leave you feeling disoriented.\n", "The door behind your back is the one you entered from, to the north.\n", "There is a door closed shut a bit to the west.\n", "The dizzying sound of static comes from a room to your east.\nThere is a corridor with two doors at its end to your south.\n", 3},
		{"There is a locked door to your east.\n", "Trying to kick it makes no difference.\n", "", "", "", 4},
		{"As soon as you enter the room, the static on the TV stops.\n", "You stand in front of it, and see........... yourself.\n", "..........\nNot from now, but a few moments ahead.\n", "It's like it knows what you're going to do next.\n", "", 5},
		{"","","","","", 6}, // Unused point
		{"There's a small lightbulb hanging from the roof.\n", "You can take a peek inside the half-open door to your east to see rows upon rows of bookshelves.\n", "The door to the west has a '+' symbol on it.\n", "There is a mirror to your south.\n", "", 7},
		{"You are standing in the lobby of a hospital.\n", "It stretches westward beneath the harsh, sterile glow of fluorescent lights.\n", "The air carrires the hard smell of medical supplies.\n", "A reception desk, stocked with outdated magazines, stands unmanned, its computer screen flickering sporadically.\n", "The path turns to the south at the other end, but appears to be dark.\n", 8},
		{"The pitch black corridor starts to illuminate by the lights as you stand at its beginning, turning on one by one.\n", "There are mulltiple doors along the eastern wall of the hallway, with one imposing red door at the end.\n", "", "", "", 9},
		{"The door to your east is labelled ICU 03.\n","", "", "", "", 10},
		{"The dimly lit room is littered with oxygen cylinders, IV stands, pumps and workstations.\n", "Machinery beeps all around you.\n", "There is a deep red hospital bed in the centre of the room.\n", "",  "", 11},
		{"The door to the east is labelled 'Imaging'.\n", "The stark red door to the south slowly opens itself to reveal a steel ladder going down.\n", "", "", "",12},
		{"There is only the hum and beep of machinery.\n", "There are monitors displaying information meaningless to you.\n", "Imaging equpment is present behind the glass wall.\n", "", "", 13},
		{"The room is dimly lit, with cold, concrete walls that seem to absorb what little light there is.\n", "Oversized pipes bend into the walls and floor, crisscrossing the space.\n", "The only sounds are the occasional water drip and the screeching sound of steam leaking from one of the pipes.\n", "There is a large handwheel to the south.\n", "The only exit is a door to the east.\n", 14},
		{"As you step into the corridor, the sound of your footsteps is muffled by the splashes of the stagnant water that covers the floor.\n", "It makes it difficult to move around the area.\n", "Boxes are floating around and bumping into you.\n", "You can see a door at the bottom of the small staircase to the north, but the flooding makes it impossible to reach.\n", "You can see two doors at the other end of the corridor to the south.\n", 15}, // Update
		{"The walls are made of deep red flesh, the blood glistening in the cold lights.\n", "They beat with a sickening sound.\n", "The overturned chairs surround a central platform, with a single folder on it.\n", "", "", 16},
		{"The door to the west is labelled 'Store'.\n", "There is another door to your east.\n", "", "", "", 17},
		{"The gray room is dim lit by a warm lightbulb.\n", "There are tables on the east side of the room with non-functional computers.\n", "There is what looks like a control panel to the north.\n", "To your south, there is a note on the table under a bright lamp.\n", "", 18},
		{"The panel has large text above it which reads 'Water Pump Controls'.\n", "On the wall, four bar level indicators are lit up by a cold light.\n", "The table below has four buttons labelled 1, 2, 3 and 4, corresponding to the three indicators.\n", "On your east is a door that needs to be unlocked from both sides.\n", "", 19},
		{"The storeroom is a cramped and dark place.\n", "Tall metal shelves line the walls, stacked with taped cardboard boxes.\n", "The lockers are in disrepair, and have lost most of their dark-teal paint.\n", "There is a note on one of them.\n", "", 20},
		{"You have arrived at small personal observatory.\n", "The golden orrery spinning on the rooftop presents an awe-inspiring view of the solar system.\n", "There is a computer nearby with a note next to it.\n", "A balcony lies to the east with a telescope pointed towards the sky.\n", "There is a locked door to the west.\nIt needs to be unlocked from both sides.\nYou can unlock this side.\n", 21},
		{"You stand above the vast expanse of the sea to the north.\n", "You see that the telescope is pointed towards the full moon.\n", "The moonlight reflects softly on the water.\n", "This is one of the few familiar sights that can calm you.\n", "There is door to the south.\n", 22},

	},


	{//Level 4
		{"", "", "", "", "", 1},
		{"You are on the south-west corner of the house.\n", "To the west, there is a cliff with a sheer drop.\n", "", "","", 2},
		{"You are at the north-west corner of the house\n", "There is a tight path going into the forest from here.\n", "You can only see darkness at the end.\n", "", "", 3},
		{"A dense and strangely dark forest stands to your east.\n", "There seems to be an opening in the growth to the south.\n", "", "", "", 4},
		{"You stand on the eastern side of the house.\n", "There is a path going into the forest.\n", "", "", "", 5},
		{"You can see a mysterious shadow looming in front of you...\n", "You feel like you recognize their face...\n", "", "", "", 6},
		{"This is the south-east corner of the house.\n", "The forest is impenetrable to your east.\n", "", "", "", 7},
		{"You stand west of the forest enterance.\n", "The forest grows denser to your north.\n", "You get an uneasy feeling, like you are being watched.\n", "", "", 8},
		{"You stroll deeper into the woods, and reach a small clearing.\n","The golden light peaking in through the leaves makes soothing rays.\n" , "There is a pile of dead leaves in the centre.\n", "", "", 9},
		{"The forest path opens up to the south and east.\n", "You can see the north side of the house from here.\n", "", "", "", 10},
		{"", "", "", "", "", 11},
		{"There's a mysterious house ahead, standing against the fading daylight.\n", "The air is filled with anticipation.\n", "", "", "", 12}
	}

};