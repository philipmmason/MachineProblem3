#ifndefine BOOK_H
#define BOOK_H

using namespace std;

class Book : public Publication
{
  private:
  protected:
  public:
    Book();
    int pageCount;
};
#endif
