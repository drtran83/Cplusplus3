/*

Week 2, Assignment 2: Pure Abstract Base Class Project

Define a class called BasicShape which will be a pure abstract class.

The class will have one protected data member that will be a double called area. 
It will provide a function called getArea which should return the value of the data member area. 
It will also provide a function called calcArea which must be a pure virtual function.

Define a class called Circle. It should be a derived class of the BasicShape class.

This class will have 3 private data members. It will have 2 long integer data members called centerX and centerY.

The last data member is a double called radius. 

It will have a constructor that accepts values for centerX, centerY and radius.

This constructor should call the overridden calcArea function of this class.

This class defines its version of the calcArea function which determines the area of the circle using the formula area = 3.14159 * radius * radius.

The class will also provide two functions called getCenterX and getCenterY which return the correct values.


Define a class called Rectangle.

It should be a derived class of the BasicShape class. 
This class will have 2 private data members called width and length.

Both data members should be long integers.

Its constructor will have parameters for both the width and length.

It will also override the calcArea function.

For this class the calcArea function will use the formula area = length * width. 

It will provide member function called getWidth and getLength which should return the correct values.


In main create instances of the Circle and Rectangle classes. 

It should then display the area of the two shapes using a function defined as

void DisplayArea(BasicShape* shape)



----------------------------------------------------
Author: Tam T. Tran
Created: July 7, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

// Function prototype


void DisplayArea(BasicShape* shape);

int main() {

	cout << "Assignment 4 - Week 2 - Pure Abstract Base Class - Tom Tran\n" << endl;
	cout << "=============================================================\n" << endl;


	// Circle object

	Circle* myCircle;

	myCircle = new Circle();

	// Rectangle object

	Rectangle* myRectangle;

	myRectangle = new Rectangle();

	
	// output

	DisplayArea(myCircle);

	
	DisplayArea(myRectangle);


	return 0;
}

void DisplayArea(BasicShape* shape) {
	cout << shape->getArea() << endl;
}