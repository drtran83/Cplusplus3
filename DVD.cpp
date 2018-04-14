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

#include "DVD.h"

// Default Constructor

DVD::DVD() {

	yearReleased = "(no year)";								// set default year released to no year
	actorInstance.actorName = "(no actor name";				// set default actor name instnace to no actor name
	actorInstance.characterName = "(no character name)";	// set default character name instance to no character name.
}

// Mutator Functions

void DVD::setActorNameInstance(string actN) {
	actorInstance.actorName = actN;							// Mutate actor instance of Actor Name to actN
}

void DVD::setCharacterNameInstance(string chN) {
	actorInstance.characterName = chN;						// Mutate Actor instance of Character Name to chN
}

void DVD::setActorList() {
	actorsList.appendNode(actorInstance);
}

void DVD::setYearReleased(string yrR) {
	yearReleased = yrR;										// Mutate year released to yrR
}

// Accessor Functions


DVDActors DVD::getActorsInstanace()const {
	return actorInstance;
}


LinkedList<DVDActors> DVD::getActorsList()const {
	return actorsList;
}


string DVD::getYearReleased()const {
	return yearReleased;
}

// ostream functions

ostream &operator << (ostream& stream, const DVDActors &object) {

	stream << left << setw(16) << object.actorName
		<< left << setw(64) << object.characterName;

	return stream;

}

ostream &operator << (ostream& stream, const DVD &object) {
	
	stream << endl
		<< left << setw(16) << object.getTitle()
		<< left << setw(16) << object.getLength()
		<< left << setw(16) << object.getYearReleased()
		<< left << setw(0) << object.getActorsList();

	return stream;
}

ostream &operator << (ostream& stream, const LinkedList<DVDActors> &object){

	object.displayList();
	return stream;
}

ostream &operator <<(ostream& stream, const LinkedList<DVD>&object) {

	object.displayList();
	return stream;

}