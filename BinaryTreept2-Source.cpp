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

#include <iostream>
#include "BinaryTree.h"
#include "EmployeeInfo.h"
#include <string>

using namespace std;

int main() {

	cout << "Assignment 14 - Binary Tree Part 2 Employee Info - Tom Tran" << endl;
	cout << "-----------------------------------------------------------" << endl;

	// Instance of binary tree class

	BinaryTree<EmployeeInfo> employees;

	// Employee Info object

	EmployeeInfo emps;

	// Populate the binary tree

	cout << "Populating the Binary Tree...." << endl;

	emps.setEmpID(1021);
	emps.setEmpName("John Williams");
	employees.insertNode(emps);

	emps.setEmpID(1057);
	emps.setEmpName("Bill Witherspoon");
	employees.insertNode(emps);

	emps.setEmpID(2487);
	emps.setEmpName("Jennifer Twain");
	employees.insertNode(emps);

	emps.setEmpID(3769);
	emps.setEmpName("Sofia Lancaster");
	employees.insertNode(emps);

	emps.setEmpID(1017);
	emps.setEmpName("Debbie Reece");
	employees.insertNode(emps);

	emps.setEmpID(1275);
	emps.setEmpName("George McMullen");
	employees.insertNode(emps);

	emps.setEmpID(1899);
	emps.setEmpName("Ashley Smith");
	employees.insertNode(emps);

	emps.setEmpID(4218);
	emps.setEmpName("Josh Plemmons");
	employees.insertNode(emps);

	cout << endl;

	// Display WorkForce In Order

	employees.displayInOrder();

	// Check Employee object

	EmployeeInfo checkEmployee;

	char again = 'y';
	int idNumber;										// To hold ID number used in search

	// While loop for checking employee ID search

	while (toupper(again) == 'Y') {

		// Get Id number from user

		cout << "Search for an employee by entering the Employee ID number: ";
		cin >> idNumber;

		// set Id Number from user to checkEmployee object set Empoyee ID function

		checkEmployee.setEmpID(idNumber);
		cout << endl;

		// If check employee is not found within employee list

		if (!employees.searchNode(checkEmployee)) {

			cout << "\nSorry the Employee ID you entered was not found.\n" << endl;
		}

		// Ask user if they want to search again
			
		cout << "\nWould you like to search again? (Y/N): ";
		cin >> again;
		cout << endl;

	}

	return 0;




}