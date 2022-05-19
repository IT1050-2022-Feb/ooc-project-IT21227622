#include "registered_user.h"
#include<iostream>
#include<cstring>
using namespace std;



registered_user::registered_user()
{
	strcpy_s(memberID, "");
	strcpy_s(password, "");
	strcpy_s(address, "");
	strcpy_s(phoneNumber, "");
}

registered_user::registered_user(const char mID[], const char mPassword[], const char mAddress[], const char mPhoneNumber[])
{
	strcpy_s(memberID, mID);
	strcpy_s(password, mPassword);
	strcpy_s(address, mAddress);
	strcpy_s(phoneNumber, mPhoneNumber);
}

void registered_user::addMemberDetails(const char mName[], const char mEmail[], int mAge, const char mID[], const char mPassword[], const char mAddress[], const char mPhoneNumber[]) : user(mName, mEmail, mAge)
{

}

void registered_user::resetPassword(const char mPassword[])
{

}

void registered_user::displayMemberDetails()
{

}

registered_user::~registered_user()
{
	cout << "Destructor of registered user " << endl;
}

