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

Revision 2:  Added returnItem function

----------------------------------------------------
Author : Tam T.Tran
Created : July 19, 2017
Rev : 2
Class : CISS 243 - Professor James Viviano
----------------------------------------------------
*/
#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Class template for holding a linked list.

template <class T>

class LinkedList {

private:
	struct ListNode {

		T val;						// To hold the value
		struct ListNode *next;		// To point to the next node
	};

	ListNode *head;					// List head pointer

public:

	// Constructor
	LinkedList() {
		head = nullptr;
	}

	// Destructor
	~LinkedList();

	// Linked List functions

	void appendNode(T);				// append list
	void insertNode(T);				// insert into list

	void deleteNode(T);				// delete node

	void displayList() const;		// display
	void searchList(T);				// search

	T checkNode(int) const;

	T returnItem(T);


};


//*************************************************
// Append node appends a node containing the value
// passed into newValue, to the end of the list.
//*************************************************

template <class T>
void LinkedList<T>::appendNode(T newVal) {

	ListNode *newNode;				// To point to a new node
	ListNode *nodePtr;				// To move through the list

	// Allocate a new node and store a num there.

	newNode = new ListNode;
	newNode->val = newVal;
	newNode->next = nullptr;

	// If there aren't any nodes in the list
	// make the newNode the first node.

	if (!head) 
		head = newNode;

	// Otherwise, insert newNode at the end of the list.

	else {

		// Initialize nodePtr to head of list

		nodePtr = head;

		// Find the last node in the list.

		while (nodePtr->next) 
			nodePtr = nodePtr->next;

			// Insert node as last node.

			nodePtr->next = newNode;
		
	}

}

//******************************************
// InsertNode function inserts a node with
// newVal copied to its value member.
//******************************************

template <class T>
void LinkedList<T>::insertNode(T newVal) {

	ListNode *newNode;				// A new node
	ListNode *nodePtr;				// To traverse list
	ListNode *prevNode = nullptr;	// Previous node

	// Allocate a new node and store num in it.

	newNode = new ListNode;
	newNode->val = newVal;

	// if there aren't any nodes in the list
	// make newnode the first node.

	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}

	// Otherwise insert new node

	else {

		// position nodePtr at the head

		nodePtr = head;

		// initialize prevNode to nullptr

		prevNode = nullptr;

		// Skip all nodes whose value is less than num

		while (nodePtr != nullptr && nodePtr->val < newVal) {
			prevNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// if new node is to be the first in the list
		// insert it before all other nodes.

		if (prevNode == nullptr) {
			head = newNode;
			newNode->next = nodePtr;
		}
		
		// Otherwise insert after previous node
		else {
			prevNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}


//****************************************************
// The delete node function searches for a node
// with searchValue as its value.  The node, if found,
// is deleted from the list and from memory.
//****************************************************

template <class T>
void LinkedList<T>::deleteNode(T searchVal) {

	ListNode *nodePtr;				// To traverse the list
	ListNode *prevNode;				// To point to previous node

	// if The list is empty, do nothing.

	if (!head) {
		return;
	}

	// Determine if the first node is NEO.

	if (head->val == searchVal) {
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}

	else
	{
		// Initialize nodePtr to head of list

		nodePtr = head;

		// Skip all nodes whose value member is not equal to searchVal

		while(nodePtr != nullptr && nodePtr->val != searchVal){

			prevNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// if nodeptr is not at the end of the list,
		// link the previous node to the node after
		// nodePtr, then delete nodePtr.

		if (nodePtr) {
			prevNode->next = nodePtr->next;
			delete nodePtr;
		}

	}

}

//***************************************************
// DisplayList shows the value stored in each node of
// the linked list pointed to by head.
//****************************************************

template <class T>
void LinkedList<T>::displayList()const {

	ListNode *nodePtr;					// To move through the list

	// Position nodePtr at the head of the list

	nodePtr = head;

	// While nodePtr points to a node, traverse the list.

	while (nodePtr)
	{
		// Display the val in this node

		cout << nodePtr->val << endl;

		// move to the next node

		nodePtr = nodePtr->next;
	}
}

//*****************************************
// Destructor
// This function will delete every node
// in the list
//*****************************************

template <class T>

LinkedList<T>::~LinkedList() {

	ListNode *nodePtr;			// To traverse the list
	ListNode *nxtNode;			// To point to next done

	// Position nodePtr at the head of the list

	nodePtr = head;

	// While nodePtr is not at the end of the list

	while (nodePtr != nullptr) {

		// save a pointer to the next node

		nxtNode = nodePtr->next;

		// delete the current node.

		delete nodePtr;

		// Position nodePtr at the next node.

		nodePtr = nxtNode;
	}


}


template <class T>
void LinkedList<T>::searchList(T searchVal) {

	ListNode *nodePtr;				// To traverse the list
	ListNode *prevNode;				// To point to previous node

	int count = 0;

	// If the list is empty, do nothing.
	if (!head)
		return;

	// Initialize nodePtr to head of list
	nodePtr = head;

	// Skip all nodes whose value member is 
	// not equal to searchValue.
	while (nodePtr != nullptr && nodePtr->val != searchVal)
	{
		nodePtr = nodePtr->next;
		count++;
	}

	if (!nodePtr) //didn't find the value and arrived at the end
	{
		cout << "-1 Sorry your number was not found" << endl;
	}
	else
	{
		cout << "your number is in index:" << count + 1 << endl;
		cout << "Value: " << nodePtr->val << endl;
		cout << nodePtr->val << endl;
	}
}

//**********************************
// Check node
// This function will accept a int to determine which element in the list to return
//***********************************************************************************

template <class T>
T LinkedList<T>::checkNode(int m) const
{

	ListNode *nodePtr;
	nodePtr = head;

	if (m == 1)
		return head->val;
	else
	{
		for (int i = 1; i < m; i++)
		{
			nodePtr = nodePtr->next;
		}

		return nodePtr->val;
	}

}

template <class T>
T LinkedList<T>::returnItem(T itm) {

	ListNode *nodePtr;
	nodePtr = head;

	while (nodePtr) {

		if (nodePtr->val == itm)

			return nodePtr->val;
		else
		{
			nodePtr = nodePtr->next;
		}
	}

	return itm;
}



#endif 
