#include <istream>
#include "sales.h"

using namespace std;

void Sales::readData()
{
	cout << "Please enter the number of sales of each month for the last three months: " << endl;
	cin.ignore();
	for (int i = 0; i < 3; ++i)
	{
		cout << "Sales for month " << i+1 << " :";
		cin >> sales[i];
	} cout << endl;
}

void Sales::displayData()
{
	for (int i = 0; i < 3; ++i)
	{
		cout << sales[i] << endl;
	}
}
