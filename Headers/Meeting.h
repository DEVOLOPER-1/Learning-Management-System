#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "Task.h"
using namespace std;

class Meeting : public Task
{
private:
	Student Teammate;
	vector<Student> Team;
	vector<string> TeamName;

public:
	void addTeammate(Student);
	void deleteTeammate(Student);
	void createTeam();
};

