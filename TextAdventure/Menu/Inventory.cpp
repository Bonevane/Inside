#include "Inventory.h"


// Inventory descriptions
items key = { "Rusty Key", "A Small Iron Key. Used to open doors.\n"};
items axe = { "Worn Axe", "A Worn Out Wooden Axe. Can be used on doors or as a weapon.\n"};
items book = { "Book", "A book about Applied Physics. It doesn't seem interesting.\n"};
items sketch = { "Old Sketchbook", "An old sketchbook. It is filled with sketches of a beautiful cliffside.\n"};
items bprint = { "Torn Blueprint", "A blueprint for a house. It seems to be ripped in half.\n"};
items report = { "Medical Records", "Cancer reports for Adrian.\n" };

// Inventory itself
// Most advanced SEECS inventory tech
bool hasKey = false;
bool hasAxe = false;
bool hasBook = false;
bool hasSketch = false;
bool hasBPrint = false;
bool hasReport = false;


//********************************************************************************************************************************************************************//
//********************************************************************************************************************************************************************//


// Displaying the inventory
// By checking the bool values :thumbsup:
void displayInventory()
{
	if (hasKey == true && hasAxe == true && hasSketch == false && hasBPrint == false && hasBook == false)
		displayText("You have no items.\n", 50);
	else
	{
		displayText("You currently have the following items:\n", 50);
		
		if (hasKey)
		{
			displayText(key.itemName, 50); displayText(":  ", 0);
			displayTextgrey(key.itemDesc, 50);
		}
		
		if (hasAxe)
		{
			displayText(axe.itemName, 50); displayText(":  ", 0);
			displayTextgrey(axe.itemDesc, 50);
		}

		if (hasBook)
		{
			displayText(book.itemName, 50); displayText(":  ", 0);
			displayTextgrey(book.itemDesc, 50);
		}

		if (hasBPrint)
		{
			displayText(bprint.itemName, 50); displayText(":  ", 0);
			displayTextgrey(bprint.itemDesc, 50);
		}

		if (hasSketch)
		{
			displayText(sketch.itemName, 50); displayText(":  ", 0);
			displayTextgrey(sketch.itemDesc, 50);
		}
	}
	std::cout << std::endl;
}