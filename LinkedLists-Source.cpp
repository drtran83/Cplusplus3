/*
Week 4, Assignment 1: Linked List Part 1

Design your own linked list class that works as a template class.

It should provide member functions for appending, inserting and deleting nodes.

The destructor should destroy the list.

The class should also provide a member function that will display the contents of the list to the screen. 
The class should also provide a member function to search the list for an element in the list.

The search should return the index (location) of the item in the list. 

So if it is the first element in the list then it should return 0.

If the item is not in the list, it should return -1.

Have main create two instances of the linked list with different data types and show that all of the functions work correctly.

----------------------------------------------------
Author : Tam T.Tran
Created : July 19, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

	cout << "CISS 243 - Assignment 7 - Week 4 - Linked List Template - Tom Tran" << endl;
	cout << "==================================================================" << endl;

	// define some linked list objects.

	LinkedList<int> list1;			// Linked List int
	LinkedList<double> list2;		// Linked List double

	// Append to list 1

	list1.appendNode(1);
	list1.appendNode(2);
	list1.appendNode(3);


	// Append to list 2

	list2.appendNode(1.1);
	list2.appendNode(2.2);
	list2.appendNode(3.3);
	

	// Display List 1 contents

	cout << "\nDisplaying the contents of list 1\n" << endl;
	list1.displayList();

	// Display List 2 contents

	cout << "\nDisplaying the contents of List 2\n" << endl;
	list2.displayList();


	// Insert into List 1 and display
	cout << "\nInserting new node to List 1" << endl;
	list1.insertNode(4);
	
	cout << "\nNew list 1 contents with new node 4..." << endl;
	list1.displayList();

	// Insert into List 2 and display
	cout << "\nInserting new node into List 2" << endl;
	list2.insertNode(4.4);

	cout << "\nNew list 2 contents with new node 4.4..." << endl;
	list2.displayList();

	// Delete node from List 1 and display

	cout << "\nDeleting node 2 from List 1" << endl;
	list1.deleteNode(2);
	cout << "\nNew List 1 contents" << endl;
	list1.displayList();

	// Delete node from List 2 and display

	cout << "\nDeleting node 2 from List 2" << endl;
	list2.deleteNode(2.2);
	cout << "\nNew List 1 contents" << endl;
	list2.displayList();

	// search List 1 for a node.

	cout << "\nSearching List 1 for node 1" << endl;
	list1.searchList(1);


	// search List 2 for a node.

	cout << "\nSearching List 2 for node 5" << endl;
	list2.searchList(5);

	return 0;
}