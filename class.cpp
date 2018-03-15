#include <iostream>
#include <string>
#include "Class.h"

using namespace std;

void Publication::readData(string *title, double *price)
{
	title = *title;
	price = *price;
	//cout << "Please enter the title of the book: "; getline(cin, title);
}

//Function to set the data members of a bookpubliction passing in pointers.
void Book::readData(double *pgCnt)
{
	pageCount = *pgCnt;
	//cout << "Please enter the title of the book: "; getline(cin, title);
}

//Function to display data member values.
void Book::displayData()
{
	cout << "Title: " << title << endl; endl;
	cout << "Price: $" << price << endl; endl;
}

void Tape::readData(int *time)
{
	time = *time;
}

void Tape::displayData()
{
}
