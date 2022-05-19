#include "user.h"
#include "unregistered_user.h"

Unregistered_User::Unregistered_User(){  //default constructor
	visitorId = 0;
	
}

Unregistered_User::Unregistered_user(int id) : User( int name , char mail[] , int age)  //overloaded constructor
{
	visitorId = id;
}

Unregistered_User::~Unregistered_User()
{
	cout << "Unregistered_User- destructor executed" << endl;
}


User::~User()  //destructor
{
	cout << "User- destructor executed" << endl;
}


//Edited By: IT21227622
