#include <iostream>
#include <string>
#include "Class.h"

using namespace std;


void Book::readData()
{
	cout << "Please enter the title of the book: "; getline(cin, title);
}

void Book::displayData()
{
	cout << title;
}

void Tape::readData()
{
}

void Tape::displayData()
{
}
