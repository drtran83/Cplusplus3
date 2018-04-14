/*
Next create a class called RoomCarpet class that has a RoomDimension object as an attribute. 

This class will have its class declaration in RoomCarpet.h and its implementation in RoomCarpet.cpp.

It should also have an attribute for the cost of the carpet per square foot. 
It will have a member function that returns the total cost of the carpet. 


For example, a room that is 12 feet long and 10 feet wide has an area of 120 square feet. 
If the cost per square foot is $8 then the cost to carpet the room will be $960 (120 x 8).


----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#pragma once
#ifndef ROOMCARPET_H_GUARD
#define ROOMCARPET_H_GUARD
#include "RoomDimension.h"

using namespace std;


class RoomCarpet {

private:

	RoomDimension room;						// New Room Dimension object
	int costPerFoot = 0;					// holds cost per foot.

public:

	// Constructors

	RoomCarpet(RoomDimension r, int cost) {

		room = r;
		costPerFoot = cost;

	}

	// Accessors

	int getTotal();



};



#endif