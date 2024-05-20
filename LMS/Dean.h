#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
#include "Department.h"
#include "Petition.h"

class Dean : public Member{
protected:
	Department *department_ptr = nullptr; // pointer to the department object
	Petition *petition_ptr = nullptr;
	Course *course_ptr = nullptr;
	vector<Course> courses;

public:
	Dean();
	Dean(string name, char s,
		 string role, string nationalID,
		 vector<Course> courses);

	void setDepartment(Department &department);
	void setPetition(Petition  &petition);
	void setCourse(Course &course);
	void addCourse(Course);
	void displayCourses( Course&course );
	void deleteCourse(Course);
	void showDepartment(Department &department);
	void showPetition(Petition &petition);

	string call_getName();
	Department *getDepartment();
	Petition *getPetition();
	Course *getCourse();
};
