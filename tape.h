#ifndef TAPE_H
#define TAPE_H

using namespace std;

class Tape : public Publication, public Sales
{
protected:
	double playTime;
public:
	void readData();
	void displayData();
};
#endif
