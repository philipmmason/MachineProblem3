#include <iostream>
#include "book.h"

using namespace std;

class Book::Book()
{
};

void Book::readData()
{
  cout << "Please enter name number of pages of the publication: \n\n";
  cin >> pageCount;
};
