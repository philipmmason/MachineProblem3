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
	double price;
};

class Book : public Publication
{
private:
protected:
public:
	int pageCount;
	void readData();
	void displayData();;
};

class Tape : public Publication
{
private:
protected:
public:
	double playingTime;
	void readData();
	void displayData();
};
#endif

