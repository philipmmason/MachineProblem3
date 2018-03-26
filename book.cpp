#include "publication.h"
#include "sales.h"
#include "book.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

//function to store book data in array
void Book::readData()
{
	Publication::readData();
	cout << "Please enter the number of pages of this book: " << endl;
	cin.ignore();
	cin >> pageCount[0]; cout << endl;
	Sales::readData();
}

//function to display book data.
void Book::displayData()
{
	Publication::displayData();
	cout << "Number of pages: " << pageCount[0] << "." << endl;
	Sales::displayData();
}
