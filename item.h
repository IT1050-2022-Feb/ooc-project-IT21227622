#include "user.h"
class Item {  //By directional association with User / Aggregation with order
	protected:
		char itemName[20];
		int ItemID;
		char ItemType[10];
		double ItemPrice;
		User *user;
	
		
	public:
		Item();
		Item(char name[], int id, char type[], double price , User *puser);
		void addUser(User *u);
		double calcTotal();
		void printItemDetails();
		~Item();
	
};

// Edited : IT21383298
