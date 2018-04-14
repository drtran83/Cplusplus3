/*

Assignment 11 - Recursive Power Function

Write a function that uses recursion to raise a number to a power. 

The function should accept two arguments, the number to be raised and the exponent. 

Assume that the exponent is a nonnegative integer. 

Show that this function works correctly for several values.


----------------------------------------------------
Author : Tam T.Tran
Created : August 4, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype

int calcPower(int, int);

int main() {

	cout << "CISS 243 - Week 6 - Assignment 11 - Recursive Power Fucntion -  Tom Tran\n" << endl;

	// variables

	int intProduct;
	double dblProduct;

	// calcuate and output intproduct
	intProduct = calcPower(3, 3);
	cout << "\nThe product of 3 to the power of 3 is: " << intProduct << endl;

	// again
	intProduct = calcPower(10, 4);
	cout << "\nThe product of 10 to the power of 4 is: " << intProduct << endl;


	cout << setprecision(20);				// ensure decimal shows properly

	// calcluate and output double product

	dblProduct = calcPower(4.4, 5);
	cout << "\nThe product of 4.4 to the power of 4 is: " << dblProduct << endl;

	// again

	dblProduct = calcPower(6.6, 7);
	cout << "\nThe product of 6.6 to the power of 3 is: " << dblProduct << endl;


	return 0;
}


int calcPower(int base, int exp) {

	if (exp == 1)
		return exp;

	else
		return base * calcPower(base, exp - 1);

}


