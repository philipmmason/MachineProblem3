#include <iostream>
#include <string>
#include "Class.h"

using namespace std;


void Book::readData(int *price, string *title)
{
	price = *price;
	title = *title;
	//cout << "Please enter the title of the book: "; getline(cin, title);
}

void Book::displayData()
{
	cout << "The title is " << title <<" and the price is $" << price << endl;
}

void Tape::readData()
{
}

void Tape::displayData()
{
}
