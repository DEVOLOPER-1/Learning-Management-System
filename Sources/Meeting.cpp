#include <iostream>
#include <vector>
#include<string>
#include "Student.h"
#include "Meeting.h"
#include "member.h"
using namespace std;

void Meeting::createTeam() {
    cout << "Team created";
}

void Meeting::addTeammate(Student s) {
	Team.push_back(s.getName());
}
void Meeting::deleteTeammate(Student s) {
    for (auto i = Team.begin(); i != Team.end(); i++) {
        if (i == s.getName()) { 
            Team.erase(i);
            break;
        }
}
