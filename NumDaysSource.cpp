/*Design a class called NumDays. 
The class’s purpose is to store a value that will convert the number of worked hours to a number of days. 
For example, 8 hours would be converted to 1 day, 12 hours would be converted to 1.5 days and 18 hours converted to 2.25 days. 
The class must have a constructor that accepts a number of hours. 
There must also be member function to set and get the hours and days. 
The class should have 2 data members, hours and days.

The class will also overload several operators:
•	the addition operator. This operator will add the hours of the two objects and return a new instance of the NumDays
•	with its hour’s data member set to the sum of the other two objects.
•	the subtraction operator will also be overloaded which will subtract the two objects and return a new instance of the NumDays class.
•	the prefix and postfix increment operator. These operators should increment the number of hours stored in the object. It will return an instance of the NumDays object.
•	the prefix and postfix decrement operator. These operators should decrement the number of hours stored in the object. It will return an instance of the NumDays object.

Note that when the number of hours changes, the number of days should always be updated. 


The user of this class should be able to use the object in a statement like C = A + B; 
where A, B and C are instances of the NumDays class.

 Main must show that the class and all the operators work correctly.

 ----------------------------------------------------
 Author: Tam T. Tran
 Created: June 29, 2017
 Rev: 1
 Class: CISS 243 - Professor James Viviano
 ----------------------------------------------------



*/


#include <iostream>
#include "NumDays.h"

using namespace std;

int main() {

	cout << "CISS 243 - Programming III - Assignment 1 - Tom Tran\n" << endl;
	cout << "Num Days converter.  This program will convert hours to days." << endl;
	cout << "------------------------------------------------------------------\n" << endl;

	// Variables

	double d;		// to hold days input
	int h;			// to hold hours input

	// Define NumDays object

	NumDays time;

	// Get a time from the user.

	cout << "Enter a time in days and hours: \n";
	cin >> time;

	// convert the time object into a double.

	d = time;

	// convert the time object into an int.

	h = time;


	// Display the values.

	cout << "The number of " << time;
	cout << " is equal to " << d << " days\n";

}