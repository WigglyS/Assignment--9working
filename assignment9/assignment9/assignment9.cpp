// Assignment9.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include "string"
#include "vector"


using namespace std;


void normalTransaction(int x, int y);

//uses reffrences instead of the copy
void hackedTransaction(int& x, int& y);




// where c++ programs always start from
int main()
{


	//declaring initializing/assigning
	int JoesBankAccount = 1000;
	int HackersBankAccount = 10000000;
	cout << "Joes Coffee Shop has " << JoesBankAccount << "$ in their bank account\n";
	cout << "The Hackers have " << HackersBankAccount << "$ in their banck account\n\n";


	//calling function and caling two arguments
	normalTransaction(JoesBankAccount, HackersBankAccount);
	cout << "After the normal transaction Joes Coffee Shop has " << JoesBankAccount << "$\n";
	cout << "and the Hacker have " << HackersBankAccount << "$\n";
	cout << "\n\n";

	//calling function and caling two arguments
	hackedTransaction(JoesBankAccount, HackersBankAccount);
	cout << "After the hacked transaction Joes Coffee Shop has " << JoesBankAccount << "$\n";
	cout << "and the Hacker have " << HackersBankAccount << "$\n";
	cout << "\n\n";

	system("pause");
	return 0;
}

///function that takes copys of the arguments
void normalTransaction(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}
///function that takes refrences of the arguments
void hackedTransaction(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

