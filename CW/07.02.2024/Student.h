#pragma once

// #ifdef STUDENT                                //analog pragma once
#include <string>
#include <iostream>
#include "Lines.h"
class Student
{
private:
	int id;
	string firstName;
	string lastName;
	string group;
	int* marks;
	int countMarks;
public:
	Student(Lines line); 
	void showInfo();

};

//#endif                                         //analog pragma once