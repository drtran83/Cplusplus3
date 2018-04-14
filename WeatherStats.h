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


#pragma once
#ifndef WEATHERSTATS_H
#define WEATHERSTATS_H

#include <iostream>
using namespace std;

// WeatherStats class to hold information about the wather for a given month

class WeatherStats {

private:

	double rain;			// stores rainy days
	double snow;			// stores snow days
	double sunny;			// stores sunny days

public:

	// default constructor

	WeatherStats() {
		rain = 0.0;
		snow = 0.0;
		sunny = 0.0;
	}

	// Constructor

	WeatherStats(double r, double s, double su);

	// Mutators

	void setRain(double r);
	void setSnow(double s);
	void setSunny(double su);

	// Accessors

	double getRain()const;
	double getSnow()const;
	double getSunny()const;

	// overloaded operator

	friend ostream& operator << (ostream &, const WeatherStats &);

};


#endif

