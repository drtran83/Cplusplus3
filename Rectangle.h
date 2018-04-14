#pragma once
/*

Define a class called Rectangle.

It should be a derived class of the BasicShape class.
This class will have 2 private data members called width and length.

Both data members should be long integers.

Its constructor will have parameters for both the width and length.

It will also override the calcArea function.

For this class the calcArea function will use the formula area = length * width.

It will provide member function called getWidth and getLength which should return the correct values.


----------------------------------------------------
Author: Tam T. Tran
Created: July 7, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
-----------------

*/

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
#include <iostream>

// Rectnangle class derived of Basic Shape Class

class Rectangle : public BasicShape {

private:
	long int length;						// length stored in Long int
	long int width;							// width stored in long int

public:

	// Default constructor

	Rectangle();

	// Constructor

	Rectangle(long int l, long int w);

	void set(long int l, long int w);


	// Accessor Functions

	long int getLength()const;
	long int getWidth()const;

	// CalcArea function

	 double calcArea() const;

};


#endif