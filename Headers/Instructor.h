#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
#include "Course.h"
#include "Classroom.h"
#include "Comment.h"

class Instructor : public Member
{
private:
	vector <Classroom> Courses;

public:
	void setCourses(vector <Course>);
	vector <Course> getCourses();
	void assign(Classroom);
	void grade(Classroom);
	void material(Classroom);  //please clarify more what this method do. Is it get material, update it or remove it
	Comment comment(Classroom);
};

