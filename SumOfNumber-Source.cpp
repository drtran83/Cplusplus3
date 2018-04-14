/*
Assignment 2

Write a function that accepts an integer argument and returns the sum of all the integers 
from 1 up to the number passed as an argument. 

For example if 10 is passed as an argument, the function will return the sum of 1,2,3,4,5,6,7,8,9 and 10.

Use recursion to calculate the sum. 

Show that this function works correctly for several values.

----------------------------------------------------
Author : Tam T.Tran
Created : August 4, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes

int sum(int);
string display(int);

int main() {

	cout << "CISS 243 - Week 6 - Assignment 12 - Sum of Numbers using Recursion - Tom Tran \n";
	cout << "==================================================================================" << endl;


	// Loop and output
	for (int i = 1; i < 11; i++) {

		cout << display(i) << " = " << sum(i) << endl;
	}

	cout << endl;

	// Loop and output
	for (int i = 1; i < 20; i++) {

		cout << display(i) << " = " << sum(i) << endl;
	}

	return 0;


}

int sum(int number) {

	if (number == 1)
		return 1;

	else
		return number + sum(number - 1);

}

string display(int number) {

	if (number == 1)
		return to_string(1);

	else
		return to_string(number) + " + " + display(number - 1);
}

