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
	vector<string> TeamName;

public:
	void addTeammate(Student);
	void deleteTeammate(Student);
	void createTeam(int members);
};

