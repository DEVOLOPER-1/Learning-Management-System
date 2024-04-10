#pragma once
#include <iostream>
#include <vector>
#include "Classroom.h"
#include "Petiton.h"
#include "Schedule.h"
using namespace std;

/*
- Petitions: vector <Petition>
- Classroms: vector <Classrom>
- Studentshedule: Shedule
- Meetings: vector <Meeting>
- TodoList: vector <List>
+addPetition(petition: Petition)
+addClassroom(classroom:Classroom)
+addMeeting(meeting_Meeting)
+addTodoList(todo_list: List)
+setSchedule(sch: Schedule):
+getSchedule():Schedule
+display()
*/

class Dashboard
{
private:
	vector<Petiton> Petitons;
	vector<Classroom> Classrooms;
	Schedule StudentSchedule;
	vector<Meeting> Meetings;

};

