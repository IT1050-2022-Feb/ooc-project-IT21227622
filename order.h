#include "Reader.h"
#include "payment.h"
#include "item.h"

class order {
private:
	char orderNo[15];
	reader *Reader;
	payment *pay;
	item *Item;
	int numberOfOrder;
	char orderDate[10];
	char orderStatus[20];

public:
	order();
	order(const char orderID[], reader *Reader1, int PayID, const char PayType[], double PayAmount, int OrderCount, const char DateOfOrder[], const char StatusOfOrder[]);
	void addOrderDetails(const char orderID[], reader *Reader1, payment *pay, item *Item, int OrderCount, const char DateOfOrder[], const char StatusOfOrder[]);
	void displayOrderDetails();
	void updateStatus(const char StatusOfOrder[]);
	~order();

};

