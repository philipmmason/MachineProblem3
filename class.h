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

class Book : public Publication : public Sales
{
private:
protected:
public:
	int pageCount;
	void readData();
	void displayData();
};

class Tape : public Publication : public Sales
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
	double sales[3];
	void readData();
	void displayData();
	
}
#endif
