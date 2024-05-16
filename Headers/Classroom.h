#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include "Student.h"
#include "Instructor.h"
#include "Announcement.h"
#include "Assignment.h"

class Classroom
{
private:
	string course_ID;
	vector<string> materials;
	vector<Student*> students;
	vector<Instructor*> instructors;
	vector<Announcement*> announcements;
	vector<Assignment*> assignments;

public:
	void setID(string);
	void setMaterials(vector<string>);
	void setStudents(vector<Student*>);
	void addAssignment(Assignment*);
	void addAnnouncement(Announcement*);
	string getCourseID();
	vector<string> getMaterials();
	vector<Student*> getStudents();
	vector<Assignment*> getAssignments();
	void display();

};

