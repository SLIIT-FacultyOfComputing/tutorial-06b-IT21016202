#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, const char name1[20]) {
	studentId = id;
	strcpy(name, name1);
}

// Display StudentId and Name
void Student::display() {
	cout << "Student ID is = " << studentId << endl;
	cout << "Student Name is = " << name << endl;
}
