Magazine::Magazine(char mType[] , char mPub[] , char date[]) //: Item(char name[] , int id , char type[] , double price )
{
	strcpy(MagazineType , mType);
	strcpy(publisher , mPub);
	strcpy(releasedDate , date);
}

Magazine::Magazine()
{
	strcpy(MagazineType , "");
	strcpy(publisher , "");
	strcpy(releasedDate , "");
}

Magazine::~Magazine()
{
	cout << "Magazine destructor executed" << endl;
}

// Edited : IT21383298
