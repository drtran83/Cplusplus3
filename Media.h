/*
There should be a base class that maintains the common information between a CD and a DVD.

Each CD/DVD in the collection will be represented as a class,
so you will have one class that will be a CD and another that will be a DVD.

The program will then has a base class called Media. Both the CD and DVD classes will inherit from the same base class.

The base class will have one data member that will hold the CD Name or Movie Title and another data member for
the length of the total CD or the length of the movie.

----------------------------------------------------
Author : Tam T.Tran
Created : August 16, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#pragma once
#ifndef MEDIA_H
#define MEDIA_H
#include "LinkedList.h"
#include <string>
using namespace std;



// Base class Media

class Media {

private:

	string title;									// To hold the title of the CD or DVD
	string length;									// To hold the length of the CD or DVD

public:

	// Default constructor

	Media();

	// Mutator Functions

	void setTitle(string);
	void setLength(string);

	// Accessor Functions

	string getTitle()const;
	string getLength()const;


};



#endif
