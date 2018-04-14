//Implementation file for Employee Info

#include "EmployeeInfo.h"
#include <iostream>
using namespace std;

// Default constructor
EmployeeInfo::EmployeeInfo() {

	empID = 0;
	empName = "";
}

// Constructor
EmployeeInfo::EmployeeInfo(int iD, string name) {

	empID = iD;
	empName = name;

}

// Set employee ID mutator function

void EmployeeInfo::setEmpID(int iD) {

	empID = iD;

}

// set Employee Name mutator function

void EmployeeInfo::setEmpName(string name) {

	empName = name;
}

// Get Employee Id Function

int EmployeeInfo::getEmpID() const {
	
	return empID;
}

// Get Employee Name Function

string EmployeeInfo::getEmpName() const {

	return empName;
}

// Overloaded operator functions

bool EmployeeInfo::operator==(int val)
{
	return this->getEmpID() == val;
}

bool EmployeeInfo::operator==(const EmployeeInfo & emp)
{
	return this->empID == emp.empID;
}

bool EmployeeInfo::operator<(const EmployeeInfo & emp)
{
	return this->empID == emp.empID;
}

bool EmployeeInfo::operator>(const EmployeeInfo & emp)
{
	return this->empID == emp.empID;
}

ostream & operator<<(ostream & stream, EmployeeInfo & object)
{
	stream << object.empID << " - " << object.empName << endl;
	return stream;
}
