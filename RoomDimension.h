/*



Next create a class called RoomDimension which will have its class declaration in RoomDimension.h and its implementation in RoomDimension.cpp. 

This class will have two data members which have a data type of FeetInches, one for the length of the room and another for the width of the room.

The multiply function in FeetInches will be used to calculate the area of the room.

RoomDimension will have a function that returns the area of the room as a FeetInches object.



----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#pragma once
#ifndef ROOMDIMENSION_H_GUARD
#define ROOMDEMNSION_H_GUARD
#include "FeetInches.h"

using namespace std;


class RoomDimension {

private:
	FeetInches length;
	FeetInches width;

public:

	// constructors
	RoomDimension() {};


	RoomDimension(const RoomDimension& r);

	RoomDimension(FeetInches l, FeetInches w);


	// Accessors

	FeetInches getArea() {
	
		return length.multiply(width);
	}

	FeetInches getLength() {
		return length;
	}

	FeetInches getWidth() {
		return width;
	}




};




#endif
