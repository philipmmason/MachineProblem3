#include "publication.h"
#include "sales.h"
#include "tape.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void Tape::readData()
{
	Publication::readData();
	cout << "Play time in minutes of this tape: " << endl;
	cin >> playTime; cout << endl;
	Sales::readData();
}

void Tape::displayData()
{
	Publication::displayData();
	cout << "Play time of this tape is: " << playTime << "." << endl;
	cout << endl;
}
