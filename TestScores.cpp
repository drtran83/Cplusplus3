// Implementation file for TestScores class

#include "TestScores.h"



TestScores::TestScores(int scoreArray[], int size)
{
	for (int i = 0; i < size; i++)
		testScores[i] = scoreArray[i];
}

void TestScores::setScore(double s) {

	if (s >= 0) 
		scores = s;

	else
		throw NegativeScore();


	if (s <= 100)
		scores = s;
	else
		throw TooLargeScore();
}

double TestScores::getScore() const {

	return scores;
}

double TestScores::getAverage() const
{
	return scores / num_TESTS;
}


