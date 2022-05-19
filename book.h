#pragma once
#include<iostream>
class Book
{
private:
	char Title[20];
	char Author[20];
	char ISBNNo[20];
	int Edition[10];
	int Rating[5];
public:
	Book (char title[], char author[], char isbnno[], int edition[], int rating[]);
	void PrintBookDetails();
	~Book(void);
};

