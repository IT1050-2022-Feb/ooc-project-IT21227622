#include"reader.h"
#include<cstring>

Reader::Reader(int id[],char name[], char email[])
{
	strcpy_s(ReaderID,id);
	strcpy_s(Name,name);
	strcpy_s(Email,email);
}
void Reader::displayReaderDetails()
{
  
}
Reader::~Reader(void)
{
  
}

