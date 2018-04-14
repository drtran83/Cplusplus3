/*Week 7 Assignment 2: Binary Tree Part 2

In this program you are going to use the binary tree class you created in Assignment 1 this week.

First create a class called EmployeeInfo that holds two private data members.
One data member is an integer called empID which holds the id number of the employee.

The second data member is a string called empName which holds the full name of the employee.

The program will create an instance of the binary tree class with a data type of EmployeeInfo (BinaryTree<EmployeeInfo>).

The binary tree will be sorted by the Employee ID number found in the EmployeeInfo class.

The program should then allow the user to search for Employee by the Employee ID.

If the employee is found in the tree, its name and ID should be displayed.
If not, a message should be displayed indicating that it was not found.

Sample data would be
•	1021       John Williams
•	1057       Bill Witherspoon
•	2487       Jennifer Twain
•	3769       Sophia Lancaster
•	1017       Debbie Reece
•	1275       George McMullen
•	1899       Ashley Smith
*   4218       Josh Plemmons

----------------------------------------------------
Author : Tam T.Tran
Created : August 11, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#pragma once
#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <iostream>
#include <string>
using namespace std;

class EmployeeInfo {

private:

	int	empID;						// Hold employee ID
	string empName;					// Hold Employee name

public:


// Default constructor
	EmployeeInfo();

// Constructor

	EmployeeInfo(int, string);

// Mutator Functions

	void setEmpID(int);
	void setEmpName(string);


// Accessor Functions

	int getEmpID()const;
	string getEmpName()const;


// overloaded operator functions

	bool operator ==(int val);
	bool operator ==(const EmployeeInfo &emp);
	bool operator <(const EmployeeInfo &emp);
	bool operator >(const EmployeeInfo &emp);

	friend ostream &operator << (ostream &stream, EmployeeInfo &object);


};


#endif
