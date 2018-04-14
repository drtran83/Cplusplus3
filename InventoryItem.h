/*

Declaration file for InventoryItem class

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

#pragma once
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <iostream>
#include <string>
using namespace std;

class InventoryItem {

private:

	int serialNum;						// To hold serial number
	string manufactDate;				// To hold manufacture date
	int lotNum;							// To hold lot number


public:

	// Default Constructor

	InventoryItem();

	// Constructor

	InventoryItem(int sN, string mD, int lN);

	// Mutators

	void setSerial(int sN);
	void setManDate(string mD);
	void setLotNum(int lN);

	// Accessors

	int getSerial() const;
	string getManDate() const;
	int getLotNum() const;





};





#endif


