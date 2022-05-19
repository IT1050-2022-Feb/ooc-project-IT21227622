
class registered_user : public user
{
protected:
	char memberID[10];
	char password[15];
	char address[50];
	char phoneNumber[15];

public:
	registered_user();
	registered_user(const char mID[], const char mPassword[], const char mAddress[], const char mPhoneNumber[]);
	void addMemberDetails(const char mName[], const char mEmail[], int mAge, const char mID[], const char mPassword[], const char mAddress[], const char mPhoneNumber[]);
	void resetPassword(const char mPassword[]);
	void displayMemberDetails();
	~registered_user();
};



