#pragma once
#include<iostream>
#include <vector>
#include "instructor.h"
#include "Dean.h"
using namespace std;


class Department
{
private:
	string Name;
	vector <string> Majors;
	vector <Instructor> Staff;
	string dean;
public:
	void setDean(Dean);
	void setName(string);
	void addMajor(string);
	void addToStuff(Instructor);
	void display();
};

