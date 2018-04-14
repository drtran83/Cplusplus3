/* Implementation of the NumDays class


Design a class called NumDays.
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


#include <cstdlib>					// needed for abs
#include "NumDays.h"


//********************************************************************************************************
// Definition of member function simplify.  This function checks for values in hours					**
// greater than 8 or less than 0.  If such value is found the numbers in hours and days are adjusted    **
// to conform to days expression.  For example 8 hours is 1 day, 12 hours will be converted to 1.5 days  *
// 18 hours will be 2.25 days.																			**
//********************************************************************************************************

void NumDays::simplify()
{
	if (hours >= 8)
	{
		days += (hours / 8);
		hours = hours % 8;
	}
	else if (hours <= 0)
	{

		days-= ((abs(hours) / 8) + 1);
		hours = 8 - (abs(hours) % 8);
	}

}


//***********************************
// Overloaded + operator			*
//***********************************

NumDays NumDays::operator+ (const NumDays &right) {

	NumDays temp;

	temp.hours = hours + right.hours;
	temp.days = days + right.days;
	temp.simplify();
	return temp;
}


//***********************************
// Overloaded - operator			*
//***********************************

NumDays NumDays::operator- (const NumDays &right) {

	NumDays temp;

	temp.hours = hours - right.hours;
	temp.days = days - right.days;
	temp.simplify();
	return temp;
}

//*************************************************************
// Overloaded prefix ++ operator. Causes the hours member to *
// be incremented. Returns the incremented object.            *
//*************************************************************

NumDays NumDays::operator++()
{
	++hours;
	simplify();
	return *this;
}

//***************************************************************
// Overloaded postfix ++ operator. Causes the hours member to   *
// be incremented. Returns the value of the object before the   *
// increment.                                                   *
//***************************************************************

NumDays NumDays::operator++(int)
{
	NumDays temp(hours, days);

	hours++;
	simplify();
	return temp;
}

	//*************************************************************
	// Overloaded prefix -- operator. Causes the hours member to *
	// be incremented. Returns the incremented object.            *
	//*************************************************************

	NumDays NumDays::operator--()
	{
		++hours;
		simplify();
		return *this;
	}

	//***************************************************************
	// Overloaded postfix -- operator. Causes the hours member to   *
	// be incremented. Returns the value of the object before the   *
	// increment.                                                   *
	//***************************************************************

	NumDays NumDays::operator--(int)
	{
		NumDays temp(hours, days);

		hours++;
		simplify();
		return temp;
	}
	//************************************************************
	// Overloaded > operator. Returns true if the current object *
	// is set to a value greater than that of right.             *
	//************************************************************

	bool NumDays::operator > (const NumDays &right)
	{
		bool status;

		if (days > right.days)
			status = true;
		else if (days== right.days && hours > right.hours)
			status = true;
		else
			status = false;

		return status;
	}

	//************************************************************
	// Overloaded < operator. Returns true if the current object *
	// is set to a value less than that of right.                *
	//************************************************************

	bool NumDays::operator < (const NumDays &right)
	{
		bool status;
			
		if (days < right.hours)
			status = true;
		else if (days == right.days && hours < right.hours)
			status = true;
		else
			status = false;

		return status;
	}

	//*************************************************************
	// Overloaded == operator. Returns true if the current object *
	// is set to a value equal to that of right.                  *
	//*************************************************************

	bool NumDays::operator == (const NumDays &right)
	{
		bool status;

		if (days == right.days && hours == right.hours)
			status = true;
		else
			status = false;

		return status;
	}

	//********************************************************
	// Overloaded << operator. Gives cout the ability to     *
	// directly display FeetInches objects.                  *
	//********************************************************

	ostream &operator<<(ostream &strm, const NumDays &obj)
	{
		strm << obj.days << " days and " << obj.hours << " hours";
		return strm;
	}

	//********************************************************
	// Overloaded >> operator. Gives cin the ability to      *
	// store user input directly into FeetInches objects.    *
	//********************************************************

	istream &operator >> (istream &strm, NumDays &obj)
	{
		// Prompt the user for the feet.
		cout << "Days: ";
		strm >> obj.days;

		// Prompt the user for the inches.
		cout << "Hours: ";
		strm >> obj.hours;

		// Normalize the values.
		obj.simplify();

		return strm;
	}

	//*************************************************************
	// Conversion function to convert a FeetInches object         *
	// to a double.                                               *
	//*************************************************************

	NumDays::operator double()
	{
		double temp = days;

		temp += (hours / 8.0);
		return temp;
	}

	//*************************************************************
	// Conversion function to convert a FeetInches object         *
	// to an int.                                                 *
	//*************************************************************

	NumDays:: operator int()
	{
		return hours;
	}