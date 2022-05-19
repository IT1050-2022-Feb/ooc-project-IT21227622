Publisher.h

#include "registered_user.h"
#include "magazine.h"
class Publisher: public Registered_User//inheritance
{
private:
	int publisherID;
	char publisherName[20];
	char email[20];

	Magazine* Magazine[SIZE];

public:
	Publisher();
	Publisher(int id,const char pname,const char pemail);
	void setPublisherDetails(int id, const char pname,const char pemail);
	void displayPublisherDetails();
	~Publisher();
};

