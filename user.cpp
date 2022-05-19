#include "user.h"
#include "item.h"
User::User()  //default constructor
{
	strcpy(userName , "");
	strcpy(email , "");
	int Age = 0;
	
}
User::User(char name[] , char mail[] , int age)  //overloaded constructor
{
	strcpy(userName , name);
	strcpy(email , mail);
	Age = age;
}
User::~User()
{
  
}

//Edited By: IT21227622
