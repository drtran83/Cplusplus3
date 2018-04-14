/*
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

#pragma once
#ifndef CD_H
#define CD_H

#include "Media.h"
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class CD;

// Struct for Song Information

struct SongInfo {

	string songTitle;									// store song title
	string songLength;									// store song length

};

// ostream operator functions

ostream &operator << (ostream&, const CD&);
ostream &operator << (ostream&, const SongInfo&);

ostream &operator << (ostream&, const LinkedList<CD>&);
ostream &operator << (ostream&, const LinkedList<SongInfo>&);



// CD class inherited of Media class

class CD : public Media{

private:
	
	SongInfo songInstance;									// Instance of SongInfo
	LinkedList<SongInfo> songList;							// instance of SongInfo LinkedList

	string artistName;										// store artist name member variable

	SongInfo getSongInstance() const;
	LinkedList<SongInfo> getSongList() const;

public:

	// Default constructor

	CD();

	// Mutator Functions

	void setArtistName(string);
	void setSongInstanceTitle(string);
	void setSongInstanceLength(string);
	void setSongList();

	// Accessor Function

	string getArtistName() const;

	// Friend ostream functions

	friend ostream &operator << (ostream&, const CD&);
	friend ostream &operator << (ostream&, const SongInfo&);
	friend ostream &operator << (ostream&, const LinkedList<CD>&);
	friend ostream &operator << (ostream&, const LinkedList<SongInfo>&);

	bool operator=(string st) {

		return this->getTitle() == st;
	}

	bool operator==(string st) {
		return this->getTitle() == st;
	}

	bool operator==(const CD &cd) {
		return this->getTitle() == cd.getTitle();
	}

	bool operator !=(const CD &cd) {
		return this->getTitle() == cd.getTitle();
	}

};

#endif