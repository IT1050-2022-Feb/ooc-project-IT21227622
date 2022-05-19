#include "user.h"

class Unregistered_User : public User  Inheritence
{
	protected:
		int visitorId;
		
	public:
		Unregistered_User();
		Unregistered_User(int id) : User(char name[] , char mail[] , int age);
		void display_visitorDetails();
		~Unregistered_User();	
		
};


//Edited By: IT21227622
