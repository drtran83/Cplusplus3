#pragma once
/*

Assignment 6 - Week 3 - MinMax

Create a class called MinMax which will be a template class.

The class will have two data members which have a data type of the template.

The class will provide two member functions called minimum and maximum.

The function minimum will determine which of the two data members is the lower of the two and return that value.

The function maximum will determine which of the two data members is the larger of the two and return that value.

Create a program that creates 3 instances of this class for the data types int, double and char.


----------------------------------------------------
Author : Tam T.Tran
Created : July 14, 2017
Rev : 1
Class : CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#ifndef MINMAX_H
#define MINMAX_H
#include <iostream>


// This class will have two data members which have a data type of the template
template <class T>

class MinMax {

	T member1, member2;

public:

	// constructor

	MinMax(T m1, T m2) {

		member1 = m1;
		member2 = m2;
	}

	// minimum and maximum functions

	T min() const;
	T max() const;

};

#endif

template <class T>
T MinMax<T>:: min() const
 {
	if (member1 < member2)
	{
		return member1;
	}

	else 
		return member2;
}

template <class T>
T MinMax<T>:: max() const
{
	if (member1 > member2)
	{
		return member1;
	}

	else
		return member2;

}

