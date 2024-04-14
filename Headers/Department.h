#pragma once
#include<iostream>
#include <vector>
#include "Instructor.h"
#include "Dean.h"
using namespace std;


class Department
{
private:
	string Name;
	vector <string> Majors;
	vector <Instructor> Staff;
	string Dean_Name;
public:
//Constructors____________________________________________________________________

Department();


//Setters__________________________________________________________________________
	void setDean(string);
	void setName(string);
	void addMajor(string);
	void addToStuff(Instructor);
	void display();


//Getters__________________________________________________________________________
	string getName();
	string getDean_Name();	
	vector <string> getMajors();
	vector <Instructor> getStaff();
};

