#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "List.h"
using namespace std;

class Meeting : public List
{
private:
	//Student Teammate;
	//vector<Student> Team;
	//vector<string> TeamName;
	unsigned int No_Of_Team_Members;
public:
//Constructors________________________________________________________
	Meeting();
//Setters____________________________________________________________
	//void addTeammate(Student);
	//void deleteTeammate(Student);
	void createTeam(unsigned int members);

//Getters____________________________________________________________
unsigned int getNo_Of_Team_Members(); 	
};

