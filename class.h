#ifndef CLASS_H
#define CLASS_H

//Base class
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

//derived class for books publications.
class Book : public Publication
{
  private:
  protected:
  public:
    Book();
    int pageCount;
};

//derived class for publications on cassettes.
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
#endif
