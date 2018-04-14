// Specification file for the FeetInches class

/*

Added

New overloaded operators and copy constructor per Assignment 2

----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/



#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
#include <cstdlib>
using namespace std;

class FeetInches; // Forward Declaration

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
private:
   int feet;									 // To hold a number of feet
   int inches;									 // To hold a number of inches
   int simplify();								 // Defined in FeetInches.cpp
   

public:

	FeetInches multiply(FeetInches fI);				 // New multiply function per assignment 2


   // Constructor
   FeetInches(int f = 0, int i = 0)
      { feet = f;
        inches = i;
        simplify(); }

   // ** NEW Copy Constructor per Assignment 2

   FeetInches(FeetInches& f, FeetInches& i) 
	   {
	   feet = f.feet;
	inches = i.inches;
   };

   // Mutator functions
   void setFeet(int f)
      { feet = f; }

   void setInches(int i)
      { inches = i;
        simplify(); }
   
   // Accessor functions
   int getFeet() const
      { return feet; }

   int getInches() const
      { return inches; }

   // Overloaded operator functions
   FeetInches operator + (const FeetInches &);
   FeetInches operator - (const FeetInches &);
   FeetInches operator ++ ();    // Prefix ++
   FeetInches operator ++ (int); // Postfix ++
   bool operator > (const FeetInches &);
   bool operator < (const FeetInches &);
   bool operator == (const FeetInches &);

   // **NEW Overloaded operators per Assignment 2**

   bool operator <= (const FeetInches &);
   bool operator >= (const FeetInches &);
   bool operator != (const FeetInches &);

   // ** END NEW per Assignment 2 **

   // Conversion functions
   operator double();
   operator int();
   
   // Friends
   friend ostream &operator << (ostream &, const FeetInches &);
   friend istream &operator >> (istream &, FeetInches &);
};

#endif