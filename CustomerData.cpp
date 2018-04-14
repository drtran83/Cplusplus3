/* Implementation of CustomerData.h


Create a class called CustomerData which will have its class declaration in CustomerData.h and its implementation in CustomerData.cpp.
This class will be a derived class of PersonData.

This class will have two private data members for the customer number (customerNumber) as an integer;
the other will be called mailingList which is a bool to indicate if they want to be on the mailing list or not.

Write appropriate accessor and mutator functions for these data members.

This class will also have two constructors. It will have a default constructor that sets its data members to zero and false.

The other constructor will have parameters to set all of the data members of the two classes.


----------------------------------------------------
Author: Tam T. Tran
Created: July 6, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------


*/
#include "CustomerData.h"
#include "PersonData.h"
#include <iostream>


// Default Constructor
CustomerData::CustomerData() {

	customerNumber = 0;
	mailingList = false;
}

// Constructor
CustomerData::CustomerData(int cN , bool mL, string lN, string fN, string add, string cT, string sT, string zp, string pN) : PersonData(lN, fN, add, cT, sT, zp, pN)
{
	customerNumber = cN;
	mailingList = mL;

}

// Mutator Functions

void CustomerData::setCustomerNumber(int cN) {
	customerNumber = cN;
}
void CustomerData::setMailingList(bool mL) {

	mailingList = mL;
}

// Accessor Functions

int CustomerData::getCustomerNumber() {
	return customerNumber;
}

bool CustomerData::getMailingList() {
	return mailingList;
}