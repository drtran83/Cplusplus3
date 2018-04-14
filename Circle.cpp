/* Implementation of Circle.h



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
-----------------


*/

#include "Circle.h"
#include <iostream>
using namespace std;

// Default constructor
Circle::Circle() {

	centerX = 0;
	centerY = 0;
	radius = 0;
}

// Constructor

Circle::Circle(long int cX, long int cY, double r) {

	set(cX, cY, r);
	calcArea();
}

void Circle::set(long int cX, long int cY, double r) {
	centerX = cX;
	centerY = cY;
	radius = r;
}

// Accessor

long int Circle::getCenterX()const {
	return centerX;
}
long int Circle::getCenterY()const {
	return centerY;
}
double Circle::getRadius()const {
	return radius;
}

// Calc Area Function

double Circle::calcArea() const {

	
	double radius;

	cout << "What is the Radius of the Circle?" << endl;
	cin >> radius;

	cout << "The Area of the circle is: ";

	return 3.14159 * radius * radius;

}

