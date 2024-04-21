#pragma once
#include <iostream>
#include <vector>
#include "Classroom.h"
#include "Assignment.h"
#include "Course.h"
#include "Dashboard.h"
#include "Task.h"
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

	vector<Task> ToDoList;
public:
	void addTask(Task task);
	void removeTask(int index);
	void displayToDolist();
	void chooseTask(int index);
};

