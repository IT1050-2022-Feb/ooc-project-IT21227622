#include "order.h"
#include "Reader.h"
#include "payment.h"
#include "item.h"
#include<iostream>
#include<cstring>
using namespace std;


order::order()
{
	strcpy_s(orderNo, "");
	pay = new payment(0, "", 0.0);
	numberOfOrder = 0;
	strcpy_s(orderDate, "");
	strcpy_s(orderStatus, "");
}

order::order(const char orderID[], reader *Reader1, int PayID, const char PayType[], double PayAmount, int OrderCount, const char DateOfOrder[], const char StatusOfOrder[])
{
	strcpy_s(orderNo, orderID);
	Reader = Reader1;
	pay = new payment(PayID, PayType, PayAmount);
	numberOfOrder = OrderCount;
	strcpy_s(orderDate, DateOfOrder);
	strcpy_s(orderStatus, StatusOfOrder);
}


void order::addOrderDetails(const char orderID[], reader *Reader1, payment *pay1, item *Item, int OrderCount, const char DateOfOrder[], const char StatusOfOrder[])
{

}

void order::displayOrderDetails()
{

}

void order::updateStatus(const char StatusOfOrder[])
{

}

order::~order()
{
	delete pay;
	cout << "Destructor of order " << endl;
}
