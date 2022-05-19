#include "item.h"

class Magazine : public Item
{
	protected:
		char MagazineType[10];
		char publisher[20];
		char releasedDate[10];
		
	public:
		Magazine();
		Magazine(char mType[] , char mPub[] , char date[]);// : Item(char name[] , int id , char type[] , double price );
		void printMagDetails();
		~Magazine();
};

// Edited : IT21383298
