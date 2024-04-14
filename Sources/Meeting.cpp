#include <iostream>
#include <vector>
#include<string>
#include "Student.h"
#include "Meeting.h"
using namespace std;

void Meeting::addTeammate(Student s) {
	Team.push_back(s);
}
void Meeting::deleteTeammate(Student s) {
	Team.pop_back(s);
}
void Meeting::createTeam(int members) {
	
	
}