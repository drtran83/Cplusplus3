// Implementation of RoomCarpet.h
/*----------------------------------------------------
Author: Tam T. Tran
Created: June 29, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------
*/


#pragma 
#include <iostream>
#include "RoomCarpet.h"


int RoomCarpet::getTotal() {

    int area = room.getArea().getFeet();
	return area * costPerFoot;
}