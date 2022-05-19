#include <iostream>
#include <cstring>
#define SIZE 20

#include "user.h"
#include "registered_user.h"
#include "unregistered_user.h"
#include "item.h"
#include "Book.h"
#include "magazine.h"
#include "order.h"
#include "payment.h"
#include "Reader.h"
#include "publisher.h"

#include "user.cpp"
#include "registered_user.cpp"
#include "unregistered_user.cpp"
#include "item.cpp"
#include "Book.cpp"
#include "magazine.cpp"
#include "order.cpp"
#include "payment.cpp"
#include "Reader.cpp"
#include "publisher.cpp"

using namespace std;

int main()
{
	user *unreg_user;
unreg_user = new unregistered_user();  //Inheritence
user *u1  = new user(); 
item *Mag;
	Mag = new magazine();
	
	item *i1 = new item();

  registered_user *user1 = new registered_user();	        //dynamic object of registered_user class with default constructor
	registered_user *user2 = new registered_user("MB11111111", "121212323143", "123 Main Street, New York", "+91732134565");		// dynamic object of registered_user class with overloaded constructor

  
	order *order1 = new order();															// dynamic object of order class with default constructor
	order *order2 = new order("2000223343", "reader1", "12035", "PayPal", "2500", "5", "2022/05/14", "Processing");				// dynamic object order class with overloaded constructor
  
	return 0;
  
}

