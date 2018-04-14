/*
Week 2, Assignment 1: Customer Data

This program will have two classes.

The first class defines a person, which means this class can be used for anything that involves a person.
We will use it to define a Customer but it could be used to define a Student.

Create a class called PersonData and it will have its 
class declaration in PersonData.h and its implementation in PersonData.cpp.

This class will have private data member’s lastName, firstName, address, city, state, zip and phone number as strings. 
Write the appropriate accessor and mutator functions for these member variables. It should have two constructors.

One constructor is a default constructor that sets all of the data members to empty strings.

A second constructor has parameters for all of its data members.

Create a class called CustomerData which will have its 
class declaration in CustomerData.h and its implementation in CustomerData.cpp. This class will be a derived class of PersonData. 

This class will have two private data members for the customer number (customerNumber) as an integer; 
the other will be called mailingList which is a bool to indicate if they want to be on the mailing list or not. 

Write appropriate accessor and mutator functions for these data members.

This class will also have two constructors. It will have a default constructor that sets its data members to zero and false.

The other constructor will have parameters to set all of the data members of the two classes.

Create a program that will create two instances of the CustomerData class. 
It must create one instance using the default constructor and then another using the second constructor. 
Once both instances are fully populated with data, call a function that will display the customer information.


void displayCustomer(CustomerData c)

----------------------------------------------------
Author: Tam T. Tran
Created: July 6, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/



#include <iostream>
#include <string>
#include "CustomerData.h"
#include "PersonData.h"

// Function prototype

void displayCustomer(CustomerData c);


int main() {

	cout << "CIS 243 - Programming III - Week 2 - Customer Data - Tom Tran\n" << endl;
	cout << "=================================================================\n" << endl;

	// Instance one of CustomerData class

	CustomerData customer1;

	// Instnace two of Customer Data Class

	CustomerData customer2(101, true, "Tran", "Tom", "Oak Hill Rd", "Cuba", "Missouri", "65453", "999-999-9999");

	displayCustomer(customer2);



	return 0;
}

// Function

void displayCustomer(CustomerData c) {

	cout << "Customer Number: " << c.getCustomerNumber() << endl;
	cout << "Mailing List: " << c.getMailingList() << endl;
	cout << "Last Name: " << c.getLastName() << endl;
	cout << "First Name: " << c.getFirstName() << endl;
	cout << "Address: " << c.getAddress() << endl;
	cout << "City: " << c.getCity() << endl;
	cout << "State: " << c.getState() << endl;
	cout << "Zip: " << c.getZip() << endl;
	cout << "Phone Number: " << c.getPhoneNumber() << endl;
}