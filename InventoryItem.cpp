/* Implementation file for InventoryItem.h


In this program, you will use the stack class you created in Assignment 1.

First, you will create a class called InventoryItem.
This class will have its class declaration in InventoryItem.h and its implementation in InventoryItem.cpp.

It will have three private data members, an integer serialNum which holds the part’s serial number, manufactDate
which should be a string that holds the date the item was manufactured,
then lotNum which will be an integer that holds the part’s lot number.

----------------------------------------------------
Author : Tam T.Tran
Created : July 28, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#include "InventoryItem.h"
#include <iostream>
#include <string>
using namespace std;


// Default Constructor

InventoryItem::InventoryItem() {

	serialNum = 0;
	manufactDate = "";
	lotNum = 0;
}


// Constructor

InventoryItem::InventoryItem(int sN, string mD, int lN)
{

	serialNum = sN;
	manufactDate = mD;
	lotNum = lN;

}

//Mutator Functions

void InventoryItem::setSerial(int sN) {
	serialNum = sN;
}

void InventoryItem::setManDate(string mD) {
	manufactDate = mD;
}

void InventoryItem::setLotNum(int lN) {
	lotNum = lN;
}

// Accessor Functions

int InventoryItem::getSerial() const {
	return serialNum;
}

string InventoryItem::getManDate() const {
	return manufactDate;
}

int InventoryItem::getLotNum() const {
	return lotNum;
}