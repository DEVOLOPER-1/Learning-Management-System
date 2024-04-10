#pragma once
#include <iostream>
#include <vector>
#include "Classroom.h"
#include "Assignment.h"
#include "Course.h"
#include "Dashboard.h"
/*
- year: int
- registered: vector<Classroom>
- request_course : string
- assigns: vector<Assignment>
+ openDashboard(das:Dashboard)
- openClassroom(classroom: Classrom)
+ registerCourse(course: Course)
*/

class Student
{
private:
	int year;
	vector<Classroom> RegisteredCourese;
	string request_course; //need to be clarified more
	vector<Assignment> assignments;
	Classroom openClassroom(Classroom);
public:
	void openDashboard(Dashboard);
	void registerCourse(Course);
};

