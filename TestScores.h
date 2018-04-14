/*Week 3 - Assignment 5 Test Scores

Write a class called TestScores.

The class constructor should accept an array of test scores as its argument.

The class should have a member function that returns the average of the test scores.

If any test score in the array is negative or greater than 100, the class should throw an exception.

There should be two classes for the exceptions; one should be called NegativeScore and other should be TooLargeScore.

These exception classes will have a data member that is an integer value called score. 
This data member will be set in the constructor via the parameter.

It should also provide a member function called getScore which returns score data member.

The function in TestScores called getAverages will calculate the average (as a double) of the test scores in the array. 

It will also check if the score is negative or greater than 100.

If it is negative it should throw an exception using the NegativeScore class.

If the score is greater than 100 it should throw an exception using the TooLargeScore class.

----------------------------------------------------
Author: Tam T. Tran
Created: July 13, 2017
Rev: 1
Class: CISS 243 - Professor James Viviano
----------------------------------------------------

*/

#pragma once
#ifndef TESTSCORES_H
#define TESTSCORES_H

const int num_TESTS = 4;					// const number of tests
class TestScores {

private:
	
	double scores;
	int testScores[num_TESTS];


public:

	// default constructor

	TestScores() {
		scores = 0;
	}
	

	// Constructor

	TestScores(int[], int);

	// Exception class for negative

	class NegativeScore{};
	class TooLargeScore{};


	// Mutator function

	void setScore(double);

	// Accessor function

	double getScore() const;
	double getAverage() const;



};








#endif

