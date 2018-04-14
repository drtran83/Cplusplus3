/* Implementation of BasicShape Class

Define a class called BasicShape which will be a pure abstract class.

The class will have one protected data member that will be a double called area.

It will provide a function called getArea which should return the value of the data member area.

It will also provide a function called calcArea which must be a pure virtual function.


----------------------------------------------------
Author: Tam T. Tran
Created: July 7, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
--------


*/
#include "BasicShape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

// Default Constructor
BasicShape::BasicShape() {
	area = 0.0;
}


// Constructor

BasicShape::BasicShape(double a)
{
	area = a;

}

void BasicShape::setArea(double a) {

	area = a;
}


double BasicShape::getArea()const {

	
	return calcArea();
}



