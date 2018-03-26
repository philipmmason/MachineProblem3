#include "publication.h"
#include <istream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//function in base class to store publication information that is needed for all types of publications.
void Publication::readData()
{
	cout << "Please enter the title of the publication: " << endl;
	cin.ignore();
	cin.getline(title, 100);

	cout << endl << "Please enter the price of the publication: " << endl;
	cin >> price;cout << endl;	
}

//function to display publications data of title and price
void Publication::displayData()
{
	cout << "The title of the publication is: " << title << endl;
	cout << "The price of the publication is: $" << price << endl;
}
