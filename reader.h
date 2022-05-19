#pragma once
#include<iostream>
class Reader
{
private:
	int ReaderID[10];
	char Name[20];
	char Email[20];
public:
	Reader(int id[],char name[],char email[]);
	void displayReaderDetails();
	~Reader(void);
};

