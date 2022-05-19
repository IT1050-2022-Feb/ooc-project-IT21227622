Publisher.cpp

#include "publisher.h"
#include "magazine.h"
#include "registered_user.h"
using namespace std;

Publisher::Publisher()
{
	publisherID = 0;
	strcpy_s(publisherName, "");
	strcpy_s(email, "");
}

Publisher::Publisher(int id, const char pname,const char pemail)
{
	publisherID = id;
	strcpy_s(publisherName, pname);
	strcpy_s(email, pemail);
}

void Publisher::setPublisherDetails(int id, const char pname, const char pemail)
{
	
}

void Publisher::displayPublisherDetails()
{

}

Publisher::~Publisher()
{
	cout << "desctructor called" << endl;
}

