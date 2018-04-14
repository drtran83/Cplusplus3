/*
Week 5 Assignment 1: Dynamic Stack

----------------------------------------------------
Author : Tam T.Tran
Created : July 27, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#pragma once
#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
using namespace std;

// Stack template

template <class T>

class DynaStack {

private:

	// Struct for the stack nodes

	struct StackNode {

		T val;					// to hold the value in the node

		StackNode *nxt;			// pointer to the next node
	};

	StackNode *top;				// pointer to the top of the stack

public:

	// Constructor
	DynaStack() 
	{
		top = nullptr;			// Sets top to null pointer
	}


	// Destructor
	~DynaStack();	

	// Stack operations

	void push(T);
	void pop(T &);
	bool isEmpty();
};

//********************************
// Destructor
//********************************

template <class T>
DynaStack<T>::~DynaStack() {

	StackNode *nodePtr, *nxtNode;

	// Position nodeptr at the top

	nodePtr = top;

	// Traversing the list and delete each node.

	while (nodePtr != nullptr) {

		nxtNode = nodePtr->nxt;
		delete nodePtr;
		nodePtr = nxtNode;
	}

}

//*************************************************************
//  Function push will push the arguement onto the stack.
//*************************************************************

template <class T>
void DynaStack<T>::push(T itm) {

	StackNode *newNode = nullptr;				// pointer to a new node

	// Allocate a new node and store the item there.

	newNode = new StackNode;
	newNode->val = itm;

	// If there are no nodes in the list, then make newNode the 1st node.

	if (isEmpty()) {
		top = newNode;
		newNode->nxt = nullptr;
	}

	// Otherwise, insert newNode before top
	
	else {
		newNode->nxt = top;
		top = newNode;
	}
}

//***************************************************************
// Function pop will pop the value at the top of the stack
// off and copy it into the variable passed as a arg.
//**************************************************************

template <class T>
void DynaStack<T>::pop(T &itm) {

	StackNode *tmp = nullptr;			// temp pointer

	// Make sure the stack isn't empty

	if (isEmpty()) {
		cout << "\nSorry the stack is Empty." << endl;
	}

	// Pop the value off of the stack

	else {

		itm = top->val;			
		tmp = top->nxt;			
		delete top;
		top = tmp;				
	}


}

//******************************************************************
// Function isEmpty returns true if the stack really is empty
// or false otherwise
//******************************************************************

template <class T>
bool DynaStack<T>::isEmpty() {

	bool stat;

	if (!top)
		stat = true;

	else
		stat = false;

	return stat;

}




#endif
