#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
#include "Department.h"


class Dean : public Member
{
protected:
	Department* department_ptr = nullptr; // pointer to the department object
	vector <Course> courses;
	void createDepartment();

public:
	Dean(string name, char s, 
	string role, string nationalID , 
	vector <Course> courses );
		
	void setDepartment(Department & department);
	void addCourse(Course);
	void displayCourses(vector <Course>);
	void deleteCourse(Course);
	void showDepartment();
	string Dean::call_getName();
	Department* getDepartment();
};

