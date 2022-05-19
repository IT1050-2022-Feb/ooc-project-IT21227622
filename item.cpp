#include "item.h"
#include"user.h"
Item::Item(char name[], int id, char type[], double price)
{
	strcpy(itemName , name);
	ItemID = id;
	ItemType = type;
	ItemPrice = price;
	user = puser;
	user -> addItemdetails(this);
}

// Edited : IT21383298
