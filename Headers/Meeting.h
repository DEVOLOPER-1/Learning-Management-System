#pragma once
#include <iostream>
#include "Student.h"
#include "List.h"
using namespace std;

class Meeting : public List
{
private:
	Student Teammate;
	vector<Student> Team;

public:
	void addTeammate(Student);
	void deleteTeammate(Student);
	void createTeam();
};

