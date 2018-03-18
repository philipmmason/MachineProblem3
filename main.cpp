#include <iostream>
#include <string>
#include "Class.h"

; using namespace std;

int main()
{
	//MyClass * p1 = new MyClass;
	
	//Book Book1;//Book object
	//ptrBook1 = &Book1;//Give address of object Book1 to Book class pointer
	
	Book * Book1 = new Book;//pointer of class Book

	//Tape Tape1;//Tape Object
	//ptrTape1 = &Tape1;//Give address of object Tape to Tape1 class pointer
	
	Tape * Tape1 = new Tape;//Pointer of class Tape


	Book1->readData();//user data for book
	cin.ignore();
	Tape1->readData();//user data for tape

	system("CLS");//clear screen

	Book1->displayData();//using class pointer to access member finction
	Tape1->displayData();//using class pointer to access member finction

	return 0;
}
