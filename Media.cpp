/*
Implementation file for Media.H


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


#include "Media.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

// Default Constructor

Media::Media() {

	title = "(no title)";				// Set title to default no title
	length = "(no length";				// Set Length to default no length

}

// Mutator Functions

void Media::setTitle(string t) {

	title = t;							// Mutate title to t

}

void Media::setLength(string l) {

	length = l;							// Mutate length to l
}

// Accessor Functions

string Media::getTitle() const {

	return title;						// Return title
}

string Media::getLength() const {

	return length;						// Return length
}
