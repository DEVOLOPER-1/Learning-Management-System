#pragma once
#include<iostream>
#include <vector>
#include "Instructor.h"
#include "Dean.h"
using namespace std;


class Department
{
private:
	Dean* dean_ptr = nullptr;
	string Name;
	vector <string> Majors;
	//vector <Instructor> Staff;
	string Dean_Name;
	void createDean();
public:
//Constructors____________________________________________________________________
Department();
Department(string name, string dean_name, vector <string> majors  );


//Setters__________________________________________________________________________
	void settingDean(Dean & dean);
	void setName(string);
	void addMajor(string);
	void addToStuff(Instructor);
	void display();


//Getters__________________________________________________________________________
	string getName();
	Dean* getDean();
	vector <string> getMajors();
	//vector <Instructor> getStaff();
};

