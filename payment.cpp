Payment.cpp
#include "payment.h"
#include "order.h"
#include <cstring>
using namespace std;

Payment::Payment()
{
	payID=0;
	strcpy_s(payType,"");
	float payamount=0.0;
}

Payment::Payment(int ID, const char type[], float amount)
{
	payID = ID;
	strcpy_s(payType,type);
	float payamount = amount;
}

void Payment::checkPayment()
{
}

void Payment::confirmPayment()
{
}

void Payment::displayPaymentDetails()
{
}

Payment::~Payment()
{
	cout << "Deleting payment" << endl;
}

