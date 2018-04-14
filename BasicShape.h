#pragma once

/*
Define a class called BasicShape which will be a pure abstract class.

The class will have one protected data member that will be a double called area.

It will provide a function called getArea which should return the value of the data member area.

It will also provide a function called calcArea which must be a pure virtual function.


----------------------------------------------------
Author: Tam T. Tran
Created: July 7, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <iostream>
using namespace std;

// Base class of Basic Shape

class BasicShape {

protected:

	double area;							// protected area variable as a double.

public:

	// Default constructor

	BasicShape();

	// Constructor

	BasicShape(double a);

	//Mutator Function

	void setArea(double a);

	// Accessor Function

	double getArea()const;


	// Pure Virtual Function

	virtual double calcArea() const = 0;


};






#endif
