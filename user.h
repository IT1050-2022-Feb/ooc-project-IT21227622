#include "item.h"

class User {
	protected:
		char userName[20];
		char email[30];
		int Age;
		Item *item[SIZE];
		int noOfItems;
		
	public:
		User();
		User(char name[] , char mail[] ,  int age);	
		void addItemDetails (Item *i);
		~User();	
};

//Edited By: IT21227622
