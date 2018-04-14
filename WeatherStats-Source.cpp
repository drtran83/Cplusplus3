/*Week 4, Assignment 2: Linked List Part 2

In this program you will use the linked list created in Assignment 1. 

First you will create a class that holds information about the weather 
for a given month which should be called WeatherStats. 

It should have data members that are doubles to hold the amount of rain for the month and the amount of snow for the month. 
It will also have a data member that holds the number of sunny days during the month. 

It should provide accessors and mutators for the private data members. 


Main will create an instance of the linked list with a data type of the WeatherStats (LinkedList<WeatherStats>).

The program should ask the user for how many months they wish to enter weather statistics for. 
The program will then prompt the user for that information (rain, snow and sunny days). 
The data needs to be stored in the WeatherStats class and it should be appended to the linked list. 

Main must then call a function that displays the data in the list; this function will call the display function in the linked list. 

Main will call a function that determines the month with the largest and smallest amount of rain, snow and sunny days. 

This function should not be part of the linked list. 
It should appear in the same file as main. 
A function will need to be added to the linked list that provides an item from the list. 
The function in the linked list will return the object stored in the list. 
The function in main will need to request each item in the list one at a time. 

Another solution is to create a derived class of the linked list, which does all of the work for finding the largest and smallest.

----------------------------------------------------
Author : Tam T.Tran
Created : July 22, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include "LinkedList.h"
#include "WeatherStats.h"
using namespace std;

// Function prototypes

void display(LinkedList<WeatherStats> &);
void findLargeSmall(LinkedList<WeatherStats> &w, int);

int main() {

	cout << "CISS 243 - Assignment 8 - Week 4 - WeatherStats - Tom Tran" << endl;
	cout << "===============================================================\n" << endl;

	// Variables

	int months;									// to hold months
	double rain;								// to hold rainy days
	double snow;								// to hold snow days
	double sunny;								// to hold sunny days
	int count;									// counter

	// objects

	LinkedList<WeatherStats> weather;			// Linked list object
	WeatherStats forecast;						// weather stats object

	// Get input

	cout << "How many months do you wish to enter the weather stats for? ";
	cin >> months;


	// Loop to get rain, snow and sunny day inputs

	for (count = 0; count < months; count++) {

		cout << "\nEnter the amounts for month " << count + 1 << endl;
		cout << "Rainy Days:";
		cin >> rain;
		forecast.setRain(rain);
		cout << "Snowy Days:";
		cin >> snow;
		forecast.setSnow(snow);
		cout << "Sunny Days:";
		cin >> sunny;
		forecast.setSunny(sunny);
		cout << endl;

		// Append WeatherStats data to Linkedlist

		weather.appendNode(forecast);
	}

	// output

	display(weather);

	// output largest to smallest
	findLargeSmall(weather, months);


	return 0;
}

// Functions

// Displays weatherStats of LinkedList

void display(LinkedList<WeatherStats> &d) {

	cout << "Here are the results:" << endl;
	d.displayList();
}

//Find largest smallest will search the LinkedList to check which months
// have the highets and lowest WeatherStats

void findLargeSmall(LinkedList<WeatherStats> &w, int m) {
	

	// variables

	double highRain;				// to store high rain days
	double lowRain;					// to store low rainy days

	double highSnow;				// to store high snow days
	double lowSnow;					// to store low snow days

	double highSunny;				// to store high sunny days
	double lowSunny;				// to store low sunny days

	//check for highest and set initial high values to first item in list.

	highRain = w.checkNode(1).getRain();
	highSnow = w.checkNode(1).getSnow();
	highSunny = w.checkNode(1).getSnow();

	// go through the remaining items in list and reassign the higher values if found

	for (int i = 0; i < m; i++) {

		// Rain
		if (w.checkNode(i).getRain() > highRain)
			highRain = w.checkNode(1).getRain();

		//Snow
		if (w.checkNode(i).getSnow() > highSnow)
			highSnow = w.checkNode(1).getSnow();

		// Sunny
		if (w.checkNode(i).getSunny() > highSunny)
			highSunny = w.checkNode(1).getSunny();
	}

	//check for lowest and set initial high values to first item in list.

	lowRain = w.checkNode(1).getRain();
	lowSnow = w.checkNode(1).getSnow();
	lowSunny = w.checkNode(1).getSnow();

	// go through the remaining items in list and reassign the higher values if found

	for (int i = 0; i < m; i++) {

		// Rain
		if (w.checkNode(i).getRain() < lowRain)
			lowRain = w.checkNode(1).getRain();

		//Snow
		if (w.checkNode(i).getSnow() < lowSnow)
			lowSnow = w.checkNode(1).getSnow();

		// Sunny
		if (w.checkNode(i).getSunny() < lowSunny)
			lowSunny = w.checkNode(1).getSunny();
	}

	// Display

	cout << "WeatherStats\n\n";
	cout << "Highest Rain Day: " << highRain << endl;
	cout << "Highest Snow Day: " << highSnow << endl;
	cout << "Highest Sunny Day: " << highSunny << endl;

	cout << "\nLowest Rain Day: " << lowRain << endl;
	cout << "Lowest Snow Day: " << lowSnow << endl;
	cout << "Lowest Sunny Day: " << lowSunny << endl;
}