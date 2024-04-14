#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "List.h"
using namespace std;

class Meeting : public List
{
private:
	Student Teammate;
	vector<Student> Team;

public:
	void addTeammate(Student s);
	void deleteTeammate(Student s);
	void createTeam();
};

