#include <iostream>
#include <string>
#include "Class.h"

; using namespace std;

void Publication::readData()
{
	cout << "Please enter the title of the book." << endl; getline(cin,title);
	cout << "Please enter the price of the book." << endl; cin >> price;
}

void Publication::displayData()
{
	cout << title << ".\n";
	cout << price << ".\n";
}

void Book::readData()
{
	cout << "Please enter the title of the book." << endl; getline(cin, title);
	cout << "Please enter the price of the book." << endl; cin >> price;
	cout << "Please enter the page count of the book."; cin >> pageCount;
}

//Function to display data member values.
void Book::displayData()
{
	cout << "Title: " << title << endl << endl;
	cout << "Price: $" << price << endl << endl;
	cout << "Page count: " << pageCount << endl << endl;
}

void Tape::readData()
{
	cout << "Please enter the title of the tape." << endl; getline(cin, title);
	cout << "Please enter the price of the tape." << endl; cin >> price;
	cout << "Please enter the page count of the a."; cin >> playTime;
}

void Tape::displayData()
{
	cout << "Title: " << title << endl << endl;
	cout << "Price: $" << price << endl << endl;
	cout << "Play time: " << playTime << endl << endl;
}
