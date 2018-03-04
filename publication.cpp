#include <iostream>
#include "publication.h"

using namespace std;

Publication::Publication()
{
};

void Publication::Publication()
{
  string title;
  price double;
};

voide Publication::readData()
{
  cout << "Please enter the the title of the publication: " << endl;
  cin >> title >> endl;
  cout << "Please enter the price of this publication: " << endl;
  cin >> price >> endl;
};

void displayData()
{
  cout << "The title of this publication is " << title << " and it cost " << price << ".\n\n";
};
