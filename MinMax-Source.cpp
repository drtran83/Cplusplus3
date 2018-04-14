/*

Assignment 6 - Week 3 - MinMax

Create a class called MinMax which will be a template class.

The class will have two data members which have a data type of the template.

The class will provide two member functions called minimum and maximum.

The function minimum will determine which of the two data members is the lower of the two and return that value.

The function maximum will determine which of the two data members is the larger of the two and return that value.

Create a program that creates 3 instances of this class for the data types int, double and char.


----------------------------------------------------
Author : Tam T.Tran
Created : July 14, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include "MinMax.h"
using namespace std;


int main() {

	cout << "Assignment 6 - Week 3 - MinMax Tom Tran\n" << endl;

	// MinMax int object

	MinMax<int> obj(10, 20);

	// MinMax dbl object

	MinMax<double> obj2(60.60, 80.80);

	// MinMax char object

	MinMax<char> obj3('a', 'c');


	// output Min and Max

	cout <<"\nOututting Integers" << endl;
	cout << "Minimum Integer: " << obj.min() << endl;
	cout << "Maximum Integer: " << obj.max() << endl;



	// output Min and Max Doubles
	cout << "\nOutputting Doubles." << endl;
	cout << "Minimum Double: " << obj2.min() << endl;
	cout << "Maximum Double: " << obj2.max() << endl;


	// output Min and Max Char

	cout << "\nOutputting Char" << endl;
	cout << "Minimum Char: " << obj3.min() << endl;
	cout << "Maximum Char: " << obj3.max() <<  endl;


	return 0;


}
