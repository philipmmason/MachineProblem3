#ifndef PUBLICATION_H
#define PUBLICATION_H

class Publication
{
private:
protected:
public:
  Publication()
  {
  };
  string title;
  double price;
}

class Book : public Publication
{
  private:
  protected:
  public:
    Book();
    int pageCount;
};


#endif
