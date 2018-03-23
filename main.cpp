//include headerfiles
#include "publication.h"
#include "sales.h"
#include "book.h"
#include "tape.h"
//include some needed libraries
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

//prototype for main
int PublicationType()
{
	int type;
	string bookOrTape;
	cout << "What type of publiction will you be storing? book or type:" << endl;
	cin >> bookOrTape;
	if (bookOrTape == "book" || "Book")
	{
		type = 1;
		return type;
	}else if (bookOrTape == "tape" || "Tape")
		{
			type = 2;
			return type;
	}
}


int main()
{

	Book * bookArray[3];
	Tape * tapeArray[2];

	int bookCount = 0;
	int tapeCount = 0;
	
	if (PublicationType() == 1)
		{
			for (int i = 0; i < 3; ++i)
			{
				bookArray[i] = new Book(); //read book data
				((Book*)bookArray[i])->readData();
				bookCount++;
			}

		}
		else if (PublicationType() == 2)
		{
			for (int i = 0; i < 2; ++i)
			{
				tapeArray[i] = new Tape();//tape data
				((Tape*)tapeArray[i])->readData();
				tapeCount++;
			}

		}
		else if (PublicationType() != 1 || 2)
		{
			cout << "You must enter book or tape to specify the type of publication." << endl;
		}
	
		

		if (bookCount > 0) 
		{
			cout << endl << "List of books and their details" << endl;
			for (int i = 0; i < 3; ++i)
			{
				((Book*)bookArray[i])->displayData(); cout << endl;
			} 

		}
		else cout << "There are no recorded books." << endl;
	
		if (tapeCount > 0)
		{
			cout << endl << "List of Cassette tapes and their details." << endl;
			for (int i = 0; i < 2; ++i)
			{
				((Tape*)tapeArray[i])->displayData(); cout << endl;
			}
		}
	
	return 0;
}
