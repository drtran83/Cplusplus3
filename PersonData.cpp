
/*

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

#include "PersonData.h"
#include <string>


using namespace std;

PersonData::PersonData() {

	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phoneNumber = "";
}

// Constructor

PersonData::PersonData(string lN, string fN, string add, string cT, string sT, string zp, string pN) {

	lastName = lN;
	firstName = fN;
	address = add;
	city = cT;
	state = sT;
	zip = zp;
	phoneNumber = pN;
}

// Mutator functions

void PersonData::setLastName(string lN) {
	lastName = lN;
}

void PersonData::setFirstName(string fN) {
	firstName = fN;
}

void PersonData::setAddress(string add) {

	address = add;
}

void PersonData::setCity(string cT) {
	city = cT;
}

void PersonData::setState(string sT) {
	state = sT;
}

void PersonData::setZip(string zP) {

	zip = zP;
}

void PersonData::setPhoneNumber(string pN) {
	phoneNumber = pN;
}

// Accessor Functions

string PersonData::getLastName() const
{
	return lastName;
}

string PersonData::getFirstName() const
{
	return firstName;
}

string PersonData::getAddress() const
{
	return address;
}

string PersonData::getCity() const
{
	return city;
}

string PersonData::getState() const
{
	return state;
}

string PersonData::getZip() const {
	return zip;
}

string PersonData::getPhoneNumber() const
{
	return phoneNumber;
}