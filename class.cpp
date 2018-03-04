#include <iostream>
#include "class.h"

using namespace std;

//Define class publication.
Publication::Publication()
{
};

void Publication::Publication()
{
  string title;
  price double;
};

void Publication::readData()
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

//Define derived class Books.
class Book::Book()
{
};

void Book::readData()
{
  cout << "Please enter name number of pages of the publication: \n\n";
  cin >> pageCount;
};

//Define derived class Tape
class Tape : public Publication
{
  private:
  protected:
  public:   
      Tape(double time)
      {
        int time = time;
      };
 };
