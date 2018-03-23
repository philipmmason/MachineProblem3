#ifndef PUBLICATION_H
#define PUBLICATION_H

using namespace std;

class Publication
{
protected:
	char title[100];
	double price;
		
public:
	void readData();
	void displayData();
};
#endif 
