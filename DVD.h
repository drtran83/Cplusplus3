/*

The DVD class will have data members for the year the movie was released. 
The class will have a linked list for storage of the name of the actors and actresses in the movie.

The class will also maintain the character names that the actors/actresses played in the movie. 
The actors/ actresses and characters information will be stored in a structure which will be stored in the linked list.


----------------------------------------------------
Author : Tam T.Tran
Created : August 16, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#pragma once
#ifndef DVD_H
#define DVD_H

#include "DVD.h"
#include "Media.h"
#include "LinkedList.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class DVD;

// Struct for DVD actors

struct DVDActors {

	string actorName;						// store actor name
	string characterName;					// store character name 

};

ostream &operator << (ostream&, const DVD&);
ostream &operator << (ostream&, const DVDActors&);
ostream &operator <<(ostream&, const LinkedList<DVD>&);
ostream &operator << (ostream&, const LinkedList<DVDActors>&);



// DVD class derived from Media class

class DVD : public Media {

private:

	DVDActors actorInstance;				// Instance of DVD Actors
	LinkedList<DVDActors> actorsList;		// instance of LinkedList DVD actors

	string yearReleased;

	DVDActors getActorsInstanace() const;
	LinkedList<DVDActors> getActorsList() const;

public:

	// Default constructor
	DVD();

	// Mutator Functions

	void setYearReleased(string);
	void setActorNameInstance(string);
	void setCharacterNameInstance(string);
	void setActorList();

	// Accesor Function

	string getYearReleased() const;

	// Friend functions

	friend ostream &operator << (ostream&, const DVD &);
	friend ostream &operator << (ostream&, const DVDActors &);
	friend ostream &operator << (ostream&, const LinkedList<DVD>&);
	friend ostream &operator << (ostream&, const LinkedList<DVDActors>&);

	bool operator=(string st) {
		return this->getTitle() == st;
	}

	bool operator==(string st) {
		return this->getTitle() == st;
	}

	bool operator==(const DVD &dvd) {
		return this->getTitle() == dvd.getTitle();
	}

	bool operator!=(const DVD &dvd) {
		return this->getTitle() == dvd.getTitle();
	}
};

#endif