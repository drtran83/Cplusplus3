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

Note that when the number of hours changes, the number of days should always be updated. The user of this class should be able to use the object in a statement like C = A + B; where A, B and C are instances of the NumDays class.

Main must show that the class and all the operators work correctly.

----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------
*/



#ifndef NUMDAYS_H
#define NUMDAYS_H

#include <iostream>
using namespace std;

class NumDays;				// Forward declaration

// Function Prototypes for Overloaded Stream Operators

ostream &operator << (ostream &, const NumDays &);
istream &operator >> (istream &, NumDays &);



// The NumDays class will convert the number of worked hours to a number of days.

class NumDays {


private: 
	int hours;						// to hold the number of hours
	int days;						// to hold the number of days
	void simplify();				// function will be defined in NumDays cpp

public:

	// constructor

	NumDays(int h = 0, int d = 0) {

		hours = h;
		days = d;
		simplify();

	}

	// Mutator functions

	void setHours(int h) {
		hours = h;
	}

	void setDays(int d) {
		days = d;
		simplify();
	}

	// Accessor functions

	int getHours() const
	{
		return hours;
	}

	int getDays() const
	{
		return days;
	}

	// Overloaded operator functions

	NumDays operator + (const NumDays &);		// Overloaded +
	NumDays operator - (const NumDays &);		// Overloaded -
	NumDays operator ++();						// Overloaded  ++ prefix
	NumDays operator ++(int);					// Overloaaded ++ postfix
	NumDays operator --();						// Overloaded -- prefix
	NumDays operator --(int);					// Overloaded -- postfix

	bool operator > (const NumDays &);		// Overloaded >
	bool operator < (const NumDays &);		// Overloaded <
	bool operator == (const NumDays &);		// Overloaded ==

	// Conversion functions
	operator double();
	operator int();

	// Friends
	friend ostream &operator << (ostream &, const NumDays &);
	friend istream &operator >> (istream &, NumDays &);


};


#endif
