#pragma once

/*

This program will have two classes.

The first class defines a person, which means this class can be used for anything that involves a person.
We will use it to define a Customer but it could be used to define a Student.

Create a class called PersonData and it will have its
class declaration in PersonData.h and its implementation in PersonData.cpp.

This class will have private data member’s lastName, firstName, address, city, state, zip and phone number as strings.
Write the appropriate accessor and mutator functions for these member variables. It should have two constructors.

One constructor is a default constructor that sets all of the data members to empty strings.

A second constructor has parameters for all of its data members.


----------------------------------------------------
Author: Tam T. Tran
Created: July 6, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/

#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <string>
using namespace std;

// Base class of Person

class PersonData {

private:

	string lastName;							// Stores Last Name as a String
	string firstName;							// Stores First Name as a String
	string address;								// Stores Address as a String
	string city;								// Stores City as a String
	string state;								// Stores State as a String
	string zip;									// Store Zip as a String
	string phoneNumber;							// Stores Phone Number as a String

public:

	// default constructor

	PersonData();

	// Constructor

	PersonData(string lN, string fN, string add, string cT, string sT, string zp, string pN);

	// Mutator functions

	void setLastName(string lN);
	void setFirstName(string fN);
	void setAddress(string add);
	void setCity(string cT);
	void setState(string sT);
	void setZip(string zP);
	void setPhoneNumber(string pN);

	// Accessor Functions

	string getLastName() const;
	string getFirstName() const;
	string getAddress() const;
	string getCity() const;
	string getState() const;
	string getZip() const; 
	string getPhoneNumber() const;



};





#endif