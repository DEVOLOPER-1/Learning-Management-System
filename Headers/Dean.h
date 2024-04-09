#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
#include "Department.h"


class Dean : public Member
{
private:
	string DepartmentName;
	vector <Course> courses;
	void createDepartment();

public:
	void setDepartment(Department);
	void addCourse(Course);
	void displayCourses(vector <Course>);
	void deleteCourse(Course);
	Department getDepartment();
	void showDepartment();
};

