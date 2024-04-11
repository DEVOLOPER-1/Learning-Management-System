#pragma once
#include <iostream>
#include <vector>
#include "Classroom.h"
#include "Petiton.h"
#include "Schedule.h"
#include "Meeting.h"
#include "List.h"
using namespace std;

class Dashboard
{
private:
	vector<Petiton> Petitons;
	vector<Classroom> Classrooms;
	Schedule StudentSchedule;
	vector<Meeting> Meetings;
	vector<List> TodoList;

public:
	void addPetition(Petiton);
	void addClassroom(Classroom);
	void addMeeting(Meeting);
	void addTodoList(List);
	void setSchedule(Schedule);
	void display();
	Schedule getSchedule();
};

