#ifndef BOOK_H
#define BOOK_H


using namespace std;

class Book : public Publication, public Sales
{
protected:
	double pageCount[1];
public:
	void readData();
	void displayData();
};

#endif
