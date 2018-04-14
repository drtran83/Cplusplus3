/*
Week 5 Assignment 1: Dynamic Stack

Write your own version of a class template that will create a dynamic stack of any data type.

The pop function must return a bool; it should return a false if it was not able to pop an item off the stack.

Otherwise, it returns true.

The parameter to the pop function is passed by reference and should be the item on the list if it was able to pop something.

Create a driver program (main) that shows that the stack works for at least two different data types.


----------------------------------------------------
Author : Tam T.Tran
Created : July 27, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/


#include <iostream>
#include <iomanip>
#include "DynamicStack.h"

using namespace std;

int main() {

	cout << "Assignment 9 - Week 5 - Dynamic Stack Template - Tom Tran" << endl;
	cout << "----------------------------------------------------------" << endl;


	int intCatchVar;						// To hold int values popped off stack 
	double dblCatchVar;						// To hold dbl values popped off stack

	// Stack objects of different types

	DynaStack <int> intNums;
	DynaStack <double> dblNums;

	// Push to ints.

	cout << "Pushing 5, 10, 15 to ints " << endl;
	intNums.push(5);
	intNums.push(10);
	intNums.push(15);

	// Popping Ints

	cout << "\nPopping ints....." << endl;
	intNums.pop(intCatchVar);
	cout << intCatchVar << endl;
	intNums.pop(intCatchVar);
	cout << intCatchVar << endl;
	intNums.pop(intCatchVar);
	cout << intCatchVar << endl;

	// Lets try to pop again.

	cout << "\nLets try to pop ints again";
	intNums.pop(intCatchVar);

	// Pushing Doubles

	cout << "\nPushing 5.5, 10.10, 15.15 to doubles " << endl;
	dblNums.push(5.5);
	dblNums.push(10.10);
	dblNums.push(15.15);

	// Popping Doubles

	cout << setprecision(5);
	cout << "\nPopping Doubles....." << endl;
	dblNums.pop(dblCatchVar);
	cout << dblCatchVar << endl;
	dblNums.pop(dblCatchVar);
	cout << dblCatchVar << endl;
	dblNums.pop(dblCatchVar);
	cout << dblCatchVar << endl;


	// Lets try to pop again.

	cout << "\nLets try to pop doubles again";
	dblNums.pop(dblCatchVar);
	cout << endl;



	return 0;
}