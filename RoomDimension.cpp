// Implementation of RoomDimension.h

#pragma
#include <iostream>
#include "RoomDimension.h"




RoomDimension::RoomDimension(const RoomDimension& r) {

	length = (r.length);
	width = (r.width);

}


RoomDimension::RoomDimension(FeetInches l, FeetInches w) {

	length = l;
	width = w;

}