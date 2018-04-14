/*

Implementation of Rectangle.h

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

#include "Rectangle.h"
#include <iostream>

// Default Constructor
Rectangle::Rectangle() {

	length = 0;
	width = 0;
}



// Constructor
Rectangle::Rectangle(long int l, long int w) {

	set(l, w);
	getArea();

}

void Rectangle::set(long int l, long int w) {
	length = l;
	width = w;
}


// Accessor Functions

long int Rectangle::getLength()const {
	return length;
}

long int Rectangle::getWidth()const {
	return width;
}

// calcArea Function

double Rectangle::calcArea() const {

	double width;
	double length;

	cout << "\nWhat is the Length of the Rectangle?" << endl;
	cin >> length;

	cout << "What is the Width of the Rectangle?" << endl;
	cin >> width;

	cout << "The Area of the Rectangle is: ";

	return length * width;

}
