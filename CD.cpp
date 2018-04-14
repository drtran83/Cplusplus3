
/*

Implementation file for CD.h

The CD class will use a linked list to keep track of the titles of the songs on the CD;
this will allow each CD to have a different number of songs. It should also maintain the length of each song,
thus the class will use a structure which will have the song title and its length.

Each song will be an instance of this structure and will be stored in the linked list.
The class will also have a data member for the artist name.

----------------------------------------------------
Author : Tam T.Tran
Created : August 16, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#include "CD.h"

// Default Constructor

CD::CD() {

	artistName = "(no artist)";						// set default artist to no artist
	songInstance.songTitle = "(no title";			// set default instance of song title to no title
	songInstance.songLength = "(no length)";		// set default instance of song length to no length
}

// Mutator Functions

void CD::setArtistName(string art) {
	artistName = art;								// Mutate artist to art
}

void CD::setSongInstanceLength(string ln) {
	songInstance.songLength = ln;					// Mutate instnace of song length to ln
}

void CD::setSongInstanceTitle(string ti) {
	songInstance.songTitle = ti;					// Mutate instance of song title to ti
}

void CD::setSongList() {
	songList.appendNode(songInstance);
}

// Acessor Functions

string CD::getArtistName() const {
	return artistName;
}

SongInfo CD::getSongInstance() const {
	return songInstance;
}

LinkedList<SongInfo> CD::getSongList() const {
	return songList;
}


// Ostream functions

ostream &operator << (ostream& stream, const SongInfo &object) {

	stream << left << setw(16) << object.songTitle
		<< left << setw(64) << object.songLength;

	return stream;
}

ostream &operator <<(ostream &stream, const CD &object) {

	stream << endl
		<< left << setw(16) << object.getArtistName()
		<< left << setw(16) << object.getTitle()
		<< left << setw(16) << object.getLength()
		<< left << setw(0) << object.getSongList();

	return stream;

}

ostream &operator << (ostream &stream, const LinkedList<SongInfo> &object) {
	object.displayList();
	return stream;
}

ostream &operator << (ostream &stream, const LinkedList<CD> &object) {
	object.displayList();
	return stream;
}
