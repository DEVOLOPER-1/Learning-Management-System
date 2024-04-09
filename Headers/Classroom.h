#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Instructor.h"
#include "Announcement.h"
#include "Assignment.h"

class Classroom
{
	string course_ID;
	vector<string> materials;
	vector<Student> students;
	vector<Instructor> instructors;
	vector<Announcement> announcements;
	vector<Assignment> assignments;
	void setID(string);
	void setMaterial(string);
	void setStudent();
	void addAssignment(Assignment);
	void addAnnouncement(Announcement);
	string getCourse();
	vector<string> getMaterial();
	vector<Student> getStudents();
	vector<Assignment> getAssignments();
	void display();

};

