
/*Implementation file for the FeetInches class


*NEW Added the following per Assignment 2 instructions


// **NEW Overloaded operators per Assignment 2**

bool operator <= (const FeetInches &);
bool operator >= (const FeetInches &);
bool operator != (const FeetInches &);


And

void multiply(FeetInches &obj2);

----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/
#include <cstdlib>  // Needed for abs()
#include "FeetInches.h"

//************************************************************
// Definition of member function simplify. This function     *
// checks for values in the inches member greater than       *
// twelve or less than zero. If such a value is found,       *
// the numbers in feet and inches are adjusted to conform    *
// to a standard feet & inches expression. For example,      *
// 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
// 5 feet -2 inches would be adjusted to 4 feet 10 inches.   *
//************************************************************

int FeetInches::simplify()
{
	int fT = 0;
   if (inches >= 12)
   {
      feet += (inches / 12);
      inches = inches % 12;
   }
   else if (inches < 0)
   {
      feet -= ((abs(inches) / 12) + 1);
      inches = 12 - (abs(inches) % 12);
   }

   return fT;
}


// ** NEW ** multiply function per assignment 2
// This function will accept a FeetInches object as an argument. 
// The argument object’s feet and inches attributes will be multiplied 
// by the calling object’s feet and inches attributes. 
// It will return a FeetInches object containing the result of the multiplication.

FeetInches FeetInches::multiply(FeetInches fI) {

	int thisInches = (feet * 12) + inches;
	int thatInches = (fI.getFeet() * 12) + fI.getInches();

	int iN = (thisInches*thatInches) / 12;
	int fT = simplify();
	
	FeetInches product((int)fT, iN);				// FeetInches object

	return product;
	

}

//**********************************************
// Overloaded binary + operator.               *
//**********************************************

FeetInches FeetInches::operator + (const FeetInches &right)
{
   FeetInches temp;

   temp.inches = inches + right.inches;
   temp.feet = feet + right.feet;
   temp.simplify();
   return temp;
}


//**********************************************
// Overloaded binary - operator.               *
//**********************************************

FeetInches FeetInches::operator - (const FeetInches &right)
{
   FeetInches temp;

   temp.inches = inches - right.inches;
   temp.feet = feet - right.feet;
   temp.simplify();  
   return temp;
}

//*************************************************************
// Overloaded prefix ++ operator. Causes the inches member to *
// be incremented. Returns the incremented object.            *
//*************************************************************

FeetInches FeetInches::operator ++ ()
{
   ++inches;
   simplify();
   return *this;
}

//***************************************************************
// Overloaded postfix ++ operator. Causes the inches member to  *
// be incremented. Returns the value of the object before the   *
// increment.                                                   *
//***************************************************************

FeetInches FeetInches::operator ++ (int)
{
   FeetInches temp(feet, inches);

   inches++;
   simplify();
   return temp;
}

//************************************************************
// Overloaded > operator. Returns true if the current object *
// is set to a value greater than that of right.             *
//************************************************************

bool FeetInches::operator > (const FeetInches &right)
{
   bool status;

   if (feet > right.feet)
      status = true;
   else if (feet == right.feet && inches > right.inches)
      status = true;
   else
      status = false;

   return status;
}

//************************************************************
// Overloaded < operator. Returns true if the current object *
// is set to a value less than that of right.                *
//************************************************************

bool FeetInches::operator < (const FeetInches &right)
{
   bool status;

   if (feet < right.feet)
      status = true;
   else if (feet == right.feet && inches < right.inches)
      status = true;
   else
      status = false;

   return status;
}

//*************************************************************
// Overloaded == operator. Returns true if the current object *
// is set to a value equal to that of right.                  *
//*************************************************************

bool FeetInches::operator == (const FeetInches &right)
{
   bool status;

   if (feet == right.feet && inches == right.inches)
      status = true;
   else
      status = false;

   return status;
}


// ** NEW ** per Assignment 2 requirements

//**********************************************
// Overloaded the <= operator.               *
//**********************************************

bool FeetInches::operator <= (const FeetInches &right)
{
	bool status;

	if (feet <= right.feet)
		status = true;
	else if (feet == right.feet && inches <= right.inches)
		status = true;
	else
		status = false;
	return status;
}

//**********************************************
// Overloaded the >= operator.               *
//**********************************************

bool FeetInches::operator >= (const FeetInches &right)
{
	bool status;

	if (feet <= right.feet)
		status = true;
	else if (feet == right.feet && inches >= right.inches)
		status = true;
	else
		status = false;
	return status;
}

//**********************************************
// Overloaded the != operator.               *
//**********************************************

bool FeetInches::operator != (const FeetInches &right)
{
	bool status;

	if (feet <= right.feet)
		status = true;
	else if (feet == right.feet && inches != right.inches)
		status = true;
	else
		status = false;
	return status;
}

// ** END NEW per Assignment 2 requirements.

//********************************************************
// Overloaded << operator. Gives cout the ability to     *
// directly display FeetInches objects.                  *
//********************************************************

ostream &operator<<(ostream &strm, const FeetInches &obj)
{
   strm << obj.feet << " feet, " << obj.inches << " inches";
   return strm;
}

//********************************************************
// Overloaded >> operator. Gives cin the ability to      *
// store user input directly into FeetInches objects.    *
//********************************************************

istream &operator >> (istream &strm, FeetInches &obj)
{
   // Prompt the user for the feet.
   cout << "Feet: ";
   strm >> obj.feet;

   // Prompt the user for the inches.
   cout << "Inches: ";
   strm >> obj.inches;

   // Normalize the values.
   obj.simplify();

   return strm;
}

//*************************************************************
// Conversion function to convert a FeetInches object         *
// to a double.                                               *
//*************************************************************

FeetInches::operator double()
{
   double temp = feet;

   temp += (inches / 12.0);
   return temp;
}

//*************************************************************
// Conversion function to convert a FeetInches object         *
// to an int.                                                 *
//*************************************************************

FeetInches:: operator int()
{ 
   return feet; 
}




