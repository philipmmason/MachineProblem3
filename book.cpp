#include <iostream>
#include "book.h"

using namespace std;

class Book : public Publication
{
  private:
  protected:
  public:
    Book(int pgcount)
    {
      int pageCount = pgcount;
    }
};
