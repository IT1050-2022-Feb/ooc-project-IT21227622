

#include "order.h"
class Payment
{
private : 
	int payID;
	char payType[20];
	float payamount;

public :
	Payment();
	Payment(int ID, const char type[], float amount);
	void checkPayment();
	void confirmPayment();
	void displayPaymentDetails();
	~Payment();
};

