#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>

using namespace std;

//Base class
class Publication
{
private:
protected:
public:
	Publication()
	{
	}
	string title;
	string *ptrTitle;
	double price;
	void readData();
	void displayData();
};

class Book : public Publication
{
private:
protected:
public:
	int pageCount;
	void readData();
	void displayData();
};

class Tape : public Publication
{
private:
protected:
public:
	double playTime;
	void readData();
	void displayData();
};

class Sales
{
private:
protected:
public:
	double sales[3] {};
	void readData()
	{
		cout << "Please enter the sales over the last three months of this publication." << endl;
		cout << "First Month: "; cin >> sales[0]; 
		cout << "\nSecond Month: "; cin >> sales[1]; 
		cout << "\nThird Month: "; cin >> sales[2]; 
	};
	
	void displayData();
	
}
#endif
Now create another base class called sales; that holds an array of the three doubles so that you can record the dollar sales of a 
particular publication (books or tapes) for the last 3 months (use any numbers you wish). Include a readData() function to get 3 
sales amounts from the user, and a displayData() function to display the sales figures.
