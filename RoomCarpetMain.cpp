/*

This problem starts with the FeetInches class that is provided in the course Content area on the assignment 
page for this week. 
This program will show how classes will interact with each other as data members within another class. 
Modify the FeetInches class by overloading the following operators which should all return a bool.
•	<=
•	>=
•	!=


Next add a copy constructor to the FeetInches class and a multiply function.

•	The copy constructor should accept a FeetInches object as an argument. 
    It will assign the feet attribute the value in the argument’s feet attribute and do the same for the inches attributes.
•	The multiply function should accept a FeetInches object as an argument. The argument object’s feet and inches attributes will be multiplied by the calling object’s feet and inches attributes. It will return a FeetInches object containing the result of the multiplication.

Next create a class called RoomDimension which will have its class declaration in RoomDimension.h and its implementation in RoomDimension.cpp. 
This class will have two data members which have a data type of FeetInches, one for the length of the room and another for the width of the room. 
The multiply function in FeedInches will be used to calculate the area of the room. 
RoomDimension will have a function that returns the area of the room as a FeetInches object.

Next create a class called RoomCarpet class that has a RoomDimension object as an attribute. 
This class will have its class declaration in RoomCarpet.h and its implementation in RoomCarpet.cpp. 
It should also have an attribute for the cost of the carpet per square foot. It will have a member function that returns the total cost of the carpet.
For example, a room that is 12 feet long and 10 feet wide has an area of 120 square feet. If the cost per square foot is $8 then the cost to carpet the room will be $960 (120 x 8).

The main for this program will create an instance of RoomCarpet and ask the user for the dimensions of the room and the price per square foot for the carpet. 
The application should then display the total cost of the carpet. It should allow the user to continue doing more calculations until the user indicates they are done.


----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"

using namespace std;

int main() {

	cout << "CISS 243 - Assignment 2 - Carpet Calculator - Tom Tran\n";
	cout << "-------------------------------------------------------\n" << endl;

	// Variables


	FeetInches length;						// lenght object
	FeetInches width;						// width object
	int cost;							    // holds cost
	char again;								// Holds Y or N


	do {
		// Get Inputs


		cout << "Enter length of room ( <feet> <inches> ): ";
		cin >> length;
		cout << "Enter width of room ( <feet> <inches> ): ";
		cin >> width;
		cout << "Enter cost per square foot: ";
		cin >> cost;

		// Objects


		RoomDimension roomSize(length, width);
		RoomCarpet room(roomSize,cost);
		FeetInches area = roomSize.getArea();

		// Output
		cout << "Total area of carpet is: " << area << endl;
		cout << "Total cost of carpet is: $" << room.getTotal() << endl;

		cout << "\nDo You want to calculate another room? Y or N?" << endl;
		cin >> again;
	}

	while(again == 'Y' || again == 'y');

	return 0;


}