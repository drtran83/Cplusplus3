#pragma once
/*

Define a class called Circle. It should be a derived class of the BasicShape class.

This class will have 3 private data members. It will have 2 long integer data members called centerX and centerY.

The last data member is a double called radius. It will have a constructor that accepts values for centerX, centerY and radius.

This constructor should call the overridden calcArea function of this class.

This class defines its version of the calcArea function which determines the area of the circle using the formula area = 3.14159 * radius * radius.

The class will also provide two functions called getCenterX and getCenterY which return the correct values.



----------------------------------------------------
Author: Tam T. Tran
Created: July 7, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <iostream>


// Circle class that is a derivate of the Basic Shape class

class Circle : public BasicShape {

private:

	long int centerX;					// center X stored in long int
	long int centerY;					// center Y stored in long int
	double radius;						// radius stored in a double


public:

	// Default constructor
	Circle();

	// Constructor

	Circle(long int cX, long int cY, double r);

	void set(long int cX, long int cY, double r);

	// Accessor

	long int getCenterX()const;
	long int getCenterY()const;
	double getRadius()const;

	// Calc Area Function

	 double calcArea() const;

};





#endif