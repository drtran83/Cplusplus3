/*
CD/DVD Collection

This program will allow the user to keep track of both a CD and a DVD collection.

The program needs to work for both CDs and DVDs.

There should be a base class that maintains the common information between a CD and a DVD.

Each CD/DVD in the collection will be represented as a class, 
so you will have one class that will be a CD and another that will be a DVD.

The program will then has a base class called Media. Both the CD and DVD classes will inherit from the same base class.

The base class will have one data member that will hold the CD Name or Movie Title and another data member for 
the length of the total CD or the length of the movie.

The CD class will use a linked list to keep track of the titles of the songs on the CD; 
this will allow each CD to have a different number of songs. It should also maintain the length of each song, 
thus the class will use a structure which will have the song title and its length.

Each song will be an instance of this structure and will be stored in the linked list.  
The class will also have a data member for the artist name.

The DVD class will have data members for the year the movie was released. 
The class will have a linked list for storage of the name of the actors and actresses in the movie.

The class will also maintain the character names that the actors/actresses played in the movie. 
The actors/ actresses and characters information will be stored in a structure which will be stored in the linked list.

The program will then maintain two lists, one for the CDs and another for DVDs. T
he program will use linked lists to maintain the two different lists. 
The program must provide methods (functions) to add a CD/DVD, remove a CD/DVD and update a CD/DVD.
There should also be a function that displays the entire list of CDs/DVDs. 

The output must be a table format, with heading.

NOTE: There must be only one linked list class (template) that will be used for each of the lists needed in this program.
Derived classes of the linked list can be added to expend the functionality of the linked list to be specific for each class.

Movie Title         Length of Movie               Year Released             Actors/Actresses                   Characters

NOTE: The movie title, length of movie and year released should only appear once
while the actors/actresses and characters will have several lines. So the other columns must be displayed with blanks.

Artist                     CD Name             Length of CD                      Song Title                            Song Length
NOTE: The artist name, CD name and length of CD should only appear once while the song title and length will have several lines. So the other columns must be displayed with blanks.

----------------------------------------------------
Author : Tam T.Tran
Created : August 16, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------
*/


#include <iostream>
#include <string>
#include "CD.h"
#include "DVD.h"

using namespace std;

// Function prototypes

int menu();

void addCD(LinkedList<CD> *);
void addDVD(LinkedList<DVD> *);

void displayCD(LinkedList<CD> *);
void displayDVD(LinkedList<DVD> *);

void removeCD(LinkedList<CD> *);
void removeDVD(LinkedList<DVD> *);

void updateCD(LinkedList<CD> *);
void updateDVD(LinkedList<DVD> *);


int main() {

	cout << "CISS 243 - CD/DVD Collection - Tom Tran" << endl;
	cout << "========================================\n" << endl;

	// Objects

	LinkedList<CD> CDList;
	LinkedList<CD> *CDListPointer;
	CDListPointer = &CDList;

	LinkedList<DVD> DVDList;
	LinkedList<DVD> *DVDListPointer;
	DVDListPointer = &DVDList;

	int menuChoice;

	do {

		menuChoice = menu();

		switch (menuChoice) {

		case 1:
			addCD(CDListPointer);
			break;

		case 2:
			addDVD(DVDListPointer);
			break;

		case 3:
			displayCD(CDListPointer);
			break;

		case 4:
			displayDVD(DVDListPointer);
			break;

		case 5:
			removeCD(CDListPointer);
			break;

		case 6:
			removeDVD(DVDListPointer);
			break;

		case 7:	
			updateCD(CDListPointer);
			break;

		case 8:
			updateDVD(DVDListPointer);
			break;
		}

	} while (menuChoice != 9);


	return 0;


}

// Functions

// Menu Function displays menu for user to choose what they want to do.

int menu() {

	int uChoice;							// to store users choice

	cout << "\nCD/DVD Collection Menu" << endl;
	cout << "========================" << endl;
	cout <<"1.  Add a CD\n"
		<< "2.  Add a DVD\n"
		<< "3.  Display CD(s)\n"
		<< "4.  Display DVD(s)\n"
		<< "5.  Remove a CD\n"
		<< "6.  Remove a DVD\n"
		<< "7.  Update a CD\n"
		<< "8.  Update a DVD\n"
		<< "9.  End Program\n";
	cout << "Enter your choice (1-9): ";
	cin >> uChoice;

	// ensure user enters in the right user choice numbers
	while (uChoice < 1 || uChoice > 9) {

		cout << "You entered an invalid choice.  ReEnter a choice between (1-9): ";
		cin >> uChoice;
	}
	return uChoice;
}

// #1. Add CD Function will add a CD to the LinkedList

void addCD(LinkedList<CD> *cdList) {

	// variables

	CD newCD;										// new CD object
	string artist;									// store artist
	string length;									// store length
	string albumTitle;								// store album title
	string trackTitle;								// store track title
	string trackLength;								// store strack length


	// Get artist name, length, and title of CD from user

	cout << "Enter the name of the Artist of the CD: ";
	cin >> artist;
	newCD.setArtistName(artist);

	cout << "Enter the length of the CD: ";
	cin >> length;
	newCD.setLength(length);

	cin.ignore();
	cout << "Enter the Album Title of the CD: ";
	cin >> albumTitle;
	newCD.setTitle(albumTitle);

	// While loop if user wants to continue to add more with track number and length

	char addMore = 'Y';							//  add more
	int trackNumber = 0;						// track number accumulator


	while (toupper(addMore) == 'Y') 
	{
		trackNumber++;

		// get track title from user

		cout << "Enter Track # " << trackNumber << " Title: ";
		cin >> trackTitle;
		newCD.setSongInstanceTitle(trackTitle);

		// get track length from user

		cout << "Enter Track # " << trackNumber << " Length: ";
		cin >> trackLength;
		newCD.setSongInstanceLength(trackLength);

		// Append to LinkedList
		newCD.setSongList();

		cout << "Is there another track? (Y/N): ";
		cin >> addMore;
	}

		
}

// #2 Add dvd function will add DVD to the Linked List

void addDVD(LinkedList<DVD> *dvdList) {
	
	DVD newDVD;									// new DVD object
	string movieTitle;							// store movie title
	string movieLength;							// store movie length
	string yearReleased;						// store year released
	string actor;								// store actor name
	string character;							// store character name
	

	// get the Title, Length and Year Released of the DVD.

	cout << endl << "Enter the title of the Movie: ";
	cin >> movieTitle;
	newDVD.setTitle(movieTitle);

	cout << "Enter the length of the Movie: ";
	cin >> movieLength;
	newDVD.setLength(movieLength);

	cout << "Enter the Year the Movie was Released: ";
	cin >> yearReleased;
	newDVD.setYearReleased(yearReleased);


	char addMore = 'Y';										// user choice to add more
	int actorNumber = 0;									// set actor Number accumulator

	while (toupper(addMore) == 'Y') {
		
		actorNumber++;										// increment actor number

		// Get Actors name and Character name

		cout << "Enter Actor/Actress # " << actorNumber << " Name: ";
		cin >> actor;
		newDVD.setActorNameInstance(actor);

		cout << "Etner the Actor/Actress # " << actorNumber << " Character Name: ";
		cin >> character;
		newDVD.setCharacterNameInstance(character);

		// append new DVD to Linked List
		newDVD.setActorList();
		

		cout << "Are there anymore Actor/Actress/Characters? (Y/N): ";
		cin >> addMore;
	}

}

// #3 Display CD Function will display contents of CD list

void displayCD(LinkedList<CD> *cdList) {

	cout << endl
		<< left << setw(16) << "Artist Name: "
		<< left << setw(16) << "Album Title: "
		<< left << setw(16) << "Length of CD: "
		<< left << setw(16) << "Track Title: "
		<< left << setw(16) << "Track Length: "
		<< left << setw(16) << "________"
		<< left << setw(16) << "_________"
		<< left << setw(16) << "_______________"
		<< left << setw(16) << "_____________"
		<< left << setw(16) << "______________";

		cdList->displayList();
		cout << endl;
}

// #4 Display DVD function will display contents of DVD list

void displayDVD(LinkedList<DVD> *dvdList) {

	cout << endl
		<< left << setw(16) << "Movie Title: "
		<< left << setw(16) << "Length of Movie: "
		<< left << setw(16) << "Year Released: "
		<< left << setw(16) << "Actor/Actresses: "
		<< left << setw(16) << "Characters: "
		<< left << setw(16) << "________"
		<< left << setw(16) << "_________"
		<< left << setw(16) << "_______________"
		<< left << setw(16) << "_____________"
		<< left << setw(16) << "______________";

	dvdList->displayList();

	cout << endl;

}

// #5 Remove CD Function will remove a CD from the Linked List

void removeCD(LinkedList<CD> *cdList) {

	CD removeCD;									// remove CD object
	string remove;

	cdList->displayList();							// display current CD list


	cout << "Which CD would you like to remove from the list? ";
	cin >> remove;
	cout << endl;

	removeCD.setTitle(remove);

	cdList->deleteNode(removeCD);
}

// #6 Remove DVD Function will remove a DVD from the Linked List

void removeDVD(LinkedList<DVD> *dvdList) {


	DVD removeDVD;									// remove DVD object
	string remove;

	dvdList->displayList();							// display current CD list

	cout << "Which Movie would you like to remove from the list? ";
	cin >> remove;
	cout << endl;

	removeDVD.setTitle(remove);

	dvdList->deleteNode(removeDVD);
}

// #7 Update CD Function will allow user to update a CD in the Linked List

void updateCD(LinkedList<CD> *cdList) {

	CD updateCD;										// update CD object
	CD newCD;											// new CD object
	string update;
	string artist;										// store artist
	string length;										// store length
	string albumTitle;									// store album title
	string trackTitle;									// store track title
	string trackLength;									// store strack length

	// display list of CD
	cdList->displayList();

	// get the CD that user would like to update

	cout << "Which CD would you like to update? ";
	cin >> update;
	cout << endl;

	updateCD.setTitle(update);

	int uChoice;										// store user choice
	char addMore = 'Y';									// user choice to add more
	int count = 0;										// accumulator

	updateCD = cdList->returnItem(updateCD);

	newCD.setArtistName(updateCD.getArtistName());
	newCD.setTitle(updateCD.getTitle());
	newCD.setLength(updateCD.getLength());
	cdList->deleteNode(updateCD);

	// Menu for user to choose which they would like to update

	cout << "What would you like to update? " << endl
		<< "1. Artist Name " << endl
		<< "2. Album Title " << endl
		<< "3. Length " << endl
		<< "4. Song List" << endl
		<< "Enter 1-4: ";
	cin >> uChoice;

	// Update according to what option user chooses

	if (uChoice == 1) {

		
		cout << "Enter the new Artist's Name: ";
		cin >> artist;
		newCD.setArtistName(artist);
	}

	else if (uChoice == 2) {

		cout << "Enter the new Album name: ";
		cin >> albumTitle;
		newCD.setTitle(albumTitle);
	}

	else if (uChoice == 3) {
		
		cout << "Enter the new Length of the Album: ";
		cin >> length;
		newCD.setLength(length);
	}

	else if (uChoice == 4) {
		
		// While loop

		while (toupper(addMore) == 'Y') {

			count++;
			cout << "Enter Track # " << count << "Title: ";
			cin >> trackTitle;
			newCD.setSongInstanceTitle(trackTitle);

			cout << "Enter Track # " << count << "Length: ";
			cin >> trackLength;
			newCD.setSongInstanceLength(trackLength);

			// Append to song list

			newCD.setSongList();

			cout << "Is there another track you'd like to add? (Y/N): ";
			cin >> addMore;
		}
	}

	

}

// #8 Update DVD Function will allow user to update a DVD in the Linked List

void updateDVD(LinkedList<DVD> *dvdList) {

	DVD updateDVD;										// update DVD object
	DVD newDVD;											// new DVD object
	string movieTitle;									// store movie title
	string movieLength;									// store movie length
	string yearReleased;								// store year released
	string actor;										// store actor name
	string character;									// store character name

	// display list of DVD
	dvdList->displayList();


	// get the DVD that user would like to update

	cout << "Which DVD would you like to update? ";
	cin >> movieTitle;
	cout << endl;

	updateDVD.setTitle(movieTitle);

	int uChoice;										// store user choice
	char addMore = 'Y';									// user choice to add more
	int count = 0;										// accumulator

	updateDVD = dvdList->returnItem(updateDVD);

	newDVD.setTitle(updateDVD.getTitle());
	newDVD.setYearReleased(updateDVD.getYearReleased());
	newDVD.setLength(updateDVD.getLength());
	dvdList->deleteNode(updateDVD);

	// Menu for user to choose which they would like to update

	cout << "What would you like to update? " << endl
		<< "1. Movie Title " << endl
		<< "2. Movie Length " << endl
		<< "3. Year Released " << endl
		<< "4. Actor/Actress/Character List " << endl
		<< "Enter 1-4: ";
	cin >> uChoice;

	// Update according to what option user chooses

	if (uChoice == 1) {

		
		cout << "Enter the new Movie Title: ";
		cin >> movieTitle;
		newDVD.setTitle(movieTitle);
	}

	else if (uChoice == 2) {

		cout << "Enter the new Move Length: ";
		cin >> movieLength;
		newDVD.setLength(movieLength);
	}

	else if (uChoice == 3) {
		
		cout << "Enter the new Year Release of the Movie: ";
		cin >> yearReleased;
		newDVD.setYearReleased(yearReleased);
	}

	else if (uChoice == 4) {

		// While loop for character / actor update

		while (toupper(addMore) == 'Y') {

			count++;
			cout << "Enter Actor/Actress " << count << " Name: ";
			cin >> actor;
			newDVD.setActorNameInstance(actor);

			cout << "Enter Character " << count << " Name: ";
			cin >> character;
			newDVD.setCharacterNameInstance(character);

			// Append to dvd list
			newDVD.setActorList();

			cout << "Is there another Actor/Actress/Character you'd like to add? (Y/N): ";
			cin >> addMore;
		}
	}
}