/*

Week 3 - Assignment 5 Test Scores

Write a class called TestScores.

The class constructor should accept an array of test scores as its argument.

The class should have a member function that returns the average of the test scores.

If any test score in the array is negative or greater than 100, the class should throw an exception.

There should be two classes for the exceptions; one should be called NegativeScore and other should be TooLargeScore.

These exception classes will have a data member that is an integer value called score.
This data member will be set in the constructor via the parameter.

It should also provide a member function called getScore which returns score data member.

The function in TestScores called getAverages will calculate the average(as a double) of the test scores in the array.

It will also check if the score is negative or greater than 100.

If it is negative it should throw an exception using the NegativeScore class.

If the score is greater than 100 it should throw an exception using the TooLargeScore class.

Main will create the instance of the TestScores class and catch the exceptions.
So it needs to handle both exceptions and display the error message with the score that is invalid.


----------------------------------------------------
Author : Tam T.Tran
	Created : July 13, 2017
	Rev : 1
	Class : CISS 243 - Professor James Viviano
	----------------------------------------------------
*/

#include <iostream>
#include "TestScores.h"
using namespace std;

int main() {

	cout << "Assignment 5 - Test Scores - Tom Tran\n" << endl;
	cout << "========================================" << endl;

	// variables

	int count = 0;					// counter
	double scores;					// holds scores

	// Test scores Object
	TestScores obj[num_TESTS];


	// get the scores

	for (count = 0; count < num_TESTS; count++) {

		cout << "Enter the score for test ";
		cout << (count + 1) << ": ";
		cin >> scores;
		obj[count].getAverage();

	}


	// Exceptions

	try {
		obj[num_TESTS].setScore(scores);
	}

	catch (TestScores::NegativeScore) {
		cout << "Error: A negative score was entered.\n";

	}

	catch (TestScores::TooLargeScore) {
		cout << "Error a score above 100 was entered.\n";
	}


	// output

	cout << "The average of the test scores is: " << obj[num_TESTS].getAverage() << endl;

	cout << "end of program.\n" << endl;

	return 0;
 }